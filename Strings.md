# Especificación de operaciones sobre Strings


IsEmpty: Σ* → {0, 1}

IsEmpty(s) =
    1   si s = ε
    0   si s ≠ ε


GetLength: Σ* → ℕ

GetLength(s) =
    0                  si s = ε
    1 + GetLength(t)   si s = h · t, donde h ∈ Σ y t ∈ Σ*
