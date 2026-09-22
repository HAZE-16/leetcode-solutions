select firstName, lastName,city,state
from Person left join Address
on Person.personID = Address.personID
;
