delimiter //
create trigger price_history_trigger
before update on product for each row
begin
    insert into product_price_history values(old.product_id,old.product_name,old.supp_name,old.unit_price);
end //
delimiter ;