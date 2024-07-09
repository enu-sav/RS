<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN">
<html xmlns:v="urn:schemas-microsoft-com:vml"
      xmlns:o="urn:schemas-microsoft-com:office:office"
      xmlns:w="urn:schemas-microsoft-com:office:word"
      xmlns:m="http://schemas.microsoft.com/office/2004/12/omml"= xmlns="http://www.w3.org/TR/REC-html40">
<head>
  <meta http-equiv=Content-Type content="text/html; charset=utf-8">
  <meta name=ProgId content=Word.Document>
  <meta name=Generator content="Microsoft Word 9">
  <meta name=Originator content="Microsoft Word 9">
  <title>Encyklopedický ústav Slovenskej akadémie vied</title>
  <xml>
    <w:WordDocument>
      <w:View>Print
        <w:Zoom>100
          <w:DoNotOptimizeForBrowser/>
    </w:WordDocument>
  </xml>
</head>
  <body lang="sk-SK" text="#000000" link="#000080" vlink="#800000" dir="ltr"><p>
    Encyklopedický ústav CSČ Slovenskej akadémie vied</p>
    <p> Bradáčova 7</p>
    <p> 851 02 Bratislava</p>
    <p><br/></p>
    <p> Objednávajúci redaktor: <b><?php print $current_user['titul_pred_menom']; ?> <?php print $current_user['name']; ?><?php print !empty($current_user['titul_za_menom']) ? ', ' . $current_user['titul_za_menom'] : ''; ?></b></p>
    <p> E-mail: <b><?php print $current_user['email']; ?></b></p>
    <p><br/></p>
    <h2>Objednávka hesiel do Encyclopaedie Beliany</h2>
    <p><br/></p>
    <p> Autor: <b><?php print $assign_user['titul_pred_menom']; ?> <?php print $assign_user['name']; ?><?php print !empty($assign_user['titul_za_menom']) ? ', ' . $assign_user['titul_za_menom'] : ''; ?></b></p>
    <p> Príloha k zmluve č. <b><?php print $contract; ?></b></p>
    <p> Termín dodania vypracovaných hesiel: dva mesiace od vytvorenia tejto objednávky.</p>
    <h2>Zoznam hesiel na vypracovanie</h2>
    <?php foreach ($order_data as $data): ?>
      <a href="<?php print $GLOBALS['base_root'] . '/node/' . $data['nid']; ?>"><?php print $data['password']; ?></a>,
    <?php endforeach; ?>
    <p><br/></p>
    <p><em> Objednávku v redakčnom systéme Beliana vygeneroval redaktor <?php print $current_user['name']; ?>, <?php print date('d. m. Y', $date); ?>.</em></p>
    <p><br/></p>
  </body>
</html>

