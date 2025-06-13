# Write your MySQL query statement below
   
select  dept.name as Department , emp.name as Employee , emp.salary as Salary
from Employee emp
join Department dept on emp.departmentId = dept.id
where emp.salary =(
   select max(salary)
   from Employee
   where departmentId = emp.departmentId
) 

