
# Push Swap

## Description

`push_swap` is a sorting algorithm implementation designed for the 42 School project. The goal is to sort a list of integers using two stacks (`A` and `B`) with a limited set of operations while striving for the most efficient solution.

## Features

- Efficient sorting using a **positional sorting algorithm**.
- Handles positive and negative integers.
- Prevents duplicates and numbers outside `INT_MIN` and `INT_MAX`.
- Implements optimized move sequences for sorting.
- Grading depends on efficiency:
  - **100 numbers** → 5 points for < 700 moves.
  - **500 numbers** → 5 points for < 5500 moves.

## Rules & Operations

- Two stacks:
  - **Stack A**: Initially contains all input numbers.
  - **Stack B**: Used as a temporary stack for sorting.

### Allowed Operations:
- **Push**:
  - `pa` (push A) → Moves top of B to A.
  - `pb` (push B) → Moves top of A to B.
- **Swap**:
  - `sa` (swap A) → Swaps the first two elements in A.
  - `sb` (swap B) → Swaps the first two elements in B.
  - `ss` → Swaps both A and B.
- **Rotate**:
  - `ra` (rotate A) → Shifts all elements in A up.
  - `rb` (rotate B) → Shifts all elements in B up.
  - `rr` → Rotates both A and B.
- **Reverse Rotate**:
  - `rra` (reverse rotate A) → Shifts all elements in A down.
  - `rrb` (reverse rotate B) → Shifts all elements in B down.
  - `rrr` → Reverse rotates both A and B.

## Algorithm

1. **Check for errors** (duplicates, non-integer values).
2. **Handle small cases**:
   - 2 numbers → `sa`
   - 3 numbers → Apply a specific sorting sequence.
3. **Push all but three elements to Stack B**.
4. **Sort the 3 remaining elements in Stack A**.
5. **Find optimal positions for each element in B** and calculate the cheapest move.
6. **Move elements from B back to A** efficiently.
7. **Final rotation to align Stack A**.

## Compilation & Usage

```sh
make
./push_swap <list of numbers>
```

Example:

```sh
./push_swap 5 3 2 8 7
```

To test against the checker:

```sh
ARG="5 3 2 8 7"; ./push_swap $ARG | ./checker_linux $ARG
```

## Testing

- Run **basic tests**:
  ```sh
make test3   # Tests 3 numbers
make test5   # Tests 5 numbers
make test100 # Tests 100 numbers
make test500 # Tests 500 numbers
  ```
- Use `shuf` for random testing:
  ```sh
ARG=$(shuf -i 0-1000 -n 500); ./push_swap $ARG | ./checker_linux $ARG
  ```
- **Visualizers**:
  - [`o-reo's visualizer`](https://github.com/o-reo/push_swap_visualizer)

## References

- [Push Swap PDF Guide](https://web.archive.org/web/20220802162832/https://www.codequoi.com/wp-content/uploads/2022/06/push_swap.en_.subject.pdf)
- [42 School Resources](https://web.archive.org/web/20220802162832/https://www.codequoi.com/en/category/42-school-projects/)


-----------------------------------
by ana ;
test by zaissi (ziyos);
