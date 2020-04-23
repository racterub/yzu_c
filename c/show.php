<?php
    if (!empty($_GET['code'])) {
        $src = $_GET['code'];
    } else {
        die('<img src="img/stop.jpg"></img>');//NO LFI HERE LOL
    }
?>
<!DOCTYPE html>
<html lang=zh-Hant-TW>
<head>
    <title>C CP119</title>
    <!-- Tocas-UI -->
    <link rel="stylesheet" type="text/css" href="./css/tocas.css">
    <script type="text/javascript" src="./css/tocas.js"></script>
    <!-- highlight.js -->
    <!-- <link rel="stylesheet" href="//cdnjs.cloudflare.com/ajax/libs/highlight.js/9.18.1/styles/default.min.css">
    <script src="//cdnjs.cloudflare.com/ajax/libs/highlight.js/9.18.1/highlight.min.js"></script> -->
    <!-- <script>hljs.initHighlightingOnLoad();</script> -->
    <link href="prism/prism.css" rel="stylesheet" />
    <script src="prism/prism.js"></script>
    <meta name="viewport" content="width=device-width" />
     <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
     <!-- Global site tag (gtag.js) - Google Analytics -->
    <script async src="https://www.googletagmanager.com/gtag/js?id=UA-145743912-1"></script>
    <script>
        window.dataLayer = window.dataLayer || [];
        function gtag(){dataLayer.push(arguments);}
        gtag('js', new Date());

        gtag('config', 'UA-145743912-1');
    </script>

</head>
<body>
    <div class="ts overlapped left sidebar inverted vertical menu">
        <div class="ts attached inverted menu">
            <a onclick="ts('.left.inverted.sidebar').sidebar('hide');" class="item">
                <i class="chevron left icon"></i>
            </a>
        </div>
        <a href="https://github.com/racterub/yzu_c" class="item">GitHub</a>
        <a href="https://racterub.me/python" class="item">CP109 (python)</a>
    </div>
    <div class="pusher">
        <div class="large device only">
            <div class="ts stackable menu">
                <a href="https://racterub.me/c/" class="item">Home</a>
                <a href="https://github.com/racterub/yzu_c" class="item">GitHub</a>
                <a href="https://racterub.me/python" class="item">CP109 (python)</a>
            </div>
        </div>
        <div class="mobile or tablet only">
            <div class="ts menu">
                <a onclick="ts('.left.inverted.sidebar').sidebar({
                    dimPage: true,
                    scrollLock: true
                    }).sidebar('toggle');" class="item">
                    <i class="list layout icon"></i>
                </a>
                <a href="https://racterub.me/c/" class="item">Home</a>
            </div>
        </div>
        <br>
        <br>
        <div class="ts very narrow container">
            <h2 class="ts dividing header"><?=htmlentities(substr($src, 9, strlen($src)-9), ENT_QUOTES, 'UTF-8');?></h2>
            <div class="ts segment">
                <pre class="line-numbers" data-src="<?=$src?>" data-download-link></pre>
            </div>
        </div>
    </body>
</html>