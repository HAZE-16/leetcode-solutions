select e.name as Employee
from Employee e
Join Employee m
on e.managerID = m.id
where e.salary > m.salary;