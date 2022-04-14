<!DOCTYPE html>

<html>

<head>
  <link rel="stylesheet" href="css/index.css">
  <link rel="stylesheet" href="css/xwrt.css">
</head>

<body>
  <header id="topbar">
    <h1>Stage 2</h1>
    <h2>Implementing a C++ script to evaluate XML documents</h2>
  </header>

  <main>
    <p class="evaluation_description">We will be evaluating XWRT by compressing and decompressing multiple XML documents from <a href="http://pskibinski.pl/research/Wratislavia">http://pskibinski.pl/research/Wratislavia/</a>. Alike to QXT, XWRT is a compressor for XML, HTML, and in general textual files.</p>
    <p class="evaluation_description">I will be creating a script in C++ that will: take a directory to an XML document, compress said XML document, decompress said XML document, and measure the time taken to do so. The goal of this is to mock a website that is compressing, sending compressed XML, and then the end user receiving said XML to then decompress and view it on their screen.</p>

    <img id="evaluation" src="img/XWRT_Results.png">
  </main>
</body>

</html>

