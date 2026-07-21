# System Architecture

## Classes

### Customer
Stores customer information.

### Account
Stores account information.

### BankSystem
Controls the entire banking system and manages all operations.

## Data Structures

Customers:
Map<CustomerId, Customer>

Accounts:
Map<AccountNumber, Account>

Customer
    |
    | owns
    ↓
Account


BankSystem
    |
    | manages
    ↓
Customer + Account