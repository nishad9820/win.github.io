<?php

  $server="localhost";
  $username="root";
  $password="";

  $con=mysql_connect( $server, $username,$password);

  if(!$con){
      die("connection is data base fail due to".mysql_connect_error());
  }
  echo "success connection";

  $name =$_post['name'];
  $number=$_post['number'];
  $email=$_post['email'];
  $other=$_post['other'];

  $sql=INSERT INTO `formt` (`name`, `number`, `email`, `other`, `datetime`) VALUES ('$name', ' $number', '$email', '$other ', current_timestamp());

?>