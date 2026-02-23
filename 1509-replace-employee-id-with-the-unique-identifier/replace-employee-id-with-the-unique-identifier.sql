select eUNI.unique_id , e.name from Employees AS e left join employeeuni as eUNI on 
e.id = eUNI.id