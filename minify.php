<!DOCTYPE html>

<html>

<head>
  <link rel="stylesheet" href="css/index.css">
  <link rel="stylesheet" href="css/minify.css">
</head>

<body>
  <header id="topbar">
    <h1>Stage 1</h1>
    <h2>Simple XML document vs minified form of this simple XML document</h2>
  </header>

  <main>
    <div id="XML_Document_Container">
      <img src="img/not_minified.png">
      <img src="img/minified.png">
    </div>

    <?php
    // Starting timer to test the execution of Simple_XML_Document.xml
    $timer_start = microtime(true);

    // Getting Simple_XML_Document.xml
    $Simple_XML_Document = simplexml_load_file("./xml/Simple_XML_Document.xml");

    // Parsing the information in Simple_XML_Document.xml
    echo "<h3 class='resultsHeader'>Simple_XML_Document.xml's contents</h3>";
    foreach($Simple_XML_Document->children() as $element)
      // getName() ~ Element name (i.e. <username>)
      echo "<p class='resultsText'>".$element->getName().": ".$element."</p>";

    // Ending the timer
    $timer_end = microtime(true);

    // Getting the result of the execution and printing to page
    $execution_time = $timer_end - $timer_start;
    echo "<p class='resultsText' style='margin-bottom: 50px;'>Execution time to parse: ".$execution_time."</p>";



    // Starting timer to test the execution of Simple_XML_Document_Minified.xml
    $timer_start = microtime(true);

    // Getting Simple_XML_Document_Minified.xml
    $Simple_XML_Document_Minified = simplexml_load_file("./xml/Simple_XML_Document_Minified.xml");
    
    // Parsing the information in Simple_XML_Document_Minified.xml
    echo "<h3 class='resultsHeader'>Simple_XML_Document_Minified.xml's contents</h3>";
    foreach($Simple_XML_Document_Minified->children() as $element)
      echo "<p class='resultsText'>".$element->getName().": ".$element."</p>";

    // Ending the timer
    $timer_end = microtime(true);

    // Getting the result of the execution and printing to page
    $execution_time = $timer_end - $timer_start;
    echo "<p class='resultsText' style='margin-bottom: 50px;'>Execution time to parse: ".$execution_time."</p>";
    ?>
  </main>

</html>
