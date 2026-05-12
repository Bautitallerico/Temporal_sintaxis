# Especificación Matemática de la Biblioteca String

**Notación Base**
* $\Sigma$: Alfabeto de caracteres válidos (conjunto finito no vacío de símbolos).
* $\Sigma^*$: Lenguaje universal que contiene todas las cadenas finitas posibles.
* $\epsilon$: Cadena vacía (longitud 0).
* $|s|$: Longitud de la cadena $s$.
* $s_i$: Carácter en la posición $i$ de la cadena $s$, tal que $1 \le i \le |s|$.
* $\mathbb{B}$: Conjunto booleano $\{true, false\}$.
* $\mathbb{N}_0$: Conjunto de los números naturales incluyendo el cero.
* $\mathbb{Z}$: Conjunto de los números enteros.

---

### 1. Operación IsEmpty
Evalúa si una cadena carece de caracteres.

* **Dominio:** $IsEmpty: \Sigma^* \to \mathbb{B}$
* **Especificación:**

$$IsEmpty(s) = \begin{cases} 
  true & \text{si } s = \epsilon \\
  false & \text{en caso contrario} 
\end{cases}
$$


---

### 2. Operación GetLength
Retorna la cantidad de caracteres que componen la cadena.

* **Dominio:** $GetLength: \Sigma^* \to \mathbb{N}_0$
* **Especificación:**

$$GetLength(s) = |s|$$

---

### 3. Operación AreEqual
Determina si dos cadenas son exactamente idénticas en longitud y contenido.

* **Dominio:** $AreEqual: \Sigma^* \times \Sigma^* \to \mathbb{B}$
* **Especificación:**

$$
AreEqual(s_1, s_2) = \begin{cases} 
  true & \text{si } |s_1| = |s_2| \land \forall i \in [1, |s_1|], (s_1)_i = (s_2)_i \\ 
  false & \text{en caso contrario} 
\end{cases}
$$

---

### 4. Operación AreDecimalDigits
Sea $D = \{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'\}$ el subconjunto de caracteres numéricos, donde $D \subset \Sigma$. Evalúa si todos los caracteres de una cadena no vacía pertenecen a dicho subconjunto.

* **Dominio:** $AreDecimalDigits: \Sigma^* \to \mathbb{B}$
* **Especificación:**

$$AreDecimalDigits(s) = \begin{cases} 
  true & \text{si } s \neq \epsilon \land \forall i \in [1, |s|], s_i \in D \\ 
  false & \text{en caso contrario} 
\end{cases}
$$

---

### 5. Operación Contains
Verifica la existencia de al menos una ocurrencia de un carácter dado dentro de una cadena.

* **Dominio:** $Contains: \Sigma^* \times \Sigma \to \mathbb{B}$
* **Especificación:**

$$Contains(s, c) = \begin{cases} 
  true & \text{si } \exists i \in [1, |s|] : s_i = c \\ 
  false & \text{en caso contrario} 
\end{cases}
$$

---

### 6. Operación ToInteger
Sea $V \subset \Sigma^*$ el conjunto de cadenas que representan números enteros.
Definimos $val(c)$ como el valor numérico del carácter $c$ (ej: $val('7') = 7$).

* **Dominio:** $ToInteger: V \to \mathbb{Z}$
* **Especificación:**

Si la cadena tiene un signo negativo ($s_1 = '-'$):
$$ToInteger(s) = -1 \cdot ToInteger(s_{sinSigno})$$

#### Ejemplo para 123:
 - iteracion 1 (lee '1'): 0*10+1=1
 - iteracion 2 (lee '2'): 1*10+2=12
 - iteracion 3 (lee '3'): 12*10+3=123

Esto funciona porque en ASCII el caracter '0' = 48 y (por ejemplo) el '3' = 51
$\Rightarrow$ ('3'-'0') == (51-48 = 3)

Por eso: resultado = resultado * 10 + (*p - '0')

---

### 7. Operación ContarUnaLetra
Cuenta la cantidad total de veces que un carácter específico aparece dentro de una cadena.

* **Dominio:** $ContarUnaLetra: \Sigma^* \times \Sigma \to \mathbb{N}_0$
* **Especificación:**

$$f(s_i, c) = \begin{cases} 
  1 & \text{si } s_i = c \\
  0 & \text{en caso contrario} 
  \end{cases}
$$

Entonces, el total se define como la suma de los aciertos en todas las posiciones de la cadena:

$$ContarUnaLetra(s, c) = \sum_{i=1}^{|s|} f(s_i, c)$$
