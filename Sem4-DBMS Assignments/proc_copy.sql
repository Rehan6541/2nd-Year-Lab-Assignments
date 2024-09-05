delimiter //
create procedure proc_copy()
begin
declare vfinished int default 0;
declare r int;
declare n varchar(30);
declare c varchar(20);
declare stud_cursor cursor for select * from student1;
declare continue handler for not found set vfinished=1;
open stud_cursor;
getdata:Loop
fetch stud_cursor into r,n,c;
if vfinished=1 then
leave getdata;
end if;
insert into student2 values(r,n,c);
end loop getdata;
close stud_cursor;
end //

