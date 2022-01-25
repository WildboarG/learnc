# 动态内存管理

---

`malloc`   `calloc`   `realloc` `free `

```c
// 申请多个成员 每个成员所占动态内存大小 是连续的
void *calloc(size_t nmemb,size_t size);
// 申请多大的连续动态内存空间
void *malloc(size_t size);
// 释放所申请的内存空间
void  freeloc(void *ptr);
//  为之前申请过的内存追加内存空间（若原内存空间下方空间被占用，就找一块新的足够两次申请的空间大小的连续空间）
void *realloc(void *ptr,size_t size);
```



---

### 原则：

​		谁申请谁释放