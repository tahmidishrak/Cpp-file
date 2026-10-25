# Number Pyramid Pattern (Palindromic)

Target Output (for n = 4):
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

---

## Execution Order & Role of Each Loop

### 1. Outer Loop (Row Controller)
- **Code:** `for (int i = 0; i < n; i++)`
- **Role:** Controls total rows/lines from line 0 to line n-1.
- **Action:** Runs all inner loops sequentially for each row, then triggers `cout << endl;`.

### 2. Inner Loop 1: Spaces (Left Indentation)
- **Code:** `for (int j = 0; j < n - i - 1; j++)`
- **Role:** Pushes numbers to the right to create the centered pyramid slope.
- **Logic:** Decreases space count on every row (`n - i - 1` times).
  - Row 0 -> 3 spaces
  - Row 1 -> 2 spaces
  - Row 2 -> 1 space
  - Row 3 -> 0 spaces

### 3. Inner Loop 2: Ascending Numbers (Left Half + Peak)
- **Code:** `for (int j = 1; j <= i + 1; j++)`
- **Role:** Counts up from `1` to the current row's peak value.
- **Logic:** Standard 1-to-N progression where limit expands with row count (`j <= i + 1`).
  - Row 0 -> `1`
  - Row 1 -> `1 2`
  - Row 2 -> `1 2 3`
  - Row 3 -> `1 2 3 4`

### 4. Inner Loop 3: Descending Numbers (Right Half Mirror)
- **Code:** `for (int j = i; j >= 1; j--)`
- **Role:** Mirrors the pattern backwards down to `1` (excluding the peak).
- **Logic:** Starts from `i` (one less than the peak) and decrements (`j--`) down to `1`.
  - Row 0 -> Does not run (`j = 0`, condition `0 >= 1` is false)
  - Row 1 -> `1`
  - Row 2 -> `2 1`
  - Row 3 -> `3 2 1`

---

## Golden Recipe
Outer Row Loop -> [ Spaces Loop ] -> [ Count-Up Loop ] -> [ Count-Down Loop ] -> Line Break (`endl`)