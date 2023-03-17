# C with Data Structures

## Table of contents
- [C with Data Structures](#c-with-data-structures)
  - [Table of contents](#table-of-contents)
  - [參考資源](#參考資源)
  - [Lecture 1 C Pointer Variable](#lecture-1-c-pointer-variable)
    - [1-1 Declaration](#1-1-declaration)
    - [1-2 Structure](#1-2-structure)

---

## 參考資源
1. [寫點科普](https://kopu.chat/c%E8%AA%9E%E8%A8%80-%E8%B6%85%E5%A5%BD%E6%87%82%E7%9A%84%E6%8C%87%E6%A8%99%EF%BC%8C%E5%88%9D%E5%AD%B8%E8%80%85%E8%AB%8B%E9%80%B2%EF%BD%9E/)
2. [Linked List 連結串列](https://codimd.mcl.math.ncu.edu.tw/s/B1rd5-sM4)
3. [你所不知道的 C 語言: linked list 和非連續記憶體](https://hackmd.io/@sysprog/c-linked-list)
4. [C语言中“.”与“->”有什么区别？](https://farseerfc.me/dot-and-arrow-in-c.html)

## Lecture 1 C Pointer Variable

### 1-1 Declaration

* `Variable`命名方式:
    ```c
    int a = 10;
    ```
* `Pointer Variable`命名方式:
    ```c
    int a = 10;
    int *b = &a; // Pointer Variable b 等於a的記憶體位置
    ```
* `Printf` `Pointer Variable`
    ```c
    int a = 10;
    int *b = &a;

    printf("指針變數b的記憶體位置: %p\n", b);
    printf("指針變數b指向變數a的數值: %d\n", *b);
    ```

由上述測試可得知:
* 變數`a`等於數值`10`
* 變數`b`等於變數`a`的記憶體位置(Pointer Variable)

|形式|值|解釋|
|-|-|-|
|`b`|`a`的記憶體位置||
|`*b`|`a`值|因為`*`指向`b`的數值(也就是`a`的記憶體位置)|
|`&b`|`b`的記憶體位置||
|`*&a`|`a`值|因為`&a`取得`a`的記憶體位置，再用`*`取得該記憶體位置的值|

### 1-2 Structure

* [語法](lecture1/1-2.c)
  ```c
    struct Bboy {
        char name[50];
        int age;
    };
  ```
* 
