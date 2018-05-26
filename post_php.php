<?php
//print_r($_POST);
$dsn="mysql:host=192.168.32.90;dbname=dbname01";
$db=new PDO($dsn,"dbname01","dbname@pwd");
$rs= $db->query("select * FROM users WHERE account = '".$_POST['account']."' and password='".$_POST['password']."'");
$result=$rs->fetch();

//print_r($result);
if (!$result ) echo "找不到" ;
else echo "登入成功";
