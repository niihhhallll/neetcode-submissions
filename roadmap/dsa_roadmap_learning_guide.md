# Integrated Data Structures & Algorithms (DSA) Roadmap

A structured, pattern-based approach designed to take you from foundational logic to mastering LeetCode-style problem solving efficiently.

---

## Roadmap Overview & Target Timeline

| Phase | Core Topics Covered | Target Duration | Problem Target |
| :--- | :--- | :--- | :--- |
| **Phase 1** | Arrays, Strings, Bit Manipulation, Linked Lists, Stacks, Queues | Weeks 1 – 4 | ~60 Problems |
| **Phase 2** | Binary Search, Recursion, Trees, BSTs, Heaps & Priority Queues | Weeks 5 – 8 | ~70 Problems |
| **Phase 3** | Graphs, Disjoint Sets (DSU), Backtracking, Dynamic Programming | Weeks 9 – 12 | ~70 Problems |
| **Phase 4** | Advanced Topics, High-Volume Practice, Timed Assessments | Weeks 13 – 20 | ~100–300 Problems |

---

## Phase 1: Foundations & Linear Structures
*Goal: Build high speed with contiguous memory, multi-pointer algorithms, and linear control flow.*

### 1. Arrays & Dynamic Arrays
*   **Data Structure:** Contiguous Memory Allocation, Static vs. Dynamic Arrays (`std::vector`, `ArrayList`).
*   **Algorithms & Concepts:** Linear Search, In-place Swapping, Subarrays vs. Subsequences.
*   **Key Patterns:**
    *   **Two Pointers:** Opposite ends meeting in middle; slow/fast pointer movement.
    *   **Sliding Window:** Fixed window size; dynamic expanding/contracting window.
*   **Core Problems to Master:**
    *   Two Sum
    *   Container With Most Water
    *   Best Time to Buy and Sell Stock
    *   3Sum
    *   Minimum Size Subarray Sum

### 2. Strings & Bit Manipulation
*   **Data Structure:** String Mutability/Immutability, ASCII/UTF-8 Encodings.
*   **Algorithms & Concepts:** Bitwise `AND`, `OR`, `XOR`, `NOT`, Left/Right Shifts, Bit Masking.
*   **Key Patterns:** Frequency Maps (Array as Hash Table), Bitwise State Representation.
*   **Core Problems to Master:**
    *   Valid Anagram
    *   Valid Palindrome
    *   Longest Substring Without Repeating Characters
    *   Single Number
    *   Counting Bits

### 3. Linked Lists
*   **Data Structure:** Node Allocation, Singly Linked List, Doubly Linked List.
*   **Algorithms & Concepts:** Pointer re-linking, Sentinel/Dummy Nodes.
*   **Key Patterns:** Fast & Slow Pointers (Floyd's Tortoise and Hare Cycle Detection).
*   **Core Problems to Master:**
    *   Reverse Linked List
    *   Merge Two Sorted Lists
    *   Linked List Cycle
    *   Remove Nth Node From End of List
    *   LRU Cache (Combines Doubly Linked List + Hash Map)

### 4. Stacks & Queues
*   **Data Structure:** LIFO (Stack) vs. FIFO (Queue), Deque, Circular Queue.
*   **Algorithms & Concepts:** Call Stack Emulation, Expression Evaluation.
*   **Key Patterns:** Monotonic Stack / Monotonic Queue.
*   **Core Problems to Master:**
    *   Valid Parentheses
    *   Min Stack
    *   Daily Temperatures
    *   Evaluate Reverse Polish Notation
    *   Sliding Window Maximum

---

## Phase 2: Searching, Recursion & Non-Linear Structures
*Goal: Master non-sequential control flow, logarithmic time complexity, and tree traversals.*

### 1. Binary Search & Divide and Conquer
*   **Data Structure:** Sorted Arrays, Binary Search Trees.
*   **Algorithms & Concepts:** Search Space Reduction ($O(\log N)$ time complexity).
*   **Key Patterns:**
    *   Standard Binary Search
    *   Binary Search on Answer Space (Minimizing/Maximizing feasibility functions)
*   **Core Problems to Master:**
    *   Binary Search
    *   Search a 2D Matrix
    *   Find Minimum in Rotated Sorted Array
    *   Search in Rotated Sorted Array
    *   Koko Eating Bananas

### 2. Binary Trees & Binary Search Trees (BST)
*   **Data Structure:** Tree Nodes, Binary Trees, BST Property ($Left < Root < Right$).
*   **Algorithms & Concepts:** 
    *   Depth-First Search (DFS): Pre-Order, In-Order, Post-Order
    *   Breadth-First Search (BFS): Level-Order Traversal
*   **Key Patterns:** Tree Recursion, Lowest Common Ancestor, Path Accumulation.
*   **Core Problems to Master:**
    *   Invert Binary Tree
    *   Maximum Depth of Binary Tree
    *   Diameter of Binary Tree
    *   Binary Tree Level Order Traversal
    *   Validate Binary Search Tree
    *   Lowest Common Ancestor of a Binary Search Tree

### 3. Heaps & Priority Queues
*   **Data Structure:** Binary Heap (Min-Heap, Max-Heap), Array-based Tree Representation.
*   **Algorithms & Concepts:** `heapify` ($O(N)$), `push` ($O(\log N)$), `pop` ($O(\log N)$).
*   **Key Patterns:** Top-K Elements, Two Heaps Pattern (Finding Running Median).
*   **Core Problems to Master:**
    *   Kth Largest Element in an Array
    *   Top K Frequent Elements
    *   Find Median from Data Stream
    *   Merge K Sorted Lists

---

## Phase 3: Graphs, Backtracking & Dynamic Programming
*Goal: Solve complex relational problems, global state optimizations, and exhaustive search problems.*

### 1. Backtracking & Combinatorics
*   **Data Structure:** State-Space Tree.
*   **Algorithms & Concepts:** Exhaustive Search, Recursion with State Pruning.
*   **Key Patterns:** Subsets, Permutations, Grid Backtracking.
*   **Core Problems to Master:**
    *   Subsets
    *   Permutations
    *   Combination Sum
    *   Word Search
    *   N-Queens

### 2. Graph Data Structures & Algorithms
*   **Data Structure:** Adjacency List, Adjacency Matrix, Disjoint Set Union (DSU).
*   **Algorithms & Concepts:**
    *   BFS (Shortest path in unweighted graphs)
    *   DFS (Cycle detection, component count)
    *   Topological Sort (Kahn's Algorithm)
    *   Dijkstra's Algorithm (Weighted shortest path)
    *   Union-Find with Path Compression and Rank
*   **Core Problems to Master:**
    *   Number of Islands
    *   Clone Graph
    *   Course Schedule (Topological Sort)
    *   Redundant Connection (DSU)
    *   Network Delay Time (Dijkstra)

### 3. Dynamic Programming (DP)
*   **Data Structure:** Memoization Table (1D, 2D Arrays).
*   **Algorithms & Concepts:** Overlapping Subproblems, Optimal Substructure, Top-Down vs. Bottom-Up.
*   **Key Patterns:**
    *   **1D DP:** Sequence choices (e.g., jump/climb)
    *   **2D / Grid DP:** Matrix traversals, string alignments
    *   **0/1 Knapsack & Unbounded Knapsack:** Subset selection with limits
*   **Core Problems to Master:**
    *   Climbing Stairs
    *   House Robber
    *   Coin Change
    *   Longest Increasing Subsequence
    *   Longest Common Subsequence
    *   0/1 Knapsack / Partition Equal Subset Sum

---

## Strategy for Problem Execution

When solving any DSA problem, execute the following steps:

1. **20-Minute Constraint:** Spend no more than 20 minutes attempting to design an approach on paper. If stuck, review the high-level pattern/solution concept, then implement the code independently.
2. **State Time & Space Complexity:** Always define target complexities before writing code:
   * Array traversals: $O(N)$
   * Binary Search / Balanced Trees: $O(\log N)$ or $O(N \log N)$
   * Nested Grid / Pairwise: $O(N^2)$
   * Combinatorics / Backtracking: $O(2^N)$ or $O(N!)$
3. **Categorize Every Problem:** Maintain a log or spreadsheet listing:
   * Problem Name
   * Data Structure Used
   * Core Pattern Applied (e.g., Monotonic Stack, Sliding Window)
   * Revisit Date