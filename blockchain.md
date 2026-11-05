# Blockchain Practical – Viva Questions and Answers

# PART 1: Blockchain Fundamentals

### 1. What is Blockchain?
Blockchain is a distributed digital ledger that stores data in blocks connected using cryptographic hashes.

### 2. Why is it called a blockchain?
Because blocks of data are linked together in chronological order using cryptographic hashes.

### 3. What are the main features of blockchain?
- Decentralization
- Transparency
- Immutability
- Security
- Distributed storage

### 4. What is decentralization?
It means that control is distributed across multiple computers instead of being managed by a single central authority.

### 5. What is a distributed ledger?
A database shared and maintained across multiple computers or nodes in a network.

### 6. What is immutability?
Once data is recorded on the blockchain and sufficiently confirmed, it is extremely difficult to modify or delete.

### 7. What is a block?
A block is a collection of transactions and related information stored on a blockchain.

### 8. What is a hash?
A hash is a fixed-length output generated from input data using a hash function.

### 9. What is a cryptographic hash?
A mathematical function that converts input data into a fixed-size output and is designed to be difficult to reverse.

### 10. What is a node?
A node is a computer participating in a blockchain network.

### 11. What is a consensus mechanism?
A method used by blockchain participants to agree on the valid state of the blockchain.

### 12. What is Proof of Work?
A consensus mechanism in which participants solve computational puzzles to validate blocks.

### 13. What is Proof of Stake?
A consensus mechanism in which validators are selected based partly on the cryptocurrency they stake.

### 14. Which consensus mechanism does Ethereum use?
Ethereum uses Proof of Stake.

### 15. What is cryptocurrency?
A digital currency that uses cryptography and typically operates on a blockchain.

---

# PART 2: Ethereum and Smart Contracts

### 16. What is Ethereum?
Ethereum is a decentralized blockchain platform that supports smart contracts and decentralized applications.

### 17. What is Ether (ETH)?
Ether is the native cryptocurrency of the Ethereum blockchain.

### 18. What is a smart contract?
A smart contract is a program stored and executed on a blockchain. It automatically performs operations when its functions are called.

### 19. What is Solidity?
Solidity is a high-level programming language used to write smart contracts, mainly for Ethereum-compatible blockchains.

### 20. What is EVM?
EVM stands for Ethereum Virtual Machine. It executes smart contract code on the Ethereum network.

### 21. What is a decentralized application (DApp)?
A DApp is an application that uses blockchain and smart contracts for its backend functionality.

### 22. Can smart contracts be modified after deployment?
Generally, deployed contract code is immutable. Updating functionality usually requires deploying a new contract or using an upgradeable contract design.

### 23. What is an Ethereum address?
It is a 42-character hexadecimal identifier used to identify an account or smart contract.

### 24. What are the two types of Ethereum accounts?
- Externally Owned Accounts (EOAs): Controlled by private keys.
- Contract Accounts: Controlled by smart contract code.

### 25. What is a private key?
A secret cryptographic key used to control an externally owned blockchain account and authorize transactions.

### 26. What is a public key?
A cryptographic key associated with a private key, used in verifying digital signatures.

### 27. What is a transaction?
A signed instruction submitted to the blockchain, such as transferring ETH or calling a smart contract function.

### 28. What is a block explorer?
A website that allows users to inspect blockchain transactions, addresses, blocks, and smart contracts.

---

# PART 3: Gas and Transactions

### 29. What is gas in Ethereum?
Gas is the unit used to measure the computational effort required to execute operations on Ethereum.

### 30. Why do we pay gas fees?
Gas fees compensate validators for processing transactions and executing smart contract operations.

### 31. What is a gas limit?
The maximum amount of gas that a transaction is allowed to consume.

### 32. What is gas price?
The amount of ETH paid per unit of gas.

### 33. How is the transaction fee calculated?

Transaction Fee = Gas Used × Effective Gas Price

### 34. What is Wei?
Wei is the smallest denomination of Ether.

1 ETH = 10^18 Wei

### 35. What is Gwei?
Gwei is another denomination of Ether commonly used to express gas prices.

1 Gwei = 10^9 Wei

### 36. Does reading data from a smart contract require gas?
A read-only call made locally using a `view` function generally does not require an on-chain transaction or gas fee paid by the user.

### 37. Does writing data require gas?
Yes. Changing blockchain state requires a transaction and consumes gas.

### 38. Why does deploying a smart contract cost gas?
Because the blockchain must store the contract's bytecode and initialize its state.

### 39. What happens if a transaction runs out of gas?
The transaction fails, and the state changes are reverted. The gas already consumed is still charged.

---

# PART 4: Development Tools

### 40. What is Remix IDE?
Remix is a browser-based IDE used to write, compile, deploy, and test Solidity smart contracts.

### 41. What is MetaMask?
MetaMask is a cryptocurrency wallet that allows users to manage blockchain accounts and interact with decentralized applications.

### 42. Why do we use MetaMask?
It manages accounts, stores keys securely, connects to blockchain networks, and signs transactions.

### 43. What is Sepolia?
Sepolia is an Ethereum test network used for testing smart contracts without spending real ETH.

### 44. What is testnet?
A testnet is a blockchain network used for development and testing.

### 45. What is the difference between mainnet and testnet?
- Mainnet uses real cryptocurrency and real transactions.
- Testnet uses test cryptocurrency for experimentation.

### 46. What is a faucet?
A faucet is a service that distributes free testnet cryptocurrency to developers.

### 47. What is contract deployment?
Deployment means submitting a transaction to create a smart contract on the blockchain.

### 48. What is compilation?
Compilation converts Solidity source code into bytecode and ABI that can be used to deploy and interact with the contract.

### 49. What is ABI?
ABI stands for Application Binary Interface. It describes how external applications interact with a smart contract's functions and data.

### 50. What is bytecode?
Bytecode is the machine-readable code executed by the Ethereum Virtual Machine.

---

# PART 5: Solidity Basics

### 51. What is a Solidity pragma statement?

Example:
pragma solidity ^0.8.20;

It specifies the compiler version range compatible with the source code.

### 52. What is a contract in Solidity?
A contract is a collection of code and data deployed at a blockchain address.

### 53. What is a state variable?
A variable declared at contract level whose value is stored in the contract's persistent storage.

### 54. What are the basic data types in Solidity?
- uint: Unsigned integer
- int: Signed integer
- bool: Boolean
- string: Text
- address: Ethereum address
- bytes: Byte data

### 55. What is uint?
An unsigned integer that stores only non-negative values.

### 56. What is an address?
A data type used to store a 20-byte Ethereum address.

### 57. What is a mapping?

Example:
mapping(address => uint) balances;

A mapping stores key-value pairs. Here, an address is associated with a balance.

### 58. What is a struct?
A struct is a user-defined data type that groups multiple variables of different types.

### 59. What is an array?
An array stores multiple elements of the same data type.

### 60. What is a dynamic array?
An array whose size can change during contract execution.

### 61. What is the push() function?
It adds a new element to the end of a dynamic array.

### 62. What is msg.sender?
It represents the address of the account or contract that directly called the current function.

### 63. What is msg.value?
It represents the amount of Ether sent with the current transaction, measured in Wei.

### 64. What is payable?
The `payable` keyword allows a function or address to receive Ether.

### 65. What is the view keyword?
A `view` function can read contract state but cannot modify it.

### 66. What is the pure keyword?
A `pure` function neither reads nor modifies contract state.

### 67. What is require()?
It checks a condition. If the condition is false, execution stops and the transaction is reverted.

### 68. What is memory?
Memory is temporary data storage that exists only during function execution.

### 69. What is storage?
Storage is persistent data storage maintained on the blockchain.

### 70. What is the difference between memory and storage?
- Memory: Temporary data.
- Storage: Persistent contract data.

### 71. What is a function?
A function is a block of code that performs a specific operation.

### 72. What is a constructor?
A special function executed once when the contract is deployed.

### 73. What is public visibility?
A public function or variable can be accessed externally and internally, subject to its interface and visibility rules.

### 74. What is private visibility?
A private function or variable can only be accessed from within the contract in which it is declared.

---

# PART 6: BankAccount Smart Contract Practical

### 75. What is the aim of the BankAccount practical?
To create a smart contract that allows users to deposit Ether, withdraw Ether, and check their recorded balance.

### 76. Which data structure is used to store balances?

mapping(address => uint256) private balances;

It stores the balance associated with each user's address.

### 77. Why do we use mapping?
Because each user's address can be associated with a separate balance.

### 78. What does deposit() do?
It allows the user to deposit Ether into the smart contract.

### 79. Why is deposit() declared payable?
Because it needs to receive Ether from the user.

### 80. What does msg.value represent in deposit()?
It represents the amount of Ether sent by the user, in Wei.

### 81. Why do we use balances[msg.sender]?
It accesses the balance associated with the current caller's address.

### 82. What does this statement do?

balances[msg.sender] += msg.value;

It adds the deposited amount to the caller's recorded balance.

### 83. What does withdraw() do?
It allows a user to withdraw Ether from their recorded balance.

### 84. Why do we check the balance before withdrawal?
To ensure that the user does not withdraw more than their recorded balance.

### 85. Why do we use require() in withdraw()?
To validate the withdrawal amount and ensure sufficient balance.

### 86. Why do we subtract the balance before transferring Ether?
It follows the Checks-Effects-Interactions pattern, helping prevent reentrancy-related vulnerabilities.

### 87. What is reentrancy?
A vulnerability in which an external contract repeatedly calls a function before the original execution has completed.

### 88. What is the purpose of call()?

(bool success, ) = payable(msg.sender).call{value: amount}("");

It transfers the specified amount of Ether to the caller and returns whether the call succeeded.

### 89. Why do we check success after call()?
To ensure that the Ether transfer was successful. If it fails, the transaction is reverted.

### 90. What does getBalance() return?
It returns the balance recorded for the caller in the mapping.

### 91. Is getBalance() a view function?
Yes. It only reads data and does not modify the contract state.

### 92. What is the difference between wallet balance and contract balance?
- Wallet balance: Ether held by the user's wallet.
- Contract balance: Ether held by the smart contract.
- Recorded balance: The amount associated with a user's address in the contract mapping.

These values are not necessarily equal.

### 93. Why can the contract balance be different from a user's recorded balance?
Because the contract may hold funds belonging to multiple users, and the mapping tracks each user's individual recorded balance.

### 94. What happens if a user deposits 0.01 ETH?
The contract receives 0.01 ETH and increases the user's recorded balance by the equivalent amount in Wei.

### 95. What happens if a user withdraws more than their recorded balance?
The require condition fails and the transaction is reverted.

### 96. What happens if the user deposits zero ETH?
The require condition rejects the deposit.

### 97. Why should the Value field be set to zero while calling withdraw()?
Because the withdrawal amount is passed as a function argument. We are not sending additional Ether to the contract.

---

# PART 7: StudentData Smart Contract Practical

### 98. What is the aim of the StudentData practical?
To create a smart contract that stores student information, retrieves student details, and returns the total number of students.

### 99. Which Solidity concept is used to group student information?
A struct.

### 100. What is the Student struct?

struct Student {
    uint rollNo;
    string name;
    uint age;
    string course;
}

It groups a student's roll number, name, age, and course.

### 101. Why do we use a struct?
A struct allows us to group related information of different data types into one user-defined data type.

### 102. Which data structure stores multiple students?

Student[] public students;

It is a dynamic array of Student structures.

### 103. Why is a dynamic array used?
Because the number of students is not fixed and new student records can be added.

### 104. What does addStudent() do?
It accepts student details and adds a new Student record to the array.

### 105. What does push() do in addStudent()?
It appends a new student record to the end of the dynamic array.

### 106. What is the purpose of getStudent()?
It retrieves the details of a student using the student's array index.

### 107. What is zero-based indexing?
Array indexing starts from zero. The first student is at index 0, the second at index 1, and so on.

### 108. Why do we use require() in getStudent()?

require(index < students.length, "Invalid index");

It checks whether the requested index exists in the array.

### 109. What does getStudentCount() return?
It returns the total number of student records stored in the array.

### 110. What is students.length?
It returns the current number of elements in the students array.

### 111. Why is getStudentCount() declared view?
Because it only reads the array length and does not modify any data.

### 112. What is the difference between a struct and an array?
A struct groups different data types into one record, whereas an array stores multiple elements of the same type.

### 113. What happens when we add a student?
A transaction is submitted, the smart contract stores the student's details, and gas is consumed.

### 114. Does retrieving a student consume gas?
A normal read-only call does not require an on-chain transaction or a user-paid gas fee.

### 115. Why does adding a student cost gas?
Because it modifies the contract's persistent blockchain storage.

### 116. What happens if we request an invalid student index?
The require condition fails and the function execution is reverted.

### 117. What is the difference between roll number and array index?
The roll number is a student attribute supplied as data. The array index is the position of the student record in the array.

### 118. Can two students have the same roll number in this implementation?
Yes. The basic implementation does not enforce unique roll numbers. Additional validation would be needed to prevent duplicates.

---

# PART 8: Comparison and Important Questions

### 119. What is the difference between mapping and array?
- Mapping stores key-value pairs.
- Array stores elements in an ordered sequence using indexes.

### 120. What is the difference between BankAccount and StudentData?
- BankAccount manages Ether deposits, withdrawals, and recorded balances.
- StudentData stores and retrieves student records.

### 121. Which practical uses mapping?
BankAccount uses mapping to associate wallet addresses with balances.

### 122. Which practical uses struct and array?
StudentData uses a struct to represent each student and a dynamic array to store multiple students.

### 123. Which operations consume gas?
Operations that modify blockchain state, such as depositing Ether, withdrawing Ether, adding a student, and deploying a contract.

### 124. What is the difference between a transaction and a call?
A transaction is submitted to the blockchain and can modify state. A read-only call executes locally to retrieve information without creating an on-chain transaction.

### 125. Why are smart contracts considered transparent?
Their deployed code and blockchain state can generally be inspected using blockchain tools, depending on the network and contract configuration.

### 126. What is the main advantage of blockchain for record keeping?
It provides a shared, tamper-resistant record that can be independently verified.

### 127. Is blockchain data always private?
No. Public blockchains are generally transparent. Sensitive information should not be stored directly on a public blockchain without suitable privacy protections.

### 128. Can we delete a student record from the blockchain?
The basic StudentData implementation does not provide a delete function. More generally, blockchain data is difficult to remove once recorded.

---

# PART 9: Quick Revision

| Concept | Meaning |
|---|---|
| Blockchain | Distributed digital ledger |
| Ethereum | Blockchain platform |
| ETH | Native cryptocurrency of Ethereum |
| Solidity | Smart contract programming language |
| EVM | Ethereum Virtual Machine |
| Smart Contract | Program deployed on blockchain |
| Remix | Browser-based Solidity IDE |
| MetaMask | Blockchain wallet |
| Sepolia | Ethereum testnet |
| Gas | Computational unit |
| Wei | Smallest ETH denomination |
| Gwei | 10^9 Wei |
| msg.sender | Address of caller |
| msg.value | Ether sent with transaction |
| payable | Allows receiving Ether |
| mapping | Key-value data structure |
| struct | Groups related variables |
| array | Ordered collection |
| push() | Adds an element to dynamic array |
| require() | Checks a condition |
| view | Reads state without modifying it |
| memory | Temporary storage |
| storage | Persistent storage |
| ABI | Contract interaction interface |

## Practical Summary

### BankAccount
- Uses mapping to store user balances.
- `deposit()` receives Ether.
- `withdraw()` transfers Ether to the caller.
- `getBalance()` reads the caller's recorded balance.
- Uses `payable`, `msg.sender`, `msg.value`, `require`, and `call`.

### StudentData
- Uses a struct to represent student information.
- Uses a dynamic array to store multiple students.
- `addStudent()` adds a student.
- `getStudent()` retrieves a student's details by index.
- `getStudentCount()` returns the number of students.
- Uses `struct`, `array`, `push()`, `memory`, `view`, and `require`.

## Final Conclusion

In these practicals, we implemented smart contracts using Solidity and deployed them using Remix IDE with MetaMask on the Sepolia test network.

The BankAccount contract demonstrated Ether transactions, mappings, and balance management. The StudentData contract demonstrated structures, dynamic arrays, and storing and retrieving records.

Both practicals helped us understand smart contract development, blockchain transactions, deployment, and gas consumption.