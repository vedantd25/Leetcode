# Write your MySQL query statement below
/*select r.contest_id,round(round(count(distinct r.user_id)*100,2)/3,2) as percentage
from Users u
right join Register r
on u.user_id=r.user_id
group by r.contest_id order by percentage desc,contest_id asc
;*/

select 
contest_id, 
round(count(distinct user_id) * 100 /(select count(user_id) from Users) ,2) as percentage
from  Register
group by contest_id
order by percentage desc,contest_id