//
// Created by pakbung on 18-Jun-20.
//

#include <stdio.h>
void main() {
    char name[ ] = "Mickey"; // char เป็นชนิดของตัวแปรที่ใช้เก็บค่าตัวอักษร แต่ถ้าเป็น char[] จะเก็บได้หลายตัว
    int age = 20;
    printf("%s is %d years old.", name, age);
    //โดยที่ %s ไว้แ่านค่าตัวอักษรมากกว่า 1 ตัว
    //%d เอาไว้อ่านตัวเลขจำนวนเต็ม
    // name และ age คือชื่อตัวแปร
};
