
// SPDX-License-Identifier: MIT
pragma solidity ^0.8.20;

contract StudentData {

    // Structure to store student information
    struct Student {
        uint rollNo;
        string name;
        uint age;
        string course;
    }

    // Array to store multiple students
    Student[] public students;

    // Add a new student
    function addStudent(
        uint _rollNo,
        string memory _name,
        uint _age,
        string memory _course
    ) public {
        students.push(Student(_rollNo, _name, _age, _course));
    }

    // Retrieve student details using array index
    function getStudent(uint index)
        public
        view
        returns (uint, string memory, uint, string memory)
    {
        require(index < students.length, "Invalid student index");

        Student memory s = students[index];

        return (s.rollNo, s.name, s.age, s.course);
    }

    // Get total number of students
    function getStudentCount() public view returns (uint) {
        return students.length;
    }
}
