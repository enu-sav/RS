<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN">
<html>
<head>
  <meta http-equiv="content-type" content="text/html; charset=utf-8"/>
  <title>Encyklopedický ústav Slovenskej akadémie vied</title>
</head>
  <body lang="sk-SK" text="#000000" link="#000080" vlink="#800000" dir="ltr"><p>
    Encyklopedický ústav CSČ Slovenskej akadémie vied</p>
    <p> Bradáčova 7</p>
    <p> 851 02 Bratislava</p>
    <p><br/></p>
    <p> Objednávajúci redaktor: <b><?php print $current_user['titul_pred_menom']; ?> <?php print $current_user['name']; ?> <?php print $current_user['titul_za_menom']; ?></b></p>
    <p> E-mail: <b><?php print $current_user['email']; ?></b></p>
    <p><br/></p>
    <h2>Objednávka hesiel do Encyclopaedie Beliany</h2>
    <p><br/></p>
    <p> Autor: <b><?php print $assign_user; ?></b></p>
    <p> Príloha k zmluve č. <b><?php print $contract; ?></b></p>
    <p> Odbor: <font color="#ff0000"><b>doplní redaktor</b></font></p>
    <p>
      Termín dodania vypracovaných hesiel: <font color="#ff0000"><b>dátum doplní
          redaktor</b></font></p>
    <h2>Zoznam hesiel na vypracovanie</h2>
    <?php foreach ($order_data as $data): ?>
      <a href="https://rs.beliana.sav.sk/node/<?php print $data['nid']; ?>"><?php print $data['password']; ?></a>,
    <?php endforeach; ?>
    <p><br/></p>
    <p><em> Objednávku v redakčnom systéme Beliana vygeneroval redaktor <?php print $current_user['name']; ?>, <?php print date('d. m. Y', $date); ?>.</em></p>
    <p><br/></p>
  </body>
</html>

