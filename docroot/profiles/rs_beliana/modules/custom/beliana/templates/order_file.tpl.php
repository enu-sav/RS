<!DOCTYPE html>
<html lang="en">
  <meta charset="UTF-8">
  <title>Objednané heslá</title>
  <meta name="viewport" content="width=device-width,initial-scale=1">
  <body>
    <table>
      <tr>
        <th>Predchádzajúci autor</th>
        <th>Súčasný autor</th>
        <th>Číslo zmluvy</th>
        <th>Objednané heslo</th>
      </tr>
      <?php foreach ($order_data as $data): ?>
      <tr>
        <td><?php print $data['previous_user']; ?></td>
        <td><?php print $data['current_user']; ?></td>
        <td><?php print $data['contract']; ?></td>
        <td><?php print $data['password']; ?></td>
      </tr>
      <?php endforeach; ?>
    </table>
  </body>
</html>
