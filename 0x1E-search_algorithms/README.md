# 0x1E. C - Search Algorithms

## Description
This project involves implementing various search algorithms in C. The primary goal is to gain a deep understanding of different search techniques, their efficiencies, and their applications. The project includes both mandatory and advanced tasks, which involve writing CC functions for different search algorithms and analyzing their time and space complexities.

## Project Details


## Resources
- [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
- [Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)
- [Search Algorithms video playlist](https://www.youtube.com/playlist?list=PL9xmBV_5YoZNqDI8qfOZgzbqahCUmUEin)

## Tasks

### Mandatory Tasks
1. **Binary search**
   - **File:** `1-binary.c`
   - **Prototype:** `int binary_search(int *array, size_t size, int value);`
   - **Description:** Searches for a value in a sorted array of integers using the Binary search algorithm.
   - **Example Output:**
     ```
     Found 2 at index: 2
     Found 5 at index: -1
     Found 999 at index: -1
     ```

2. **Big O #0**
   - **File:** `2-O`
   - **Description:** What is the time complexity (worst case) of a linear search in an array of size n?

3. **Big O #1**
   - **File:** `3-O`
   - **Description:** What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

4. **Big O #2**
   - **File:** `4-O`
   - **Description:** What is the time complexity (worst case) of a binary search in an array of size n?

5. **Big O #3**
   - **File:** `5-O`
   - **Description:** What is the space complexity (worst case) of a binary search in an array of size n?

6. **Big O #4**
   - **File:** `6-O`
   - **Description:** What is the space complexity of this function / algorithm?

   ```c
   int **allocate_map(int n, int m) {
       int **map;
       map = malloc(sizeof(int *) * n);
       for (size_t i = 0; i < n; i++) {
           map[i] = malloc(sizeof(int) * m);
       }
       return (map);
   }
