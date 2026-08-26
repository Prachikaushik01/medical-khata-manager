# medical-khata-manager
A C-based Medical Khata Management System
# 💊 Medical Khata Manager

A simple **C-based Medical Khata Management System** designed to help a medical shopkeeper manage customers, transactions, and pending payments through a menu-driven program.

This project was built as a practical application of the C programming concepts I learned.

---

## 🚀 Features

### 👤 1. Add Customer
- Add a new customer's name and mobile number.
- Each customer is stored in the system for future transactions.

### 💊 2. Add Transaction
- Add a medicine transaction to an existing customer.
- Store:
  - Medicine name
  - Amount
  - Payment status
- A customer can have **multiple transactions** without overwriting previous records.

### 📖 3. View Customer Khata
- Search for a customer using their mobile number.
- Display:
  - Customer name
  - Mobile number
  - Complete transaction history
  - Medicine details
  - Amount
  - Payment status

### 👥 4. View All Customers
- Display all registered customers.
- Show their transaction history and payment status.

### ⏳ 5. View Pending Payments
- Display only transactions whose payment status is pending.
- If there are no pending payments, the program displays:
  
  `No Pending Payments`

### ✅ 6. Mark Payment as Paid
- Search for a customer using their mobile number.
- Display their pending transactions.
- Select the medicine whose payment has been received.
- Update its payment status from **Pending** to **Paid**.

### 🚪 7. Exit
- Safely exit the application.

---

## 🧠 Concepts Used

This project helped me practice and apply:

- C Programming
- Structures
- Nested Structures
- Arrays
- Array of Structures
- Loops
- Conditional Statements
- `if-else`
- `for` loops
- String handling
- `strcmp()`
- Searching
- Menu-driven programming
- Data management

---

## 📌 How It Works

The program provides a menu through which the shopkeeper can manage customers and their transactions.

A customer contains basic information such as:

- Name
- Mobile Number

Each customer can have **multiple transactions**.

Every transaction contains:

- Medicine Name
- Amount
- Payment Status

For example:

Customer: Prachi

| Transaction | Medicine | Amount | Status |
|-------------|----------|--------|--------|
| 1 | Paracetamol | ₹500 | Pending |
| 2 | Crocin | ₹200 | Paid |

This allows the same customer to maintain multiple entries in their khata.

---

## 💡 What I Learned

While building this project, I learned how to combine different C programming concepts to create a practical application.

One of the main improvements I made during development was changing the structure from storing only **one transaction per customer** to using an **array of transactions**.

This allowed each customer to maintain multiple transactions without overwriting previous records.

I also learned how searching, nested structures, loops, and conditional statements can work together to manage data.

---

## 🔮 Future Improvements

I plan to develop this project further by:

- 🌐 Building a **web-based version** of the Medical Khata Manager
- 📊 Adding a user-friendly dashboard for shopkeepers
- 🔍 Improving customer and transaction search
- 💰 Calculating total sales
- 💳 Calculating total pending amounts
- 📅 Adding transaction dates
- ✏️ Adding edit and delete transaction options
- 💾 Storing data permanently using file handling/database
- 🔐 Adding shopkeeper authentication
- 📱 Making the application responsive for mobile devices

The goal is to eventually turn this C-based prototype into a **complete web application**.

---

## 🛠️ Technologies Used

- **C Programming**
- GCC Compiler
- VS Code

---

## 👩‍💻 Author

**Prachi Kaushik**

This is one of my first practical projects while learning programming and problem-solving.

---

⭐ If you find this project interesting, feel free to explore the code and follow my learning journey!
