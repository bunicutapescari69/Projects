<?php
// Database credentials
$servername = "localhost";
$username = "username";  // Replace with your database username
$password = "password";  // Replace with your database password
$dbname = "database_name";  // Replace with your database name

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// SQL query to select data
$sql = "SELECT id, name, email FROM users";  // Replace with your table name
$result = $conn->query($sql);
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>User List</title>
</head>
<body>
    <h1>User List</h1>

    <?php
    if ($result->num_rows > 0) {
        // Output data for each row
        echo "<table border='1'>
                <tr>
                    <th>ID</th>
                    <th>Name</th>
                    <th>Email</th>
                </tr>";
        while($row = $result->fetch_assoc()) {
            echo "<tr>
                    <td>" . $row["id"] . "</td>
                    <td>" . $row["name"] . "</td>
                    <td>" . $row["email"] . "</td>
                  </tr>";
        }
        echo "</table>";
    } else {
        echo "No results found.";
    }

    // Close connection
    $conn->close();
    ?>
</body>
</html>