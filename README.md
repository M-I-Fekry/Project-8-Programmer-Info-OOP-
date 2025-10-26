# 👨‍💻 C++ OOP — Person → Employee → Programmer  
*A Practical Hierarchy To Model Real-World Job Roles*

---

## 🎯 Overview  
This project applies core **Object-Oriented Programming (OOP)** principles in C++, through a realistic hierarchy representing an organization structure:

**Person ➜ Employee ➜ Programmer**

Every class extends the previous one by adding new properties and customized behavior through:  
✅ Inheritance  
✅ Encapsulation  
✅ Function Overriding  
✅ Constructor Chaining  
✅ Code Reusability

---

## 🧱 Class Structure (UML Preview)

*(UML Diagram Coming Soon!)*  

```
Person
 ├── Employee
 │     └── Programmer
```

Each level enhances the data model to represent more specific roles.

---

## 🧩 What Each Class Represents  

| Class Name | What it Models | Additional Features |
|-----------|----------------|-------------------|
| Person 🧍 | Basic personal info | Name, Email, Phone |
| Employee 🧑‍💼 | Someone who works in a company | Title, Department, Salary |
| Programmer 👨‍💻 | A specialized employee in coding | MainProgrammingLanguage |

---

## ⚙️ Key OOP Concepts Used  

| Concept | How It Appears Here |
|--------|--------------------|
| Encapsulation | Using setters & getters to protect attributes |
| Inheritance | Reusing Person → Employee → Programmer |
| Function Overriding | Redefining `Print()` to suit each role |
| Constructor Chaining | Passing values from child → parent constructors |
| Reusability | Reduced duplication and cleaner code |

---

## 🖥️ Usage Example  

```cpp
int main()
{
    clsProgrammer Programmer1(100030, "Mohamed", "Ibrahim", "Software Developer", "MyEmail@gmail.com", "+20.........",
    "Software Developer", "Computer Science", 5000, "C++");

    Programmer1.Print();

    Programmer1.SendEmail("Hi", "How are you?");
    Programmer1.SendSMS("How are you?");

    system("pause>0");
    return 0;
}
```

---

## 🚀 Why This Project Matters  

✔ Moves your C++ skills toward real business applications  
✔ Shows how large systems are structured using OOP  
✔ Improves reusability and maintenance of software  
✔ Perfect for college projects, resumes, and interviews

---

## 🔧 Tools & Requirements  

| Tool | Version |
|------|---------|
| Programming Language | C++ |
| IDE | Visual Studio (Recommended) ✅ |
| OS | Windows ✔ |

Compile normally and run — no external dependencies.

---

## 🔗 Resources & References (Official + Trusted)

• cppreference — C++ Inheritance & Derived Classes  
https://en.cppreference.com/w/cpp/language/derived_class  

• Classes and Encapsulation – cplusplus.com  
https://cplusplus.com/doc/tutorial/classes/  

• Function Overriding in C++ – GeeksforGeeks  
https://www.geeksforgeeks.org/function-overriding-in-cpp/  

• Constructor Chaining – GeeksforGeeks  
https://www.geeksforgeeks.org/constructor-chaining-in-cpp/  

• OOP Concepts — IBM Developer  
https://developer.ibm.com/articles/why-object-oriented-programming/  

---

## 🏆 Training Source  
This project was built as part of the **Object-Oriented Programming Track**  
under the guidance of **Dr. Mohamed AbouHadhood** 👨‍🏫  
🔗 https://programmingadvices.com/

---

## 📄 License  
This project is open-source under the MIT License.  
You can use it freely for education and improvement ✅

---

## 💡 Future Enhancements  

✨ Add saving to files  
✨ Implement search & modify functions  
✨ Create a GUI version  
✨ Add more job roles (Tester, Manager, etc.)

---

## 🙌 Author  
**M-I-Fekry**  

---
