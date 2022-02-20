<!DOCTYPE html>

<html>

<head>
  <link rel="stylesheet" href="css/index.css">
</head>

<body>
  <header id="topbar">
    <h1>XML Query Processing</h1>
    <h2>Querying Normal XML and XML Files with Compression Schemes</h2>
  </header>

  <main>
    <!-- Using XPath/PHP to process XML documents -->
    <h1 class="stagesHeader">Stage 1</h1>
    <a href="minify.php"><p class="stageDescription">Simple XML document vs minified form of this simple XML document<p></a>

    <!-- Using XMill & Console -->
    <h1 class="stagesHeader">Stage 2</h1>
    <a href="xmll.php"><p class="stageDescription">Using large datasets (i.e. Shakespeare), XMill compressed XML documents</p></a>

    <h1 class="stagesHeader">Stage 3</h1>
    <a href="customCompresser.php"><p class="stageDescription">Implementing a XML compressor that still processes in queries (doesn't need a decompressor before parsing XML information)</p></a>
  </main>
</body>

</html>
