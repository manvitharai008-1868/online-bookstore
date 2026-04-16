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

<img width="771" height="360" alt="Image" src="https://github.com/user-attachments/assets/61aead21-9d9d-4a2b-8859-4ec09358076d" />

**2.Add**

<img width="767" height="363" alt="Image" src="https://github.com/user-attachments/assets/cbb9d3f9-decb-45b6-a37e-d25b255f4e23" />

**3.Delete**

<img width="766" height="380" alt="Image" src="https://github.com/user-attachments/assets/db2a9b49-aac3-4ce9-8772-c5b55bd8fd60" />

**4.Update**

<img width="769" height="377" alt="Image" src="https://github.com/user-attachments/assets/2af8a5f2-569e-4515-9074-2f1f2bd8d68e" />

**5.Search**

<img width="777" height="292" alt="Image" src="https://github.com/user-attachments/assets/de638d5b-5168-4a3b-bbe1-a0a32f48ad97" />

**6.Display**

<img width="776" height="305" alt="Image" src="https://github.com/user-attachments/assets/fa6e1b98-9e2f-44b7-b2f9-57645eac3e6e" />

---

## **🚀 Features**
* Tree-based hierarchy
* Dynamic memory allocation
* Modular programming
* Full CRUD operations
* Menu-driven interface

---

## **📌 Conclusion**

This project demonstrates how hierarchical data (categories & books) can be efficiently managed using tree data structures in C.
