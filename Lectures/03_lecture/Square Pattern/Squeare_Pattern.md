# C++ Square Pattern Guide

Square patterns are the foundation of nested loop problem-solving in C++. In these patterns, the number of lines (rows) and the number of elements printed per line (columns) are equal ($n \times n$).

---

## 1. Core Concept & Mental Model

Every 2D grid/pattern problem in C++ relies on two nested loops:

$$\text{Outer Loop (Rows)} \times \text{Inner Loop (Columns)}$$

1. **Outer Loop (`i`):** Controls the **rows** (vertical flow, moving line by line down). Runs from $1$ to $n$.
2. **Inner Loop (`j`):** Controls the **columns** (horizontal flow, printing characters across). Runs from $1$ to $n$.
3. **Line Break (`cout << "\n";`):** Executed after the inner loop finishes, moving the cursor to the next row.

```
       j = 1   j = 2   j = 3   j = 4
i = 1    *       *       *       *
i = 2    *       *       *       *
i = 3    *       *       *       *
i = 4    *       *       *       *
```

---

## 2. Standard Pattern Variations

### Pattern A: Solid Star Square ($n \times n$)

#### Target Output ($n = 4$):
```text
* * * * 
* * * * 
* * * * 
* * * * 
```

#### Logic:
* Print `* ` repeatedly inside the column loop without changing based on row/column indices.

#### Code:
```cpp
#include <iostream>

using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {         // Row iterator
        for (int j = 1; j <= n; j++) {     // Column iterator
            cout << "* ";
        }
        cout << "\n";                      // Next row
    }

    return 0;
}
```

---

### Pattern B: Column Number Square

#### Target Output ($n = 4$):
```text
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 
```

#### Logic:
* The printed value depends on the column index (`j`), repeating $1$ to $n$ across each line.

#### Code:
```cpp
#include <iostream>

using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";              // Print current column index
        }
        cout << "\n";
    }

    return 0;
}
```

---

### Pattern C: Row Number Square

#### Target Output ($n = 4$):
```text
1 1 1 1 
2 2 2 2 
3 3 3 3 
4 4 4 4 
```

#### Logic:
* The printed value depends on the row index (`i`), remaining constant across the same line.

#### Code:
```cpp
#include <iostream>

using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i << " ";              // Print current row index
        }
        cout << "\n";
    }

    return 0;
}
```

---

### Pattern D: Continuous Number Square (Counter Based)

#### Target Output ($n = 3$):
```text
1 2 3 
4 5 6 
7 8 9 
```

#### Logic:
* Keep a global counter variable outside the loops and increment it after each print.

#### Code:
```cpp
#include <iostream>

using namespace std;

int main() {
    int n = 3;
    int num = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << num << " ";
            num++;                         // Increment continuous counter
        }
        cout << "\n";
    }

    return 0;
}
```

---

### Pattern E: Character Square (`A, B, C...`)

#### Target Output ($n = 4$):
```text
A B C D 
A B C D 
A B C D 
A B C D 
```

#### Logic:
* Using ASCII type conversion: `'A' + j - 1` maps numbers $1, 2, 3, 4$ to character equivalents `A, B, C, D`.

#### Code:
```cpp
#include <iostream>

using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char ch = 'A' + j - 1;         // Map index to uppercase ASCII
            cout << ch << " ";
        }
        cout << "\n";
    }

    return 0;
}
```

---

## 3. Complexity Summary

| Metric | Complexity | Explanation |
| :--- | :--- | :--- |
| **Time Complexity** | $O(n^2)$ | Outer loop executes $n$ times; inner loop executes $n$ times per row ($n \times n$). |
| **Space Complexity** | $O(1)$ | No heap or dynamic structures used, only primitive loop counter variables. |