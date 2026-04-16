# <h1 align="center">online-bookstore</h1>

---

## **👥Team Members**
* Manvitha Rai.R
* Parimala.N

---

## **❓ Problem Statement**

*Managing books and categories in an online bookstore can become complex when data grows.
The goal of this project is to design a Category Tree-based CRUD system in C that allows efficient organization and management of books and categories.*

---

## **🧠 Data Structure Used**

* Tree (General Tree using Child-Sibling Representation)
* Each node contains:
   * ID
   * Name
   * Type (Category / Book)
   * Child pointer
   * Sibling pointer

---

## **⚙️ Algorithm Explanation**

### ***1. Create (Add Node)***
* Take input (ID, Name, Type, Parent ID)
* Search parent node
* Insert as child using sibling traversal

### ***2. Read (Display)***
* Use DFS Traversal
* Print hierarchy with indentation

### ***3.Update***
* Search node by ID
* Modify node name

### ***4. Delete***
* Locate node
* Remove from tree
* Free memory using free()
### ***5. Search***
Recursive traversal (DFS)
Match ID and return node

---

## **💻 Compilation Instructions**

### Using GCC Compiler
```bash
gcc bookstore.c -o bookstore
./bookstore
```
### Requirements
* GCC Compiler
* Any C IDE (CodeBlocks / VS Code / Turbo C)

---

## **📋 Sample Output**

**1.Main Menu**




## **🚀 Features**
* Tree-based hierarchy
* Dynamic memory allocation
* Modular programming
* Full CRUD operations
* Menu-driven interface

---

## **📌 Conclusion**

This project demonstrates how hierarchical data (categories & books) can be efficiently managed using tree data structures in C.
