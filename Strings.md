# Especificación de operaciones sobre Strings


IsEmpty: Σ* → {0, 1}

IsEmpty(s) =
    1   si s = ε
    0   si s ≠ ε


GetLength: Σ* → ℕ

GetLength(s) =
    0                  si s = ε
    1 + GetLength(t)   si s = h · t, donde h ∈ Σ y t ∈ Σ*

AreEqual: Σ* × Σ* → {0, 1}

AreEqual(s1, s2) =
    1                                        si s1 = ε ∧ s2 = ε
    0                                        si s1 = ε ∧ s2 ≠ ε
    0                                        si s1 ≠ ε ∧ s2 = ε
    AreEqual(t1, t2)                         si s1 = h1 · t1 ∧ s2 = h2 · t2 ∧ h1 = h2
    0                                        si s1 = h1 · t1 ∧ s2 = h2 · t2 ∧ h1 ≠ h2
