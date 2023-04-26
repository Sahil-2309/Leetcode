# Write your MySQL query statement below
Select Person.firstName,Person.lastName, Address.city,Address.state from Person Left join Address on Person.personId=Address.personId 