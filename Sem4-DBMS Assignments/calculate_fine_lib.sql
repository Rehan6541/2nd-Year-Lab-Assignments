delimiter //
create procedure calculate_fine(rno int,b_name varchar(20))
begin
	declare no_of_days int;
	declare fine_amount int;
	declare date1 date;
	select issue_date into date1 from library where rollno=rno;
	set no_of_days=datediff(curdate(),date1);
	if no_of_days>15 and no_of_days<30 then
	set fine_amount=(no_of_days-15)*5;
	end if;
	if no_of_days>30 then
	set fine_amount=(no_of_days-30)*50;
	end if;
	select concat('Fine is ',fine_amount);
	if fine_amount>0 then 
	insert into Fine values(rno,curdate(),fine_amount);
	update Library set status='R' where rollno=rno;
	end if;
end //


