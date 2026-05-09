# Especificación Matemática de la Biblioteca String

**Notación Base**
* $\Sigma$: Alfabeto de caracteres válidos (conjunto finito no vacío de símbolos).
* $\Sigma^*$: Clausura de Kleene sobre $\Sigma$ (lenguaje universal que contiene todas las cadenas finitas posibles).
* $\epsilon$: Cadena vacía (longitud 0).
* $|s|$: Longitud de la cadena $s$.
* $s_i$: Carácter en la posición $i$ de la cadena $s$, tal que $1 \le i \le |s|$.
* $\mathbb{B}$: Conjunto booleano $\{true, false\}$.
* $\mathbb{N}_0$: Conjunto de los números naturales incluyendo el cero.
* $\mathbb{Z}$: Conjunto de los números enteros.

---

### 1. Operación IsEmpty
Evalúa si una cadena carece de caracteres.

* **Firma:** $IsEmpty: \Sigma^* \to \mathbb{B}$
* **Especificación:**
$$IsEmpty(s) = \begin{cases} true & \text{si } s = \epsilon \\ false & \text{en caso contrario} \end{cases}$$

---

### 2. Operación GetLength
Retorna la cantidad de caracteres que componen la cadena.

* **Firma:** $GetLength: \Sigma^* \to \mathbb{N}_0$
* **Especificación:**
$$GetLength(s) = |s|$$

---

### 3. Operación AreEqual
Determina si dos cadenas son exactamente idénticas en longitud y contenido.

* **Firma:** $AreEqual: \Sigma^* \times \Sigma^* \to \mathbb{B}$
* **Especificación:**
$$AreEqual(s_1, s_2) = \begin{cases} true & \text{si } |s_1| = |s_2| \land \forall i \in [1, |s_1|], (s_1)_i = (s_2)_i \\ false & \text{en caso contrario} \end{cases}$$

---

### 4. Operación AreDecimalDigits
Sea $D = \{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'\}$ el subconjunto de caracteres numéricos, donde $D \subset \Sigma$. Evalúa si todos los caracteres de una cadena no vacía pertenecen a dicho subconjunto.

* **Firma:** $AreDecimalDigits: \Sigma^* \to \mathbb{B}$
* **Especificación:**
$$AreDecimalDigits(s) = \begin{cases} true & \text{si } s \neq \epsilon \land \forall i \in [1, |s|], s_i \in D \\ false & \text{en caso contrario} \end{cases}$$

---

### 5. Operación Contains
Verifica la existencia de al menos una ocurrencia de un carácter dado dentro de una cadena.

* **Firma:** $Contains: \Sigma^* \times \Sigma \to \mathbb{B}$
* **Especificación:**
$$Contains(s, c) = \begin{cases} true & \text{si } \exists i \in [1, |s|] : s_i = c \\ false & \text{en caso contrario} \end{cases}$$

---

### 6. Operación ToInteger
Sea $V \subset \Sigma^*$ el conjunto de cadenas formadas estrictamente por una secuencia finita de caracteres en $D$, opcionalmente precedida por el carácter $'-'$. La función asume que la entrada es correcta (función total sobre $V$, pero parcial sobre $\Sigma^*$).

* **Firma:** $ToInteger: V \to \mathbb{Z}$
* **Especificación:**
Sea $s'$ la subsecuencia de dígitos estrictos dentro de $s$. Si $s_1 = '-'$, el número es negativo; en caso contrario, es positivo.

Si $s_1 = '-':$
$$ToInteger(s) = -1 \cdot \sum_{j=1}^{|s'|} (\text{ASCII}(s'_j) - 48) \cdot 10^{|s'|-j}$$

Si $s_1 \neq '-':$
$$ToInteger(s) = \sum_{j=1}^{|s'|} (\text{ASCII}(s'_j) - 48) \cdot 10^{|s'|-j}$$
