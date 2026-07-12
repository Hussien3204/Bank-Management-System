# Design Decisions

## 1. Separate Customer and Account

### Decision
Customer and Account are implemented as separate classes.

### Reason
A customer represents a person, while an account represents a financial entity.
Separating them avoids duplicated data and improves maintainability.

### Future Extension
This design allows supporting multiple accounts per customer in future versions.


---

## 2. BankSystem as the Main Controller

### Decision
BankSystem is responsible for managing customers, accounts, and banking operations.

### Reason
Operations such as creating accounts, withdrawing money, and authentication affect the whole system, not a single object.

### Benefits
- Clear responsibilities.
- Easier maintenance.
- Better code organization.


---

## 3. Using Map Data Structure

### Decision
Use Map for storing customers and accounts.

### Reason
Each customer and account has a unique identifier.

Examples:

Customers:
CustomerId → Customer

Accounts:
AccountNumber → Account

### Benefits
- Fast searching.
- Prevent duplicate identifiers.
- Easy management.


---

## 4. Account Deletion Does Not Delete Customer

### Decision
Deleting an account keeps the customer information.

### Reason
A customer and an account are different concepts.

A customer may exist without an active account.

### Future Extension
The system can support reopening accounts later.


---

## 5. One Active Account Per Customer (V1)

### Decision
A customer can have only one active account.

### Reason
Keep the first version simple and focus on core banking operations.

### Future Extension
The relationship can be expanded to support multiple accounts.


---

## 6. Authentication Responsibility

### Decision
Authentication is handled by BankSystem.

### Reason
Authentication requires access to system data and account information.

Customer only stores personal data.