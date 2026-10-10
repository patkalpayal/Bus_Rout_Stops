# Bus Route Stops Using Doubly Linked List

A menu-driven C++ application for managing bus route stops using a Doubly Linked List.

## Project Information

- **Subject:** Data Structures and Algorithms (DSA)
- **Unit:** Unit 3 — Linked List
- **Project Title:** Bus Route Stops Using Doubly Linked List
- **Language:** C++
- **Data Structure:** Doubly Linked List
- **Student:** Aditya Barate

## 1. Problem Statement

Develop a C++ program to manage bus route stops using a Doubly Linked List. Each node stores the name of a bus stop and pointers to the previous and next stops.

The program should support the following operations:

1. Add a new bus stop to the route.
2. Remove an existing bus stop.
3. Display the route from the first stop to the last stop (**forward traversal**).
4. Display the return journey from the last stop to the first stop (**backward traversal**).
5. Given the current stop, display its previous and next stops.

## 2. Objectives

- Understand the concept of a Doubly Linked List.
- Perform insertion and deletion of nodes.
- Traverse a linked list in forward and backward directions.
- Find the previous and next nodes of a given bus stop.
- Apply data structures to a real-life bus route management system.

## 3. Theory and Explanation

A **Doubly Linked List** is a linear data structure in which each node contains three parts:

- `prev`: Stores the address of the previous node.
- `data`: Stores the bus stop name.
- `next`: Stores the address of the next node.

Each node is connected to both its previous and next nodes, allowing traversal in both directions.

In this program:
- `head` points to the first stop.
- `tail` points to the last stop.
- The `next` pointer is used for forward traversal.
- The `prev` pointer is used for backward traversal.

### Example Route

```text
Nashik <-> Sinnar <-> Shirdi
```

- **Forward:** Nashik → Sinnar → Shirdi
- **Backward:** Shirdi → Sinnar → Nashik

## 4. Features

- Add a bus stop at the end of the route.
- Remove a stop by its name.
- Display the complete route in forward order.
- Display the return journey in reverse order.
- Find the previous and next stops for a given stop.

## 5. Algorithm

1. Start the program.
2. Initialize an empty Doubly Linked List.
3. Display the menu of available operations.
4. Accept the user's choice.
5. Perform the selected operation:
   - **Add stop:** Create a node and insert it at the end.
   - **Remove stop:** Search for the stop and unlink its node.
   - **Forward route:** Traverse from `head` to `tail`.
   - **Return journey:** Traverse from `tail` to `head`.
   - **Find adjacent stops:** Search for the requested stop and display its previous and next stops.
6. Repeat the menu until the user selects Exit.
7. Stop the program.

## 6. Technologies Used

- C++
- Pointers and structures
- Dynamic memory allocation
- Doubly Linked List

## 7. How to Compile and Run

### Using g++

From the repository's root directory, compile the source file:

```bash
g++ Source_Code/linkedlist.cpp -o busroute
```

On Windows, run:

```text
busroute.exe
```

On Linux or macOS, run:

```bash
./busroute
```

Alternatively, open `Source_Code/linkedlist.cpp` in Dev-C++, compile it, and run the program.

## 8. Example Output

For a route containing Nashik, Sinnar, and Shirdi:

```text
Forward Route: Nashik -> Sinnar -> Shirdi
Return Journey: Shirdi -> Sinnar -> Nashik
```

For the current stop `Sinnar`:

```text
Previous Stop: Nashik
Next Stop: Shirdi
```

These are example outputs; verify the exact messages against the program's actual output.


## 11. Conclusion

This project demonstrates how a Doubly Linked List can be used to manage bus route stops. It supports insertion, deletion, forward and backward traversal, and finding adjacent stops. The project provides practical experience with pointers, dynamic memory allocation, and linked-list operations.

## Author

**Patkal Payal**
