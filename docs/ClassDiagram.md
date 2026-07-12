BankSystem
│
├── Customers
│       └── Map<CustomerId, Customer>
│
├── Accounts
│       └── Map<AccountNumber, Account>
│
├── CreateCustomer()
├── CreateAccount()
├── Deposit()
├── Withdraw()
├── DeleteAccount()
├── CheckBalance()
├── DisplayActiveCustomers()
└── Authenticate()


Customer
---------
CustomerId
Name
PIN


Account
---------
AccountNumber
Balance
CustomerId