[1mdiff --git a/.gitignore b/.gitignore[m
[1mdeleted file mode 100644[m
[1mindex 7d47986..0000000[m
[1m--- a/.gitignore[m
[1m+++ /dev/null[m
[36m@@ -1,7 +0,0 @@[m
[31m-package-lock.json[m
[31m-node_modules[m
[31m-Testando.html[m
[31m-testando.css[m
[31m-app.js[m
[31m-app2.js[m
[31m-play[m
\ No newline at end of file[m
[1mdiff --git a/Page/Bot.html b/Page/Bot.html[m
[1mdeleted file mode 100644[m
[1mindex 4ba0236..0000000[m
[1m--- a/Page/Bot.html[m
[1m+++ /dev/null[m
[36m@@ -1,129 +0,0 @@[m
[31m-<!DOCTYPE html>[m
[31m-<html lang="en">[m
[31m-<head>[m
[31m-    <meta charset="UTF-8">[m
[31m-    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">[m
[31m-    <link rel="stylesheet" href="../css/bootstrap.min.css">[m
[31m-    <link rel="stylesheet" href="../css/main.css">[m
[31m-    <link rel="stylesheet" href="../css/now-ui-kit.css">[m
[31m-    <link href="https://fonts.googleapis.com/css?family=Poppins:300,400,600,700,800,900&display=swap" rel="stylesheet">[m
[31m-    <link href="https://fonts.googleapis.com/css?family=Montserrat:400,600,700,800,900&display=swap" rel="stylesheet">[m
[31m-    <link href="https://fonts.googleapis.com/css?family=Lato:300,400,600,700,800,900&display=swap" rel="stylesheet">[m
[31m-    <title>TwT - Devs</title>[m
[31m-</head>[m
[31m-<body>[m
[31m-<nav class="navbar navbar-expand-lg bg-transparent">[m
[31m-    <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">[m
[31m-        <img src="../assets/menuIcon.svg" width="20px" height="20px" style="max-width: none !important;">[m
[31m-    </button>[m
[31m-    <img src="../assets/BotLogo.png" width="50" height="50">[m
[31m-    <div class="collapse navbar-collapse" id="navbarSupportedContent" style="margin-left: 20px !important">[m
[31m-        <ul class="navbar-nav mr-auto">[m
[31m-            <li class="nav-item active">[m
[31m-                <a class="nav-link" href="../index.html">Home <span class="sr-only">(current)</span></a>[m
[31m-            </li>[m
[31m-            <li class="nav-item">[m
[31m-                <a class="nav-link" href="features/features.html">Features</a>[m
[31m-            </li>[m
[31m-            <li class="nav-item">[m
[31m-                <a class="nav-link" href="#">Dashboard</a>[m
[31m-            </li>[m
[31m-            <li class="nav-item">[m
[31m-                <a class="nav-link" href="#">Subscribtion</a>[m
[31m-            </li>[m
[31m-        </ul>[m
[31m-        <div class="nav-item dropdown">[m
[31m-            <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">[m
[31m-                Documentation[m
[31m-            </a>[m
[31m-            <div class="dropdown-menu" aria-labelledby="navbarDropdown">[m
[31m-                <a class="dropdown-item" href="#">Commands</a>[m
[31m-                <a class="dropdown-item" href="#">Tutorials</a>[m
[31m-                <div class="dropdown-divider"></div>[m
[31m-                <a class="dropdown-item" href="#">Server settings</a>[m
[31m-            </div>[m
[31m-        </div>[m
[31m-        <div class="nav-item">[m
[31m-            <a class="nav-link" href="#">About</a>[m
[31m-        </div>[m
[31m-        <button class="btn login-btn btn-outline-accent my-2 my-sm-0" style="font-size: 10px !important;font-family: poppins !important;">LOGIN</button>[m
[31m-    </div>[m
[31m-</nav>[m
[31m-<div class="heading">[m
[31m-    <h1 class="display-5 title">It's time to use Bot in your server.</h1>[m
[31m-    <p class="subtitle">Bot is a multi-purpose bot ready to skill up and boost up your Discord server<br />Also features auto-moderation, administration, music and much more!</p>[m
[31m-    <a class="btn btn-primary btn-lg" href="#" target="_blank" role="button">Get started</a>[m
[31m-    <a class="btn btn-secondary btn-lg" href="https://discord.com/api/oauth2/authorize?client_id=967252328753283072&permissions=8&scope=bot%20applications.commands" target="_blank" role="button">Add to server</a>[m
[31m-    <br /><br /><br /><br /><br /><br />[m
[31m-</div>[m
[31m-<div class="features">[m
[31m-    <div class="title">Features of Bot</div>[m
[31m-    <div class="subtitle">We provide you the best features in Bot!</div>[m
[31m-    <div class="cards">[m
[31m-        <div class="card" style="width: 18rem;">[m
[31m-        <div class="card-body">[m
[31m-            <h5 class="card-title">Future #1</h5>[m
[31m-            <p class="card-text">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent ex ante, mattis vel dapibus vel, tempor facilisis justo. Vivamus dignissim ut nisi eu consequat.</p>[m
[31m-        </div>[m
[31m-    </div>[m
[31m-        <div class="card" style="width: 18rem;">[m
[31m-            <div class="card-body">[m
[31m-                <h5 class="card-title">Future #2</h5>[m
[31m-                <p class="card-text">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent ex ante, mattis vel dapibus vel, tempor facilisis justo. Vivamus dignissim ut nisi eu consequat.</p>[m
[31m-            </div>[m
[31m-        </div>[m
[31m-        <div class="card" style="width: 18rem;">[m
[31m-            <div class="card-body">[m
[31m-                <h5 class="card-title">Future #3</h5>[m
[31m-                <p class="card-text">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Praesent ex ante, mattis vel dapibus vel, tempor facilisis justo. Vivamus dignissim ut nisi eu consequat.</p>[m
[31m-            </div>[m
[31m-        </div>[m
[31m-    </div>[m
[31m-</div>[m
[31m-<div class="statistics">[m
[31m-    <div class="cards">[m
[31m-        <div class="card statistic" style="width: 18rem;">[m
[31m-            <div class="card-body">[m
[31m-                <p class="card-title" style="font-size: 50px !important;line-height: 15px !important;letter-spacing: -0.06em !important;font-weight: bold !important;">000</h1>[m
[31m-                <p style="font-weight: bold !important;font-size: 20px !important;">servers</p>[m
[31m-            </div>[m
[31m-        </div>[m
[31m-        <div class="card statistic" style="width: 18rem;">[m
[31m-            <div class="card-body">[m
[31m-                <p class="card-title" style="font-size: 50px !important;line-height: 15px !important;letter-spacing: -0.06em !important;font-weight: bold !important;">000</h1>[m
[31m-                <p style="font-weight: bold !important;font-size: 20px !important;">users</p>[m
[31m-            </div>[m
[31m-        </div>[m
[31m-        <div class="card statistic" style="width: 18rem;">[m
[31m-            <div class="card-body">[m
[31m-                <p class="card-title" style="font-size: 50px !important;line-height: 15px !important;letter-spacing: -0.06em !important;font-weight: bold !important;">000</h1>[m
[31m-                <p style="font-weight: bold !important;font-size: 20px !important;">channels</p>[m
[31m-            </div>[m
[31m-        </div>[m
[31m-    </div>[m
[31m-</div>[m
[31m-<div class="page_end">[m
[31m-    <div class="start">[m
[31m-        <div class="card">[m
[31m-            <div class="card-body gs-card">[m
[31m-                <div class="title">Ready to try Bot?</div>[m
[31m-                <div class="subtitle">Invite Bot and start giving your server cool perks!</div>[m
[31m-                <br />[m
[31m-                <a class="btn btn-primary btn-lg" href="#start_link" role="button">Get started</a>[m
[31m-            </div><br />[m
[31m-        </div>[m
[31m-    </div>[m
[31m-    <div class="footer">[m
[31m-        <div class="bot-footer">[m
[31m-            <img src="../assets/BotLogoWord.svg" width="150"><br />[m
[31m-            Copyright © [BotOwner] - 2020[m
[31m-        </div><br/>[m
[31m-        <div class="nouridio">website designed by <a href="https://nouridio.com"> nouridio</a></div>[m
[31m-    </div>[m
[31m-</div>[m
[31m-<script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>[m
[31m-<script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script>[m
[31m-<script src="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>[m
[31m-<script src="js/now-ui-kit.min.js"></script>[m
[31m-</body>[m
[31m-</html>[m
[1mdiff --git a/Page/Discord.html b/Page/Discord.html[m
[1mdeleted file mode 100644[m
[1mindex ca80abf..0000000[m
[1m--- a/Page/Discord.html[m
[1m+++ /dev/null[m
[36m@@ -1,58 +0,0 @@[m
[31m-<!DOCTYPE html>[m
[31m-<html lang="en">[m
[31m-<head>[m
[31m-      <meta charset="UTF-8">[m
[31m-      <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">[m
[31m-      <link rel="stylesheet" href="../css/bootstrap.min.css">[m
[31m-      <link rel="stylesheet" href="../css/main.css">[m
[31m-      <link rel="stylesheet" href="../css/now-ui-kit.css">[m
[31m-      <link href="https://fonts.googleapis.com/css?family=Poppins:300,400,600,700,800,900&display=swap" rel="stylesheet">[m
[31m-      <link href="https://fonts.googleapis.com/css?family=Montserrat:400,600,700,800,900&display=swap" rel="stylesheet">[m
[31m-      <link href="https://fonts.googleapis.com/css?family=Lato:300,400,600,700,800,900&display=swap" rel="stylesheet">[m
[31m-      <title>TwT - Devs</title>[m
[31m-</head>[m
[31m-<body>[m
[31m-<nav class="navbar navbar-expand-lg bg-transparent">[m
[31m-    <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">[m
[31m-          <img src="../assets/menuIcon.svg" width="20px" height="20px" style="max-width: none !important;">[m
[31m-      </button>[m
[31m-      <img src="../assets/BotLogo.png" width="50" height="50">[m
[31m-      <div class="collapse navbar-collapse" id="navbarSupportedContent" style="margin-left: 20px !important">[m
[31m-          <ul class="navbar-nav mr-auto">[m
[31m-              <li class="nav-item active">[m
[31m-                  <a class="nav-link" href="../index.html">Home <span class="sr-only">(current)</span></a>[m
[31m-              </li>[m
[31m-              <li class="nav-item">[m
[31m-                  <a class="nav-link" href="Discord.html">discord</a>[m
[31m-              </li>[m
[31m-              <li class="nav-item">[m
[31m-                  <a class="nav-link" href="Testando.html">TestArea</a>[m
[31m-              </li>[m
[31m-              <!--<li class="nav-item">[m
[31m-                  <a class="nav-link" href="Bot.html">TwT_Page</a>[m
[31m-              </li>-->[m
[31m-          </ul>[m
[31m-          <div class="nav-item dropdown">[m
[31m-              <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">[m
[31m-                  Rede Social[m
[31m-              </a>[m
[31m-              <div class="dropdown-menu" aria-labelledby="navbarDropdown">[m
[31m-                  <a class="dropdown-item" href="https://www.instagram.com/littlesadfelipe.m/?hl=pt-br">Instagram</a>[m
[31m-                  <a class="dropdown-item" href="#">Discord</a>[m
[31m-                  <div class="dropdown-divider"></div>[m
[31m-                  <a class="dropdown-item" href="https://www.youtube.com/channel/UCBzptjjkWSxLDZQ8ih5Npdw">Youtube</a>[m
[31m-              </div>[m
[31m-          </div>[m
[31m-          <div class="nav-item">[m
[31m-              <a class="nav-link" href="#">About</a>[m
[31m-          </div>[m
[31m-       <button class="btn login-btn btn-outline-accent my-2 my-sm-0" style="font-size: 10px !important;font-family: poppins !important;">LOGIN</button>[m
[31m-   </div>[m
[31m-</nav>[m
[31m-<script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>[m
[31m-<script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script>[m
[31m-<script src="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>[m
[31m-<script src="js/now-ui-kit.min.js"></script>[m
[31m-</body>[m
[31m-[m
[31m-</html>[m
[1mdiff --git a/Page/Testando.html b/Page/Testando.html[m
[1mdeleted file mode 100644[m
[1mindex bbda50b..0000000[m
[1m--- a/Page/Testando.html[m
[1m+++ /dev/null[m
[36m@@ -1,69 +0,0 @@[m
[31m-<!DOCTYPE html>[m
[31m-<html>[m
[31m-[m
[31m-   <head>[m
[31m-      <meta charset="UTF-8">[m
[31m-      <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">[m
[31m-      <link rel="stylesheet" href="../css/bootstrap.min.css">[m
[31m-      <link rel="stylesheet" href="../css/testando.css">[m
[31m-      <link rel="stylesheet" href="../css/now-ui-kit.css">[m
[31m-      <link href="https://fonts.googleapis.com/css?family=Poppins:300,400,600,700,800,900&display=swap" rel="stylesheet">[m
[31m-      <link href="https://fonts.googleapis.com/css?family=Montserrat:400,600,700,800,900&display=swap" rel="stylesheet">[m
[31m-      <link href="https://fonts.googleapis.com/css?family=Lato:300,400,600,700,800,900&display=swap" rel="stylesheet">[m
[31m-      <title>TwT - Devs</title>[m
[31m-  </head>[m
[31m-[m
[31m-  <body>[m
[31m-   <nav class="navbar navbar-expand-lg bg-transparent">[m
[31m-       <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">[m
[31m-             <img src="../assets/menuIcon.svg" width="20px" height="20px" style="max-width: none !important;">[m
[31m-         </button>[m
[31m-         <img src="assets/BotLogo.png" width="50" height="50">[m
[31m-         <div class="collapse navbar-collapse" id="navbarSupportedContent" style="margin-left: 20px !important">[m
[31m-             <ul class="navbar-nav mr-auto">[m
[31m-                 <li class="nav-item active">[m
[31m-                     <a class="nav-link" href="../index.html">Home <span class="sr-only">(current)</span></a>[m
[31m-                 </li>[m
[31m-                 <li class="nav-item">[m
[31m-                     <a class="nav-link" href="Discord.html">discord</a>[m
[31m-                 </li>[m
[31m-                 <li class="nav-item">[m
[31m-                     <a class="nav-link" href="Testando.html">TestArea</a>[m
[31m-                 <!--</li>[m
[31m-                 <li class="nav-item">[m
[31m-                     <a class="nav-link" href="Bot.html">TwT_Page</a>[m
[31m-                 </li>-->[m
[31m-                 <!--<li>[m
[31m-                    <a class="nav-link" href="../animes.html">Anime</a>[m
[31m-                 </li>-->[m
[31m-                 <!--<li>[m
[31m-                    <a class="nav-link" href="pingu.html">Pingu</a>[m
[31m-                 </li>-->[m
[31m-             </ul>[m
[31m-             <div class="nav-item dropdown">[m
[31m-                 <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">[m
[31m-                     Rede social[m
[31m-                 </a>[m
[31m-                 <div class="dropdown-menu" aria-labelledby="navbarDropdown">[m
[31m-                     <a class="dropdown-item" href="https://www.instagram.com/littlesadfelipe.m/?hl=pt-br">Instagram</a>[m
[31m-                     <a class="dropdown-item" href="#">Discord</a>[m
[31m-                     <div class="dropdown-divider"></div>[m
[31m-                     <a class="dropdown-item" href="https://www.youtube.com/channel/UCBzptjjkWSxLDZQ8ih5Npdw">Youtube</a>[m
[31m-                 </div>[m
[31m-             </div>[m
[31m-             <div class="nav-item">[m
[31m-                 <a class="nav-link" href="../about.html">About</a>[m
[31m-             </div>[m
[31m-          <button class="btn login-btn btn-outline-accent my-2 my-sm-0" style="font-size: 10px !important;font-family: poppins !important;"><a href="../Security/loginpage.php">LOGIN</a></button>[m
[31m-      </div>[m
[31m-   </nav>[m
[31m-   <div>[m
[31m-      <a href="https://Twitch.tv/saddocinho"><img class="Img" src="https://d29fhpw069ctt2.cloudfront.net/icon/image/38838/preview.svg"> Minha twitch</a>[m
[31m-   </div>[m
[31m-   <script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>[m
[31m-   <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script>[m
[31m-   <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>[m
[31m-   <script src="js/now-ui-kit.min.js"></script>[m
[31m-   </body>[m
[31m-[m
[31m-</html>[m
\ No newline at end of file[m
[1mdiff --git a/Page/features/features.html b/Page/features/features.html[m
[1mdeleted file mode 100644[m
[1mindex e69de29..0000000[m
[1mdiff --git a/Page/pingu.html b/Page/pingu.html[m
[1mdeleted file mode 100644[m
[1mindex 467bd90..0000000[m
[1m--- a/Page/pingu.html[m
[1m+++ /dev/null[m
[36m@@ -1,213 +0,0 @@[m
[31m-<!DOCTYPE html>[m
[31m-<html lang="en">[m
[31m-<head>[m
[31m-    <meta charset="UTF-8">[m
[31m-    <meta http-equiv="X-UA-Compatible" content="IE=edge">[m
[31m-    <meta name="viewport" content="width=device-width, initial-scale=1.0">[m
[31m-    <title>Document</title>[m
[31m-</head>[m
[31m-<body>[m
[31m-    [m
[31m-</body>[m
[31m-<style>[m
[31m-    .penguin {[m
[31m-  [m
[31m-      /* Only change code below this line */[m
[31m-      --penguin-skin: black;[m
[31m-      --penguin-belly: white;[m
[31m-      --penguin-beak: orange;[m
[31m-      /* Only change code above this line */[m
[31m-  [m
[31m-      position: relative;[m
[31m-      margin: auto;[m
[31m-      display: block;[m
[31m-      margin-top: 5%;[m
[31m-      width: 300px;[m
[31m-      height: 300px;[m
[31m-    }[m
[31m-  [m
[31m-    .penguin-top {[m
[31m-      top: 10%;[m
[31m-      left: 25%;[m
[31m-      background: var(--penguin-skin, gray);[m
[31m-      width: 50%;[m
[31m-      height: 45%;[m
[31m-      border-radius: 70% 70% 60% 60%;[m
[31m-    }[m
[31m-  [m
[31m-    .penguin-bottom {[m
[31m-      top: 40%;[m
[31m-      left: 23.5%;[m
[31m-      background: var(--penguin-skin, gray);[m
[31m-      width: 53%;[m
[31m-      height: 45%;[m
[31m-      border-radius: 70% 70% 100% 100%;[m
[31m-    }[m
[31m-  [m
[31m-    .right-hand {[m
[31m-      top: 0%;[m
[31m-      left: -5%;[m
[31m-      background: var(--penguin-skin, gray);[m
[31m-      width: 30%;[m
[31m-      height: 60%;[m
[31m-      border-radius: 30% 30% 120% 30%;[m
[31m-      transform: rotate(45deg);[m
[31m-      z-index: -1;[m
[31m-    }[m
[31m-  [m
[31m-    .left-hand {[m
[31m-      top: 0%;[m
[31m-      left: 75%;[m
[31m-      background: var(--penguin-skin, gray);[m
[31m-      width: 30%;[m
[31m-      height: 60%;[m
[31m-      border-radius: 30% 30% 30% 120%;[m
[31m-      transform: rotate(-45deg);[m
[31m-      z-index: -1;[m
[31m-    }[m
[31m-  [m
[31m-    .right-cheek {[m
[31m-      top: 15%;[m
[31m-      left: 35%;[m
[31m-      background: var(--penguin-belly, white);[m
[31m-      width: 60%;[m
[31m-      height: 70%;[m
[31m-      border-radius: 70% 70% 60% 60%;[m
[31m-    }[m
[31m-  [m
[31m-    .left-cheek {[m
[31m-      top: 15%;[m
[31m-      left: 5%;[m
[31m-      background: var(--penguin-belly, white);[m
[31m-      width: 60%;[m
[31m-      height: 70%;[m
[31m-      border-radius: 70% 70% 60% 60%;[m
[31m-    }[m
[31m-  [m
[31m-    .belly {[m
[31m-      top: 60%;[m
[31m-      left: 2.5%;[m
[31m-      background: var(--penguin-belly, white);[m
[31m-      width: 95%;[m
[31m-      height: 100%;[m
[31m-      border-radius: 120% 120% 100% 100%;[m
[31m-    }[m
[31m-  [m
[31m-    .right-feet {[m
[31m-      top: 85%;[m
[31m-      left: 60%;[m
[31m-      background: var(--penguin-beak, orange);[m
[31m-      width: 15%;[m
[31m-      height: 30%;[m
[31m-      border-radius: 50% 50% 50% 50%;[m
[31m-      transform: rotate(-80deg);[m
[31m-      z-index: -2222;[m
[31m-    }[m
[31m-  [m
[31m-    .left-feet {[m
[31m-      top: 85%;[m
[31m-      left: 25%;[m
[31m-      background: var(--penguin-beak, orange);[m
[31m-      width: 15%;[m
[31m-      height: 30%;[m
[31m-      border-radius: 50% 50% 50% 50%;[m
[31m-      transform: rotate(80deg);[m
[31m-      z-index: -2222;[m
[31m-    }[m
[31m-  [m
[31m-    .right-eye {[m
[31m-      top: 45%;[m
[31m-      left: 60%;[m
[31m-      background: black;[m
[31m-      width: 15%;[m
[31m-      height: 17%;[m
[31m-      border-radius: 50%;[m
[31m-    }[m
[31m-  [m
[31m-    .left-eye {[m
[31m-      top: 45%;[m
[31m-      left: 25%;[m
[31m-      background: black;[m
[31m-      width: 15%;[m
[31m-      height: 17%;[m
[31m-      border-radius: 50%;[m
[31m-    }[m
[31m-  [m
[31m-    .sparkle {[m
[31m-      top: 25%;[m
[31m-      left: 15%;[m
[31m-      background: white;[m
[31m-      width: 35%;[m
[31m-      height: 35%;[m
[31m-      border-radius: 50%;[m
[31m-    }[m
[31m-  [m
[31m-    .blush-right {[m
[31m-      top: 65%;[m
[31m-      left: 15%;[m
[31m-      background: pink;[m
[31m-      width: 15%;[m
[31m-      height: 10%;[m
[31m-      border-radius: 50%;[m
[31m-    }[m
[31m-  [m
[31m-    .blush-left {[m
[31m-      top: 65%;[m
[31m-      left: 70%;[m
[31m-      background: pink;[m
[31m-      width: 15%;[m
[31m-      height: 10%;[m
[31m-      border-radius: 50%;[m
[31m-    }[m
[31m-  [m
[31m-    .beak-top {[m
[31m-      top: 60%;[m
[31m-      left: 40%;[m
[31m-      background: var(--penguin-beak, orange);[m
[31m-      width: 20%;[m
[31m-      height: 10%;[m
[31m-      border-radius: 50%;[m
[31m-    }[m
[31m-  [m
[31m-    .beak-bottom {[m
[31m-      top: 65%;[m
[31m-      left: 42%;[m
[31m-      background: var(--penguin-beak, orange);[m
[31m-      width: 16%;[m
[31m-      height: 10%;[m
[31m-      border-radius: 50%;[m
[31m-    }[m
[31m-  [m
[31m-    body {[m
[31m-      background:#c6faf1;[m
[31m-    }[m
[31m-  [m
[31m-    .penguin * {[m
[31m-      position: absolute;[m
[31m-    }[m
[31m-  </style>[m
[31m-  <div class="penguin">[m
[31m-    <div class="penguin-bottom">[m
[31m-      <div class="right-hand"></div>[m
[31m-      <div class="left-hand"></div>[m
[31m-      <div class="right-feet"></div>[m
[31m-      <div class="left-feet"></div>[m
[31m-    </div>[m
[31m-    <div class="penguin-top">[m
[31m-      <div class="right-cheek"></div>[m
[31m-      <div class="left-cheek"></div>[m
[31m-      <div class="belly"></div>[m
[31m-      <div class="right-eye">[m
[31m-        <div class="sparkle"></div>[m
[31m-      </div>[m
[31m-      <div class="left-eye">[m
[31m-        <div class="sparkle"></div>[m
[31m-      </div>[m
[31m-      <div class="blush-right"></div>[m
[31m-      <div class="blush-left"></div>[m
[31m-      <div class="beak-top"></div>[m
[31m-      <div class="beak-bottom"></div>[m
[31m-    </div>[m
[31m-  </div>[m
[31m-  [m
[31m-  </html>[m
\ No newline at end of file[m
[1mdiff --git a/Page/pingu2.html b/Page/pingu2.html[m
[1mdeleted file mode 100644[m
[1mindex ef757dc..0000000[m
[1m--- a/Page/pingu2.html[m
[1m+++ /dev/null[m
[36m@@ -1,240 +0,0 @@[m
[31m-<!DOCTYPE html>[m
[31m-<html lang="en">[m
[31m-<head>[m
[31m-    <meta charset="UTF-8">[m
[31m-    <meta http-equiv="X-UA-Compatible" content="IE=edge">[m
[31m-    <meta name="viewport" content="width=device-width, initial-scale=1.0">[m
[31m-    <title>Document</title>[m
[31m-</head>[m
[31m-<body>[m
[31m-    [m
[31m-</body>[m
[31m-<style>[m
[31m-    :root {[m
[31m-      --penguin-size: 300px;[m
[31m-      --penguin-skin: gray;[m
[31m-      --penguin-belly: white;[m
[31m-      --penguin-beak: orange;[m
[31m-    }[m
[31m-  [m
[31m-    @media (max-width: 350px) {[m
[31m-      :root {[m
[31m-        /* Only change code below this line */[m
[31m-  [m
[31m-        /* Only change code above this line */[m
[31m-      }[m
[31m-    }[m
[31m-  [m
[31m-    .penguin {[m
[31m-      position: relative;[m
[31m-      margin: auto;[m
[31m-      display: block;[m
[31m-      margin-top: 5%;[m
[31m-      width: var(--penguin-size, 300px);[m
[31m-      height: var(--penguin-size, 300px);[m
[31m-    }[m
[31m-  [m
[31m-    .right-cheek {[m
[31m-      top: 15%;[m
[31m-      left: 35%;[m
[31m-      background: var(--penguin-belly, white);[m
[31m-      width: 60%;[m
[31m-      height: 70%;[m
[31m-      border-radius: 70% 70% 60% 60%;[m
[31m-    }[m
[31m-  [m
[31m-    .left-cheek {[m
[31m-      top: 15%;[m
[31m-      left: 5%;[m
[31m-      background: var(--penguin-belly, white);[m
[31m-      width: 60%;[m
[31m-      height: 70%;[m
[31m-      border-radius: 70% 70% 60% 60%;[m
[31m-    }[m
[31m-  [m
[31m-    .belly {[m
[31m-      top: 60%;[m
[31m-      left: 2.5%;[m
[31m-      background: var(--penguin-belly, white);[m
[31m-      width: 95%;[m
[31m-      height: 100%;[m
[31m-      border-radius: 120% 120% 100% 100%;[m
[31m-    }[m
[31m-  [m
[31m-    .penguin-top {[m
[31m-      top: 10%;[m
[31m-      left: 25%;[m
[31m-      background: var(--penguin-skin, gray);[m
[31m-      width: 50%;[m
[31m-      height: 45%;[m
[31m-      border-radius: 70% 70% 60% 60%;[m
[31m-    }[m
[31m-  [m
[31m-    .penguin-bottom {[m
[31m-      top: 40%;[m
[31m-      left: 23.5%;[m
[31m-      background: var(--penguin-skin, gray);[m
[31m-      width: 53%;[m
[31m-      height: 45%;[m
[31m-      border-radius: 70% 70% 100% 100%;[m
[31m-    }[m
[31m-  [m
[31m-    .right-hand {[m
[31m-      top: 5%;[m
[31m-      left: 25%;[m
[31m-      background: var(--penguin-skin, black);[m
[31m-      width: 30%;[m
[31m-      height: 60%;[m
[31m-      border-radius: 30% 30% 120% 30%;[m
[31m-      transform: rotate(130deg);[m
[31m-      z-index: -1;[m
[31m-      animation-duration: 3s;[m
[31m-      animation-name: wave;[m
[31m-      animation-iteration-count: infinite;[m
[31m-      transform-origin:0% 0%;[m
[31m-      animation-timing-function: linear;[m
[31m-    }[m
[31m-  [m
[31m-    @keyframes wave {[m
[31m-        10% {[m
[31m-          transform: rotate(110deg);[m
[31m-        }[m
[31m-        20% {[m
[31m-          transform: rotate(130deg);[m
[31m-        }[m
[31m-        30% {[m
[31m-          transform: rotate(110deg);[m
[31m-        }[m
[31m-        40% {[m
[31m-          transform: rotate(130deg);[m
[31m-        }[m
[31m-      }[m
[31m-  [m
[31m-    .left-hand {[m
[31m-      top: 0%;[m
[31m-      left: 75%;[m
[31m-      background: var(--penguin-skin, gray);[m
[31m-      width: 30%;[m
[31m-      height: 60%;[m
[31m-      border-radius: 30% 30% 30% 120%;[m
[31m-      transform: rotate(-45deg);[m
[31m-      z-index: -1;[m
[31m-    }[m
[31m-  [m
[31m-    .right-feet {[m
[31m-      top: 85%;[m
[31m-      left: 60%;[m
[31m-      background: var(--penguin-beak, orange);[m
[31m-      width: 15%;[m
[31m-      height: 30%;[m
[31m-      border-radius: 50% 50% 50% 50%;[m
[31m-      transform: rotate(-80deg);[m
[31m-      z-index: -2222;[m
[31m-    }[m
[31m-  [m
[31m-    .left-feet {[m
[31m-      top: 85%;[m
[31m-      left: 25%;[m
[31m-      background: var(--penguin-beak, orange);[m
[31m-      width: 15%;[m
[31m-      height: 30%;[m
[31m-      border-radius: 50% 50% 50% 50%;[m
[31m-      transform: rotate(80deg);[m
[31m-      z-index: -2222;[m
[31m-    }[m
[31m-  [m
[31m-    .right-eye {[m
[31m-      top: 45%;[m
[31m-      left: 60%;[m
[31m-      background: black;[m
[31m-      width: 15%;[m
[31m-      height: 17%;[m
[31m-      border-radius: 50%;[m
[31m-    }[m
[31m-  [m
[31m-    .left-eye {[m
[31m-      top: 45%;[m
[31m-      left: 25%;[m
[31m-      background: black;[m
[31m-      width: 15%;[m
[31m-      height: 17%;[m
[31m-      border-radius: 50%;[m
[31m-    }[m
[31m-  [m
[31m-    .sparkle {[m
[31m-      top: 25%;[m
[31m-      left:-23%;[m
[31m-      background: white;[m
[31m-      width: 150%;[m
[31m-      height: 100%;[m
[31m-      border-radius: 50%;[m
[31m-    }[m
[31m-  [m
[31m-    .blush-right {[m
[31m-      top: 65%;[m
[31m-      left: 15%;[m
[31m-      background: pink;[m
[31m-      width: 15%;[m
[31m-      height: 10%;[m
[31m-      border-radius: 50%;[m
[31m-    }[m
[31m-  [m
[31m-    .blush-left {[m
[31m-      top: 65%;[m
[31m-      left: 70%;[m
[31m-      background: pink;[m
[31m-      width: 15%;[m
[31m-      height: 10%;[m
[31m-      border-radius: 50%;[m
[31m-    }[m
[31m-  [m
[31m-    .beak-top {[m
[31m-      top: 60%;[m
[31m-      left: 40%;[m
[31m-      background: var(--penguin-beak, orange);[m
[31m-      width: 20%;[m
[31m-      height: 10%;[m
[31m-      border-radius: 50%;[m
[31m-    }[m
[31m-  [m
[31m-    .beak-bottom {[m
[31m-      top: 65%;[m
[31m-      left: 42%;[m
[31m-      background: var(--penguin-beak, orange);[m
[31m-      width: 16%;[m
[31m-      height: 10%;[m
[31m-      border-radius: 50%;[m
[31m-    }[m
[31m-  [m
[31m-    body {[m
[31m-      background:#c6faf1;[m
[31m-    }[m
[31m-  [m
[31m-    .penguin * {[m
[31m-      position: absolute;[m
[31m-    }[m
[31m-  </style>[m
[31m-  <div class="penguin">[m
[31m-    <div class="penguin-bottom">[m
[31m-      <div class="right-hand"></div>[m
[31m-      <div class="left-hand"></div>[m
[31m-      <div class="right-feet"></div>[m
[31m-      <div class="left-feet"></div>[m
[31m-    </div>[m
[31m-    <div class="penguin-top">[m
[31m-      <div class="right-cheek"></div>[m
[31m-      <div class="left-cheek"></div>[m
[31m-      <div class="belly"></div>[m
[31m-      <div class="right-eye">[m
[31m-        <div class="sparkle"></div>[m
[31m-      </div>[m
[31m-      <div class="left-eye">[m
[31m-        <div class="sparkle"></div>[m
[31m-      </div>[m
[31m-      <div class="blush-right"></div>[m
[31m-      <div class="blush-left"></div>[m
[31m-      <div class="beak-top"></div>[m
[31m-      <div class="beak-bottom"></div>[m
[31m-    </div>[m
[31m-  </div>[m
[31m-</html>[m
\ No newline at end of file[m
[1mdiff --git a/Security/connection.php b/Security/connection.php[m
[1mdeleted file mode 100644[m
[1mindex d6a60b5..0000000[m
[1m--- a/Security/connection.php[m
[1m+++ /dev/null[m
[36m@@ -1,7 +0,0 @@[m
[31m-<?php[m
[31m-define('HOST', '127.0.0.1');[m
[31m-define('USER', 'root');[m
[31m-define('PASSWORD', '');[m
[31m-define('DB', 'login');[m
[31m-[m
[31m-$connection = mysqli_connect(HOST, USER, PASSWORD, DB) or die ('Não conectou');[m
\ No newline at end of file[m
[1mdiff --git a/Security/login.php b/Security/login.php[m
[1mdeleted file mode 100644[m
[1mindex 303eb6b..0000000[m
[1m--- a/Security/login.php[m
[1m+++ /dev/null[m
[36m@@ -1,27 +0,0 @@[m
[31m-<?php[m
[31m-session_start();[m
[31m-include('connection.php');[m
[31m-[m
[31m-if(empty($_POST['user']) || empty($_POST['password'])) {[m
[31m-    header('Location: index.php');[m
[31m-    exit();[m
[31m-}[m
[31m-[m
[31m-$user = mysqli_real_escape_string($connection, $_POST['user']);[m
[31m-$password = mysqli_real_escape_string($connection, $_POST['password']);[m
[31m-[m
[31m-$query = "select User_ID, user from user where user = '{$user}' and password = md5('{$password}')";[m
[31m-[m
[31m-$result = mysqli_query($connection, $query);[m
[31m-[m
[31m-$row = mysqli_num_rows($result);[m
[31m-[m
[31m-if($row == 1) {[m
[31m-    $_SESSION['user'] = $user;[m
[31m-    header('Location: panel.php');[m
[31m-    exit();[m
[31m-} else {[m
[31m-    $_SESSION['nao_autenticado'] = true;[m
[31m-    header('Location: index.php');[m
[31m-    exit();[m
[31m-}[m
\ No newline at end of file[m
[1mdiff --git a/Security/loginpage.php b/Security/loginpage.php[m
[1mdeleted file mode 100644[m
[1mindex 3cc0554..0000000[m
[1m--- a/Security/loginpage.php[m
[1m+++ /dev/null[m
[36m@@ -1,57 +0,0 @@[m
[31m-<?php[m
[31m-session_start();[m
[31m-?>[m
[31m-[m
[31m-<!DOCTYPE html>[m
[31m-<html>[m
[31m-    [m
[31m-<head>[m
[31m-    <meta charset="utf-8">[m
[31m-    <meta http-equiv="X-UA-Compatible" content="IE=edge">[m
[31m-    <meta name="viewport" content="width=device-width, initial-scale=1">[m
[31m-    <title>Sistema de Login - PHP + MySQL - Canal TI</title>[m
[31m-    <link href="https://fonts.googleapis.com/css?family=Open+Sans:300,400,700" rel="stylesheet">[m
[31m-    <link rel="stylesheet" href="../css/bulma.min.css" />[m
[31m-    <link rel="stylesheet" type="text/css" href="../css/login.css">[m
[31m-</head>[m
[31m-[m
[31m-<body>[m
[31m-    <section class="hero is-success is-fullheight">[m
[31m-        <div class="hero-body">[m
[31m-            <div class="container has-text-centered">[m
[31m-                <div class="column is-4 is-offset-4">[m
[31m-                    <h3 class="title has-text-grey">Faça seu</h3>[m
[31m-                    <h3 class="title has-text-grey"><a href="#" target="_blank">Login</a></h3>[m
[31m-                    <?php[m
[31m-                    if(isset($_SESSION['nao_autenticado'])):[m
[31m-                    ?>[m
[31m-                    <div class="notification is-danger">[m
[31m-                      <p>ERRO: Usuário ou senha inválidos.</p>[m
[31m-                    </div>[m
[31m-                    <?php[m
[31m-                    endif;[m
[31m-                    unset($_SESSION['nao_autenticado']);[m
[31m-                    ?>[m
[31m-                    <div class="box">[m
[31m-                        <form action="login.php" method="POST">[m
[31m-                            <div class="field">[m
[31m-                                <div class="control">[m
[31m-                                    <input name="user" name="text" class="input is-large" placeholder="Seu usuário" autofocus="">[m
[31m-                                </div>[m
[31m-                            </div>[m
[31m-[m
[31m-                            <div class="field">[m
[31m-                                <div class="control">[m
[31m-                                    <input name="password" class="input is-large" type="password" placeholder="Sua password">[m
[31m-                                </div>[m
[31m-                            </div>[m
[31m-                            <button type="submit" class="button is-block is-link is-large is-fullwidth">Entrar</button>[m
[31m-                        </form>[m
[31m-                    </div>[m
[31m-                </div>[m
[31m-            </div>[m
[31m-        </div>[m
[31m-    </section>[m
[31m-</body>[m
[31m-[m
[31m-</html>[m
\ No newline at end of file[m
[1mdiff --git a/Security/logout.php b/Security/logout.php[m
[1mdeleted file mode 100644[m
[1mindex 029cf45..0000000[m
[1m--- a/Security/logout.php[m
[1m+++ /dev/null[m
[36m@@ -1,5 +0,0 @@[m
[31m-<?php[m
[31m-session_start();[m
[31m-session_destroy();[m
[31m-header('Location: index.php');[m
[31m-exit();[m
\ No newline at end of file[m
[1mdiff --git a/Security/panel.php b/Security/panel.php[m
[1mdeleted file mode 100644[m
[1mindex c7697bf..0000000[m
[1m--- a/Security/panel.php[m
[1m+++ /dev/null[m
[36m@@ -1,7 +0,0 @@[m
[31m-<?php[m
[31m-session_start();[m
[31m-include('verify_login.php');[m
[31m-?>[m
[31m-[m
[31m-<h2>Olá <?php echo $_SESSION['user'];?></h2>[m
[31m-<h2><a href="logout.php">Sair</a></h2>[m
\ No newline at end of file[m
[1mdiff --git a/Security/verify_login.php b/Security/verify_login.php[m
[1mdeleted file mode 100644[m
[1mindex 783fddf..0000000[m
[1m--- a/Security/verify_login.php[m
[1m+++ /dev/null[m
[36m@@ -1,6 +0,0 @@[m
[31m-<?php[m
[31m-session_start();[m
[31m-if(!$_SESSION['user']) { [m
[31m-    header('Location: index.php');[m
[31m-    exit();[m
[31m-}[m
\ No newline at end of file[m
[1mdiff --git a/about.html b/about.html[m
[1mdeleted file mode 100644[m
[1mindex b3a65e4..0000000[m
[1m--- a/about.html[m
[1m+++ /dev/null[m
[36m@@ -1,61 +0,0 @@[m
[31m-<!DOCTYPE html>[m
[31m-<html lang="en">[m
[31m-<head>[m
[31m-      <meta charset="UTF-8">[m
[31m-      <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">[m
[31m-      <link rel="stylesheet" href="css/bootstrap.min.css">[m
[31m-      <link rel="stylesheet" href="css/about.css">[m
[31m-      <link rel="stylesheet" href="css/now-ui-kit.css">[m
[31m-      <link href="https://fonts.googleapis.com/css?family=Poppins:300,400,600,700,800,900&display=swap" rel="stylesheet">[m
[31m-      <link href="https://fonts.googleapis.com/css?family=Montserrat:400,600,700,800,900&display=swap" rel="stylesheet">[m
[31m-      <link href="https://fonts.googleapis.com/css?family=Lato:300,400,600,700,800,900&display=swap" rel="stylesheet">[m
[31m-      <title>TwT - Devs</title>[m
[31m-</head>[m
[31m-[m
[31m-    <body>[m
[31m-    <nav class="navbar navbar-expand-lg bg-transparent">[m
[31m-        <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">[m
[31m-              <img src="../assets/menuIcon.svg" width="20px" height="20px" style="max-width: none !important;">[m
[31m-          </button>[m
[31m-          <img src="assets/BotLogo.png" width="50" height="50">[m
[31m-          <div class="collapse navbar-collapse" id="navbarSupportedContent" style="margin-left: 20px !important">[m
[31m-              <ul class="navbar-nav mr-auto">[m
[31m-                  <li class="nav-item active">[m
[31m-                      <a class="nav-link" href="index.html">Home <span class="sr-only">(current)</span></a>[m
[31m-                  </li>[m
[31m-                  <li class="nav-item">[m
[31m-                      <a class="nav-link" href="Page/Discord.html">discord</a>[m
[31m-                  </li>[m
[31m-                  <li class="nav-item">[m
[31m-                      <a class="nav-link" href="Page/Testando.html">TestArea</a>[m
[31m-                  </li>[m
[31m-                  <li class="nav-item">[m
[31m-                      <a class="nav-link" href="Page/Bot.html">TwT_Page</a>[m
[31m-                  </li>[m
[31m-              </ul>[m
[31m-              <div class="nav-item dropdown">[m
[31m-                  <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">[m
[31m-                      Rede social[m
[31m-                  </a>[m
[31m-                  <div class="dropdown-menu" aria-labelledby="navbarDropdown">[m
[31m-                      <a class="dropdown-item" href="https://www.instagram.com/littlesadfelipe.m/?hl=pt-br">Instagram</a>[m
[31m-                      <a class="dropdown-item" href="#">Discord</a>[m
[31m-                      <div class="dropdown-divider"></div>[m
[31m-                      <a class="dropdown-item" href="https://www.youtube.com/channel/UCBzptjjkWSxLDZQ8ih5Npdw">Youtube</a>[m
[31m-                  </div>[m
[31m-              </div>[m
[31m-              <div class="nav-item">[m
[31m-                  <a class="nav-link" href="about.html">About</a>[m
[31m-              </div>[m
[31m-           <button class="btn login-btn btn-outline-accent my-2 my-sm-0" style="font-size: 10px !important;font-family: poppins !important;">LOGIN</button>[m
[31m-       </div>[m
[31m-    </nav>[m
[31m-    <div>[m
[31m-        About[m
[31m-    </div>[m
[31m-    <script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>[m
[31m-   <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script>[m
[31m-   <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>[m
[31m-   <script src="js/now-ui-kit.min.js"></script>[m
[31m-   </body>[m
[31m-</html>[m
\ No newline at end of file[m
[1mdiff --git a/anime/shingeki no kyoujin.html b/anime/shingeki no kyoujin.html[m
[1mdeleted file mode 100644[m
[1mindex e69de29..0000000[m
[1mdiff --git a/animes.html b/animes.html[m
[1mdeleted file mode 100644[m
[1mindex b786655..0000000[m
[1m--- a/animes.html[m
[1m+++ /dev/null[m
[36m@@ -1,15 +0,0 @@[m
[31m-<!DOCTYPE html>[m
[31m-<html lang="pt-br">[m
[31m-<head>[m
[31m-  <meta charset="UTF-8">[m
[31m-  <meta http-equiv="X-UA-Compatible" content="IE=edge">[m
[31m-  <meta name="viewport" content="width=device-width, initial-scale=1.0">[m
[31m-  <link rel="stylesheet" href="css/animes.css">[m
[31m-  <title>AnimeWebSite?</title>[m
[31m-</head>[m
[31m-<body>[m
[31m-  <div>[m
[31m-    [m
[31m-  </div>[m
[31m-</body>[m
[31m-</html>[m
\ No newline at end of file[m
[1mdiff --git a/assets/BotLogo.png b/assets/BotLogo.png[m
[1mdeleted file mode 100644[m
[1mindex 41f03a8..0000000[m
Binary files a/assets/BotLogo.png and /dev/null differ
[1mdiff --git a/assets/BotLogo.svg b/assets/BotLogo.svg[m
[1mdeleted file mode 100644[m
[1mindex c407ec4..0000000[m
[1m--- a/assets/BotLogo.svg[m
[1m+++ /dev/null[m
[36m@@ -1,4 +0,0 @@[m
[31m-<svg width="500" height="500" viewBox="0 0 500 500" fill="none" xmlns="http://www.w3.org/2000/svg">[m
[31m-<path d="M128.092 185.421C138.033 187.751 145.722 192.566 151.159 199.867C156.751 207.012 159.547 215.323 159.547 224.798C159.547 239.244 154.732 250.428 145.101 258.35C135.626 266.117 121.956 270 104.093 270H17.65V105.036H101.763C118.539 105.036 131.742 108.686 141.373 115.987C151.004 123.288 155.819 133.928 155.819 147.908C155.819 157.539 153.256 165.694 148.13 172.373C143.159 178.897 136.48 183.246 128.092 185.421ZM69.376 169.344H89.414C94.074 169.344 97.4913 168.412 99.666 166.548C101.996 164.684 103.161 161.81 103.161 157.927C103.161 153.888 101.996 150.937 99.666 149.073C97.4913 147.054 94.074 146.044 89.414 146.044H69.376V169.344ZM92.909 228.526C97.569 228.526 100.986 227.672 103.161 225.963C105.491 224.099 106.656 221.148 106.656 217.109C106.656 209.187 102.074 205.226 92.909 205.226H69.376V228.526H92.909ZM257.312 271.631C241.779 271.631 227.488 267.981 214.44 260.68C201.548 253.379 191.296 243.283 183.684 230.39C176.073 217.497 172.267 202.974 172.267 186.819C172.267 170.664 176.073 156.141 183.684 143.248C191.296 130.355 201.548 120.336 214.44 113.191C227.488 105.89 241.779 102.24 257.312 102.24C272.846 102.24 287.059 105.89 299.951 113.191C312.844 120.336 323.018 130.355 330.474 143.248C338.086 156.141 341.891 170.664 341.891 186.819C341.891 202.974 338.086 217.497 330.474 230.39C323.018 243.283 312.766 253.379 299.718 260.68C286.826 267.981 272.69 271.631 257.312 271.631ZM257.312 223.4C267.564 223.4 275.486 220.138 281.078 213.614C286.67 206.935 289.466 198.003 289.466 186.819C289.466 175.48 286.67 166.548 281.078 160.024C275.486 153.345 267.564 150.005 257.312 150.005C246.905 150.005 238.905 153.345 233.313 160.024C227.721 166.548 224.925 175.48 224.925 186.819C224.925 198.003 227.721 206.935 233.313 213.614C238.905 220.138 246.905 223.4 257.312 223.4ZM490.099 105.036V146.044H446.295V270H394.569V146.044H351.231V105.036H490.099Z" fill="white"/>[m
[31m-<path d="M28.6 378.792H64.744V387H18.52V286.344H28.6V378.792ZM124.345 388.008C115.033 388.008 106.585 385.848 99.0014 381.528C91.4174 377.112 85.4174 371.016 81.0014 363.24C76.6814 355.368 74.5214 346.488 74.5214 336.6C74.5214 326.712 76.6814 317.88 81.0014 310.104C85.4174 302.232 91.4174 296.136 99.0014 291.816C106.585 287.4 115.033 285.192 124.345 285.192C133.753 285.192 142.249 287.4 149.833 291.816C157.417 296.136 163.369 302.232 167.689 310.104C172.009 317.88 174.169 326.712 174.169 336.6C174.169 346.488 172.009 355.368 167.689 363.24C163.369 371.016 157.417 377.112 149.833 381.528C142.249 385.848 133.753 388.008 124.345 388.008ZM124.345 379.224C131.833 379.224 138.553 377.496 144.505 374.04C150.457 370.584 155.161 365.64 158.617 359.208C162.073 352.68 163.801 345.144 163.801 336.6C163.801 328.056 162.073 320.568 158.617 314.136C155.161 307.704 150.457 302.76 144.505 299.304C138.553 295.848 131.833 294.12 124.345 294.12C116.857 294.12 110.137 295.848 104.185 299.304C98.2334 302.76 93.5294 307.704 90.0734 314.136C86.6174 320.568 84.8894 328.056 84.8894 336.6C84.8894 345.144 86.6174 352.68 90.0734 359.208C93.5294 365.64 98.2334 370.584 104.185 374.04C110.137 377.496 116.857 379.224 124.345 379.224ZM271.814 315.72C268.934 309.096 264.518 303.912 258.566 300.168C252.71 296.328 245.798 294.408 237.83 294.408C230.342 294.408 223.622 296.136 217.67 299.592C211.718 303.048 207.014 307.992 203.558 314.424C200.102 320.76 198.374 328.152 198.374 336.6C198.374 345.048 200.102 352.488 203.558 358.92C207.014 365.352 211.718 370.296 217.67 373.752C223.622 377.208 230.342 378.936 237.83 378.936C244.838 378.936 251.126 377.448 256.694 374.472C262.358 371.4 266.87 367.08 270.23 361.512C273.686 355.848 275.654 349.272 276.134 341.784H233.798V333.576H286.79V340.92C286.31 349.752 283.91 357.768 279.59 364.968C275.27 372.072 269.462 377.688 262.166 381.816C254.966 385.944 246.854 388.008 237.83 388.008C228.518 388.008 220.07 385.848 212.486 381.528C204.902 377.112 198.902 371.016 194.486 363.24C190.166 355.368 188.006 346.488 188.006 336.6C188.006 326.712 190.166 317.88 194.486 310.104C198.902 302.232 204.902 296.136 212.486 291.816C220.07 287.4 228.518 285.192 237.83 285.192C248.582 285.192 257.99 287.88 266.054 293.256C274.118 298.632 279.974 306.12 283.622 315.72H271.814ZM350.47 388.008C341.158 388.008 332.71 385.848 325.126 381.528C317.542 377.112 311.542 371.016 307.126 363.24C302.806 355.368 300.646 346.488 300.646 336.6C300.646 326.712 302.806 317.88 307.126 310.104C311.542 302.232 317.542 296.136 325.126 291.816C332.71 287.4 341.158 285.192 350.47 285.192C359.878 285.192 368.374 287.4 375.958 291.816C383.542 296.136 389.494 302.232 393.814 310.104C398.134 317.88 400.294 326.712 400.294 336.6C400.294 346.488 398.134 355.368 393.814 363.24C389.494 371.016 383.542 377.112 375.958 381.528C368.374 385.848 359.878 388.008 350.47 388.008ZM350.47 379.224C357.958 379.224 364.678 377.496 370.63 374.04C376.582 370.584 381.286 365.64 384.742 359.208C388.198 352.68 389.926 345.144 389.926 336.6C389.926 328.056 388.198 320.568 384.742 314.136C381.286 307.704 376.582 302.76 370.63 299.304C364.678 295.848 357.958 294.12 350.47 294.12C342.982 294.12 336.262 295.848 330.31 299.304C324.358 302.76 319.654 307.704 316.198 314.136C312.742 320.568 311.014 328.056 311.014 336.6C311.014 345.144 312.742 352.68 316.198 359.208C319.654 365.64 324.358 370.584 330.31 374.04C336.262 377.496 342.982 379.224 350.47 379.224Z" fill="white"/>[m
[31m-</svg>[m
[1mdiff --git a/assets/BotLogoWord.svg b/assets/BotLogoWord.svg[m
[1mdeleted file mode 100644[m
[1mindex 3516984..0000000[m
[1m--- a/assets/BotLogoWord.svg[m
[1m+++ /dev/null[m
[36m@@ -1,6 +0,0 @@[m
[31m-<svg width="2136" height="500" viewBox="0 0 2136 500" fill="none" xmlns="http://www.w3.org/2000/svg">[m
[31m-<path d="M128.092 185.421C138.033 187.751 145.722 192.566 151.159 199.867C156.751 207.012 159.547 215.323 159.547 224.798C159.547 239.244 154.732 250.428 145.101 258.35C135.626 266.117 121.956 270 104.093 270H17.65V105.036H101.763C118.539 105.036 131.742 108.686 141.373 115.987C151.004 123.288 155.819 133.928 155.819 147.908C155.819 157.539 153.256 165.694 148.13 172.373C143.159 178.897 136.48 183.246 128.092 185.421ZM69.376 169.344H89.414C94.074 169.344 97.4913 168.412 99.666 166.548C101.996 164.684 103.161 161.81 103.161 157.927C103.161 153.888 101.996 150.937 99.666 149.073C97.4913 147.054 94.074 146.044 89.414 146.044H69.376V169.344ZM92.909 228.526C97.569 228.526 100.986 227.672 103.161 225.963C105.491 224.099 106.656 221.148 106.656 217.109C106.656 209.187 102.074 205.226 92.909 205.226H69.376V228.526H92.909ZM257.312 271.631C241.779 271.631 227.488 267.981 214.44 260.68C201.548 253.379 191.296 243.283 183.684 230.39C176.073 217.497 172.267 202.974 172.267 186.819C172.267 170.664 176.073 156.141 183.684 143.248C191.296 130.355 201.548 120.336 214.44 113.191C227.488 105.89 241.779 102.24 257.312 102.24C272.846 102.24 287.059 105.89 299.951 113.191C312.844 120.336 323.018 130.355 330.474 143.248C338.086 156.141 341.891 170.664 341.891 186.819C341.891 202.974 338.086 217.497 330.474 230.39C323.018 243.283 312.766 253.379 299.718 260.68C286.826 267.981 272.69 271.631 257.312 271.631ZM257.312 223.4C267.564 223.4 275.486 220.138 281.078 213.614C286.67 206.935 289.466 198.003 289.466 186.819C289.466 175.48 286.67 166.548 281.078 160.024C275.486 153.345 267.564 150.005 257.312 150.005C246.905 150.005 238.905 153.345 233.313 160.024C227.721 166.548 224.925 175.48 224.925 186.819C224.925 198.003 227.721 206.935 233.313 213.614C238.905 220.138 246.905 223.4 257.312 223.4ZM490.099 105.036V146.044H446.295V270H394.569V146.044H351.231V105.036H490.099Z" fill="white"/>[m
[31m-<path d="M808.092 225.421C818.033 227.751 825.722 232.566 831.159 239.867C836.751 247.012 839.547 255.323 839.547 264.798C839.547 279.244 834.732 290.428 825.101 298.35C815.626 306.117 801.956 310 784.093 310H697.65V145.036H781.763C798.539 145.036 811.742 148.686 821.373 155.987C831.004 163.288 835.819 173.928 835.819 187.908C835.819 197.539 833.256 205.694 828.13 212.373C823.159 218.897 816.48 223.246 808.092 225.421ZM749.376 209.344H769.414C774.074 209.344 777.491 208.412 779.666 206.548C781.996 204.684 783.161 201.81 783.161 197.927C783.161 193.888 781.996 190.937 779.666 189.073C777.491 187.054 774.074 186.044 769.414 186.044H749.376V209.344ZM772.909 268.526C777.569 268.526 780.986 267.672 783.161 265.963C785.491 264.099 786.656 261.148 786.656 257.109C786.656 249.187 782.074 245.226 772.909 245.226H749.376V268.526H772.909ZM937.312 311.631C921.779 311.631 907.488 307.981 894.44 300.68C881.548 293.379 871.296 283.283 863.684 270.39C856.073 257.497 852.267 242.974 852.267 226.819C852.267 210.664 856.073 196.141 863.684 183.248C871.296 170.355 881.548 160.336 894.44 153.191C907.488 145.89 921.779 142.24 937.312 142.24C952.846 142.24 967.059 145.89 979.951 153.191C992.844 160.336 1003.02 170.355 1010.47 183.248C1018.09 196.141 1021.89 210.664 1021.89 226.819C1021.89 242.974 1018.09 257.497 1010.47 270.39C1003.02 283.283 992.766 293.379 979.718 300.68C966.826 307.981 952.69 311.631 937.312 311.631ZM937.312 263.4C947.564 263.4 955.486 260.138 961.078 253.614C966.67 246.935 969.466 238.003 969.466 226.819C969.466 215.48 966.67 206.548 961.078 200.024C955.486 193.345 947.564 190.005 937.312 190.005C926.905 190.005 918.905 193.345 913.313 200.024C907.721 206.548 904.925 215.48 904.925 226.819C904.925 238.003 907.721 246.935 913.313 253.614C918.905 260.138 926.905 263.4 937.312 263.4ZM1170.1 145.036V186.044H1126.3V310H1074.57V186.044H1031.23V145.036H1170.1ZM1342.34 310H1290.61L1235.85 227.052V310H1184.13V145.036H1235.85L1290.61 229.382V145.036H1342.34V310ZM1471.49 285.069H1416.5L1408.34 310H1354.05L1414.4 145.036H1474.05L1534.16 310H1479.64L1471.49 285.069ZM1458.9 246.158L1443.99 200.257L1429.08 246.158H1458.9ZM1744.2 145.036V310H1692.71V227.751L1667.31 310H1623.04L1597.64 227.751V310H1545.92V145.036H1609.29L1645.64 244.061L1681.06 145.036H1744.2ZM1819.26 186.277V206.548H1870.52V245.459H1819.26V268.759H1877.51V310H1767.54V145.036H1877.51V186.277H1819.26Z" fill="white"/>[m
[31m-<path d="M28.6 378.792H64.744V387H18.52V286.344H28.6V378.792ZM124.345 388.008C115.033 388.008 106.585 385.848 99.0014 381.528C91.4174 377.112 85.4174 371.016 81.0014 363.24C76.6814 355.368 74.5214 346.488 74.5214 336.6C74.5214 326.712 76.6814 317.88 81.0014 310.104C85.4174 302.232 91.4174 296.136 99.0014 291.816C106.585 287.4 115.033 285.192 124.345 285.192C133.753 285.192 142.249 287.4 149.833 291.816C157.417 296.136 163.369 302.232 167.689 310.104C172.009 317.88 174.169 326.712 174.169 336.6C174.169 346.488 172.009 355.368 167.689 363.24C163.369 371.016 157.417 377.112 149.833 381.528C142.249 385.848 133.753 388.008 124.345 388.008ZM124.345 379.224C131.833 379.224 138.553 377.496 144.505 374.04C150.457 370.584 155.161 365.64 158.617 359.208C162.073 352.68 163.801 345.144 163.801 336.6C163.801 328.056 162.073 320.568 158.617 314.136C155.161 307.704 150.457 302.76 144.505 299.304C138.553 295.848 131.833 294.12 124.345 294.12C116.857 294.12 110.137 295.848 104.185 299.304C98.2334 302.76 93.5294 307.704 90.0734 314.136C86.6174 320.568 84.8894 328.056 84.8894 336.6C84.8894 345.144 86.6174 352.68 90.0734 359.208C93.5294 365.64 98.2334 370.584 104.185 374.04C110.137 377.496 116.857 379.224 124.345 379.224ZM271.814 315.72C268.934 309.096 264.518 303.912 258.566 300.168C252.71 296.328 245.798 294.408 237.83 294.408C230.342 294.408 223.622 296.136 217.67 299.592C211.718 303.048 207.014 307.992 203.558 314.424C200.102 320.76 198.374 328.152 198.374 336.6C198.374 345.048 200.102 352.488 203.558 358.92C207.014 365.352 211.718 370.296 217.67 373.752C223.622 377.208 230.342 378.936 237.83 378.936C244.838 378.936 251.126 377.448 256.694 374.472C262.358 371.4 266.87 367.08 270.23 361.512C273.686 355.848 275.654 349.272 276.134 341.784H233.798V333.576H286.79V340.92C286.31 349.752 283.91 357.768 279.59 364.968C275.27 372.072 269.462 377.688 262.166 381.816C254.966 385.944 246.854 388.008 237.83 388.008C228.518 388.008 220.07 385.848 212.486 381.528C204.902 377.112 198.902 371.016 194.486 363.24C190.166 355.368 188.006 346.488 188.006 336.6C188.006 326.712 190.166 317.88 194.486 310.104C198.902 302.232 204.902 296.136 212.486 291.816C220.07 287.4 228.518 285.192 237.83 285.192C248.582 285.192 257.99 287.88 266.054 293.256C274.118 298.632 279.974 306.12 283.622 315.72H271.814ZM350.47 388.008C341.158 388.008 332.71 385.848 325.126 381.528C317.542 377.112 311.542 371.016 307.126 363.24C302.806 355.368 300.646 346.488 300.646 336.6C300.646 326.712 302.806 317.88 307.126 310.104C311.542 302.232 317.542 296.136 325.126 291.816C332.71 287.4 341.158 285.192 350.47 285.192C359.878 285.192 368.374 287.4 375.958 291.816C383.542 296.136 389.494 302.232 393.814 310.104C398.134 317.88 400.294 326.712 400.294 336.6C400.294 346.488 398.134 355.368 393.814 363.24C389.494 371.016 383.542 377.112 375.958 381.528C368.374 385.848 359.878 388.008 350.47 388.008ZM350.47 379.224C357.958 379.224 364.678 377.496 370.63 374.04C376.582 370.584 381.286 365.64 384.742 359.208C388.198 352.68 389.926 345.144 389.926 336.6C389.926 328.056 388.198 320.568 384.742 314.136C381.286 307.704 376.582 302.76 370.63 299.304C364.678 295.848 357.958 294.12 350.47 294.12C342.982 294.12 336.262 295.848 330.31 299.304C324.358 302.76 319.654 307.704 316.198 314.136C312.742 320.568 311.014 328.056 311.014 336.6C311.014 345.144 312.742 352.68 316.198 359.208C319.654 365.64 324.358 370.584 330.31 374.04C336.262 377.496 342.982 379.224 350.47 379.224Z" fill="white"/>[m
[31m-<rect x="577" y="81" width="11" height="338" rx="5.5" fill="white" fill-opacity="0.32"/>[m
[31m-</svg>[m
[1mdiff --git a/assets/menuIcon.svg b/assets/menuIcon.svg[m
[1mdeleted file mode 100644[m
[1mindex 694f822..0000000[m
[1m--- a/assets/menuIcon.svg[m
[1m+++ /dev/null[m
[36m@@ -1,3 +0,0 @@[m
[31m-<svg width="445" height="334" viewBox="0 0 445 334" fill="none" xmlns="http://www.w3.org/2000/svg">[m
[31m-<path d="M445 66.8V0H0V66.8H445ZM445 200.4V133.6H0V200.4H445ZM445 334V267.2H0V334H445Z" fill="white"/>[m
[31m-</svg>[m
[1mdiff --git a/assets/wavy-blurple-by-nouridio.svg b/assets/wavy-blurple-by-nouridio.svg[m
[1mdeleted file mode 100644[m
[1mindex f111b4a..0000000[m
[1m--- a/assets/wavy-blurple-by-nouridio.svg[m
[1m+++ /dev/null[m
[36m@@ -1,3 +0,0 @@[m
[31m-<?xml version="1.0" encoding="UTF-8" standalone="no"?>[m
[31m-<!DOCTYPE svg PUBLIC "-//W3C//DTD SVG 1.1//EN" "http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd">[m
[31m-<svg version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" preserveAspectRatio="xMidYMid meet" viewBox="0 0 1440 900" width="1440" height="900"><defs><path d="M1398.95 869.86C1385.33 846.02 1350.51 847.41 1338.82 872.25C1334.37 881.69 1344.37 860.44 1338.82 872.25C1327.41 896.49 1296.48 903.95 1275.28 887.56C1256.04 872.7 1250.53 868.44 1234.02 855.68C1207.13 834.9 1167.77 846.81 1156.92 879.01C1153.17 890.14 1161.35 865.86 1156.92 879.01C1149 902.51 1117.94 907.44 1103.14 887.55C1092.08 872.68 1093.8 875 1082.71 860.09C1066.16 837.85 1032.28 839.68 1018.22 863.58C1011.64 874.76 1011.7 874.66 1002.67 890.02C995.55 902.12 977.67 900.85 972.32 887.87C966.18 872.95 968.26 878 963.99 867.63C953.74 842.74 920.82 837.46 903.3 857.9C895.96 866.47 910.96 848.97 903.3 857.9C884.16 880.23 849.49 879.84 830.86 857.08C819.22 842.85 830.18 856.25 821.08 845.13C797.87 816.77 753.37 820.8 735.62 852.86C730.32 862.44 732.76 858.03 722.79 876.05C716.68 887.09 700.94 887.47 694.3 876.73C686.44 864.03 686.67 864.4 681.05 855.31C668.68 835.31 639.94 834.35 626.27 853.48C616.83 866.68 613.56 871.26 603.19 885.76C593.8 898.9 573.29 894.86 569.59 879.13C566.49 865.95 569.24 877.62 566.78 867.15C562.19 847.65 536.16 843.71 526 860.98C519.12 872.68 522.89 866.26 515.1 879.52C504.55 897.45 478.63 897.45 468.08 879.52C460.28 866.26 467.69 878.86 461.72 868.7C447.46 844.46 412.14 845.25 398.98 870.11C393.75 879.98 405 858.73 398.98 870.11C388.62 889.67 360.14 888.23 351.8 867.73C347.37 856.83 354.12 873.41 349.43 861.9C343.25 846.69 321.21 848.35 317.37 864.31C314.71 875.34 317.84 862.32 314.89 874.59C311.3 889.49 290.95 891.57 284.43 877.7C278.36 864.81 284.06 876.91 279.05 866.27C269.48 845.94 240.32 846.66 231.77 867.44C227.48 877.84 233.24 863.86 228.03 876.51C221 893.6 197.24 894.74 188.6 878.41C181.69 865.38 182.74 867.35 175.84 854.32C167.8 839.14 145.44 841.24 140.37 857.65C135.61 873.05 136.3 870.81 131.85 885.21C126.27 903.28 101.57 905.46 92.91 888.64C85.15 873.56 89.24 881.51 82.4 868.23C71.74 847.51 41.44 849.65 33.79 871.67C25.41 895.8 -92.5 922.78 -126.02 1019.28C-26.15 1019.28 574.23 1022.31 1675.11 1028.37C1492.57 925.44 1400.52 872.61 1398.95 869.86Z" id="c1yTvaEcl4"></path></defs><g><g><g><use xlink:href="#c1yTvaEcl4" opacity="1" fill="#7289da" fill-opacity="1"></use><g><use xlink:href="#c1yTvaEcl4" opacity="1" fill-opacity="0" stroke="#000000" stroke-width="1" stroke-opacity="0"></use></g></g></g></g></svg>[m
\ No newline at end of file[m
[1mdiff --git a/assets/wavy-dark-by-nouridio.svg b/assets/wavy-dark-by-nouridio.svg[m
[1mdeleted file mode 100644[m
[1mindex 1580398..0000000[m
[1m--- a/assets/wavy-dark-by-nouridio.svg[m
[1m+++ /dev/null[m
[36m@@ -1,10 +0,0 @@[m
[31m-<svg width="1440" height="900" viewBox="0 0 1440 900" fill="none" xmlns="http://www.w3.org/2000/svg">[m
[31m-<g clip-path="url(#clip0)">[m
[31m-<path d="M1398.95 869.86C1385.33 846.02 1350.51 847.41 1338.82 872.25C1334.37 881.69 1344.37 860.44 1338.82 872.25C1327.41 896.49 1296.48 903.95 1275.28 887.56C1256.04 872.7 1250.53 868.44 1234.02 855.68C1207.13 834.9 1167.77 846.81 1156.92 879.01C1153.17 890.14 1161.35 865.86 1156.92 879.01C1149 902.51 1117.94 907.44 1103.14 887.55C1092.08 872.68 1093.8 875 1082.71 860.09C1066.16 837.85 1032.28 839.68 1018.22 863.58C1011.64 874.76 1011.7 874.66 1002.67 890.02C995.55 902.12 977.67 900.85 972.32 887.87C966.18 872.95 968.26 878 963.99 867.63C953.74 842.74 920.82 837.46 903.3 857.9C895.96 866.47 910.96 848.97 903.3 857.9C884.16 880.23 849.49 879.84 830.86 857.08C819.22 842.85 830.18 856.25 821.081 845.13C797.87 816.77 753.37 820.8 735.62 852.86C730.32 862.44 732.76 858.03 722.79 876.05C716.68 887.09 700.94 887.47 694.3 876.73C686.44 864.03 686.67 864.4 681.05 855.31C668.68 835.31 639.94 834.35 626.271 853.48C616.831 866.68 613.56 871.26 603.19 885.76C593.8 898.9 573.291 894.86 569.591 879.13C566.491 865.95 569.241 877.62 566.781 867.15C562.19 847.65 536.16 843.71 526 860.98C519.12 872.68 522.89 866.26 515.1 879.52C504.55 897.45 478.63 897.45 468.08 879.52C460.28 866.26 467.69 878.86 461.72 868.7C447.46 844.46 412.14 845.25 398.98 870.11C393.75 879.98 405 858.73 398.98 870.11C388.62 889.67 360.14 888.23 351.8 867.73C347.37 856.83 354.12 873.41 349.43 861.9C343.25 846.69 321.21 848.35 317.37 864.31C314.71 875.34 317.84 862.32 314.89 874.59C311.3 889.49 290.95 891.57 284.43 877.7C278.36 864.81 284.06 876.91 279.05 866.27C269.48 845.94 240.32 846.66 231.77 867.44C227.48 877.84 233.24 863.86 228.03 876.51C221 893.6 197.24 894.74 188.6 878.41C181.69 865.38 182.74 867.35 175.84 854.32C167.8 839.14 145.44 841.24 140.37 857.65C135.61 873.05 136.3 870.81 131.85 885.21C126.27 903.28 101.57 905.46 92.9105 888.64C85.1505 873.56 89.2405 881.51 82.4005 868.23C71.7405 847.51 41.4405 849.65 33.7905 871.67C25.4105 895.8 -92.4995 922.78 -126.02 1019.28C-26.1495 1019.28 574.23 1022.31 1675.11 1028.37C1492.57 925.44 1400.52 872.61 1398.95 869.86Z" fill="#1D1E28"/>[m
[31m-</g>[m
[31m-<defs>[m
[31m-<clipPath id="clip0">[m
[31m-<rect width="1440" height="900" fill="white"/>[m
[31m-</clipPath>[m
[31m-</defs>[m
[31m-</svg>[m
[1mdiff --git a/assets/wavy-light-by-nouridio.svg b/assets/wavy-light-by-nouridio.svg[m
[1mdeleted file mode 100644[m
[1mindex d5383aa..0000000[m
[1m--- a/assets/wavy-light-by-nouridio.svg[m
[1m+++ /dev/null[m
[36m@@ -1,10 +0,0 @@[m
[31m-<svg width="1440" height="900" viewBox="0 0 1440 900" fill="none" xmlns="http://www.w3.org/2000/svg">[m
[31m-<g clip-path="url(#clip0)">[m
[31m-<path d="M1244.4 827.441C1223.16 797.221 1168.85 798.983 1150.62 830.471C1143.68 842.437 1159.28 815.5 1150.62 830.471C1132.82 861.198 1084.58 870.654 1051.52 849.878C1021.51 831.041 1012.92 825.641 987.17 809.466C945.231 783.125 883.844 798.223 866.922 839.04C861.073 853.148 873.831 822.371 866.922 839.04C854.569 868.829 806.127 875.078 783.044 849.865C765.795 831.016 768.477 833.957 751.181 815.056C725.369 786.865 672.528 789.185 650.6 819.48C640.338 833.652 640.431 833.526 626.347 852.996C615.243 868.334 587.357 866.724 579.013 850.271C569.436 831.358 572.68 837.759 566.021 824.614C550.035 793.063 498.691 786.37 471.366 812.28C459.919 823.144 483.313 800.961 471.366 812.28C441.515 840.586 387.442 840.092 358.386 811.241C340.232 793.203 357.326 810.189 343.133 796.093C306.934 760.144 237.53 765.252 209.846 805.892C201.58 818.035 205.386 812.445 189.836 835.288C180.307 849.282 155.758 849.764 145.402 836.149C133.143 820.051 133.502 820.52 124.737 808.997C105.444 783.645 60.6202 782.428 39.3 806.678C24.577 823.41 19.4769 829.216 3.3035 847.596C-11.3415 864.252 -43.3296 859.131 -49.1003 839.192C-53.9352 822.485 -49.6462 837.278 -53.4829 824.006C-60.6416 799.287 -101.239 794.293 -117.085 816.185C-127.815 831.016 -121.935 822.878 -134.085 839.686C-150.539 862.414 -190.965 862.414 -207.419 839.686C-219.584 822.878 -208.027 838.85 -217.339 825.971C-239.579 795.244 -294.665 796.245 -315.19 827.758C-323.347 840.269 -305.801 813.332 -315.19 827.758C-331.348 852.552 -375.767 850.727 -388.774 824.741C-395.683 810.924 -385.156 831.941 -392.47 817.351C-402.109 798.07 -436.483 800.175 -442.472 820.406C-446.621 834.388 -441.739 817.883 -446.34 833.437C-451.939 852.324 -483.678 854.961 -493.847 837.379C-503.314 821.04 -494.424 836.378 -502.238 822.89C-517.163 797.12 -562.642 798.032 -575.977 824.373C-582.668 837.557 -573.685 819.835 -581.81 835.871C-592.775 857.534 -629.831 858.979 -643.307 838.279C-654.084 821.762 -652.446 824.259 -663.208 807.742C-675.747 788.5 -710.621 791.162 -718.528 811.964C-725.952 831.485 -724.876 828.645 -731.816 846.899C-740.519 869.805 -779.042 872.568 -792.549 851.247C-804.651 832.131 -798.272 842.209 -808.94 825.375C-825.566 799.11 -872.823 801.823 -884.754 829.735C-897.824 860.323 -1081.72 894.523 -1134 1016.85C-978.239 1016.85 -41.8636 1020.69 1675.11 1028.37C1390.41 897.895 1246.85 830.927 1244.4 827.441Z" fill="white" fill-opacity="0.05"/>[m
[31m-</g>[m
[31m-<defs>[m
[31m-<clipPath id="clip0">[m
[31m-<rect width="1440" height="900" fill="white"/>[m
[31m-</clipPath>[m
[31m-</defs>[m
[31m-</svg>[m
[1mdiff --git a/assets/wavy-purple-by-nouridio.svg b/assets/wavy-purple-by-nouridio.svg[m
[1mdeleted file mode 100644[m
[1mindex d81fe14..0000000[m
[1m--- a/assets/wavy-purple-by-nouridio.svg[m
[1m+++ /dev/null[m
[36m@@ -1,10 +0,0 @@[m
[31m-<svg width="1440" height="900" viewBox="0 0 1440 900" fill="none" xmlns="http://www.w3.org/2000/svg">[m
[31m-<g clip-path="url(#clip0)">[m
[31m-<path d="M1398.95 869.86C1385.33 846.02 1350.51 847.41 1338.82 872.25C1334.37 881.69 1344.37 860.44 1338.82 872.25C1327.41 896.49 1296.48 903.95 1275.28 887.56C1256.04 872.7 1250.53 868.44 1234.02 855.68C1207.13 834.9 1167.77 846.81 1156.92 879.01C1153.17 890.14 1161.35 865.86 1156.92 879.01C1149 902.51 1117.94 907.44 1103.14 887.55C1092.08 872.68 1093.8 875 1082.71 860.09C1066.16 837.85 1032.28 839.68 1018.22 863.58C1011.64 874.76 1011.7 874.66 1002.67 890.02C995.55 902.12 977.67 900.85 972.32 887.87C966.18 872.95 968.26 878 963.99 867.63C953.74 842.74 920.82 837.46 903.3 857.9C895.96 866.47 910.96 848.97 903.3 857.9C884.16 880.23 849.49 879.84 830.86 857.08C819.22 842.85 830.181 856.25 821.081 845.13C797.871 816.77 753.37 820.8 735.62 852.86C730.32 862.44 732.76 858.03 722.79 876.05C716.68 887.09 700.94 887.47 694.3 876.73C686.44 864.03 686.67 864.4 681.05 855.31C668.68 835.31 639.941 834.35 626.271 853.48C616.831 866.68 613.56 871.26 603.19 885.76C593.8 898.9 573.291 894.86 569.591 879.13C566.491 865.95 569.241 877.62 566.781 867.15C562.191 847.65 536.16 843.71 526 860.98C519.12 872.68 522.89 866.26 515.1 879.52C504.55 897.45 478.63 897.45 468.08 879.52C460.28 866.26 467.69 878.86 461.72 868.7C447.46 844.46 412.14 845.25 398.98 870.11C393.75 879.98 405 858.73 398.98 870.11C388.62 889.67 360.14 888.23 351.8 867.73C347.37 856.83 354.12 873.41 349.43 861.9C343.25 846.69 321.21 848.35 317.37 864.31C314.71 875.34 317.84 862.32 314.89 874.59C311.3 889.49 290.95 891.57 284.43 877.7C278.36 864.81 284.06 876.91 279.05 866.27C269.48 845.94 240.32 846.66 231.77 867.44C227.48 877.84 233.24 863.86 228.03 876.51C221 893.6 197.24 894.74 188.6 878.41C181.69 865.38 182.74 867.35 175.84 854.32C167.8 839.14 145.44 841.24 140.37 857.65C135.61 873.05 136.3 870.81 131.85 885.21C126.27 903.28 101.57 905.46 92.9105 888.64C85.1505 873.56 89.2405 881.51 82.4005 868.23C71.7405 847.51 41.4405 849.65 33.7905 871.67C25.4105 895.8 -92.4995 922.78 -126.02 1019.28C-26.1495 1019.28 574.23 1022.31 1675.11 1028.37C1492.57 925.44 1400.52 872.61 1398.95 869.86Z" fill="#AD91FF"/>[m
[31m-</g>[m
[31m-<defs>[m
[31m-<clipPath id="clip0">[m
[31m-<rect width="1440" height="900" fill="white"/>[m
[31m-</clipPath>[m
[31m-</defs>[m
[31m-</svg>[m
[1mdiff --git a/css/GameDev.css b/css/GameDev.css[m
[1mdeleted file mode 100644[m
[1mindex 4ed6483..0000000[m
[1m--- a/css/GameDev.css[m
[1m+++ /dev/null[m
[36m@@ -1,127 +0,0 @@[m
[31m-@import url('https://fonts.googleapis.com/css?family=Montserrat:600|open+sans:600&display=swap%27');[m
[31m-[m
[31m-* {[m
[31m-    margin: 0;[m
[31m-    padding: 0;[m
[31m-    text-decoration: none;[m
[31m-}[m
[31m-[m
[31m-.sidebar {[m
[31m-    position: fixed;[m
[31m-    width: 240px;[m
[31m-    left: -240px;[m
[31m-    height: 100%;[m
[31m-    background: #1e1e1e;[m
[31m-    transition: all .5s ease;[m
[31m-}[m
[31m-[m
[31m-.sidebar header {[m
[31m-    font-size: 24px;[m
[31m-    color: wheat;[m
[31m-    line-height: 70px;[m
[31m-    text-align: center;[m
[31m-    background: #1b1b1b;[m
[31m-    user-select: none;[m
[31m-    font-family: 'Montserrat', sans-serif;[m
[31m-}[m
[31m-[m
[31m-.sidebar a{[m
[31m-    display: block;[m
[31m-    height: 65px;[m
[31m-    width: 100%;[m
[31m-    color: white;[m
[31m-    line-height: 65px;[m
[31m-    padding-left: 30px;[m
[31m-    box-sizing: border-box;[m
[31m-    border-bottom: 1px solid black;[m
[31m-    border-top: 1px solid rgba(255, 255, 255,.1);[m
[31m-    border-left: 5px solid transparent;[m
[31m-    font-family: 'Open Sans', sans-serif;[m
[31m-    transition: all .5s ease;[m
[31m-}[m
[31m-[m
[31m-[m
[31m-a.active,a:hover{[m
[31m-    border-left: 5px solid #593632;[m
[31m-    color: #b93632;[m
[31m-}[m
[31m-[m
[31m-.sidebar a i{[m
[31m-    font-size: 23px;[m
[31m-    margin-right: 16px;[m
[31m-}[m
[31m-.sidebar a span{[m
[31m-    letter-spacing: 1px;[m
[31m-    text-transform: uppercase;[m
[31m-}[m
[31m-#check{[m
[31m-    display: none;[m
[31m-}[m
[31m-label #btn,label #cancel{[m
[31m-    position: absolute;[m
[31m-    cursor: pointer;[m
[31m-    color: white;[m
[31m-    border-radius: 5px;[m
[31m-    border: 1px solid #262626;[m
[31m-    margin: 15px 30ox;[m
[31m-    font-size: 28px;[m
[31m-    background: #262626;[m
[31m-    height: 45px;[m
[31m-    width: 45px;[m
[31m-    text-align: center;[m
[31m-    line-height: 45px;[m
[31m-    transition: all .5s ease;[m
[31m-}[m
[31m-[m
[31m-label #cancel{[m
[31m-    opacity: 0;[m
[31m-    visibility: hidden;[m
[31m-}[m
[31m-[m
[31m-#check:checked ~ .sidebar{[m
[31m-    left: 0;[m
[31m-}[m
[31m-[m
[31m-#check:checked ~ label #btn{[m
[31m-    margin-left: 245px;[m
[31m-    opacity: 0;[m
[31m-    visibility: hidden;[m
[31m-}[m
[31m-[m
[31m-@media(max-width: 860px){.sidebar{[m
[31m-    height: auto;[m
[31m-    width: 70px;[m
[31m-    left: 0;[m
[31m-    margin: 100px 0;[m
[31m-}[m
[31m-header,#btn,#cancel{[m
[31m-    display: none;[m
[31m-}[m
[31m-[m
[31m-span{[m
[31m-    position: absolute;[m
[31m-    margin-left: 23px;[m
[31m-    opacity: 0;[m
[31m-    visibility: hidden;[m
[31m-}[m
[31m-.sidebar a{[m
[31m-    height: 60px;[m
[31m-}[m
[31m-.sidebar a i{[m
[31m-    margin-left: -10px;[m
[31m-}[m
[31m-[m
[31m-a:hover {[m
[31m-    width: 200px;[m
[31m-    background: inherit;[m
[31m-}[m
[31m-[m
[31m-.sidebar a:hover span{[m
[31m-    opacity: 1;[m
[31m-    visibility: visible;[m
[31m-}[m
[31m-}[m
[31m-[m
[31m-p{[m
[31m-    margin-left: 250px;[m
[31m-}[m
\ No newline at end of file[m
[1mdiff --git a/css/about.css b/css/about.css[m
[1mdeleted file mode 100644[m
[1mindex b6ed07d..0000000[m
[1m--- a/css/about.css[m
[1m+++ /dev/null[m
[36m@@ -1,207 +0,0 @@[m
[31m-body {[m
[31m-    font-family: 'Poppins', sans-serif !important;[m
[31m-    background-color: #1D1E28;[m
[31m-    color: rgb(255, 255, 255);[m
[31m-    -webkit-font-smoothing: antialiased;[m
[31m-    -moz-osx-font-smoothing: grayscale;[m
[31m-    text-rendering: optimizeLegibility;[m
[31m-    border-top: 6px #527aff solid !important;[m
[31m-    font-size: 16px;[m
[31m-}[m
[31m-[m
[31m-.nav-link {[m
[31m-     font-size: 14px !important;[m
[31m-     background: transparent !important;[m
[31m-     font-family: Lato, sans-serif !important;[m
[31m-     text-transform: capitalize !important;[m
[31m- }[m
[31m- .nav-link:hover {[m
[31m-     background: transparent !important;[m
[31m-     color: #AD91FF !important;[m
[31m-     font-weight: bold !important;[m
[31m- }[m
[31m-[m
[31m- .login-btn {[m
[31m-     border: 2px solid #AD91FF !important;[m
[31m-     font-size: 10px !important;[m
[31m- }[m
[31m- .login-btn:hover {[m
[31m-     background: #AD91FF !important;[m
[31m- }[m
[31m-.navbar {[m
[31m-    box-shadow: none !important[m
[31m-}[m
[31m-[m
[31m-.navbar-brand {[m
[31m-    font-size: 25px !important[m
[31m-}[m
[31m-[m
[31m-.navbar-toggler-icon {[m
[31m-    color: #fff !important[m
[31m-}[m
[31m-[m
[31m-.btn {[m
[31m-    border-radius: 10px !important;[m
[31m-    font-size: 16px !important;[m
[31m-    font-weight: 600 !important;[m
[31m-    text-transform: uppercase !important;[m
[31m-}[m
[31m-[m
[31m-.btn-primary {[m
[31m-    background-color: #AD91FF!important[m
[31m-}[m
[31m-.btn-secondary {[m
[31m-    background-color: #2C2F33 !important[m
[31m-}[m
[31m-.heading {[m
[31m-    padding: 160px 50px !important;[m
[31m-    color: #fff !important;[m
[31m-    background-image: url("../assets/wavy-purple-by-nouridio.svg") !important;[m
[31m-    background-position: bottom !important;[m
[31m-    background-size: 300% !important;[m
[31m-    background-repeat: no-repeat !important;[m
[31m-}[m
[31m-[m
[31m-.title {[m
[31m-    line-height: 90px !important;[m
[31m-    margin-bottom: -2px !important;[m
[31m-    font-size: 36px !important[m
[31m-}[m
[31m-[m
[31m-.subtitle {[m
[31m-    color: rgba(255, 255, 255, 0.685) !important;[m
[31m-    font-size: 16px !important;[m
[31m-    font-family: 'Lato', sans-serif;[m
[31m-}[m
[31m-[m
[31m-[m
[31m-.features {[m
[31m-    text-align: center !important;[m
[31m-    background: #AD91FF !important;[m
[31m-    padding: 60px 50px !important;[m
[31m-    background-image: url("../assets/wavy-dark-by-nouridio.svg") !important;[m
[31m-    background-position: bottom !important;[m
[31m-    background-size: 200% !important;[m
[31m-    background-repeat: no-repeat !important;[m
[31m-}[m
[31m-.features .title {[m
[31m-    font-size: 40px !important;[m
[31m-    color: #ffffff !important;[m
[31m-    line-height: 70px !important;[m
[31m-}[m
[31m-[m
[31m-.features .subtitle {[m
[31m-    font-size: 20px !important;[m
[31m-    color: #a2a8bd;[m
[31m-}[m
[31m-[m
[31m-.features .card-body {[m
[31m-    text-align: left !important;[m
[31m-}[m
[31m-[m
[31m-.features .card-title {[m
[31m-    margin: 0 0 -3px !important;[m
[31m-}[m
[31m-.cards {[m
[31m-    margin-top: 30px !important;[m
[31m-}[m
[31m-[m
[31m-.card {[m
[31m-    border-radius: 5px !important;[m
[31m-    box-shadow: none !important;[m
[31m-}[m
[31m-[m
[31m-.card-title {[m
[31m-    font-size: 28px !important;[m
[31m-    font-weight: 600 !important;[m
[31m-    color: #AD91FF !important;[m
[31m-}[m
[31m-[m
[31m-.statistics {[m
[31m-    text-align: center !important;[m
[31m-    padding-top: 300px !important;[m
[31m-}[m
[31m-[m
[31m-.statistics .card-body{[m
[31m-    padding: 0 !important;[m
[31m-    height: 280 !important;[m
[31m-    width: 332 !important;[m
[31m-    max-height: 280 !important;[m
[31m-    max-width: 332 !important;[m
[31m-}[m
[31m-[m
[31m-.statistics .title {[m
[31m-    font-size: 40px !important;[m
[31m-    color: #ffffff !important;[m
[31m-    line-height: 70px !important;[m
[31m-}[m
[31m-[m
[31m-.statistics .subtitle {[m
[31m-    font-size: 20px !important;[m
[31m-    color: #a2a8bd;[m
[31m-}[m
[31m-[m
[31m-.card.statistic {[m
[31m-    background: transparent !important;[m
[31m-    box-shadow: none !important;[m
[31m-    color: #f7f7f7 !important;[m
[31m-}[m
[31m-[m
[31m-[m
[31m-.page_end {[m
[31m-    background-image: url("../assets/wavy-light-by-nouridio.svg") !important;[m
[31m-    background-position: bottom !important;[m
[31m-    background-size: 200% !important;[m
[31m-    background-repeat: no-repeat !important;[m
[31m-}[m
[31m-.start {[m
[31m-    padding: 60px 50px !important[m
[31m-}[m
[31m-[m
[31m-.start .card {[m
[31m-    background: transparent !important;[m
[31m-    color: #f6f9ff !important;[m
[31m-}[m
[31m-[m
[31m-.features .card {[m
[31m-    background: #1D1E28;[m
[31m-    border-radius: 22px !important;[m
[31m-    border: 4px solid #AD91FF;[m
[31m-}[m
[31m-.features .card-text {[m
[31m-color: rgba(255, 255, 255, 0.46) !important[m
[31m-}[m
[31m-[m
[31m-.features .card-body {[m
[31m-    padding: 40px 40px 40px 30px !important;[m
[31m-}[m
[31m-[m
[31m-.navbar-toggler-icon {[m
[31m-    color: #fff !important[m
[31m-}[m
[31m-.footer {[m
[31m-    text-align: center !important;[m
[31m-    padding: 5px 6px !important;[m
[31m-    color: #ecf2ff;[m
[31m-    padding: 30px 30px !important[m
[31m-}[m
[31m-[m
[31m-.footer .nouridio {[m
[31m-    font-family: 'Montserrat' !important;[m
[31m-    font-style: normal !important;[m
[31m-    font-weight: 600 !important;[m
[31m-    font-size: 16px !important;[m
[31m-    line-height: 5px !important;[m
[31m-    letter-spacing: 0.15em !important;[m
[31m-    font-variant: small-caps !important;[m
[31m-}[m
[31m-[m
[31m-.footer .nouridio a {[m
[31m-    color: #AD91FF !important;[m
[31m-    text-decoration: none !important;[m
[31m-}[m
[31m-[m
[31m-.footer .bot-footer {[m
[31m-    text-align: center !important;[m
[31m-    color: #a2a8bd !important[m
[31m-}[m
\ No newline at end of file[m
[1mdiff --git a/css/animes.css b/css/animes.css[m
[1mdeleted file mode 100644[m
[1mindex 1c4363e..0000000[m
[1m--- a/css/animes.css[m
[1m+++ /dev/null[m
[36m@@ -1,3 +0,0 @@[m
[31m-body {[m
[31m-    background-color: rgba(0, 0, 25);[m
[31m-}[m
\ No newline at end of file[m
[1mdiff --git a/css/bootstrap.min.css b/css/bootstrap.min.css[m
[1mdeleted file mode 100644[m
[1mindex 00b4e82..0000000[m
[1m--- a/css/bootstrap.min.css[m
[1m+++ /dev/null[m
[36m@@ -1,7 +0,0 @@[m
[31m-/*![m
[31m- * Bootstrap v4.3.1 (https://getbootstrap.com/)[m
[31m- * Copyright 2011-2019 The Bootstrap Authors[m
[31m- * Copyright 2011-2019 Twitter, Inc.[m
[31m- * Licensed under MIT (https://github.com/twbs/bootstrap/blob/master/LICENSE)[m
[31m- */:root{--blue:#007bff;--indigo:#6610f2;--purple:#6f42c1;--pink:#e83e8c;--red:#dc3545;--orange:#fd7e14;--yellow:#ffc107;--green:#28a745;--teal:#20c997;--cyan:#17a2b8;--white:#fff;--gray:#6c757d;--gray-dark:#343a40;--primary:#007bff;--secondary:#6c757d;--success:#28a745;--info:#17a2b8;--warning:#ffc107;--danger:#dc3545;--light:#f8f9fa;--dark:#343a40;--breakpoint-xs:0;--breakpoint-sm:576px;--breakpoint-md:768px;--breakpoint-lg:992px;--breakpoint-xl:1200px;--font-family-sans-serif:-apple-system,BlinkMacSystemFont,"Segoe UI",Roboto,"Helvetica Neue",Arial,"Noto Sans",sans-serif,"Apple Color Emoji","Segoe UI Emoji","Segoe UI Symbol","Noto Color Emoji";--font-family-monospace:SFMono-Regular,Menlo,Monaco,Consolas,"Liberation Mono","Courier New",monospace}*,::after,::before{box-sizing:border-box}html{font-family:sans-serif;line-height:1.15;-webkit-text-size-adjust:100%;-webkit-tap-highlight-color:transparent}article,aside,figcaption,figure,footer,header,hgroup,main,nav,section{display:block}body{margin:0;font-family:-apple-system,BlinkMacSystemFont,"Segoe UI",Roboto,"Helvetica Neue",Arial,"Noto Sans",sans-serif,"Apple Color Emoji","Segoe UI Emoji","Segoe UI Symbol","Noto Color Emoji";font-size:1rem;font-weight:400;line-height:1.5;color:#212529;text-align:left;background-color:#fff}[tabindex="-1"]:focus{outline:0!important}hr{box-sizing:content-box;height:0;overflow:visible}h1,h2,h3,h4,h5,h6{margin-top:0;margin-bottom:.5rem}p{margin-top:0;margin-bottom:1rem}abbr[data-original-title],abbr[title]{text-decoration:underline;-webkit-text-decoration:underline dotted;text-decoration:underline dotted;cursor:help;border-bottom:0;-webkit-text-decoration-skip-ink:none;text-decoration-skip-ink:none}address{margin-bottom:1rem;font-style:normal;line-height:inherit}dl,ol,ul{margin-top:0;margin-bottom:1rem}ol ol,ol ul,ul ol,ul ul{margin-bottom:0}dt{font-weight:700}dd{margin-bottom:.5rem;margin-left:0}blockquote{margin:0 0 1rem}b,strong{font-weight:bolder}small{font-size:80%}sub,sup{position:relative;font-size:75%;line-height:0;vertical-align:baseline}sub{bottom:-.25em}sup{top:-.5em}a{color:#007bff;text-decoration:none;background-color:transparent}a:hover{color:#0056b3;text-decoration:underline}a:not([href]):not([tabindex]){color:inherit;text-decoration:none}a:not([href]):not([tabindex]):focus,a:not([href]):not([tabindex]):hover{color:inherit;text-decoration:none}a:not([href]):not([tabindex]):focus{outline:0}code,kbd,pre,samp{font-family:SFMono-Regular,Menlo,Monaco,Consolas,"Liberation Mono","Courier New",monospace;font-size:1em}pre{margin-top:0;margin-bottom:1rem;overflow:auto}figure{margin:0 0 1rem}img{vertical-align:middle;border-style:none}svg{overflow:hidden;vertical-align:middle}table{border-collapse:collapse}caption{padding-top:.75rem;padding-bottom:.75rem;color:#6c757d;text-align:left;caption-side:bottom}th{text-align:inherit}label{display:inline-block;margin-bottom:.5rem}button{border-radius:0}button:focus{outline:1px dotted;outline:5px auto -webkit-focus-ring-color}button,input,optgroup,select,textarea{margin:0;font-family:inherit;font-size:inherit;line-height:inherit}button,input{overflow:visible}button,select{text-transform:none}select{word-wrap:normal}[type=button],[type=reset],[type=submit],button{-webkit-appearance:button}[type=button]:not(:disabled),[type=reset]:not(:disabled),[type=submit]:not(:disabled),button:not(:disabled){cursor:pointer}[type=button]::-moz-focus-inner,[type=reset]::-moz-focus-inner,[type=submit]::-moz-focus-inner,button::-moz-focus-inner{padding:0;border-style:none}input[type=checkbox],input[type=radio]{box-sizing:border-box;padding:0}input[type=date],input[type=datetime-local],input[type=month],input[type=time]{-webkit-appearance:listbox}textarea{overflow:auto;resize:vertical}fieldset{min-width:0;padding:0;margin:0;border:0}legend{display:block;width:100%;max-width:100%;padding:0;margin-bottom:.5rem;font-size:1.5rem;line-height:inherit;color:inherit;white-space:normal}progress{vertical-align:baseline}[type=number]::-webkit-inner-spin-button,[type=number]::-webkit-outer-spin-button{height:auto}[type=search]{outline-offset:-2px;-webkit-appearance:none}[type=search]::-webkit-search-decoration{-webkit-appearance:none}::-webkit-file-upload-button{font:inherit;-webkit-appearance:button}output{display:inline-block}summary{display:list-item;cursor:pointer}template{display:none}[hidden]{display:none!important}.h1,.h2,.h3,.h4,.h5,.h6,h1,h2,h3,h4,h5,h6{margin-bottom:.5rem;font-weight:500;line-height:1.2}.h1,h1{font-size:2.5rem}.h2,h2{font-size:2rem}.h3,h3{font-size:1.75rem}.h4,h4{font-size:1.5rem}.h5,h5{font-size:1.25rem}.h6,h6{font-size:1rem}.lead{font-size:1.25rem;font-weight:300}.display-1{font-size:6rem;font-weight:300;line-height:1.2}.display-2{font-size:5.5rem;font-weight:300;line-height:1.2}.display-3{font-size:4.5rem;font-weight:300;line-height:1.2}.display-4{font-size:3.5rem;font-weight:300;line-height:1.2}hr{margin-top:1rem;margin-bottom:1rem;border:0;border-top:1px solid rgba(0,0,0,.1)}.small,small{font-size:80%;font-weight:400}.mark,mark{padding:.2em;background-color:#fcf8e3}.list-unstyled{padding-left:0;list-style:none}.list-inline{padding-left:0;list-style:none}.list-inline-item{display:inline-block}.list-inline-item:not(:last-child){margin-right:.5rem}.initialism{font-size:90%;text-transform:uppercase}.blockquote{margin-bottom:1rem;font-size:1.25rem}.blockquote-footer{display:block;font-size:80%;color:#6c757d}.blockquote-footer::before{content:"\2014\00A0"}.img-fluid{max-width:100%;height:auto}.img-thumbnail{padding:.25rem;background-color:#fff;border:1px solid #dee2e6;border-radius:.25rem;max-width:100%;height:auto}.figure{display:inline-block}.figure-img{margin-bottom:.5rem;line-height:1}.figure-caption{font-size:90%;color:#6c757d}code{font-size:87.5%;color:#e83e8c;word-break:break-word}a>code{color:inherit}kbd{padding:.2rem .4rem;font-size:87.5%;color:#fff;background-color:#212529;border-radius:.2rem}kbd kbd{padding:0;font-size:100%;font-weight:700}pre{display:block;font-size:87.5%;color:#212529}pre code{font-size:inherit;color:inherit;word-break:normal}.pre-scrollable{max-height:340px;overflow-y:scroll}.container{width:100%;padding-right:15px;padding-left:15px;margin-right:auto;margin-left:auto}@media (min-width:576px){.container{max-width:540px}}@media (min-width:768px){.container{max-width:720px}}@media (min-width:992px){.container{max-width:960px}}@media (min-width:1200px){.container{max-width:1140px}}.container-fluid{width:100%;padding-right:15px;padding-left:15px;margin-right:auto;margin-left:auto}.row{display:-ms-flexbox;display:flex;-ms-flex-wrap:wrap;flex-wrap:wrap;margin-right:-15px;margin-left:-15px}.no-gutters{margin-right:0;margin-left:0}.no-gutters>.col,.no-gutters>[class*=col-]{padding-right:0;padding-left:0}.col,.col-1,.col-10,.col-11,.col-12,.col-2,.col-3,.col-4,.col-5,.col-6,.col-7,.col-8,.col-9,.col-auto,.col-lg,.col-lg-1,.col-lg-10,.col-lg-11,.col-lg-12,.col-lg-2,.col-lg-3,.col-lg-4,.col-lg-5,.col-lg-6,.col-lg-7,.col-lg-8,.col-lg-9,.col-lg-auto,.col-md,.col-md-1,.col-md-10,.col-md-11,.col-md-12,.col-md-2,.col-md-3,.col-md-4,.col-md-5,.col-md-6,.col-md-7,.col-md-8,.col-md-9,.col-md-auto,.col-sm,.col-sm-1,.col-sm-10,.col-sm-11,.col-sm-12,.col-sm-2,.col-sm-3,.col-sm-4,.col-sm-5,.col-sm-6,.col-sm-7,.col-sm-8,.col-sm-9,.col-sm-auto,.col-xl,.col-xl-1,.col-xl-10,.col-xl-11,.col-xl-12,.col-xl-2,.col-xl-3,.col-xl-4,.col-xl-5,.col-xl-6,.col-xl-7,.col-xl-8,.col-xl-9,.col-xl-auto{position:relative;width:100%;padding-right:15px;padding-left:15px}.col{-ms-flex-preferred-size:0;flex-basis:0;-ms-flex-positive:1;flex-grow:1;max-width:100%}.col-auto{-ms-flex:0 0 auto;flex:0 0 auto;width:auto;max-width:100%}.col-1{-ms-flex:0 0 8.333333%;flex:0 0 8.333333%;max-width:8.333333%}.col-2{-ms-flex:0 0 16.666667%;flex:0 0 16.666667%;max-width:16.666667%}.col-3{-ms-flex:0 0 25%;flex:0 0 25%;max-width:25%}.col-4{-ms-flex:0 0 33.333333%;flex:0 0 33.333333%;max-width:33.333333%}.col-5{-ms-flex:0 0 41.666667%;flex:0 0 41.666667%;max-width:41.666667%}.col-6{-ms-flex:0 0 50%;flex:0 0 50%;max-width:50%}.col-7{-ms-flex:0 0 58.333333%;flex:0 0 58.333333%;max-width:58.333333%}.col-8{-ms-flex:0 0 66.666667%;flex:0 0 66.666667%;max-width:66.666667%}.col-9{-ms-flex:0 0 75%;flex:0 0 75%;max-width:75%}.col-10{-ms-flex:0 0 83.333333%;flex:0 0 83.333333%;max-width:83.333333%}.col-11{-ms-flex:0 0 91.666667%;flex:0 0 91.666667%;max-width:91.666667%}.col-12{-ms-flex:0 0 100%;flex:0 0 100%;max-width:100%}.order-first{-ms-flex-order:-1;order:-1}.order-last{-ms-flex-order:13;order:13}.order-0{-ms-flex-order:0;order:0}.order-1{-ms-flex-order:1;order:1}.order-2{-ms-flex-order:2;order:2}.order-3{-ms-flex-order:3;order:3}.order-4{-ms-flex-order:4;order:4}.order-5{-ms-flex-order:5;order:5}.order-6{-ms-flex-order:6;order:6}.order-7{-ms-flex-order:7;order:7}.order-8{-ms-flex-order:8;order:8}.order-9{-ms-flex-order:9;order:9}.order-10{-ms-flex-order:10;order:10}.order-11{-ms-flex-order:11;order:11}.order-12{-ms-flex-order:12;order:12}.offset-1{margin-left:8.333333%}.offset-2{margin-left:16.666667%}.offset-3{margin-left:25%}.offset-4{margin-left:33.333333%}.offset-5{margin-left:41.666667%}.offset-6{margin-left:50%}.offset-7{margin-left:58.333333%}.offset-8{margin-left:66.666667%}.offset-9{margin-left:75%}.offset-10{margin-left:83.333333%}.offset-11{margin-left:91.666667%}@media (min-width:576px){.col-sm{-ms-flex-preferred-size:0;flex-basis:0;-ms-flex-positive:1;flex-grow:1;max-width:100%}.col-sm-auto{-ms-flex:0 0 auto;flex:0 0 auto;width:auto;max-width:100%}.col-sm-1{-ms-flex:0 0 8.333333%;flex:0 0 8.333333%;max-width:8.333333%}.col-sm-2{-ms-flex:0 0 16.666667%;flex:0 0 16.666667%;max-width:16.666667%}.col-sm-3{-ms-flex:0 0 25%;flex:0 0 25%;max-width:25%}.col-sm-4{-ms-flex:0 0 33.333333%;flex:0 0 33.333333%;max-width:33.333333%}.col-sm-5{-ms-flex:0 0 41.666667%;flex:0 0 41.666667%;max-width:41.666667%}.col-sm-6{-ms-flex:0 0 50%;flex:0 0 50%;max-width:50%}.col-sm-7{-ms-flex:0 0 58.333333%;flex:0 0 58.333333%;max-width:58.333333%}.col-sm-8{-ms-flex:0 0 66.666667%;flex:0 0 66.666667%;max-width:66.666667%}.col-sm-9{-ms-flex:0 0 75%;flex:0 0 75%;max-width:75%}.col-sm-10{-ms-flex:0 0 83.333333%;flex:0 0 83.333333%;max-width:83.333333%}.col-sm-11{-ms-flex:0 0 91.666667%;flex:0 0 91.666667%;max-width:91.666667%}.col-sm-12{-ms-flex:0 0 100%;flex:0 0 100%;max-width:100%}.order-sm-first{-ms-flex-order:-1;order:-1}.order-sm-last{-ms-flex-order:13;order:13}.order-sm-0{-ms-flex-order:0;order:0}.order-sm-1{-ms-flex-order:1;order:1}.order-sm-2{-ms-flex-order:2;order:2}.order-sm-3{-ms-flex-order:3;order:3}.order-sm-4{-ms-flex-order:4;order:4}.order-sm-5{-ms-flex-order:5;order:5}.order-sm-6{-ms-flex-order:6;order:6}.order-sm-7{-ms-flex-order:7;order:7}.order-sm-8{-ms-flex-order:8;order:8}.order-sm-9{-ms-flex-order:9;order:9}.order-sm-10{-ms-flex-order:10;order:10}.order-sm-11{-ms-flex-order:11;order:11}.order-sm-12{-ms-flex-order:12;order:12}.offset-sm-0{margin-left:0}.offset-sm-1{margin-left:8.333333%}.offset-sm-2{margin-left:16.666667%}.offset-sm-3{margin-left:25%}.offset-sm-4{margin-left:33.333333%}.offset-sm-5{margin-left:41.666667%}.offset-sm-6{margin-left:50%}.offset-sm-7{margin-left:58.333333%}.offset-sm-8{margin-left:66.666667%}.offset-sm-9{margin-left:75%}.offset-sm-10{margin-left:83.333333%}.offset-sm-11{margin-left:91.666667%}}@media (min-width:768px){.col-md{-ms-flex-preferred-size:0;flex-basis:0;-ms-flex-positive:1;flex-grow:1;max-width:100%}.col-md-auto{-ms-flex:0 0 auto;flex:0 0 auto;width:auto;max-width:100%}.col-md-1{-ms-flex:0 0 8.333333%;flex:0 0 8.333333%;max-width:8.333333%}.col-md-2{-ms-flex:0 0 16.666667%;flex:0 0 16.666667%;max-width:16.666667%}.col-md-3{-ms-flex:0 0 25%;flex:0 0 25%;max-width:25%}.col-md-4{-ms-flex:0 0 33.333333%;flex:0 0 33.333333%;max-width:33.333333%}.col-md-5{-ms-flex:0 0 41.666667%;flex:0 0 41.666667%;max-width:41.666667%}.col-md-6{-ms-flex:0 0 50%;flex:0 0 50%;max-width:50%}.col-md-7{-ms-flex:0 0 58.333333%;flex:0 0 58.333333%;max-width:58.333333%}.col-md-8{-ms-flex:0 0 66.666667%;flex:0 0 66.666667%;max-width:66.666667%}.col-md-9{-ms-flex:0 0 75%;flex:0 0 75%;max-width:75%}.col-md-10{-ms-flex:0 0 83.333333%;flex:0 0 83.333333%;max-width:83.333333%}.col-md-11{-ms-flex:0 0 91.666667%;flex:0 0 91.666667%;max-width:91.666667%}.col-md-12{-ms-flex:0 0 100%;flex:0 0 100%;max-width:100%}.order-md-first{-ms-flex-order:-1;order:-1}.order-md-last{-ms-flex-order:13;order:13}.order-md-0{-ms-flex-order:0;order:0}.order-md-1{-ms-flex-order:1;order:1}.order-md-2{-ms-flex-order:2;order:2}.order-md-3{-ms-flex-order:3;order:3}.order-md-4{-ms-flex-order:4;order:4}.order-md-5{-ms-flex-order:5;order:5}.order-md-6{-ms-flex-order:6;order:6}.order-md-7{-ms-flex-order:7;order:7}.order-md-8{-ms-flex-order:8;order:8}.order-md-9{-ms-flex-order:9;order:9}.order-md-10{-ms-flex-order:10;order:10}.order-md-11{-ms-flex-order:11;order:11}.order-md-12{-ms-flex-order:12;order:12}.offset-md-0{margin-left:0}.offset-md-1{margin-left:8.333333%}.offset-md-2{margin-left:16.666667%}.offset-md-3{margin-left:25%}.offset-md-4{margin-left:33.333333%}.offset-md-5{margin-left:41.666667%}.offset-md-6{margin-left:50%}.offset-md-7{margin-left:58.333333%}.offset-md-8{margin-left:66.666667%}.offset-md-9{margin-left:75%}.offset-md-10{margin-left:83.333333%}.offset-md-11{margin-left:91.666667%}}@media (min-width:992px){.col-lg{-ms-flex-preferred-size:0;flex-basis:0;-ms-flex-positive:1;flex-grow:1;max-width:100%}.col-lg-auto{-ms-flex:0 0 auto;flex:0 0 auto;width:auto;max-width:100%}.col-lg-1{-ms-flex:0 0 8.333333%;flex:0 0 8.333333%;max-width:8.333333%}.col-lg-2{-ms-flex:0 0 16.666667%;flex:0 0 16.666667%;max-width:16.666667%}.col-lg-3{-ms-flex:0 0 25%;flex:0 0 25%;max-width:25%}.col-lg-4{-ms-flex:0 0 33.333333%;flex:0 0 33.333333%;max-width:33.333333%}.col-lg-5{-ms-flex:0 0 41.666667%;flex:0 0 41.666667%;max-width:41.666667%}.col-lg-6{-ms-flex:0 0 50%;flex:0 0 50%;max-width:50%}.col-lg-7{-ms-flex:0 0 58.333333%;flex:0 0 58.333333%;max-width:58.333333%}.col-lg-8{-ms-flex:0 0 66.666667%;flex:0 0 66.666667%;max-width:66.666667%}.col-lg-9{-ms-flex:0 0 75%;flex:0 0 75%;max-width:75%}.col-lg-10{-ms-flex:0 0 83.333333%;flex:0 0 83.333333%;max-width:83.333333%}.col-lg-11{-ms-flex:0 0 91.666667%;flex:0 0 91.666667%;max-width:91.666667%}.col-lg-12{-ms-flex:0 0 100%;flex:0 0 100%;max-width:100%}.order-lg-first{-ms-flex-order:-1;order:-1}.order-lg-last{-ms-flex-order:13;order:13}.order-lg-0{-ms-flex-order:0;order:0}.order-lg-1{-ms-flex-order:1;order:1}.order-lg-2{-ms-flex-order:2;order:2}.order-lg-3{-ms-flex-order:3;order:3}.order-lg-4{-ms-flex-order:4;order:4}.order-lg-5{-ms-flex-order:5;order:5}.order-lg-6{-ms-flex-order:6;order:6}.order-lg-7{-ms-flex-order:7;order:7}.order-lg-8{-ms-flex-order:8;order:8}.order-lg-9{-ms-flex-order:9;order:9}.order-lg-10{-ms-flex-order:10;order:10}.order-lg-11{-ms-flex-order:11;order:11}.order-lg-12{-ms-flex-order:12;order:12}.offset-lg-0{margin-left:0}.offset-lg-1{margin-left:8.333333%}.offset-lg-2{margin-left:16.666667%}.offset-lg-3{margin-left:25%}.offset-lg-4{margin-left:33.333333%}.offset-lg-5{margin-left:41.666667%}.offset-lg-6{margin-left:50%}.offset-lg-7{margin-left:58.333333%}.offset-lg-8{margin-left:66.666667%}.offset-lg-9{margin-left:75%}.offset-lg-10{margin-left:83.333333%}.offset-lg-11{margin-left:91.666667%}}@media (min-width:1200px){.col-xl{-ms-flex-preferred-size:0;flex-basis:0;-ms-flex-positive:1;flex-grow:1;max-width:100%}.col-xl-auto{-ms-flex:0 0 auto;flex:0 0 auto;width:auto;max-width:100%}.col-xl-1{-ms-flex:0 0 8.333333%;flex:0 0 8.333333%;max-width:8.333333%}.col-xl-2{-ms-flex:0 0 16.666667%;flex:0 0 16.666667%;max-width:16.666667%}.col-xl-3{-ms-flex:0 0 25%;flex:0 0 25%;max-width:25%}.col-xl-4{-ms-flex:0 0 33.333333%;flex:0 0 33.333333%;max-width:33.333333%}.col-xl-5{-ms-flex:0 0 41.666667%;flex:0 0 41.666667%;max-width:41.666667%}.col-xl-6{-ms-flex:0 0 50%;flex:0 0 50%;max-width:50%}.col-xl-7{-ms-flex:0 0 58.333333%;flex:0 0 58.333333%;max-width:58.333333%}.col-xl-8{-ms-flex:0 0 66.666667%;flex:0 0 66.666667%;max-width:66.666667%}.col-xl-9{-ms-flex:0 0 75%;flex:0 0 75%;max-width:75%}.col-xl-10{-ms-flex:0 0 83.333333%;flex:0 0 83.333333%;max-width:83.333333%}.col-xl-11{-ms-flex:0 0 91.666667%;flex:0 0 91.666667%;max-width:91.666667%}.col-xl-12{-ms-flex:0 0 100%;flex:0 0 100%;max-width:100%}.order-xl-first{-ms-flex-order:-1;order:-1}.order-xl-last{-ms-flex-order:13;order:13}.order-xl-0{-ms-flex-order:0;order:0}.order-xl-1{-ms-flex-order:1;order:1}.order-xl-2{-ms-flex-order:2;order:2}.order-xl-3{-ms-flex-order:3;order:3}.order-xl-4{-ms-flex-order:4;order:4}.order-xl-5{-ms-flex-order:5;order:5}.order-xl-6{-ms-flex-order:6;order:6}.order-xl-7{-ms-flex-order:7;order:7}.order-xl-8{-ms-flex-order:8;order:8}.order-xl-9{-ms-flex-order:9;order:9}.order-xl-10{-ms-flex-order:10;order:10}.order-xl-11{-ms-flex-order:11;order:11}.order-xl-12{-ms-flex-order:12;order:12}.offset-xl-0{margin-left:0}.offset-xl-1{margin-left:8.333333%}.offset-xl-2{margin-left:16.666667%}.offset-xl-3{margin-left:25%}.offset-xl-4{margin-left:33.333333%}.offset-xl-5{margin-left:41.666667%}.offset-xl-6{margin-left:50%}.offset-xl-7{margin-left:58.333333%}.offset-xl-8{margin-left:66.666667%}.offset-xl-9{margin-left:75%}.offset-xl-10{margin-left:83.333333%}.offset-xl-11{margin-left:91.666667%}}.table{width:100%;margin-bottom:1rem;color:#212529}.table td,.table th{padding:.75rem;vertical-align:top;border-top:1px solid #dee2e6}.table thead th{vertical-align:bottom;border-bottom:2px solid #dee2e6}.table tbody+tbody{border-top:2px solid #dee2e6}.table-sm td,.table-sm th{padding:.3rem}.table-bordered{border:1px solid #dee2e6}.table-bordered td,.table-bordered th{border:1px solid #dee2e6}.table-bordered thead td,.table-bordered thead th{border-bottom-width:2px}.table-borderless tbody+tbody,.table-borderless td,.table-borderless th,.table-borderless thead th{border:0}.table-striped tbody tr:nth-of-type(odd){background-color:rgba(0,0,0,.05)}.table-hover tbody tr:hover{color:#212529;background-color:rgba(0,0,0,.075)}.table-primary,.table-primary>td,.table-primary>th{background-color:#b8daff}.table-primary tbody+tbody,.table-primary td,.table-primary th,.table-primary thead th{border-color:#7abaff}.table-hover .table-primary:hover{background-color:#9fcdff}.table-hover .table-primary:hover>td,.table-hover .table-primary:hover>th{background-color:#9fcdff}.table-secondary,.table-secondary>td,.table-secondary>th{background-color:#d6d8db}.table-secondary tbody+tbody,.table-secondary td,.table-secondary th,.table-secondary thead th{border-color:#b3b7bb}.table-hover .table-secondary:hover{background-color:#c8cbcf}.table-hover .table-secondary:hover>td,.table-hover .table-secondary:hover>th{background-color:#c8cbcf}.table-success,.table-success>td,.table-success>th{background-color:#c3e6cb}.table-success tbody+tbody,.table-success td,.table-success th,.table-success thead th{border-color:#8fd19e}.table-hover .table-success:hover{background-color:#b1dfbb}.table-hover .table-success:hover>td,.table-hover .table-success:hover>th{background-color:#b1dfbb}.table-info,.table-info>td,.table-info>th{background-color:#bee5eb}.table-info tbody+tbody,.table-info td,.table-info th,.table-info thead th{border-color:#86cfda}.table-hover .table-info:hover{background-color:#abdde5}.table-hover .table-info:hover>td,.table-hover .table-info:hover>th{background-color:#abdde5}.table-warning,.table-warning>td,.table-warning>th{background-color:#ffeeba}.table-warning tbody+tbody,.table-warning td,.table-warning th,.table-warning thead th{border-color:#ffdf7e}.table-hover .table-warning:hover{background-color:#ffe8a1}.table-hover .table-warning:hover>td,.table-hover .table-warning:hover>th{background-color:#ffe8a1}.table-danger,.table-danger>td,.table-danger>th{background-color:#f5c6cb}.table-danger tbody+tbody,.table-danger td,.table-danger th,.table-danger thead th{border-color:#ed969e}.table-hover .table-danger:hover{background-color:#f1b0b7}.table-hover .table-danger:hover>td,.table-hover .table-danger:hover>th{background-color:#f1b0b7}.table-light,.table-light>td,.table-light>th{background-color:#fdfdfe}.table-light tbody+tbody,.table-light td,.table-light th,.table-light thead th{border-color:#fbfcfc}.table-hover .table-light:hover{background-color:#ececf6}.table-hover .table-light:hover>td,.table-hover .table-light:hover>th{background-color:#ececf6}.table-dark,.table-dark>td,.table-dark>th{background-color:#c6c8ca}.table-dark tbody+tbody,.table-dark td,.table-dark th,.table-dark thead th{border-color:#95999c}.table-hover .table-dark:hover{background-color:#b9bbbe}.table-hover .table-dark:hover>td,.table-hover .table-dark:hover>th{background-color:#b9bbbe}.table-active,.table-active>td,.table-active>th{background-color:rgba(0,0,0,.075)}.table-hover .table-active:hover{background-color:rgba(0,0,0,.075)}.table-hover .table-active:hover>td,.table-hover .table-active:hover>th{background-color:rgba(0,0,0,.075)}.table .thead-dark th{color:#fff;background-color:#343a40;border-color:#454d55}.table .thead-light th{color:#495057;background-color:#e9ecef;border-color:#dee2e6}.table-dark{color:#fff;background-color:#343a40}.table-dark td,.table-dark th,.table-dark thead th{border-color:#454d55}.table-dark.table-bordered{border:0}.table-dark.table-striped tbody tr:nth-of-type(odd){background-color:rgba(255,255,255,.05)}.table-dark.table-hover tbody tr:hover{color:#fff;background-color:rgba(255,255,255,.075)}@media (max-width:575.98px){.table-responsive-sm{display:block;width:100%;overflow-x:auto;-webkit-overflow-scrolling:touch}.table-responsive-sm>.table-bordered{border:0}}@media (max-width:767.98px){.table-responsive-md{display:block;width:100%;overflow-x:auto;-webkit-overflow-scrolling:touch}.table-responsive-md>.table-bordered{border:0}}@media (max-width:991.98px){.table-responsive-lg{display:block;width:100%;overflow-x:auto;-webkit-overflow-scrolling:touch}.table-responsive-lg>.table-bordered{border:0}}@media (max-width:1199.98px){.table-responsive-xl{display:block;width:100%;overflow-x:auto;-webkit-overflow-scrolling:touch}.table-responsive-xl>.table-bordered{border:0}}.table-responsive{display:block;width:100%;overflow-x:auto;-webkit-overflow-scrolling:touch}.table-responsive>.table-bordered{border:0}.form-control{display:block;width:100%;height:calc(1.5em + .75rem + 2px);padding:.375rem .75rem;font-size:1rem;font-weight:400;line-height:1.5;color:#495057;background-color:#fff;background-clip:padding-box;border:1px solid #ced4da;border-radius:.25rem;transition:border-color .15s ease-in-out,box-shadow .15s ease-in-out}@media (prefers-reduced-motion:reduce){.form-control{transition:none}}.form-control::-ms-expand{background-color:transparent;border:0}.form-control:focus{color:#495057;background-color:#fff;border-color:#80bdff;outline:0;box-shadow:0 0 0 .2rem rgba(0,123,255,.25)}.form-control::-webkit-input-placeholder{color:#6c757d;opacity:1}.form-control::-moz-placeholder{color:#6c757d;opacity:1}.form-control:-ms-input-placeholder{color:#6c757d;opacity:1}.form-control::-ms-input-placeholder{color:#6c757d;opacity:1}.form-control::placeholder{color:#6c757d;opacity:1}.form-control:disabled,.form-control[readonly]{background-color:#e9ecef;opacity:1}select.form-control:focus::-ms-value{color:#495057;background-color:#fff}.form-control-file,.form-control-range{display:block;width:100%}.col-form-label{padding-top:calc(.375rem + 1px);padding-bottom:calc(.375rem + 1px);margin-bottom:0;font-size:inherit;line-height:1.5}.col-form-label-lg{padding-top:calc(.5rem + 1px);padding-bottom:calc(.5rem + 1px);font-size:1.25rem;line-height:1.5}.col-form-label-sm{padding-top:calc(.25rem + 1px);padding-bottom:calc(.25rem + 1px);font-size:.875rem;line-height:1.5}.form-control-plaintext{display:block;width:100%;padding-top:.375rem;padding-bottom:.375rem;margin-bottom:0;line-height:1.5;color:#212529;background-color:transparent;border:solid transparent;border-width:1px 0}.form-control-plaintext.form-control-lg,.form-control-plaintext.form-control-sm{padding-right:0;padding-left:0}.form-control-sm{height:calc(1.5em + .5rem + 2px);padding:.25rem .5rem;font-size:.875rem;line-height:1.5;border-radius:.2rem}.form-control-lg{height:calc(1.5em + 1rem + 2px);padding:.5rem 1rem;font-size:1.25rem;line-height:1.5;border-radius:.3rem}select.form-control[multiple],select.form-control[size]{height:auto}textarea.form-control{height:auto}.form-group{margin-bottom:1rem}.form-text{display:block;margin-top:.25rem}.form-row{display:-ms-flexbox;display:flex;-ms-flex-wrap:wrap;flex-wrap:wrap;margin-right:-5px;margin-left:-5px}.form-row>.col,.form-row>[class*=col-]{padding-right:5px;padding-left:5px}.form-check{position:relative;display:block;padding-left:1.25rem}.form-check-input{position:absolute;margin-top:.3rem;margin-left:-1.25rem}.form-check-input:disabled~.form-check-label{color:#6c757d}.form-check-label{margin-bottom:0}.form-check-inline{display:-ms-inline-flexbox;display:inline-flex;-ms-flex-align:center;align-items:center;padding-left:0;margin-right:.75rem}.form-check-inline .form-check-input{position:static;margin-top:0;margin-right:.3125rem;margin-left:0}.valid-feedback{display:none;width:100%;margin-top:.25rem;font-size:80%;color:#28a745}.valid-tooltip{position:absolute;top:100%;z-index:5;display:none;max-width:100%;padding:.25rem .5rem;margin-top:.1rem;font-size:.875rem;line-height:1.5;color:#fff;background-color:rgba(40,167,69,.9);border-radius:.25rem}.form-control.is-valid,.was-validated .form-control:valid{border-color:#28a745;padding-right:calc(1.5em + .75rem);background-image:url("data:image/svg+xml,%3csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 8 8'%3e%3cpath fill='%2328a745' d='M2.3 6.73L.6 4.53c-.4-1.04.46-1.4 1.1-.8l1.1 1.4 3.4-3.8c.6-.63 1.6-.27 1.2.7l-4 4.6c-.43.5-.8.4-1.1.1z'/%3e%3c/svg%3e");background-repeat:no-repeat;background-position:center right calc(.375em + .1875rem);background-size:calc(.75em + .375rem) calc(.75em + .375rem)}.form-control.is-valid:focus,.was-validated .form-control:valid:focus{border-color:#28a745;box-shadow:0 0 0 .2rem rgba(40,167,69,.25)}.form-control.is-valid~.valid-feedback,.form-control.is-valid~.valid-tooltip,.was-validated .form-control:valid~.valid-feedback,.was-validated .form-control:valid~.valid-tooltip{display:block}.was-validated textarea.form-control:valid,textarea.form-control.is-valid{padding-right:calc(1.5em + .75rem);background-position:top calc(.375em + .1875rem) right calc(.375em + .1875rem)}.custom-select.is-valid,.was-validated .custom-select:valid{border-color:#28a745;padding-right:calc((1em + .75rem) * 3 / 4 + 1.75rem);background:url("data:image/svg+xml,%3csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 4 5'%3e%3cpath fill='%23343a40' d='M2 0L0 2h4zm0 5L0 3h4z'/%3e%3c/svg%3e") no-repeat right .75rem center/8px 10px,url("data:image/svg+xml,%3csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 8 8'%3e%3cpath fill='%2328a745' d='M2.3 6.73L.6 4.53c-.4-1.04.46-1.4 1.1-.8l1.1 1.4 3.4-3.8c.6-.63 1.6-.27 1.2.7l-4 4.6c-.43.5-.8.4-1.1.1z'/%3e%3c/svg%3e") #fff no-repeat center right 1.75rem/calc(.75em + .375rem) calc(.75em + .375rem)}.custom-select.is-valid:focus,.was-validated .custom-select:valid:focus{border-color:#28a745;box-shadow:0 0 0 .2rem rgba(40,167,69,.25)}.custom-select.is-valid~.valid-feedback,.custom-select.is-valid~.valid-tooltip,.was-validated .custom-select:valid~.valid-feedback,.was-validated .custom-select:valid~.valid-tooltip{display:block}.form-control-file.is-valid~.valid-feedback,.form-control-file.is-valid~.valid-tooltip,.was-validated .form-control-file:valid~.valid-feedback,.was-validated .form-control-file:valid~.valid-tooltip{display:block}.form-check-input.is-valid~.form-check-label,.was-validated .form-check-input:valid~.form-check-label{color:#28a745}.form-check-input.is-valid~.valid-feedback,.form-check-input.is-valid~.valid-tooltip,.was-validated .form-check-input:valid~.valid-feedback,.was-validated .form-check-input:valid~.valid-tooltip{display:block}.custom-control-input.is-valid~.custom-control-label,.was-validated .custom-control-input:valid~.custom-control-label{color:#28a745}.custom-control-input.is-valid~.custom-control-label::before,.was-validated .custom-control-input:valid~.custom-control-label::before{border-color:#28a745}.custom-control-input.is-valid~.valid-feedback,.custom-control-input.is-valid~.valid-tooltip,.was-validated .custom-control-input:valid~.valid-feedback,.was-validated .custom-control-input:valid~.valid-tooltip{display:block}.custom-control-input.is-valid:checked~.custom-control-label::before,.was-validated .custom-control-input:valid:checked~.custom-control-label::before{border-color:#34ce57;background-color:#34ce57}.custom-control-input.is-valid:focus~.custom-control-label::before,.was-validated .custom-control-input:valid:focus~.custom-control-label::before{box-shadow:0 0 0 .2rem rgba(40,167,69,.25)}.custom-control-input.is-valid:focus:not(:checked)~.custom-control-label::before,.was-validated .custom-control-input:valid:focus:not(:checked)~.custom-control-label::before{border-color:#28a745}.custom-file-input.is-valid~.custom-file-label,.was-validated .custom-file-input:valid~.custom-file-label{border-color:#28a745}.custom-file-input.is-valid~.valid-feedback,.custom-file-input.is-valid~.valid-tooltip,.was-validated .custom-file-input:valid~.valid-feedback,.was-validated .custom-file-input:valid~.valid-tooltip{display:block}.custom-file-input.is-valid:focus~.custom-file-label,.was-validated .custom-file-input:valid:focus~.custom-file-label{border-color:#28a745;box-shadow:0 0 0 .2rem rgba(40,167,69,.25)}.invalid-feedback{display:none;width:100%;margin-top:.25rem;font-size:80%;color:#dc3545}.invalid-tooltip{position:absolute;top:100%;z-index:5;display:none;max-width:100%;padding:.25rem .5rem;margin-top:.1rem;font-size:.875rem;line-height:1.5;color:#fff;background-color:rgba(220,53,69,.9);border-radius:.25rem}.form-control.is-invalid,.was-validated .form-control:invalid{border-color:#dc3545;padding-right:calc(1.5em + .75rem);background-image:url("data:image/svg+xml,%3csvg xmlns='http://www.w3.org/2000/svg' fill='%23dc3545' viewBox='-2 -2 7 7'%3e%3cpath stroke='%23dc3545' d='M0 0l3 3m0-3L0 3'/%3e%3ccircle r='.5'/%3e%3ccircle cx='3' r='.5'/%3e%3ccircle cy='3' r='.5'/%3e%3ccircle cx='3' cy='3' r='.5'/%3e%3c/svg%3E");background-repeat:no-repeat;background-position:center right calc(.375em + .1875rem);background-size:calc(.75em + .375rem) calc(.75em + .375rem)}.form-control.is-invalid:focus,.was-validated .form-control:invalid:focus{border-color:#dc3545;box-shadow:0 0 0 .2rem rgba(220,53,69,.25)}.form-control.is-invalid~.invalid-feedback,.form-control.is-invalid~.invalid-tooltip,.was-validated .form-control:invalid~.invalid-feedback,.was-validated .form-control:invalid~.invalid-tooltip{display:block}.was-validated textarea.form-control:invalid,textarea.form-control.is-invalid{padding-right:calc(1.5em + .75rem);background-position:top calc(.375em + .1875rem) right calc(.375em + .1875rem)}.custom-select.is-invalid,.was-validated .custom-select:invalid{border-color:#dc3545;padding-right:calc((1em + .75rem) * 3 / 4 + 1.75rem);background:url("data:image/svg+xml,%3csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 4 5'%3e%3cpath fill='%23343a40' d='M2 0L0 2h4zm0 5L0 3h4z'/%3e%3c/svg%3e") no-repeat right .75rem center/8px 10px,url("data:image/svg+xml,%3csvg xmlns='http://www.w3.org/2000/svg' fill='%23dc3545' viewBox='-2 -2 7 7'%3e%3cpath stroke='%23dc3545' d='M0 0l3 3m0-3L0 3'/%3e%3ccircle r='.5'/%3e%3ccircle cx='3' r='.5'/%3e%3ccircle cy='3' r='.5'/%3e%3ccircle cx='3' cy='3' r='.5'/%3e%3c/svg%3E") #fff no-repeat center right 1.75rem/calc(.75em + .375rem) calc(.75em + .375rem)}.custom-select.is-invalid:focus,.was-validated .custom-select:invalid:focus{border-color:#dc3545;box-shadow:0 0 0 .2rem rgba(220,53,69,.25)}.custom-select.is-invalid~.invalid-feedback,.custom-select.is-invalid~.invalid-tooltip,.was-validated .custom-select:invalid~.invalid-feedback,.was-validated .custom-select:invalid~.invalid-tooltip{display:block}.form-control-file.is-invalid~.invalid-feedback,.form-control-file.is-invalid~.invalid-tooltip,.was-validated .form-control-file:invalid~.invalid-feedback,.was-validated .form-control-file:invalid~.invalid-tooltip{display:block}.form-check-input.is-invalid~.form-check-label,.was-validated .form-check-input:invalid~.form-check-label{color:#dc3545}.form-check-input.is-invalid~.invalid-feedback,.form-check-input.is-invalid~.invalid-tooltip,.was-validated .form-check-input:invalid~.invalid-feedback,.was-validated .form-check-input:invalid~.invalid-tooltip{display:block}.custom-control-input.is-invalid~.custom-control-label,.was-validated .custom-control-input:invalid~.custom-control-label{color:#dc3545}.custom-control-input.is-invalid~.custom-control-label::before,.was-validated .custom-control-input:invalid~.custom-control-label::before{border-color:#dc3545}.custom-control-input.is-invalid~.invalid-feedback,.custom-control-input.is-invalid~.invalid-tooltip,.was-validated .custom-control-input:invalid~.invalid-feedback,.was-validated .custom-control-input:invalid~.invalid-tooltip{display:block}.custom-control-input.is-invalid:checked~.custom-control-label::before,.was-validated .custom-control-input:invalid:checked~.custom-control-label::before{border-color:#e4606d;background-color:#e4606d}.custom-control-input.is-invalid:focus~.custom-control-label::before,.was-validated .custom-control-input:invalid:focus~.custom-control-label::before{box-shadow:0 0 0 .2rem rgba(220,53,69,.25)}.custom-control-input.is-invalid:focus:not(:checked)~.custom-control-label::before,.was-validated .custom-control-input:invalid:focus:not(:checked)~.custom-control-label::before{border-color:#dc3545}.custom-file-input.is-invalid~.custom-file-label,.was-validated .custom-file-input:invalid~.custom-file-label{border-color:#dc3545}.custom-file-input.is-invalid~.invalid-feedback,.custom-file-input.is-invalid~.invalid-tooltip,.was-validated .custom-file-input:invalid~.invalid-feedback,.was-validated .custom-file-input:invalid~.invalid-tooltip{display:block}.custom-file-input.is-invalid:focus~.custom-file-label,.was-validated .custom-file-input:invalid:focus~.custom-file-label{border-color:#dc3545;box-shadow:0 0 0 .2rem rgba(220,53,69,.25)}.form-inline{display:-ms-flexbox;display:flex;-ms-flex-flow:row wrap;flex-flow:row wrap;-ms-flex-align:center;align-items:center}.form-inline .form-check{width:100%}@media (min-width:576px){.form-inline label{display:-ms-flexbox;display:flex;-ms-flex-align:center;align-items:center;-ms-flex-pack:center;justify-content:center;margin-bottom:0}.form-inline .form-group{display:-ms-flexbox;display:flex;-ms-flex:0 0 auto;flex:0 0 auto;-ms-flex-flow:row wrap;flex-flow:row wrap;-ms-flex-align:center;align-items:center;margin-bottom:0}.form-inline .form-control{display:inline-block;width:auto;vertical-align:middle}.form-inline .form-control-plaintext{display:inline-block}.form-inline .custom-select,.form-inline .input-group{width:auto}.form-inline .form-check{display:-ms-flexbox;display:flex;-ms-flex-align:center;align-items:center;-ms-flex-pack:center;justify-content:center;width:auto;padding-left:0}.form-inline .form-check-input{position:relative;-ms-flex-negative:0;flex-shrink:0;margin-top:0;margin-right:.25rem;margin-left:0}.form-inline .custom-control{-ms-flex-align:center;align-items:center;-ms-flex-pack:center;justify-content:center}.form-inline .custom-control-label{margin-bottom:0}}.btn{display:inline-block;font-weight:400;color:#212529;text-align:center;vertical-align:middle;-webkit-user-select:none;-moz-user-select:none;-ms-user-select:none;user-select:none;background-color:transparent;border:1px solid transparent;padding:.375rem .75rem;font-size:1rem;line-height:1.5;border-radius:.25rem;transition:color .15s ease-in-out,background-color .15s ease-in-out,border-color .15s ease-in-out,box-shadow .15s ease-in-out}@media (prefers-reduced-motion:reduce){.btn{transition:none}}.btn:hover{color:#212529;text-decoration:none}.btn.focus,.btn:focus{outline:0;box-shadow:0 0 0 .2rem rgba(0,123,255,.25)}.btn.disabled,.btn:disabled{opacity:.65}a.btn.disabled,fieldset:disabled a.btn{pointer-events:none}.btn-primary{color:#fff;background-color:#007bff;border-color:#007bff}.btn-primary:hover{color:#fff;background-color:#0069d9;border-color:#0062cc}.btn-primary.focus,.btn-primary:focus{box-shadow:0 0 0 .2rem rgba(38,143,255,.5)}.btn-primary.disabled,.btn-primary:disabled{color:#fff;background-color:#007bff;border-color:#007bff}.btn-primary:not(:disabled):not(.disabled).active,.btn-primary:not(:disabled):not(.disabled):active,.show>.btn-primary.dropdown-toggle{color:#fff;background-color:#0062cc;border-color:#005cbf}.btn-primary:not(:disabled):not(.disabled).active:focus,.btn-primary:not(:disabled):not(.disabled):active:focus,.show>.btn-primary.dropdown-toggle:focus{box-shadow:0 0 0 .2rem rgba(38,143,255,.5)}.btn-secondary{color:#fff;background-color:#6c757d;border-color:#6c757d}.btn-secondary:hover{color:#fff;background-color:#5a6268;border-color:#545b62}.btn-secondary.focus,.btn-secondary:focus{box-shadow:0 0 0 .2rem rgba(130,138,145,.5)}.btn-secondary.disabled,.btn-secondary:disabled{color:#fff;background-color:#6c757d;border-color:#6c757d}.btn-secondary:not(:disabled):not(.disabled).active,.btn-secondary:not(:disabled):not(.disabled):active,.show>.btn-secondary.dropdown-toggle{color:#fff;background-color:#545b62;border-color:#4e555b}.btn-secondary:not(:disabled):not(.disabled).active:focus,.btn-secondary:not(:disabled):not(.disabled):active:focus,.show>.btn-secondary.dropdown-toggle:focus{box-shadow:0 0 0 .2rem rgba(130,138,145,.5)}.btn-success{color:#fff;background-color:#28a745;border-color:#28a745}.btn-success:hover{color:#fff;background-color:#218838;border-color:#1e7e34}.btn-success.focus,.btn-success:focus{box-shadow:0 0 0 .2rem rgba(72,180,97,.5)}.btn-success.disabled,.btn-success:disabled{color:#fff;background-color:#28a745;border-color:#28a745}.btn-success:not(:disabled):not(.disabled).active,.btn-success:not(:disabled):not(.disabled):active,.show>.btn-success.dropdown-toggle{color:#fff;background-color:#1e7e34;border-color:#1c7430}.btn-success:not(:disabled):not(.disabled).active:focus,.btn-success:not(:disabled):not(.disabled):active:focus,.show>.btn-success.dropdown-toggle:focus{box-shadow:0 0 0 .2rem rgba(72,180,97,.5)}.btn-info{color:#fff;background-color:#17a2b8;border-color:#17a2b8}.btn-info:hover{color:#fff;background-color:#138496;border-color:#117a8b}.btn-info.focus,.btn-info:focus{box-shadow:0 0 0 .2rem rgba(58,176,195,.5)}.btn-info.disabled,.btn-info:disabled{color:#fff;background-color:#17a2b8;border-color:#17a2b8}.btn-info:not(:disabled):not(.disabled).active,.btn-info:not(:disabled):not(.disabled):active,.show>.btn-info.dropdown-toggle{color:#fff;background-color:#117a8b;border-color:#10707f}.btn-info:not(:disabled):not(.disabled).active:focus,.btn-info:not(:disabled):not(.disabled):active:focus,.show>.btn-info.dropdown-toggle:focus{box-shadow:0 0 0 .2rem rgba(58,176,195,.5)}.btn-warning{color:#212529;background-color:#ffc107;border-color:#ffc107}.btn-warning:hover{color:#212529;background-color:#e0a800;border-color:#d39e00}.btn-warning.focus,.btn-warning:focus{box-shadow:0 0 0 .2rem rgba(222,170,12,.5)}.btn-warning.disabled,.btn-warning:disabled{color:#212529;background-color:#ffc107;border-color:#ffc107}.btn-warning:not(:disabled):not(.disabled).active,.btn-warning:not(:disabled):not(.disabled):active,.show>.btn-warning.dropdown-toggle{color:#212529;background-color:#d39e00;border-color:#c69500}.btn-warning:not(:disabled):not(.disabled).active:focus,.btn-warning:not(:disabled):not(.disabled):active:focus,.show>.btn-warning.dropdown-toggle:focus{box-shadow:0 0 0 .2rem rgba(222,170,12,.5)}.btn-danger{color:#fff;background-color:#dc3545;border-color:#dc3545}.btn-danger:hover{color:#fff;background-color:#c82333;border-color:#bd2130}.btn-danger.focus,.btn-danger:focus{box-shadow:0 0 0 .2rem rgba(225,83,97,.5)}.btn-danger.disabled,.btn-danger:disabled{color:#fff;background-color:#dc3545;border-color:#dc3545}.btn-danger:not(:disabled):not(.disabled).active,.btn-danger:not(:disabled):not(.disabled):active,.show>.btn-danger.dropdown-toggle{color:#fff;background-color:#bd2130;border-color:#b21f2d}.btn-danger:not(:disabled):not(.disabled).active:focus,.btn-danger:not(:disabled):not(.disabled):active:focus,.show>.btn-danger.dropdown-toggle:focus{box-shadow:0 0 0 .2rem rgba(225,83,97,.5)}.btn-light{color:#212529;background-color:#f8f9fa;border-color:#f8f9fa}.btn-light:hover{color:#212529;background-color:#e2e6ea;border-color:#dae0e5}.btn-light.focus,.btn-light:focus{box-shadow:0 0 0 .2rem rgba(216,217,219,.5)}.btn-light.disabled,.btn-light:disabled{color:#212529;background-color:#f8f9fa;border-color:#f8f9fa}.btn-light:not(:disabled):not(.disabled).active,.btn-light:not(:disabled):not(.disabled):active,.show>.btn-light.dropdown-toggle{color:#212529;background-color:#dae0e5;border-color:#d3d9df}.btn-light:not(:disabled):not(.disabled).active:focus,.btn-light:not(:disabled):not(.disabled):active:focus,.show>.btn-light.dropdown-toggle:focus{box-shadow:0 0 0 .2rem rgba(216,217,219,.5)}.btn-dark{color:#fff;background-color:#343a40;border-color:#343a40}.btn-dark:hover{color:#fff;background-color:#23272b;border-color:#1d2124}.btn-dark.focus,.btn-dark:focus{box-shadow:0 0 0 .2rem rgba(82,88,93,.5)}.btn-dark.disabled,.btn-dark:disabled{color:#fff;background-color:#343a40;border-color:#343a40}.btn-dark:not(:disabled):not(.disabled).active,.btn-dark:not(:disabled):not(.disabled):active,.show>.btn-dark.dropdown-toggle{color:#fff;background-color:#1d2124;border-color:#171a1d}.btn-dark:not(:disabled):not(.disabled).active:focus,.btn-dark:not(:disabled):not(.disabled):active:focus,.show>.btn-dark.dropdown-toggle:focus{box-shadow:0 0 0 .2rem rgba(82,88,93,.5)}.btn-outline-primary{color:#007bff;border-color:#007bff}.btn-outline-primary:hover{color:#fff;background-color:#007bff;border-color:#007bff}.btn-outline-primary.focus,.btn-outline-primary:focus{box-shadow:0 0 0 .2rem rgba(0,123,255,.5)}.btn-outline-primary.disabled,.btn-outline-primary:disabled{color:#007bff;background-color:transparent}.btn-outline-primary:not(:disabled):not(.disabled).active,.btn-outline-primary:not(:disabled):not(.disabled):active,.show>.btn-outline-primary.dropdown-toggle{color:#fff;background-color:#007bff;border-color:#007bff}.btn-outline-primary:not(:disabled):not(.disabled).active:focus,.btn-outline-primary:not(:disabled):not(.disabled):active:focus,.show>.btn-outline-primary.dropdown-toggle:focus{box-shadow:0 0 0 .2rem rgba(0,123,255,.5)}.btn-outline-secondary{color:#6c757d;border-color:#6c757d}.btn-outline-secondary:hover{color:#fff;background-color:#6c757d;border-color:#6c757d}.btn-outline-secondary.focus,.btn-outline-secondary:focus{box-shadow:0 0 0 .2rem rgba(108,117,125,.5)}.btn-outline-secondary.disabled,.btn-outline-secondary:disabled{color:#6c757d;background-color:transparent}.btn-outline-secondary:not(:disabled):not(.disabled).active,.btn-outline-secondary:not(:disabled):not(.disabled):active,.show>.btn-outline-secondary.dropdown-toggle{color:#fff;background-color:#6c757d;border-color:#6c757d}.btn-outline-secondary:not(:disabled):not(.disabled).active:focus,.btn-outline-secondary:not(:disabled):not(.disabled):active:focus,.show>.btn-outline-secondary.dropdown-toggle:focus{box-shadow:0 0 0 .2rem rgba(108,117,125,.5)}.btn-outline-success{color:#28a745;border-color:#28a745}.btn-outline-success:hover{color:#fff;background-color:#28a745;border-color:#28a745}.btn-outline-success.focus,.btn-outline-success:focus{box-shadow:0 0 0 .2rem rgba(40,167,69,.5)}.btn-outline-success.disabled,.btn-outline-success:disabled{color:#28a745;background-color:transparent}.btn-outline-success:not(:disabled):not(.disabled).active,.btn-outline-success:not(:disabled):not(.disabled):active,.show>.btn-outline-success.dropdown-toggle{color:#fff;background-color:#28a745;border-color:#28a745}.btn-outline-success:not(:disabled):not(.disabled).active:focus,.btn-outline-success:not(:disabled):not(.disabled):active:focus,.show>.btn-outline-success.dropdown-toggle:focus{box-shadow:0 0 0 .2rem rgba(40,167,69,.5)}.btn-outline-info{color:#17a2b8;border-color:#17a2b8}.btn-outline-info:hover{color:#fff;background-color:#17a2b8;border-color:#17a2b8}.btn-outline-info.focus,.btn-outline-info:focus{box-shadow:0 0 0 .2rem rgba(23,162,184,.5)}.btn-outline-info.disabled,.btn-outline-info:disabled{color:#17a2b8;background-color:transparent}.btn-outline-info:not(:disabled):not(.disabled).active,.btn-outline-info:not(:disabled):not(.disabled):active,.show>.btn-outline-info.dropdown-toggle{color:#fff;background-color:#17a2b8;border-color:#17a2b8}.btn-outline-info:not(:disabled):not(.disabled).active:focus,.btn-outline-info:not(:disabled):not(.disabled):active:focus,.show>.btn-outline-info.dropdown-toggle:focus{box-shadow:0 0 0 .2rem rgba(23,162,184,.5)}.btn-outline-warning{color:#ffc107;border-color:#ffc107}.btn-outline-warning:hover{color:#212529;background-color:#ffc107;border-color:#ffc107}.btn-outline-warning.focus,.btn-outline-warning:focus{box-shadow:0 0 0 .2rem rgba(255,193,7,.5)}.btn-outline-warning.disabled,.btn-outline-warning:disabled{color:#ffc107;background-color:transparent}.btn-outline-warning:not(:disabled):not(.disabled).active,.btn-outline-warning:not(:disabled):not(.disabled):active,.show>.btn-outline-warning.dropdown-toggle{color:#212529;background-color:#ffc107;border-color:#ffc107}.btn-outline-warning:not(:disabled):not(.disabled).active:focus,.btn-outline-warning:not(:disabled):not(.disabled):active:focus,.show>.btn-outline-warning.dropdown-toggle:focus{box-shadow:0 0 0 .2rem rgba(255,193,7,.5)}.btn-outline-danger{color:#dc3545;border-color:#dc3545}.btn-outline-danger:hover{color:#fff;background-color:#dc3545;border-color:#dc3545}.btn-outline-danger.focus,.btn-outline-danger:focus{box-shadow:0 0 0 .2rem rgba(220,53,69,.5)}.btn-outline-danger.disabled,.btn-outline-danger:disabled{color:#dc3545;background-color:transparent}.btn-outline-danger:not(:disabled):not(.disabled).active,.btn-outline-danger:not(:disabled):not(.disabled):active,.show>.btn-outline-danger.dropdown-toggle{color:#fff;background-color:#dc3545;border-color:#dc3545}.btn-outline-danger:not(:disabled):not(.disabled).active:focus,.btn-outline-danger:not(:disabled):not(.disabled):active:focus,.show>.btn-outline-danger.dropdown-toggle:focus{box-shadow:0 0 0 .2rem rgba(220,53,69,.5)}.btn-outline-light{color:#f8f9fa;border-color:#f8f9fa}.btn-outline-light:hover{color:#212529;background-color:#f8f9fa;border-color:#f8f9fa}.btn-outline-light.focus,.btn-outline-light:focus{box-shadow:0 0 0 .2rem rgba(248,249,250,.5)}.btn-outline-light.disabled,.btn-outline-light:disabled{color:#f8f9fa;background-color:transparent}.btn-outline-light:not(:disabled):not(.disabled).active,.btn-outline-light:not(:disabled):not(.disabled):active,.show>.btn-outline-light.dropdown-toggle{color:#212529;background-color:#f8f9fa;border-color:#f8f9fa}.btn-outline-light:not(:disabled):not(.disabled).active:focus,.btn-outline-light:not(:disabled):not(.disabled):active:focus,.show>.btn-outline-light.dropdown-toggle:focus{box-shadow:0 0 0 .2rem rgba(248,249,250,.5)}.btn-outline-dark{color:#343a40;border-color:#343a40}.btn-outline-dark:hover{color:#fff;background-color:#343a40;border-color:#343a40}.btn-outline-dark.focus,.btn-outline-dark:focus{box-shadow:0 0 0 .2rem rgba(52,58,64,.5)}.btn-outline-dark.disabled,.btn-outline-dark:disabled{color:#343a40;background-color:transparent}.btn-outline-dark:not(:disabled):not(.disabled).active,.btn-outline-dark:not(:disabled):not(.disabled):active,.show>.btn-outline-dark.dropdown-toggle{color:#fff;background-color:#343a40;border-color:#343a40}.btn-outline-dark:not(:disabled):not(.disabled).active:focus,.btn-outline-dark:not(:disabled):not(.disabled):active:focus,.show>.btn-outline-dark.dropdown-toggle:focus{box-shadow:0 0 0 .2rem rgba(52,58,64,.5)}.btn-link{font-weight:400;color:#007bff;text-decoration:none}.btn-link:hover{color:#0056b3;text-decoration:underline}.btn-link.focus,.btn-link:focus{text-decoration:underline;box-shadow:none}.btn-link.disabled,.btn-link:disabled{color:#6c757d;pointer-events:none}.btn-group-lg>.btn,.btn-lg{padding:.5rem 1rem;font-size:1.25rem;line-height:1.5;border-radius:.3rem}.btn-group-sm>.btn,.btn-sm{padding:.25rem .5rem;font-size:.875rem;line-height:1.5;border-radius:.2rem}.btn-block{display:block;width:100%}.btn-block+.btn-block{margin-top:.5rem}input[type=button].btn-block,input[type=reset].btn-block,input[type=submit].btn-block{width:100%}.fade{transition:opacity .15s linear}@media (prefers-reduced-motion:reduce){.fade{transition:none}}.fade:not(.show){opacity:0}.collapse:not(.show){display:none}.collapsing{position:relative;height:0;overflow:hidden;transition:height .35s ease}@media (prefers-reduced-motion:reduce){.collapsing{transition:none}}.dropdown,.dropleft,.dropright,.dropup{position:relative}.dropdown-toggle{white-space:nowrap}.dropdown-toggle::after{display:inline-block;margin-left:.255em;vertical-align:.255em;content:"";border-top:.3em solid;border-right:.3em solid transparent;border-bottom:0;border-left:.3em solid transparent}.dropdown-toggle:empty::after{margin-left:0}.dropdown-menu{position:absolute;top:100%;left:0;z-index:1000;display:none;float:left;min-width:10rem;padding:.5rem 0;margin:.125rem 0 0;font-size:1rem;color:#212529;text-align:left;list-style:none;background-color:#fff;background-clip:padding-box;border:1px solid rgba(0,0,0,.15);border-radius:.25rem}.dropdown-menu-left{right:auto;left:0}.dropdown-menu-right{right:0;left:auto}@media (min-width:576px){.dropdown-menu-sm-left{right:auto;left:0}.dropdown-menu-sm-right{right:0;left:auto}}@media (min-width:768px){.dropdown-menu-md-left{right:auto;left:0}.dropdown-menu-md-right{right:0;left:auto}}@media (min-width:992px){.dropdown-menu-lg-left{right:auto;left:0}.dropdown-menu-lg-right{right:0;left:auto}}@media (min-width:1200px){.dropdown-menu-xl-left{right:auto;left:0}.dropdown-menu-xl-right{right:0;left:auto}}.dropup .dropdown-menu{top:auto;bottom:100%;margin-top:0;margin-bottom:.125rem}.dropup .dropdown-toggle::after{display:inline-block;margin-left:.255em;vertical-align:.255em;content:"";border-top:0;border-right:.3em solid transparent;border-bottom:.3em solid;border-left:.3em solid transparent}.dropup .dropdown-toggle:empty::after{margin-left:0}.dropright .dropdown-menu{top:0;right:auto;left:100%;margin-top:0;margin-left:.125rem}.dropright .dropdown-toggle::after{display:inline-block;margin-left:.255em;vertical-align:.255em;content:"";border-top:.3em solid transparent;border-right:0;border-bottom:.3em solid transparent;border-left:.3em solid}.dropright .dropdown-toggle:empty::after{margin-left:0}.dropright .dropdown-toggle::after{vertical-align:0}.dropleft .dropdown-menu{top:0;right:100%;left:auto;margin-top:0;margin-right:.125rem}.dropleft .dropdown-toggle::after{display:inline-block;margin-left:.255em;vertical-align:.255em;content:""}.dropleft .dropdown-toggle::after{display:none}.dropleft .dropdown-toggle::before{display:inline-block;margin-right:.255em;vertical-align:.255em;content:"";border-top:.3em solid transparent;border-right:.3em solid;border-bottom:.3em solid transparent}.dropleft .dropdown-toggle:empty::after{margin-left:0}.dropleft .dropdown-toggle::before{vertical-align:0}.dropdown-menu[x-placement^=bottom],.dropdown-menu[x-placement^=left],.dropdown-menu[x-placement^=right],.dropdown-menu[x-placement^=top]{right:auto;bottom:auto}.dropdown-divider{height:0;margin:.5rem 0;overflow:hidden;border-top:1px solid #e9ecef}.dropdown-item{display:block;width:100%;padding:.25rem 1.5rem;clear:both;font-weight:400;color:#212529;text-align:inherit;white-space:nowrap;background-color:transparent;border:0}.dropdown-item:focus,.dropdown-item:hover{color:#16181b;text-decoration:none;background-color:#f8f9fa}.dropdown-item.active,.dropdown-item:active{color:#fff;text-decoration:none;background-color:#007bff}.dropdown-item.disabled,.dropdown-item:disabled{color:#6c757d;pointer-events:none;background-color:transparent}.dropdown-menu.show{display:block}.dropdown-header{display:block;padding:.5rem 1.5rem;margin-bottom:0;font-size:.875rem;color:#6c757d;white-space:nowrap}.dropdown-item-text{display:block;padding:.25rem 1.5rem;color:#212529}.btn-group,.btn-group-vertical{position:relative;display:-ms-inline-flexbox;display:inline-flex;vertical-align:middle}.btn-group-vertical>.btn,.btn-group>.btn{position:relative;-ms-flex:1 1 auto;flex:1 1 auto}.btn-group-vertical>.btn:hover,.btn-group>.btn:hover{z-index:1}.btn-group-vertical>.btn.active,.btn-group-vertical>.btn:active,.btn-group-vertical>.btn:focus,.btn-group>.btn.active,.btn-group>.btn:active,.btn-group>.btn:focus{z-index:1}.btn-toolbar{display:-ms-flexbox;display:flex;-ms-flex-wrap:wrap;flex-wrap:wrap;-ms-flex-pack:start;justify-content:flex-start}.btn-toolbar .input-group{width:auto}.btn-group>.btn-group:not(:first-child),.btn-group>.btn:not(:first-child){margin-left:-1px}.btn-group>.btn-group:not(:last-child)>.btn,.btn-group>.btn:not(:last-child):not(.dropdown-toggle){border-top-right-radius:0;border-bottom-right-radius:0}.btn-group>.btn-group:not(:first-child)>.btn,.btn-group>.btn:not(:first-child){border-top-left-radius:0;border-bottom-left-radius:0}.dropdown-toggle-split{padding-right:.5625rem;padding-left:.5625rem}.dropdown-toggle-split::after,.dropright .dropdown-toggle-split::after,.dropup .dropdown-toggle-split::after{margin-left:0}.dropleft .dropdown-toggle-split::before{margin-right:0}.btn-group-sm>.btn+.dropdown-toggle-split,.btn-sm+.dropdown-toggle-split{padding-right:.375rem;padding-left:.375rem}.btn-group-lg>.btn+.dropdown-toggle-split,.btn-lg+.dropdown-toggle-split{padding-right:.75rem;padding-left:.75rem}.btn-group-vertical{-ms-flex-direction:column;flex-direction:column;-ms-flex-align:start;align-items:flex-start;-ms-flex-pack:center;justify-content:center}.btn-group-vertical>.btn,.btn-group-vertical>.btn-group{width:100%}.btn-group-vertical>.btn-group:not(:first-child),.btn-group-vertical>.btn:not(:first-child){margin-top:-1px}.btn-group-vertical>.btn-group:not(:last-child)>.btn,.btn-group-vertical>.btn:not(:last-child):not(.dropdown-toggle){border-bottom-right-radius:0;border-bottom-left-radius:0}.btn-group-vertical>.btn-group:not(:first-child)>.btn,.btn-group-vertical>.btn:not(:first-child){border-top-left-radius:0;border-top-right-radius:0}.btn-group-toggle>.btn,.btn-group-toggle>.btn-group>.btn{margin-bottom:0}.btn-group-toggle>.btn input[type=checkbox],.btn-group-toggle>.btn input[type=radio],.btn-group-toggle>.btn-group>.btn input[type=checkbox],.btn-group-toggle>.btn-group>.btn input[type=radio]{position:absolute;clip:rect(0,0,0,0);pointer-events:none}.input-group{position:relative;display:-ms-flexbox;display:flex;-ms-flex-wrap:wrap;flex-wrap:wrap;-ms-flex-align:stretch;align-items:stretch;width:100%}.input-group>.custom-file,.input-group>.custom-select,.input-group>.form-control,.input-group>.form-control-plaintext{position:relative;-ms-flex:1 1 auto;flex:1 1 auto;width:1%;margin-bottom:0}.input-group>.custom-file+.custom-file,.input-group>.custom-file+.custom-select,.input-group>.custom-file+.form-control,.input-group>.custom-select+.custom-file,.input-group>.custom-select+.custom-select,.input-group>.custom-select+.form-control,.input-group>.form-control+.custom-file,.input-group>.form-control+.custom-select,.input-group>.form-control+.form-control,.input-group>.form-control-plaintext+.custom-file,.input-group>.form-control-plaintext+.custom-select,.input-group>.form-control-plaintext+.form-control{margin-left:-1px}.input-group>.custom-file .custom-file-input:focus~.custom-file-label,.input-group>.custom-select:focus,.input-group>.form-control:focus{z-index:3}.input-group>.custom-file .custom-file-input:focus{z-index:4}.input-group>.custom-select:not(:last-child),.input-group>.form-control:not(:last-child){border-top-right-radius:0;border-bottom-right-radius:0}.input-group>.custom-select:not(:first-child),.input-group>.form-control:not(:first-child){border-top-left-radius:0;border-bottom-left-radius:0}.input-group>.custom-file{display:-ms-flexbox;display:flex;-ms-flex-align:center;align-items:center}.input-group>.custom-file:not(:last-child) .custom-file-label,.input-group>.custom-file:not(:last-child) .custom-file-label::after{border-top-right-radius:0;border-bottom-right-radius:0}.input-group>.custom-file:not(:first-child) .custom-file-label{border-top-left-radius:0;border-bottom-left-radius:0}.input-group-append,.input-group-prepend{display:-ms-flexbox;display:flex}.input-group-append .btn,.input-group-prepend .btn{position:relative;z-index:2}.input-group-append .btn:focus,.input-group-prepend .btn:focus{z-index:3}.input-group-append .btn+.btn,.input-group-append .btn+.input-group-text,.input-group-append .input-group-text+.btn,.input-group-append .input-group-text+.input-group-text,.input-group-prepend .btn+.btn,.input-group-prepend .btn+.input-group-text,.input-group-prepend .input-group-text+.btn,.input-group-prepend .input-group-text+.input-group-text{margin-left:-1px}.input-group-prepend{margin-right:-1px}.input-group-append{margin-left:-1px}.input-group-text{display:-ms-flexbox;display:flex;-ms-flex-align:center;align-items:center;padding:.375rem .75rem;margin-bottom:0;font-size:1rem;font-weight:400;line-height:1.5;color:#495057;text-align:center;white-space:nowrap;background-color:#e9ecef;border:1px solid #ced4da;border-radius:.25rem}.input-group-text input[type=checkbox],.input-group-text input[type=radio]{margin-top:0}.input-group-lg>.custom-select,.input-group-lg>.form-control:not(textarea){height:calc(1.5em + 1rem + 2px)}.input-group-lg>.custom-select,.input-group-lg>.form-control,.input-group-lg>.input-group-append>.btn,.input-group-lg>.input-group-append>.input-group-text,.input-group-lg>.input-group-prepend>.btn,.input-group-lg>.input-group-prepend>.input-group-text{padding:.5rem 1rem;font-size:1.25rem;line-height:1.5;border-radius:.3rem}.input-group-sm>.custom-select,.input-group-sm>.form-control:not(textarea){height:calc(1.5em + .5rem + 2px)}.input-group-sm>.custom-select,.input-group-sm>.form-control,.input-group-sm>.input-group-append>.btn,.input-group-sm>.input-group-append>.input-group-text,.input-group-sm>.input-group-prepend>.btn,.input-group-sm>.input-group-prepend>.input-group-text{padding:.25rem .5rem;font-size:.875rem;line-height:1.5;border-radius:.2rem}.input-group-lg>.custom-select,.input-group-sm>.custom-select{padding-right:1.75rem}.input-group>.input-group-append:last-child>.btn:not(:last-child):not(.dropdown-toggle),.input-group>.input-group-append:last-child>.input-group-text:not(:last-child),.input-group>.input-group-append:not(:last-child)>.btn,.input-group>.input-group-append:not(:last-child)>.input-group-text,.input-group>.input-group-prepend>.btn,.input-group>.input-group-prepend>.input-group-text{border-top-right-radius:0;border-bottom-right-radius:0}.input-group>.input-group-append>.btn,.input-group>.input-group-append>.input-group-text,.input-group>.input-group-prepend:first-child>.btn:not(:first-child),.input-group>.input-group-prepend:first-child>.input-group-text:not(:first-child),.input-group>.input-group-prepend:not(:first-child)>.btn,.input-group>.input-group-prepend:not(:first-child)>.input-group-text{border-top-left-radius:0;border-bottom-left-radius:0}.custom-control{position:relative;display:block;min-height:1.5rem;padding-left:1.5rem}.custom-control-inline{display:-ms-inline-flexbox;display:inline-flex;margin-right:1rem}.custom-control-input{position:absolute;z-index:-1;opacity:0}.custom-control-input:checked~.custom-control-label::before{color:#fff;border-color:#007bff;background-color:#007bff}.custom-control-input:focus~.custom-control-label::before{box-shadow:0 0 0 .2rem rgba(0,123,255,.25)}.custom-control-input:focus:not(:checked)~.custom-control-label::before{border-color:#80bdff}.custom-control-input:not(:disabled):active~.custom-control-label::before{color:#fff;background-color:#b3d7ff;border-color:#b3d7ff}.custom-control-input:disabled~.custom-control-label{color:#6c757d}.custom-control-input:disabled~.custom-control-label::before{background-color:#e9ecef}.custom-control-label{position:relative;margin-bottom:0;vertical-align:top}.custom-control-label::before{position:absolute;top:.25rem;left:-1.5rem;display:block;width:1rem;height:1rem;pointer-events:none;content:"";background-color:#fff;border:#adb5bd solid 1px}.custom-control-label::after{position:absolute;top:.25rem;left:-1.5rem;display:block;width:1rem;height:1rem;content:"";background:no-repeat 50%/50% 50%}.custom-checkbox .custom-control-label::before{border-radius:.25rem}.custom-checkbox .custom-control-input:checked~.custom-control-label::after{background-image:url("data:image/svg+xml,%3csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 8 8'%3e%3cpath fill='%23fff' d='M6.564.75l-3.59 3.612-1.538-1.55L0 4.26 2.974 7.25 8 2.193z'/%3e%3c/svg%3e")}.custom-checkbox .custom-control-input:indeterminate~.custom-control-label::before{border-color:#007bff;background-color:#007bff}.custom-checkbox .custom-control-input:indeterminate~.custom-control-label::after{background-image:url("data:image/svg+xml,%3csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 4 4'%3e%3cpath stroke='%23fff' d='M0 2h4'/%3e%3c/svg%3e")}.custom-checkbox .custom-control-input:disabled:checked~.custom-control-label::before{background-color:rgba(0,123,255,.5)}.custom-checkbox .custom-control-input:disabled:indeterminate~.custom-control-label::before{background-color:rgba(0,123,255,.5)}.custom-radio .custom-control-label::before{border-radius:50%}.custom-radio .custom-control-input:checked~.custom-control-label::after{background-image:url("data:image/svg+xml,%3csvg xmlns='http://www.w3.org/2000/svg' viewBox='-4 -4 8 8'%3e%3ccircle r='3' fill='%23fff'/%3e%3c/svg%3e")}.custom-radio .custom-control-input:disabled:checked~.custom-control-label::before{background-color:rgba(0,123,255,.5)}.custom-switch{padding-left:2.25rem}.custom-switch .custom-control-label::before{left:-2.25rem;width:1.75rem;pointer-events:all;border-radius:.5rem}.custom-switch .custom-control-label::after{top:calc(.25rem + 2px);left:calc(-2.25rem + 2px);width:calc(1rem - 4px);height:calc(1rem - 4px);background-color:#adb5bd;border-radius:.5rem;transition:background-color .15s ease-in-out,border-color .15s ease-in-out,box-shadow .15s ease-in-out,-webkit-transform .15s ease-in-out;transition:transform .15s ease-in-out,background-color .15s ease-in-out,border-color .15s ease-in-out,box-shadow .15s ease-in-out;transition:transform .15s ease-in-out,background-color .15s ease-in-out,border-color .15s ease-in-out,box-shadow .15s ease-in-out,-webkit-transform .15s ease-in-out}@media (prefers-reduced-motion:reduce){.custom-switch .custom-control-label::after{transition:none}}.custom-switch .custom-control-input:checked~.custom-control-label::after{background-color:#fff;-webkit-transform:translateX(.75rem);transform:translateX(.75rem)}.custom-switch .custom-control-input:disabled:checked~.custom-control-label::before{background-color:rgba(0,123,255,.5)}.custom-select{display:inline-block;width:100%;height:calc(1.5em + .75rem + 2px);padding:.375rem 1.75rem .375rem .75rem;font-size:1rem;font-weight:400;line-height:1.5;color:#495057;vertical-align:middle;background:url("data:image/svg+xml,%3csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 4 5'%3e%3cpath fill='%23343a40' d='M2 0L0 2h4zm0 5L0 3h4z'/%3e%3c/svg%3e") no-repeat right .75rem center/8px 10px;background-color:#fff;border:1px solid #ced4da;border-radius:.25rem;-webkit-appearance:none;-moz-appearance:none;appearance:none}.custom-select:focus{border-color:#80bdff;outline:0;box-shadow:0 0 0 .2rem rgba(0,123,255,.25)}.custom-select:focus::-ms-value{color:#495057;background-color:#fff}.custom-select[multiple],.custom-select[size]:not([size="1"]){height:auto;padding-right:.75rem;background-image:none}.custom-select:disabled{color:#6c757d;background-color:#e9ecef}.custom-select::-ms-expand{display:none}.custom-select-sm{height:calc(1.5em + .5rem + 2px);padding-top:.25rem;padding-bottom:.25rem;padding-left:.5rem;font-size:.875rem}.custom-select-lg{height:calc(1.5em + 1rem + 2px);padding-top:.5rem;padding-bottom:.5rem;padding-left:1rem;font-size:1.25rem}.custom-file{position:relative;display:inline-block;width:100%;height:calc(1.5em + .75rem + 2px);margin-bottom:0}.custom-file-input{position:relative;z-index:2;width:100%;height:calc(1.5em + .75rem + 2px);margin:0;opacity:0}.custom-file-input:focus~.custom-file-label{border-color:#80bdff;box-shadow:0 0 0 .2rem rgba(0,123,255,.25)}.custom-file-input:disabled~.custom-file-label{background-color:#e9ecef}.custom-file-input:lang(en)~.custom-file-label::after{content:"Browse"}.custom-file-input~.custom-file-label[data-browse]::after{content:attr(data-browse)}.custom-file-label{position:absolute;top:0;right:0;left:0;z-index:1;height:calc(1.5em + .75rem + 2px);padding:.375rem .75rem;font-weight:400;line-height:1.5;color:#495057;background-color:#fff;border:1px solid #ced4da;border-radius:.25rem}.custom-file-label::after{position:absolute;top:0;right:0;bottom:0;z-index:3;display:block;height:calc(1.5em + .75rem);padding:.375rem .75rem;line-height:1.5;color:#495057;content:"Browse";background-color:#e9ecef;border-left:inherit;border-radius:0 .25rem .25rem 0}.custom-range{width:100%;height:calc(1rem + .4rem);padding:0;background-color:transparent;-webkit-appearance:none;-moz-appearance:none;appearance:none}.custom-range:focus{outline:0}.custom-range:focus::-webkit-slider-thumb{box-shadow:0 0 0 1px #fff,0 0 0 .2rem rgba(0,123,255,.25)}.custom-range:focus::-moz-range-thumb{box-shadow:0 0 0 1px #fff,0 0 0 .2rem rgba(0,123,255,.25)}.custom-range:focus::-ms-thumb{box-shadow:0 0 0 1px #fff,0 0 0 .2rem rgba(0,123,255,.25)}.custom-range::-moz-focus-outer{border:0}.custom-range::-webkit-slider-thumb{width:1rem;height:1rem;margin-top:-.25rem;background-color:#007bff;border:0;border-radius:1rem;transition:background-color .15s ease-in-out,border-color .15s ease-in-out,box-shadow .15s ease-in-out;-webkit-appearance:none;appearance:none}@media (prefers-reduced-motion:reduce){.custom-range::-webkit-slider-thumb{transition:none}}.custom-range::-webkit-slider-thumb:active{background-color:#b3d7ff}.custom-range::-webkit-slider-runnable-track{width:100%;height:.5rem;color:transparent;cursor:pointer;background-color:#dee2e6;border-color:transparent;border-radius:1rem}.custom-range::-moz-range-thumb{width:1rem;height:1rem;background-color:#007bff;border:0;border-radius:1rem;transition:background-color .15s ease-in-out,border-color .15s ease-in-out,box-shadow .15s ease-in-out;-moz-appearance:none;appearance:none}@media (prefers-reduced-motion:reduce){.custom-range::-moz-range-thumb{transition:none}}.custom-range::-moz-range-thumb:active{background-color:#b3d7ff}.custom-range::-moz-range-track{width:100%;height:.5rem;color:transparent;cursor:pointer;background-color:#dee2e6;border-color:transparent;border-radius:1rem}.custom-range::-ms-thumb{width:1rem;height:1rem;margin-top:0;margin-right:.2rem;margin-left:.2rem;background-color:#007bff;border:0;border-radius:1rem;transition:background-color .15s ease-in-out,border-color .15s ease-in-out,box-shadow .15s ease-in-out;appearance:none}@media (prefers-reduced-motion:reduce){.custom-range::-ms-thumb{transition:none}}.custom-range::-ms-thumb:active{background-color:#b3d7ff}.custom-range::-ms-track{width:100%;height:.5rem;color:transparent;cursor:pointer;background-color:transparent;border-color:transparent;border-width:.5rem}.custom-range::-ms-fill-lower{background-color:#dee2e6;border-radius:1rem}.custom-range::-ms-fill-upper{margin-right:15px;background-color:#dee2e6;border-radius:1rem}.custom-range:disabled::-webkit-slider-thumb{background-color:#adb5bd}.custom-range:disabled::-webkit-slider-runnable-track{cursor:default}.custom-range:disabled::-moz-range-thumb{background-color:#adb5bd}.custom-range:disabled::-moz-range-track{cursor:default}.custom-range:disabled::-ms-thumb{background-color:#adb5bd}.custom-control-label::before,.custom-file-label,.custom-select{transition:background-color .15s ease-in-out,border-color .15s ease-in-out,box-shadow .15s ease-in-out}@media (prefers-reduced-motion:reduce){.custom-control-label::before,.custom-file-label,.custom-select{transition:none}}.nav{display:-ms-flexbox;display:flex;-ms-flex-wrap:wrap;flex-wrap:wrap;padding-left:0;margin-bottom:0;list-style:none}.nav-link{display:block;padding:.5rem 1rem}.nav-link:focus,.nav-link:hover{text-decoration:none}.nav-link.disabled{color:#6c757d;pointer-events:none;cursor:default}.nav-tabs{border-bottom:1px solid #dee2e6}.nav-tabs .nav-item{margin-bottom:-1px}.nav-tabs .nav-link{border:1px solid transparent;border-top-left-radius:.25rem;border-top-right-radius:.25rem}.nav-tabs .nav-link:focus,.nav-tabs .nav-link:hover{border-color:#e9ecef #e9ecef #dee2e6}.nav-tabs .nav-link.disabled{color:#6c757d;background-color:transparent;border-color:transparent}.nav-tabs .nav-item.show .nav-link,.nav-tabs .nav-link.active{color:#495057;background-color:#fff;border-color:#dee2e6 #dee2e6 #fff}.nav-tabs .dropdown-menu{margin-top:-1px;border-top-left-radius:0;border-top-right-radius:0}.nav-pills .nav-link{border-radius:.25rem}.nav-pills .nav-link.active,.nav-pills .show>.nav-link{color:#fff;background-color:#007bff}.nav-fill .nav-item{-ms-flex:1 1 auto;flex:1 1 auto;text-align:center}.nav-justified .nav-item{-ms-flex-preferred-size:0;flex-basis:0;-ms-flex-positive:1;flex-grow:1;text-align:center}.tab-content>.tab-pane{display:none}.tab-content>.active{display:block}.navbar{position:relative;display:-ms-flexbox;display:flex;-ms-flex-wrap:wrap;flex-wrap:wrap;-ms-flex-align:center;align-items:center;-ms-flex-pack:justify;justify-content:space-between;padding:.5rem 1rem}.navbar>.container,.navbar>.container-fluid{display:-ms-flexbox;display:flex;-ms-flex-wrap:wrap;flex-wrap:wrap;-ms-flex-align:center;align-items:center;-ms-flex-pack:justify;justify-content:space-between}.navbar-brand{display:inline-block;padding-top:.3125rem;padding-bottom:.3125rem;margin-right:1rem;font-size:1.25rem;line-height:inherit;white-space:nowrap}.navbar-brand:focus,.navbar-brand:hover{text-decoration:none}.navbar-nav{display:-ms-flexbox;display:flex;-ms-flex-direction:column;flex-direction:column;padding-left:0;margin-bottom:0;list-style:none}.navbar-nav .nav-link{padding-right:0;padding-left:0}.navbar-nav .dropdown-menu{position:static;float:none}.navbar-text{display:inline-block;padding-top:.5rem;padding-bottom:.5rem}.navbar-collapse{-ms-flex-preferred-size:100%;flex-basis:100%;-ms-flex-positive:1;flex-grow:1;-ms-flex-align:center;align-items:center}.navbar-toggler{padding:.25rem .75rem;font-size:1.25rem;line-height:1;background-color:transparent;border:1px solid transparent;border-radius:.25rem}.navbar-toggler:focus,.navbar-toggler:hover{text-decoration:none}.navbar-toggler-icon{display:inline-block;width:1.5em;height:1.5em;vertical-align:middle;content:"";background:no-repeat center center;background-size:100% 100%}@media (max-width:575.98px){.navbar-expand-sm>.container,.navbar-expand-sm>.container-fluid{padding-right:0;padding-left:0}}@media (min-width:576px){.navbar-expand-sm{-ms-flex-flow:row nowrap;flex-flow:row nowrap;-ms-flex-pack:start;justify-content:flex-start}.navbar-expand-sm .navbar-nav{-ms-flex-direction:row;flex-direction:row}.navbar-expand-sm .navbar-nav .dropdown-menu{position:absolute}.navbar-expand-sm .navbar-nav .nav-link{padding-right:.5rem;padding-left:.5rem}.navbar-expand-sm>.container,.navbar-expand-sm>.container-fluid{-ms-flex-wrap:nowrap;flex-wrap:nowrap}.navbar-expand-sm .navbar-collapse{display:-ms-flexbox!important;display:flex!important;-ms-flex-preferred-size:auto;flex-basis:auto}.navbar-expand-sm .navbar-toggler{display:none}}@media (max-width:767.98px){.navbar-expand-md>.container,.navbar-expand-md>.container-fluid{padding-right:0;padding-left:0}}@media (min-width:768px){.navbar-expand-md{-ms-flex-flow:row nowrap;flex-flow:row nowrap;-ms-flex-pack:start;justify-content:flex-start}.navbar-expand-md .navbar-nav{-ms-flex-direction:row;flex-direction:row}.navbar-expand-md .navbar-nav .dropdown-menu{position:absolute}.navbar-expand-md .navbar-nav .nav-link{padding-right:.5rem;padding-left:.5rem}.navbar-expand-md>.container,.navbar-expand-md>.container-fluid{-ms-flex-wrap:nowrap;flex-wrap:nowrap}.navbar-expand-md .navbar-collapse{display:-ms-flexbox!important;display:flex!important;-ms-flex-preferred-size:auto;flex-basis:auto}.navbar-expand-md .navbar-toggler{display:none}}@media (max-width:991.98px){.navbar-expand-lg>.container,.navbar-expand-lg>.container-fluid{padding-right:0;padding-left:0}}@media (min-width:992px){.navbar-expand-lg{-ms-flex-flow:row nowrap;flex-flow:row nowrap;-ms-flex-pack:start;justify-content:flex-start}.navbar-expand-lg .navbar-nav{-ms-flex-direction:row;flex-direction:row}.navbar-expand-lg .navbar-nav .dropdown-menu{position:absolute}.navbar-expand-lg .navbar-nav .nav-link{padding-right:.5rem;padding-left:.5rem}.navbar-expand-lg>.container,.navbar-expand-lg>.container-fluid{-ms-flex-wrap:nowrap;flex-wrap:nowrap}.navbar-expand-lg .navbar-collapse{display:-ms-flexbox!important;display:flex!important;-ms-flex-preferred-size:auto;flex-basis:auto}.navbar-expand-lg .navbar-toggler{display:none}}@media (max-width:1199.98px){.navbar-expand-xl>.container,.navbar-expand-xl>.container-fluid{padding-right:0;padding-left:0}}@media (min-width:1200px){.navbar-expand-xl{-ms-flex-flow:row nowrap;flex-flow:row nowrap;-ms-flex-pack:start;justify-content:flex-start}.navbar-expand-xl .navbar-nav{-ms-flex-direction:row;flex-direction:row}.navbar-expand-xl .navbar-nav .dropdown-menu{position:absolute}.navbar-expand-xl .navbar-nav .nav-link{padding-right:.5rem;padding-left:.5rem}.navbar-expand-xl>.container,.navbar-expand-xl>.container-fluid{-ms-flex-wrap:nowrap;flex-wrap:nowrap}.navbar-expand-xl .navbar-collapse{display:-ms-flexbox!important;display:flex!important;-ms-flex-preferred-size:auto;flex-basis:auto}.navbar-expand-xl .navbar-toggler{display:none}}.navbar-expand{-ms-flex-flow:row nowrap;flex-flow:row nowrap;-ms-flex-pack:start;justify-content:flex-start}.navbar-expand>.container,.navbar-expand>.container-fluid{padding-right:0;padding-left:0}.navbar-expand .navbar-nav{-ms-flex-direction:row;flex-direction:row}.navbar-expand .navbar-nav .dropdown-menu{position:absolute}.navbar-expand .navbar-nav .nav-link{padding-right:.5rem;padding-left:.5rem}.navbar-expand>.container,.navbar-expand>.container-fluid{-ms-flex-wrap:nowrap;flex-wrap:nowrap}.navbar-expand .navbar-collapse{display:-ms-flexbox!important;display:flex!important;-ms-flex-preferred-size:auto;flex-basis:auto}.navbar-expand .navbar-toggler{display:none}.navbar-light .navbar-brand{color:rgba(0,0,0,.9)}.navbar-light .navbar-brand:focus,.navbar-light .navbar-brand:hover{color:rgba(0,0,0,.9)}.navbar-light .navbar-nav .nav-link{color:rgba(0,0,0,.5)}.navbar-light .navbar-nav .nav-link:focus,.navbar-light .navbar-nav .nav-link:hover{color:rgba(0,0,0,.7)}.navbar-light .navbar-nav .nav-link.disabled{color:rgba(0,0,0,.3)}.navbar-light .navbar-nav .active>.nav-link,.navbar-light .navbar-nav .nav-link.active,.navbar-light .navbar-nav .nav-link.show,.navbar-light .navbar-nav .show>.nav-link{color:rgba(0,0,0,.9)}.navbar-light .navbar-toggler{color:rgba(0,0,0,.5);border-color:rgba(0,0,0,.1)}.navbar-light .navbar-toggler-icon{background-image:url("data:image/svg+xml,%3csvg viewBox='0 0 30 30' xmlns='http://www.w3.org/2000/svg'%3e%3cpath stroke='rgba(0, 0, 0, 0.5)' stroke-width='2' stroke-linecap='round' stroke-miterlimit='10' d='M4 7h22M4 15h22M4 23h22'/%3e%3c/svg%3e")}.navbar-light .navbar-text{color:rgba(0,0,0,.5)}.navbar-light .navbar-text a{color:rgba(0,0,0,.9)}.navbar-light .navbar-text a:focus,.navbar-light .navbar-text a:hover{color:rgba(0,0,0,.9)}.navbar-dark .navbar-brand{color:#fff}.navbar-dark .navbar-brand:focus,.navbar-dark .navbar-brand:hover{color:#fff}.navbar-dark .navbar-nav .nav-link{color:rgba(255,255,255,.5)}.navbar-dark .navbar-nav .nav-link:focus,.navbar-dark .navbar-nav .nav-link:hover{color:rgba(255,255,255,.75)}.navbar-dark .navbar-nav .nav-link.disabled{color:rgba(255,255,255,.25)}.navbar-dark .navbar-nav .active>.nav-link,.navbar-dark .navbar-nav .nav-link.active,.navbar-dark .navbar-nav .nav-link.show,.navbar-dark .navbar-nav .show>.nav-link{color:#fff}.navbar-dark .navbar-toggler{color:rgba(255,255,255,.5);border-color:rgba(255,255,255,.1)}.navbar-dark .navbar-toggler-icon{background-image:url("data:image/svg+xml,%3csvg viewBox='0 0 30 30' xmlns='http://www.w3.org/2000/svg'%3e%3cpath stroke='rgba(255, 255, 255, 0.5)' stroke-width='2' stroke-linecap='round' stroke-miterlimit='10' d='M4 7h22M4 15h22M4 23h22'/%3e%3c/svg%3e")}.navbar-dark .navbar-text{color:rgba(255,255,255,.5)}.navbar-dark .navbar-text a{color:#fff}.navbar-dark .navbar-text a:focus,.navbar-dark .navbar-text a:hover{color:#fff}.card{position:relative;display:-ms-flexbox;display:flex;-ms-flex-direction:column;flex-direction:column;min-width:0;word-wrap:break-word;background-color:#fff;background-clip:border-box;border:1px solid rgba(0,0,0,.125);border-radius:.25rem}.card>hr{margin-right:0;margin-left:0}.card>.list-group:first-child .list-group-item:first-child{border-top-left-radius:.25rem;border-top-right-radius:.25rem}.card>.list-group:last-child .list-group-item:last-child{border-bottom-right-radius:.25rem;border-bottom-left-radius:.25rem}.card-body{-ms-flex:1 1 auto;flex:1 1 auto;padding:1.25rem}.card-title{margin-bottom:.75rem}.card-subtitle{margin-top:-.375rem;margin-bottom:0}.card-text:last-child{margin-bottom:0}.card-link:hover{text-decoration:none}.card-link+.card-link{margin-left:1.25rem}.card-header{padding:.75rem 1.25rem;margin-bottom:0;background-color:rgba(0,0,0,.03);border-bottom:1px solid rgba(0,0,0,.125)}.card-header:first-child{border-radius:calc(.25rem - 1px) calc(.25rem - 1px) 0 0}.card-header+.list-group .list-group-item:first-child{border-top:0}.card-footer{padding:.75rem 1.25rem;background-color:rgba(0,0,0,.03);border-top:1px solid rgba(0,0,0,.125)}.card-footer:last-child{border-radius:0 0 calc(.25rem - 1px) calc(.25rem - 1px)}.card-header-tabs{margin-right:-.625rem;margin-bottom:-.75rem;margin-left:-.625rem;border-bottom:0}.card-header-pills{margin-right:-.625rem;margin-left:-.625rem}.card-img-overlay{position:absolute;top:0;right:0;bottom:0;left:0;padding:1.25rem}.card-img{width:100%;border-radius:calc(.25rem - 1px)}.card-img-top{width:100%;border-top-left-radius:calc(.25rem - 1px);border-top-right-radius:calc(.25rem - 1px)}.card-img-bottom{width:100%;border-bottom-right-radius:calc(.25rem - 1px);border-bottom-left-radius:calc(.25rem - 1px)}.card-deck{display:-ms-flexbox;display:flex;-ms-flex-direction:column;flex-direction:column}.card-deck .card{margin-bottom:15px}@media (min-width:576px){.card-deck{-ms-flex-flow:row wrap;flex-flow:row wrap;margin-right:-15px;margin-left:-15px}.card-deck .card{display:-ms-flexbox;display:flex;-ms-flex:1 0 0%;flex:1 0 0%;-ms-flex-direction:column;flex-direction:column;margin-right:15px;margin-bottom:0;margin-left:15px}}.card-group{display:-ms-flexbox;display:flex;-ms-flex-direction:column;flex-direction:column}.card-group>.card{margin-bottom:15px}@media (min-width:576px){.card-group{-ms-flex-flow:row wrap;flex-flow:row wrap}.card-group>.card{-ms-flex:1 0 0%;flex:1 0 0%;margin-bottom:0}.card-group>.card+.card{margin-left:0;border-left:0}.card-group>.card:not(:last-child){border-top-right-radius:0;border-bottom-right-radius:0}.card-group>.card:not(:last-child) .card-header,.card-group>.card:not(:last-child) .card-img-top{border-top-right-radius:0}.card-group>.card:not(:last-child) .card-footer,.card-group>.card:not(:last-child) .card-img-bottom{border-bottom-right-radius:0}.card-group>.card:not(:first-child){border-top-left-radius:0;border-bottom-left-radius:0}.card-group>.card:not(:first-child) .card-header,.card-group>.card:not(:first-child) .card-img-top{border-top-left-radius:0}.card-group>.card:not(:first-child) .card-footer,.card-group>.card:not(:first-child) .card-img-bottom{border-bottom-left-radius:0}}.card-columns .card{margin-bottom:.75rem}@media (min-width:576px){.card-columns{-webkit-column-count:3;-moz-column-count:3;column-count:3;-webkit-column-gap:1.25rem;-moz-column-gap:1.25rem;column-gap:1.25rem;orphans:1;widows:1}.card-columns .card{display:inline-block;width:100%}}.accordion>.card{overflow:hidden}.accordion>.card:not(:first-of-type) .card-header:first-child{border-radius:0}.accordion>.card:not(:first-of-type):not(:last-of-type){border-bottom:0;border-radius:0}.accordion>.card:first-of-type{border-bottom:0;border-bottom-right-radius:0;border-bottom-left-radius:0}.accordion>.card:last-of-type{border-top-left-radius:0;border-top-right-radius:0}.accordion>.card .card-header{margin-bottom:-1px}.breadcrumb{display:-ms-flexbox;display:flex;-ms-flex-wrap:wrap;flex-wrap:wrap;padding:.75rem 1rem;margin-bottom:1rem;list-style:none;background-color:#e9ecef;border-radius:.25rem}.breadcrumb-item+.breadcrumb-item{padding-left:.5rem}.breadcrumb-item+.breadcrumb-item::before{display:inline-block;padding-right:.5rem;color:#6c757d;content:"/"}.breadcrumb-item+.breadcrumb-item:hover::before{text-decoration:underline}.breadcrumb-item+.breadcrumb-item:hover::before{text-decoration:none}.breadcrumb-item.active{color:#6c757d}.pagination{display:-ms-flexbox;display:flex;padding-left:0;list-style:none;border-radius:.25rem}.page-link{position:relative;display:block;padding:.5rem .75rem;margin-left:-1px;line-height:1.25;color:#007bff;background-color:#fff;border:1px solid #dee2e6}.page-link:hover{z-index:2;color:#0056b3;text-decoration:none;background-color:#e9ecef;border-color:#dee2e6}.page-link:focus{z-index:2;outline:0;box-shadow:0 0 0 .2rem rgba(0,123,255,.25)}.page-item:first-child .page-link{margin-left:0;border-top-left-radius:.25rem;border-bottom-left-radius:.25rem}.page-item:last-child .page-link{border-top-right-radius:.25rem;border-bottom-right-radius:.25rem}.page-item.active .page-link{z-index:1;color:#fff;background-color:#007bff;border-color:#007bff}.page-item.disabled .page-link{color:#6c757d;pointer-events:none;cursor:auto;background-color:#fff;border-color:#dee2e6}.pagination-lg .page-link{padding:.75rem 1.5rem;font-size:1.25rem;line-height:1.5}.pagination-lg .page-item:first-child .page-link{border-top-left-radius:.3rem;border-bottom-left-radius:.3rem}.pagination-lg .page-item:last-child .page-link{border-top-right-radius:.3rem;border-bottom-right-radius:.3rem}.pagination-sm .page-link{padding:.25rem .5rem;font-size:.875rem;line-height:1.5}.pagination-sm .page-item:first-child .page-link{border-top-left-radius:.2rem;border-bottom-left-radius:.2rem}.pagination-sm .page-item:last-child .page-link{border-top-right-radius:.2rem;border-bottom-right-radius:.2rem}.badge{display:inline-block;padding:.25em .4em;font-size:75%;font-weight:700;line-height:1;text-align:center;white-space:nowrap;vertical-align:baseline;border-radius:.25rem;transition:color .15s ease-in-out,background-color .15s ease-in-out,border-color .15s ease-in-out,box-shadow .15s ease-in-out}@media (prefers-reduced-motion:reduce){.badge{transition:none}}a.badge:focus,a.badge:hover{text-decoration:none}.badge:empty{display:none}.btn .badge{position:relative;top:-1px}.badge-pill{padding-right:.6em;padding-left:.6em;border-radius:10rem}.badge-primary{color:#fff;background-color:#007bff}a.badge-primary:focus,a.badge-primary:hover{color:#fff;background-color:#0062cc}a.badge-primary.focus,a.badge-primary:focus{outline:0;box-shadow:0 0 0 .2rem rgba(0,123,255,.5)}.badge-secondary{color:#fff;background-color:#6c757d}a.badge-secondary:focus,a.badge-secondary:hover{color:#fff;background-color:#545b62}a.badge-secondary.focus,a.badge-secondary:focus{outline:0;box-shadow:0 0 0 .2rem rgba(108,117,125,.5)}.badge-success{color:#fff;background-color:#28a745}a.badge-success:focus,a.badge-success:hover{color:#fff;background-color:#1e7e34}a.badge-success.focus,a.badge-success:focus{outline:0;box-shadow:0 0 0 .2rem rgba(40,167,69,.5)}.badge-info{color:#fff;background-color:#17a2b8}a.badge-info:focus,a.badge-info:hover{color:#fff;background-color:#117a8b}a.badge-info.focus,a.badge-info:focus{outline:0;box-shadow:0 0 0 .2rem rgba(23,162,184,.5)}.badge-warning{color:#212529;background-color:#ffc107}a.badge-warning:focus,a.badge-warning:hover{color:#212529;background-color:#d39e00}a.badge-warning.focus,a.badge-warning:focus{outline:0;box-shadow:0 0 0 .2rem rgba(255,193,7,.5)}.badge-danger{color:#fff;background-color:#dc3545}a.badge-danger:focus,a.badge-danger:hover{color:#fff;background-color:#bd2130}a.badge-danger.focus,a.badge-danger:focus{outline:0;box-shadow:0 0 0 .2rem rgba(220,53,69,.5)}.badge-light{color:#212529;background-color:#f8f9fa}a.badge-light:focus,a.badge-light:hover{color:#212529;background-color:#dae0e5}a.badge-light.focus,a.badge-light:focus{outline:0;box-shadow:0 0 0 .2rem rgba(248,249,250,.5)}.badge-dark{color:#fff;background-color:#343a40}a.badge-dark:focus,a.badge-dark:hover{color:#fff;background-color:#1d2124}a.badge-dark.focus,a.badge-dark:focus{outline:0;box-shadow:0 0 0 .2rem rgba(52,58,64,.5)}.jumbotron{padding:2rem 1rem;margin-bottom:2rem;background-color:#e9ecef;border-radius:.3rem}@media (min-width:576px){.jumbotron{padding:4rem 2rem}}.jumbotron-fluid{padding-right:0;padding-left:0;border-radius:0}.alert{position:relative;padding:.75rem 1.25rem;margin-bottom:1rem;border:1px solid transparent;border-radius:.25rem}.alert-heading{color:inherit}.alert-link{font-weight:700}.alert-dismissible{padding-right:4rem}.alert-dismissible .close{position:absolute;top:0;right:0;padding:.75rem 1.25rem;color:inherit}.alert-primary{color:#004085;background-color:#cce5ff;border-color:#b8daff}.alert-primary hr{border-top-color:#9fcdff}.alert-primary .alert-link{color:#002752}.alert-secondary{color:#383d41;background-color:#e2e3e5;border-color:#d6d8db}.alert-secondary hr{border-top-color:#c8cbcf}.alert-secondary .alert-link{color:#202326}.alert-success{color:#155724;background-color:#d4edda;border-color:#c3e6cb}.alert-success hr{border-top-color:#b1dfbb}.alert-success .alert-link{color:#0b2e13}.alert-info{color:#0c5460;background-color:#d1ecf1;border-color:#bee5eb}.alert-info hr{border-top-color:#abdde5}.alert-info .alert-link{color:#062c33}.alert-warning{color:#856404;background-color:#fff3cd;border-color:#ffeeba}.alert-warning hr{border-top-color:#ffe8a1}.alert-warning .alert-link{color:#533f03}.alert-danger{color:#721c24;background-color:#f8d7da;border-color:#f5c6cb}.alert-danger hr{border-top-color:#f1b0b7}.alert-danger .alert-link{color:#491217}.alert-light{color:#818182;background-color:#fefefe;border-color:#fdfdfe}.alert-light hr{border-top-color:#ececf6}.alert-light .alert-link{color:#686868}.alert-dark{color:#1b1e21;background-color:#d6d8d9;border-color:#c6c8ca}.alert-dark hr{border-top-color:#b9bbbe}.alert-dark .alert-link{color:#040505}@-webkit-keyframes progress-bar-stripes{from{background-position:1rem 0}to{background-position:0 0}}@keyframes progress-bar-stripes{from{background-position:1rem 0}to{background-position:0 0}}.progress{display:-ms-flexbox;display:flex;height:1rem;overflow:hidden;font-size:.75rem;background-color:#e9ecef;border-radius:.25rem}.progress-bar{display:-ms-flexbox;display:flex;-ms-flex-direction:column;flex-direction:column;-ms-flex-pack:center;justify-content:center;color:#fff;text-align:center;white-space:nowrap;background-color:#007bff;transition:width .6s ease}@media (prefers-reduced-motion:reduce){.progress-bar{transition:none}}.progress-bar-striped{background-image:linear-gradient(45deg,rgba(255,255,255,.15) 25%,transparent 25%,transparent 50%,rgba(255,255,255,.15) 50%,rgba(255,255,255,.15) 75%,transparent 75%,transparent);background-size:1rem 1rem}.progress-bar-animated{-webkit-animation:progress-bar-stripes 1s linear infinite;animation:progress-bar-stripes 1s linear infinite}@media (prefers-reduced-motion:reduce){.progress-bar-animated{-webkit-animation:none;animation:none}}.media{display:-ms-flexbox;display:flex;-ms-flex-align:start;align-items:flex-start}.media-body{-ms-flex:1;flex:1}.list-group{display:-ms-flexbox;display:flex;-ms-flex-direction:column;flex-direction:column;padding-left:0;margin-bottom:0}.list-group-item-action{width:100%;color:#495057;text-align:inherit}.list-group-item-action:focus,.list-group-item-action:hover{z-index:1;color:#495057;text-decoration:none;background-color:#f8f9fa}.list-group-item-action:active{color:#212529;background-color:#e9ecef}.list-group-item{position:relative;display:block;padding:.75rem 1.25rem;margin-bottom:-1px;background-color:#fff;border:1px solid rgba(0,0,0,.125)}.list-group-item:first-child{border-top-left-radius:.25rem;border-top-right-radius:.25rem}.list-group-item:last-child{margin-bottom:0;border-bottom-right-radius:.25rem;border-bottom-left-radius:.25rem}.list-group-item.disabled,.list-group-item:disabled{color:#6c757d;pointer-events:none;background-color:#fff}.list-group-item.active{z-index:2;color:#fff;background-color:#007bff;border-color:#007bff}.list-group-horizontal{-ms-flex-direction:row;flex-direction:row}.list-group-horizontal .list-group-item{margin-right:-1px;margin-bottom:0}.list-group-horizontal .list-group-item:first-child{border-top-left-radius:.25rem;border-bottom-left-radius:.25rem;border-top-right-radius:0}.list-group-horizontal .list-group-item:last-child{margin-right:0;border-top-right-radius:.25rem;border-bottom-right-radius:.25rem;border-bottom-left-radius:0}@media (min-width:576px){.list-group-horizontal-sm{-ms-flex-direction:row;flex-direction:row}.list-group-horizontal-sm .list-group-item{margin-right:-1px;margin-bottom:0}.list-group-horizontal-sm .list-group-item:first-child{border-top-left-radius:.25rem;border-bottom-left-radius:.25rem;border-top-right-radius:0}.list-group-horizontal-sm .list-group-item:last-child{margin-right:0;border-top-right-radius:.25rem;border-bottom-right-radius:.25rem;border-bottom-left-radius:0}}@media (min-width:768px){.list-group-horizontal-md{-ms-flex-direction:row;flex-direction:row}.list-group-horizontal-md .list-group-item{margin-right:-1px;margin-bottom:0}.list-group-horizontal-md .list-group-item:first-child{border-top-left-radius:.25rem;border-bottom-left-radius:.25rem;border-top-right-radius:0}.list-group-horizontal-md .list-group-item:last-child{margin-right:0;border-top-right-radius:.25rem;border-bottom-right-radius:.25rem;border-bottom-left-radius:0}}@media (min-width:992px){.list-group-horizontal-lg{-ms-flex-direction:row;flex-direction:row}.list-group-horizontal-lg .list-group-item{margin-right:-1px;margin-bottom:0}.list-group-horizontal-lg .list-group-item:first-child{border-top-left-radius:.25rem;border-bottom-left-radius:.25rem;border-top-right-radius:0}.list-group-horizontal-lg .list-group-item:last-child{margin-right:0;border-top-right-radius:.25rem;border-bottom-right-radius:.25rem;border-bottom-left-radius:0}}@media (min-width:1200px){.list-group-horizontal-xl{-ms-flex-direction:row;flex-direction:row}.list-group-horizontal-xl .list-group-item{margin-right:-1px;margin-bottom:0}.list-group-horizontal-xl .list-group-item:first-child{border-top-left-radius:.25rem;border-bottom-left-radius:.25rem;border-top-right-radius:0}.list-group-horizontal-xl .list-group-item:last-child{margin-right:0;border-top-right-radius:.25rem;border-bottom-right-radius:.25rem;border-bottom-left-radius:0}}.list-group-flush .list-group-item{border-right:0;border-left:0;border-radius:0}.list-group-flush .list-group-item:last-child{margin-bottom:-1px}.list-group-flush:first-child .list-group-item:first-child{border-top:0}.list-group-flush:last-child .list-group-item:last-child{margin-bottom:0;border-bottom:0}.list-group-item-primary{color:#004085;background-color:#b8daff}.list-group-item-primary.list-group-item-action:focus,.list-group-item-primary.list-group-item-action:hover{color:#004085;background-color:#9fcdff}.list-group-item-primary.list-group-item-action.active{color:#fff;background-color:#004085;border-color:#004085}.list-group-item-secondary{color:#383d41;background-color:#d6d8db}.list-group-item-secondary.list-group-item-action:focus,.list-group-item-secondary.list-group-item-action:hover{color:#383d41;background-color:#c8cbcf}.list-group-item-secondary.list-group-item-action.active{color:#fff;background-color:#383d41;border-color:#383d41}.list-group-item-success{color:#155724;background-color:#c3e6cb}.list-group-item-success.list-group-item-action:focus,.list-group-item-success.list-group-item-action:hover{color:#155724;background-color:#b1dfbb}.list-group-item-success.list-group-item-action.active{color:#fff;background-color:#155724;border-color:#155724}.list-group-item-info{color:#0c5460;background-color:#bee5eb}.list-group-item-info.list-group-item-action:focus,.list-group-item-info.list-group-item-action:hover{color:#0c5460;background-color:#abdde5}.list-group-item-info.list-group-item-action.active{color:#fff;background-color:#0c5460;border-color:#0c5460}.list-group-item-warning{color:#856404;background-color:#ffeeba}.list-group-item-warning.list-group-item-action:focus,.list-group-item-warning.list-group-item-action:hover{color:#856404;background-color:#ffe8a1}.list-group-item-warning.list-group-item-action.active{color:#fff;background-color:#856404;border-color:#856404}.list-group-item-danger{color:#721c24;background-color:#f5c6cb}.list-group-item-danger.list-group-item-action:focus,.list-group-item-danger.list-group-item-action:hover{color:#721c24;background-color:#f1b0b7}.list-group-item-danger.list-group-item-action.active{color:#fff;background-color:#721c24;border-color:#721c24}.list-group-item-light{color:#818182;background-color:#fdfdfe}.list-group-item-light.list-group-item-action:focus,.list-group-item-light.list-group-item-action:hover{color:#818182;background-color:#ececf6}.list-group-item-light.list-group-item-action.active{color:#fff;background-color:#818182;border-color:#818182}.list-group-item-dark{color:#1b1e21;background-color:#c6c8ca}.list-group-item-dark.list-group-item-action:focus,.list-group-item-dark.list-group-item-action:hover{color:#1b1e21;background-color:#b9bbbe}.list-group-item-dark.list-group-item-action.active{color:#fff;background-color:#1b1e21;border-color:#1b1e21}.close{float:right;font-size:1.5rem;font-weight:700;line-height:1;color:#000;text-shadow:0 1px 0 #fff;opacity:.5}.close:hover{color:#000;text-decoration:none}.close:not(:disabled):not(.disabled):focus,.close:not(:disabled):not(.disabled):hover{opacity:.75}button.close{padding:0;background-color:transparent;border:0;-webkit-appearance:none;-moz-appearance:none;appearance:none}a.close.disabled{pointer-events:none}.toast{max-width:350px;overflow:hidden;font-size:.875rem;background-color:rgba(255,255,255,.85);background-clip:padding-box;border:1px solid rgba(0,0,0,.1);box-shadow:0 .25rem .75rem rgba(0,0,0,.1);-webkit-backdrop-filter:blur(10px);backdrop-filter:blur(10px);opacity:0;border-radius:.25rem}.toast:not(:last-child){margin-bottom:.75rem}.toast.showing{opacity:1}.toast.show{display:block;opacity:1}.toast.hide{display:none}.toast-header{display:-ms-flexbox;display:flex;-ms-flex-align:center;align-items:center;padding:.25rem .75rem;color:#6c757d;background-color:rgba(255,255,255,.85);background-clip:padding-box;border-bottom:1px solid rgba(0,0,0,.05)}.toast-body{padding:.75rem}.modal-open{overflow:hidden}.modal-open .modal{overflow-x:hidden;overflow-y:auto}.modal{position:fixed;top:0;left:0;z-index:1050;display:none;width:100%;height:100%;overflow:hidden;outline:0}.modal-dialog{position:relative;width:auto;margin:.5rem;pointer-events:none}.modal.fade .modal-dialog{transition:-webkit-transform .3s ease-out;transition:transform .3s ease-out;transition:transform .3s ease-out,-webkit-transform .3s ease-out;-webkit-transform:translate(0,-50px);transform:translate(0,-50px)}@media (prefers-reduced-motion:reduce){.modal.fade .modal-dialog{transition:none}}.modal.show .modal-dialog{-webkit-transform:none;transform:none}.modal-dialog-scrollable{display:-ms-flexbox;display:flex;max-height:calc(100% - 1rem)}.modal-dialog-scrollable .modal-content{max-height:calc(100vh - 1rem);overflow:hidden}.modal-dialog-scrollable .modal-footer,.modal-dialog-scrollable .modal-header{-ms-flex-negative:0;flex-shrink:0}.modal-dialog-scrollable .modal-body{overflow-y:auto}.modal-dialog-centered{display:-ms-flexbox;display:flex;-ms-flex-align:center;align-items:center;min-height:calc(100% - 1rem)}.modal-dialog-centered::before{display:block;height:calc(100vh - 1rem);content:""}.modal-dialog-centered.modal-dialog-scrollable{-ms-flex-direction:column;flex-direction:column;-ms-flex-pack:center;justify-content:center;height:100%}.modal-dialog-centered.modal-dialog-scrollable .modal-content{max-height:none}.modal-dialog-centered.modal-dialog-scrollable::before{content:none}.modal-content{position:relative;display:-ms-flexbox;display:flex;-ms-flex-direction:column;flex-direction:column;width:100%;pointer-events:auto;background-color:#fff;background-clip:padding-box;border:1px solid rgba(0,0,0,.2);border-radius:.3rem;outline:0}.modal-backdrop{position:fixed;top:0;left:0;z-index:1040;width:100vw;height:100vh;background-color:#000}.modal-backdrop.fade{opacity:0}.modal-backdrop.show{opacity:.5}.modal-header{display:-ms-flexbox;display:flex;-ms-flex-align:start;align-items:flex-start;-ms-flex-pack:justify;justify-content:space-between;padding:1rem 1rem;border-bottom:1px solid #dee2e6;border-top-left-radius:.3rem;border-top-right-radius:.3rem}.modal-header .close{padding:1rem 1rem;margin:-1rem -1rem -1rem auto}.modal-title{margin-bottom:0;line-height:1.5}.modal-body{position:relative;-ms-flex:1 1 auto;flex:1 1 auto;padding:1rem}.modal-footer{display:-ms-flexbox;display:flex;-ms-flex-align:center;align-items:center;-ms-flex-pack:end;justify-content:flex-end;padding:1rem;border-top:1px solid #dee2e6;border-bottom-right-radius:.3rem;border-bottom-left-radius:.3rem}.modal-footer>:not(:first-child){margin-left:.25rem}.modal-footer>:not(:last-child){margin-right:.25rem}.modal-scrollbar-measure{position:absolute;top:-9999px;width:50px;height:50px;overflow:scroll}@media (min-width:576px){.modal-dialog{max-width:500px;margin:1.75rem auto}.modal-dialog-scrollable{max-height:calc(100% - 3.5rem)}.modal-dialog-scrollable .modal-content{max-height:calc(100vh - 3.5rem)}.modal-dialog-centered{min-height:calc(100% - 3.5rem)}.modal-dialog-centered::before{height:calc(100vh - 3.5rem)}.modal-sm{max-width:300px}}@media (min-width:992px){.modal-lg,.modal-xl{max-width:800px}}@media (min-width:1200px){.modal-xl{max-width:1140px}}.tooltip{position:absolute;z-index:1070;display:block;margin:0;font-family:-apple-system,BlinkMacSystemFont,"Segoe UI",Roboto,"Helvetica Neue",Arial,"Noto Sans",sans-serif,"Apple Color Emoji","Segoe UI Emoji","Segoe UI Symbol","Noto Color Emoji";font-style:normal;font-weight:400;line-height:1.5;text-align:left;text-align:start;text-decoration:none;text-shadow:none;text-transform:none;letter-spacing:normal;word-break:normal;word-spacing:normal;white-space:normal;line-break:auto;font-size:.875rem;word-wrap:break-word;opacity:0}.tooltip.show{opacity:.9}.tooltip .arrow{position:absolute;display:block;width:.8rem;height:.4rem}.tooltip .arrow::before{position:absolute;content:"";border-color:transparent;border-style:solid}.bs-tooltip-auto[x-placement^=top],.bs-tooltip-top{padding:.4rem 0}.bs-tooltip-auto[x-placement^=top] .arrow,.bs-tooltip-top .arrow{bottom:0}.bs-tooltip-auto[x-placement^=top] .arrow::before,.bs-tooltip-top .arrow::before{top:0;border-width:.4rem .4rem 0;border-top-color:#000}.bs-tooltip-auto[x-placement^=right],.bs-tooltip-right{padding:0 .4rem}.bs-tooltip-auto[x-placement^=right] .arrow,.bs-tooltip-right .arrow{left:0;width:.4rem;height:.8rem}.bs-tooltip-auto[x-placement^=right] .arrow::before,.bs-tooltip-right .arrow::before{right:0;border-width:.4rem .4rem .4rem 0;border-right-color:#000}.bs-tooltip-auto[x-placement^=bottom],.bs-tooltip-bottom{padding:.4rem 0}.bs-tooltip-auto[x-placement^=bottom] .arrow,.bs-tooltip-bottom .arrow{top:0}.bs-tooltip-auto[x-placement^=bottom] .arrow::before,.bs-tooltip-bottom .arrow::before{bottom:0;border-width:0 .4rem .4rem;border-bottom-color:#000}.bs-tooltip-auto[x-placement^=left],.bs-tooltip-left{padding:0 .4rem}.bs-tooltip-auto[x-placement^=left] .arrow,.bs-tooltip-left .arrow{right:0;width:.4rem;height:.8rem}.bs-tooltip-auto[x-placement^=left] .arrow::before,.bs-tooltip-left .arrow::before{left:0;border-width:.4rem 0 .4rem .4rem;border-left-color:#000}.tooltip-inner{max-width:200px;padding:.25rem .5rem;color:#fff;text-align:center;background-color:#000;border-radius:.25rem}.popover{position:absolute;top:0;left:0;z-index:1060;display:block;max-width:276px;font-family:-apple-system,BlinkMacSystemFont,"Segoe UI",Roboto,"Helvetica Neue",Arial,"Noto Sans",sans-serif,"Apple Color Emoji","Segoe UI Emoji","Segoe UI Symbol","Noto Color Emoji";font-style:normal;font-weight:400;line-height:1.5;text-align:left;text-align:start;text-decoration:none;text-shadow:none;text-transform:none;letter-spacing:normal;word-break:normal;word-spacing:normal;white-space:normal;line-break:auto;font-size:.875rem;word-wrap:break-word;background-color:#fff;background-clip:padding-box;border:1px solid rgba(0,0,0,.2);border-radius:.3rem}.popover .arrow{position:absolute;display:block;width:1rem;height:.5rem;margin:0 .3rem}.popover .arrow::after,.popover .arrow::before{position:absolute;display:block;content:"";border-color:transparent;border-style:solid}.bs-popover-auto[x-placement^=top],.bs-popover-top{margin-bottom:.5rem}.bs-popover-auto[x-placement^=top]>.arrow,.bs-popover-top>.arrow{bottom:calc((.5rem + 1px) * -1)}.bs-popover-auto[x-placement^=top]>.arrow::before,.bs-popover-top>.arrow::before{bottom:0;border-width:.5rem .5rem 0;border-top-color:rgba(0,0,0,.25)}.bs-popover-auto[x-placement^=top]>.arrow::after,.bs-popover-top>.arrow::after{bottom:1px;border-width:.5rem .5rem 0;border-top-color:#fff}.bs-popover-auto[x-placement^=right],.bs-popover-right{margin-left:.5rem}.bs-popover-auto[x-placement^=right]>.arrow,.bs-popover-right>.arrow{left:calc((.5rem + 1px) * -1);width:.5rem;height:1rem;margin:.3rem 0}.bs-popover-auto[x-placement^=right]>.arrow::before,.bs-popover-right>.arrow::before{left:0;border-width:.5rem .5rem .5rem 0;border-right-color:rgba(0,0,0,.25)}.bs-popover-auto[x-placement^=right]>.arrow::after,.bs-popover-right>.arrow::after{left:1px;border-width:.5rem .5rem .5rem 0;border-right-color:#fff}.bs-popover-auto[x-placement^=bottom],.bs-popover-bottom{margin-top:.5rem}.bs-popover-auto[x-placement^=bottom]>.arrow,.bs-popover-bottom>.arrow{top:calc((.5rem + 1px) * -1)}.bs-popover-auto[x-placement^=bottom]>.arrow::before,.bs-popover-bottom>.arrow::before{top:0;border-width:0 .5rem .5rem .5rem;border-bottom-color:rgba(0,0,0,.25)}.bs-popover-auto[x-placement^=bottom]>.arrow::after,.bs-popover-bottom>.arrow::after{top:1px;border-width:0 .5rem .5rem .5rem;border-bottom-color:#fff}.bs-popover-auto[x-placement^=bottom] .popover-header::before,.bs-popover-bottom .popover-header::before{position:absolute;top:0;left:50%;display:block;width:1rem;margin-left:-.5rem;content:"";border-bottom:1px solid #f7f7f7}.bs-popover-auto[x-placement^=left],.bs-popover-left{margin-right:.5rem}.bs-popover-auto[x-placement^=left]>.arrow,.bs-popover-left>.arrow{right:calc((.5rem + 1px) * -1);width:.5rem;height:1rem;margin:.3rem 0}.bs-popover-auto[x-placement^=left]>.arrow::before,.bs-popover-left>.arrow::before{right:0;border-width:.5rem 0 .5rem .5rem;border-left-color:rgba(0,0,0,.25)}.bs-popover-auto[x-placement^=left]>.arrow::after,.bs-popover-left>.arrow::after{right:1px;border-width:.5rem 0 .5rem .5rem;border-left-color:#fff}.popover-header{padding:.5rem .75rem;margin-bottom:0;font-size:1rem;background-color:#f7f7f7;border-bottom:1px solid #ebebeb;border-top-left-radius:calc(.3rem - 1px);border-top-right-radius:calc(.3rem - 1px)}.popover-header:empty{display:none}.popover-body{padding:.5rem .75rem;color:#212529}.carousel{position:relative}.carousel.pointer-event{-ms-touch-action:pan-y;touch-action:pan-y}.carousel-inner{position:relative;width:100%;overflow:hidden}.carousel-inner::after{display:block;clear:both;content:""}.carousel-item{position:relative;display:none;float:left;width:100%;margin-right:-100%;-webkit-backface-visibility:hidden;backface-visibility:hidden;transition:-webkit-transform .6s ease-in-out;transition:transform .6s ease-in-out;transition:transform .6s ease-in-out,-webkit-transform .6s ease-in-out}@media (prefers-reduced-motion:reduce){.carousel-item{transition:none}}.carousel-item-next,.carousel-item-prev,.carousel-item.active{display:block}.active.carousel-item-right,.carousel-item-next:not(.carousel-item-left){-webkit-transform:translateX(100%);transform:translateX(100%)}.active.carousel-item-left,.carousel-item-prev:not(.carousel-item-right){-webkit-transform:translateX(-100%);transform:translateX(-100%)}.carousel-fade .carousel-item{opacity:0;transition-property:opacity;-webkit-transform:none;transform:none}.carousel-fade .carousel-item-next.carousel-item-left,.carousel-fade .carousel-item-prev.carousel-item-right,.carousel-fade .carousel-item.active{z-index:1;opacity:1}.carousel-fade .active.carousel-item-left,.carousel-fade .active.carousel-item-right{z-index:0;opacity:0;transition:0s .6s opacity}@media (prefers-reduced-motion:reduce){.carousel-fade .active.carousel-item-left,.carousel-fade .active.carousel-item-right{transition:none}}.carousel-control-next,.carousel-control-prev{position:absolute;top:0;bottom:0;z-index:1;display:-ms-flexbox;display:flex;-ms-flex-align:center;align-items:center;-ms-flex-pack:center;justify-content:center;width:15%;color:#fff;text-align:center;opacity:.5;transition:opacity .15s ease}@media (prefers-reduced-motion:reduce){.carousel-control-next,.carousel-control-prev{transition:none}}.carousel-control-next:focus,.carousel-control-next:hover,.carousel-control-prev:focus,.carousel-control-prev:hover{color:#fff;text-decoration:none;outline:0;opacity:.9}.carousel-control-prev{left:0}.carousel-control-next{right:0}.carousel-control-next-icon,.carousel-control-prev-icon{display:inline-block;width:20px;height:20px;background:no-repeat 50%/100% 100%}.carousel-control-prev-icon{background-image:url("data:image/svg+xml,%3csvg xmlns='http://www.w3.org/2000/svg' fill='%23fff' viewBox='0 0 8 8'%3e%3cpath d='M5.25 0l-4 4 4 4 1.5-1.5-2.5-2.5 2.5-2.5-1.5-1.5z'/%3e%3c/svg%3e")}.carousel-control-next-icon{background-image:url("data:image/svg+xml,%3csvg xmlns='http://www.w3.org/2000/svg' fill='%23fff' viewBox='0 0 8 8'%3e%3cpath d='M2.75 0l-1.5 1.5 2.5 2.5-2.5 2.5 1.5 1.5 4-4-4-4z'/%3e%3c/svg%3e")}.carousel-indicators{position:absolute;right:0;bottom:0;left:0;z-index:15;display:-ms-flexbox;display:flex;-ms-flex-pack:center;justify-content:center;padding-left:0;margin-right:15%;margin-left:15%;list-style:none}.carousel-indicators li{box-sizing:content-box;-ms-flex:0 1 auto;flex:0 1 auto;width:30px;height:3px;margin-right:3px;margin-left:3px;text-indent:-999px;cursor:pointer;background-color:#fff;background-clip:padding-box;border-top:10px solid transparent;border-bottom:10px solid transparent;opacity:.5;transition:opacity .6s ease}@media (prefers-reduced-motion:reduce){.carousel-indicators li{transition:none}}.carousel-indicators .active{opacity:1}.carousel-caption{position:absolute;right:15%;bottom:20px;left:15%;z-index:10;padding-top:20px;padding-bottom:20px;color:#fff;text-align:center}@-webkit-keyframes spinner-border{to{-webkit-transform:rotate(360deg);transform:rotate(360deg)}}@keyframes spinner-border{to{-webkit-transform:rotate(360deg);transform:rotate(360deg)}}.spinner-border{display:inline-block;width:2rem;height:2rem;vertical-align:text-bottom;border:.25em solid currentColor;border-right-color:transparent;border-radius:50%;-webkit-animation:spinner-border .75s linear infinite;animation:spinner-border .75s linear infinite}.spinner-border-sm{width:1rem;height:1rem;border-width:.2em}@-webkit-keyframes spinner-grow{0%{-webkit-transform:scale(0);transform:scale(0)}50%{opacity:1}}@keyframes spinner-grow{0%{-webkit-transform:scale(0);transform:scale(0)}50%{opacity:1}}.spinner-grow{display:inline-block;width:2rem;height:2rem;vertical-align:text-bottom;background-color:currentColor;border-radius:50%;opacity:0;-webkit-animation:spinner-grow .75s linear infinite;animation:spinner-grow .75s linear infinite}.spinner-grow-sm{width:1rem;height:1rem}.align-baseline{vertical-align:baseline!important}.align-top{vertical-align:top!important}.align-middle{vertical-align:middle!important}.align-bottom{vertical-align:bottom!important}.align-text-bottom{vertical-align:text-bottom!important}.align-text-top{vertical-align:text-top!important}.bg-primary{background-color:#007bff!important}a.bg-primary:focus,a.bg-primary:hover,button.bg-primary:focus,button.bg-primary:hover{background-color:#0062cc!important}.bg-secondary{background-color:#6c757d!important}a.bg-secondary:focus,a.bg-secondary:hover,button.bg-secondary:focus,button.bg-secondary:hover{background-color:#545b62!important}.bg-success{background-color:#28a745!important}a.bg-success:focus,a.bg-success:hover,button.bg-success:focus,button.bg-success:hover{background-color:#1e7e34!important}.bg-info{background-color:#17a2b8!important}a.bg-info:focus,a.bg-info:hover,button.bg-info:focus,button.bg-info:hover{background-color:#117a8b!important}.bg-warning{background-color:#ffc107!important}a.bg-warning:focus,a.bg-warning:hover,button.bg-warning:focus,button.bg-warning:hover{background-color:#d39e00!important}.bg-danger{background-color:#dc3545!important}a.bg-danger:focus,a.bg-danger:hover,button.bg-danger:focus,button.bg-danger:hover{background-color:#bd2130!important}.bg-light{background-color:#f8f9fa!important}a.bg-light:focus,a.bg-light:hover,button.bg-light:focus,button.bg-light:hover{background-color:#dae0e5!important}.bg-dark{background-color:#343a40!important}a.bg-dark:focus,a.bg-dark:hover,button.bg-dark:focus,button.bg-dark:hover{background-color:#1d2124!important}.bg-white{background-color:#fff!important}.bg-transparent{background-color:transparent!important}.border{border:1px solid #dee2e6!important}.border-top{border-top:1px solid #dee2e6!important}.border-right{border-right:1px solid #dee2e6!important}.border-bottom{border-bottom:1px solid #dee2e6!important}.border-left{border-left:1px solid #dee2e6!important}.border-0{border:0!important}.border-top-0{border-top:0!important}.border-right-0{border-right:0!important}.border-bottom-0{border-bottom:0!important}.border-left-0{border-left:0!important}.border-primary{border-color:#007bff!important}.border-secondary{border-color:#6c757d!important}.border-success{border-color:#28a745!important}.border-info{border-color:#17a2b8!important}.border-warning{border-color:#ffc107!important}.border-danger{border-color:#dc3545!important}.border-light{border-color:#f8f9fa!important}.border-dark{border-color:#343a40!important}.border-white{border-color:#fff!important}.rounded-sm{border-radius:.2rem!important}.rounded{border-radius:.25rem!important}.rounded-top{border-top-left-radius:.25rem!important;border-top-right-radius:.25rem!important}.rounded-right{border-top-right-radius:.25rem!important;border-bottom-right-radius:.25rem!important}.rounded-bottom{border-bottom-right-radius:.25rem!important;border-bottom-left-radius:.25rem!important}.rounded-left{border-top-left-radius:.25rem!important;border-bottom-left-radius:.25rem!important}.rounded-lg{border-radius:.3rem!important}.rounded-circle{border-radius:50%!important}.rounded-pill{border-radius:50rem!important}.rounded-0{border-radius:0!important}.clearfix::after{display:block;clear:both;content:""}.d-none{display:none!important}.d-inline{display:inline!important}.d-inline-block{display:inline-block!important}.d-block{display:block!important}.d-table{display:table!important}.d-table-row{display:table-row!important}.d-table-cell{display:table-cell!important}.d-flex{display:-ms-flexbox!important;display:flex!important}.d-inline-flex{display:-ms-inline-flexbox!important;display:inline-flex!important}@media (min-width:576px){.d-sm-none{display:none!important}.d-sm-inline{display:inline!important}.d-sm-inline-block{display:inline-block!important}.d-sm-block{display:block!important}.d-sm-table{display:table!important}.d-sm-table-row{display:table-row!important}.d-sm-table-cell{display:table-cell!important}.d-sm-flex{display:-ms-flexbox!important;display:flex!important}.d-sm-inline-flex{display:-ms-inline-flexbox!important;display:inline-flex!important}}@media (min-width:768px){.d-md-none{display:none!important}.d-md-inline{display:inline!important}.d-md-inline-block{display:inline-block!important}.d-md-block{display:block!important}.d-md-table{display:table!important}.d-md-table-row{display:table-row!important}.d-md-table-cell{display:table-cell!important}.d-md-flex{display:-ms-flexbox!important;display:flex!important}.d-md-inline-flex{display:-ms-inline-flexbox!important;display:inline-flex!important}}@media (min-width:992px){.d-lg-none{display:none!important}.d-lg-inline{display:inline!important}.d-lg-inline-block{display:inline-block!important}.d-lg-block{display:block!important}.d-lg-table{display:table!important}.d-lg-table-row{display:table-row!important}.d-lg-table-cell{display:table-cell!important}.d-lg-flex{display:-ms-flexbox!important;display:flex!important}.d-lg-inline-flex{display:-ms-inline-flexbox!important;display:inline-flex!important}}@media (min-width:1200px){.d-xl-none{display:none!important}.d-xl-inline{display:inline!important}.d-xl-inline-block{display:inline-block!important}.d-xl-block{display:block!important}.d-xl-table{display:table!important}.d-xl-table-row{display:table-row!important}.d-xl-table-cell{display:table-cell!important}.d-xl-flex{display:-ms-flexbox!important;display:flex!important}.d-xl-inline-flex{display:-ms-inline-flexbox!important;display:inline-flex!important}}@media print{.d-print-none{display:none!important}.d-print-inline{display:inline!important}.d-print-inline-block{display:inline-block!important}.d-print-block{display:block!important}.d-print-table{display:table!important}.d-print-table-row{display:table-row!important}.d-print-table-cell{display:table-cell!important}.d-print-flex{display:-ms-flexbox!important;display:flex!important}.d-print-inline-flex{display:-ms-inline-flexbox!important;display:inline-flex!important}}.embed-responsive{position:relative;display:block;width:100%;padding:0;overflow:hidden}.embed-responsive::before{display:block;content:""}.embed-responsive .embed-responsive-item,.embed-responsive embed,.embed-responsive iframe,.embed-responsive object,.embed-responsive video{position:absolute;top:0;bottom:0;left:0;width:100%;height:100%;border:0}.embed-responsive-21by9::before{padding-top:42.857143%}.embed-responsive-16by9::before{padding-top:56.25%}.embed-responsive-4by3::before{padding-top:75%}.embed-responsive-1by1::before{padding-top:100%}.flex-row{-ms-flex-direction:row!important;flex-direction:row!important}.flex-column{-ms-flex-direction:column!important;flex-direction:column!important}.flex-row-reverse{-ms-flex-direction:row-reverse!important;flex-direction:row-reverse!important}.flex-column-reverse{-ms-flex-direction:column-reverse!important;flex-direction:column-reverse!important}.flex-wrap{-ms-flex-wrap:wrap!important;flex-wrap:wrap!important}.flex-nowrap{-ms-flex-wrap:nowrap!important;flex-wrap:nowrap!important}.flex-wrap-reverse{-ms-flex-wrap:wrap-reverse!important;flex-wrap:wrap-reverse!important}.flex-fill{-ms-flex:1 1 auto!important;flex:1 1 auto!important}.flex-grow-0{-ms-flex-positive:0!important;flex-grow:0!important}.flex-grow-1{-ms-flex-positive:1!important;flex-grow:1!important}.flex-shrink-0{-ms-flex-negative:0!important;flex-shrink:0!important}.flex-shrink-1{-ms-flex-negative:1!important;flex-shrink:1!important}.justify-content-start{-ms-flex-pack:start!important;justify-content:flex-start!important}.justify-content-end{-ms-flex-pack:end!important;justify-content:flex-end!important}.justify-content-center{-ms-flex-pack:center!important;justify-content:center!important}.justify-content-between{-ms-flex-pack:justify!important;justify-content:space-between!important}.justify-content-around{-ms-flex-pack:distribute!important;justify-content:space-around!important}.align-items-start{-ms-flex-align:start!important;align-items:flex-start!important}.align-items-end{-ms-flex-align:end!important;align-items:flex-end!important}.align-items-center{-ms-flex-align:center!important;align-items:center!important}.align-items-baseline{-ms-flex-align:baseline!important;align-items:baseline!important}.align-items-stretch{-ms-flex-align:stretch!important;align-items:stretch!important}.align-content-start{-ms-flex-line-pack:start!important;align-content:flex-start!important}.align-content-end{-ms-flex-line-pack:end!important;align-content:flex-end!important}.align-content-center{-ms-flex-line-pack:center!important;align-content:center!important}.align-content-between{-ms-flex-line-pack:justify!important;align-content:space-between!important}.align-content-around{-ms-flex-line-pack:distribute!important;align-content:space-around!important}.align-content-stretch{-ms-flex-line-pack:stretch!important;align-content:stretch!important}.align-self-auto{-ms-flex-item-align:auto!important;align-self:auto!important}.align-self-start{-ms-flex-item-align:start!important;align-self:flex-start!important}.align-self-end{-ms-flex-item-align:end!important;align-self:flex-end!important}.align-self-center{-ms-flex-item-align:center!important;align-self:center!important}.align-self-baseline{-ms-flex-item-align:baseline!important;align-self:baseline!important}.align-self-stretch{-ms-flex-item-align:stretch!important;align-self:stretch!important}@media (min-width:576px){.flex-sm-row{-ms-flex-direction:row!important;flex-direction:row!important}.flex-sm-column{-ms-flex-direction:column!important;flex-direction:column!important}.flex-sm-row-reverse{-ms-flex-direction:row-reverse!important;flex-direction:row-reverse!important}.flex-sm-column-reverse{-ms-flex-direction:column-reverse!important;flex-direction:column-reverse!important}.flex-sm-wrap{-ms-flex-wrap:wrap!important;flex-wrap:wrap!important}.flex-sm-nowrap{-ms-flex-wrap:nowrap!important;flex-wrap:nowrap!important}.flex-sm-wrap-reverse{-ms-flex-wrap:wrap-reverse!important;flex-wrap:wrap-reverse!important}.flex-sm-fill{-ms-flex:1 1 auto!important;flex:1 1 auto!important}.flex-sm-grow-0{-ms-flex-positive:0!important;flex-grow:0!important}.flex-sm-grow-1{-ms-flex-positive:1!important;flex-grow:1!important}.flex-sm-shrink-0{-ms-flex-negative:0!important;flex-shrink:0!important}.flex-sm-shrink-1{-ms-flex-negative:1!important;flex-shrink:1!important}.justify-content-sm-start{-ms-flex-pack:start!important;justify-content:flex-start!important}.justify-content-sm-end{-ms-flex-pack:end!important;justify-content:flex-end!important}.justify-content-sm-center{-ms-flex-pack:center!important;justify-content:center!important}.justify-content-sm-between{-ms-flex-pack:justify!important;justify-content:space-between!important}.justify-content-sm-around{-ms-flex-pack:distribute!important;justify-content:space-around!important}.align-items-sm-start{-ms-flex-align:start!important;align-items:flex-start!important}.align-items-sm-end{-ms-flex-align:end!important;align-items:flex-end!important}.align-items-sm-center{-ms-flex-align:center!important;align-items:center!important}.align-items-sm-baseline{-ms-flex-align:baseline!important;align-items:baseline!important}.align-items-sm-stretch{-ms-flex-align:stretch!important;align-items:stretch!important}.align-content-sm-start{-ms-flex-line-pack:start!important;align-content:flex-start!important}.align-content-sm-end{-ms-flex-line-pack:end!important;align-content:flex-end!important}.align-content-sm-center{-ms-flex-line-pack:center!important;align-content:center!important}.align-content-sm-between{-ms-flex-line-pack:justify!important;align-content:space-between!important}.align-content-sm-around{-ms-flex-line-pack:distribute!important;align-content:space-around!important}.align-content-sm-stretch{-ms-flex-line-pack:stretch!important;align-content:stretch!important}.align-self-sm-auto{-ms-flex-item-align:auto!important;align-self:auto!important}.align-self-sm-start{-ms-flex-item-align:start!important;align-self:flex-start!important}.align-self-sm-end{-ms-flex-item-align:end!important;align-self:flex-end!important}.align-self-sm-center{-ms-flex-item-align:center!important;align-self:center!important}.align-self-sm-baseline{-ms-flex-item-align:baseline!important;align-self:baseline!important}.align-self-sm-stretch{-ms-flex-item-align:stretch!important;align-self:stretch!important}}@media (min-width:768px){.flex-md-row{-ms-flex-direction:row!important;flex-direction:row!important}.flex-md-column{-ms-flex-direction:column!important;flex-direction:column!important}.flex-md-row-reverse{-ms-flex-direction:row-reverse!important;flex-direction:row-reverse!important}.flex-md-column-reverse{-ms-flex-direction:column-reverse!important;flex-direction:column-reverse!important}.flex-md-wrap{-ms-flex-wrap:wrap!important;flex-wrap:wrap!important}.flex-md-nowrap{-ms-flex-wrap:nowrap!important;flex-wrap:nowrap!important}.flex-md-wrap-reverse{-ms-flex-wrap:wrap-reverse!important;flex-wrap:wrap-reverse!important}.flex-md-fill{-ms-flex:1 1 auto!important;flex:1 1 auto!important}.flex-md-grow-0{-ms-flex-positive:0!important;flex-grow:0!important}.flex-md-grow-1{-ms-flex-positive:1!important;flex-grow:1!important}.flex-md-shrink-0{-ms-flex-negative:0!important;flex-shrink:0!important}.flex-md-shrink-1{-ms-flex-negative:1!important;flex-shrink:1!important}.justify-content-md-start{-ms-flex-pack:start!important;justify-content:flex-start!important}.justify-content-md-end{-ms-flex-pack:end!important;justify-content:flex-end!important}.justify-content-md-center{-ms-flex-pack:center!important;justify-content:center!important}.justify-content-md-between{-ms-flex-pack:justify!important;justify-content:space-between!important}.justify-content-md-around{-ms-flex-pack:distribute!important;justify-content:space-around!important}.align-items-md-start{-ms-flex-align:start!important;align-items:flex-start!important}.align-items-md-end{-ms-flex-align:end!important;align-items:flex-end!important}.align-items-md-center{-ms-flex-align:center!important;align-items:center!important}.align-items-md-baseline{-ms-flex-align:baseline!important;align-items:baseline!important}.align-items-md-stretch{-ms-flex-align:stretch!important;align-items:stretch!important}.align-content-md-start{-ms-flex-line-pack:start!important;align-content:flex-start!important}.align-content-md-end{-ms-flex-line-pack:end!important;align-content:flex-end!important}.align-content-md-center{-ms-flex-line-pack:center!important;align-content:center!important}.align-content-md-between{-ms-flex-line-pack:justify!important;align-content:space-between!important}.align-content-md-around{-ms-flex-line-pack:distribute!important;align-content:space-around!important}.align-content-md-stretch{-ms-flex-line-pack:stretch!important;align-content:stretch!important}.align-self-md-auto{-ms-flex-item-align:auto!important;align-self:auto!important}.align-self-md-start{-ms-flex-item-align:start!important;align-self:flex-start!important}.align-self-md-end{-ms-flex-item-align:end!important;align-self:flex-end!important}.align-self-md-center{-ms-flex-item-align:center!important;align-self:center!important}.align-self-md-baseline{-ms-flex-item-align:baseline!important;align-self:baseline!important}.align-self-md-stretch{-ms-flex-item-align:stretch!important;align-self:stretch!important}}@media (min-width:992px){.flex-lg-row{-ms-flex-direction:row!important;flex-direction:row!important}.flex-lg-column{-ms-flex-direction:column!important;flex-direction:column!important}.flex-lg-row-reverse{-ms-flex-direction:row-reverse!important;flex-direction:row-reverse!important}.flex-lg-column-reverse{-ms-flex-direction:column-reverse!important;flex-direction:column-reverse!important}.flex-lg-wrap{-ms-flex-wrap:wrap!important;flex-wrap:wrap!important}.flex-lg-nowrap{-ms-flex-wrap:nowrap!important;flex-wrap:nowrap!important}.flex-lg-wrap-reverse{-ms-flex-wrap:wrap-reverse!important;flex-wrap:wrap-reverse!important}.flex-lg-fill{-ms-flex:1 1 auto!important;flex:1 1 auto!important}.flex-lg-grow-0{-ms-flex-positive:0!important;flex-grow:0!important}.flex-lg-grow-1{-ms-flex-positive:1!important;flex-grow:1!important}.flex-lg-shrink-0{-ms-flex-negative:0!important;flex-shrink:0!important}.flex-lg-shrink-1{-ms-flex-negative:1!important;flex-shrink:1!important}.justify-content-lg-start{-ms-flex-pack:start!important;justify-content:flex-start!important}.justify-content-lg-end{-ms-flex-pack:end!important;justify-content:flex-end!important}.justify-content-lg-center{-ms-flex-pack:center!important;justify-content:center!important}.justify-content-lg-between{-ms-flex-pack:justify!important;justify-content:space-between!important}.justify-content-lg-around{-ms-flex-pack:distribute!important;justify-content:space-around!important}.align-items-lg-start{-ms-flex-align:start!important;align-items:flex-start!important}.align-items-lg-end{-ms-flex-align:end!important;align-items:flex-end!important}.align-items-lg-center{-ms-flex-align:center!important;align-items:center!important}.align-items-lg-baseline{-ms-flex-align:baseline!important;align-items:baseline!important}.align-items-lg-stretch{-ms-flex-align:stretch!important;align-items:stretch!important}.align-content-lg-start{-ms-flex-line-pack:start!important;align-content:flex-start!important}.align-content-lg-end{-ms-flex-line-pack:end!important;align-content:flex-end!important}.align-content-lg-center{-ms-flex-line-pack:center!important;align-content:center!important}.align-content-lg-between{-ms-flex-line-pack:justify!important;align-content:space-between!important}.align-content-lg-around{-ms-flex-line-pack:distribute!important;align-content:space-around!important}.align-content-lg-stretch{-ms-flex-line-pack:stretch!important;align-content:stretch!important}.align-self-lg-auto{-ms-flex-item-align:auto!important;align-self:auto!important}.align-self-lg-start{-ms-flex-item-align:start!important;align-self:flex-start!important}.align-self-lg-end{-ms-flex-item-align:end!important;align-self:flex-end!important}.align-self-lg-center{-ms-flex-item-align:center!important;align-self:center!important}.align-self-lg-baseline{-ms-flex-item-align:baseline!important;align-self:baseline!important}.align-self-lg-stretch{-ms-flex-item-align:stretch!important;align-self:stretch!important}}@media (min-width:1200px){.flex-xl-row{-ms-flex-direction:row!important;flex-direction:row!important}.flex-xl-column{-ms-flex-direction:column!important;flex-direction:column!important}.flex-xl-row-reverse{-ms-flex-direction:row-reverse!important;flex-direction:row-reverse!important}.flex-xl-column-reverse{-ms-flex-direction:column-reverse!important;flex-direction:column-reverse!important}.flex-xl-wrap{-ms-flex-wrap:wrap!important;flex-wrap:wrap!important}.flex-xl-nowrap{-ms-flex-wrap:nowrap!important;flex-wrap:nowrap!important}.flex-xl-wrap-reverse{-ms-flex-wrap:wrap-reverse!important;flex-wrap:wrap-reverse!important}.flex-xl-fill{-ms-flex:1 1 auto!important;flex:1 1 auto!important}.flex-xl-grow-0{-ms-flex-positive:0!important;flex-grow:0!important}.flex-xl-grow-1{-ms-flex-positive:1!important;flex-grow:1!important}.flex-xl-shrink-0{-ms-flex-negative:0!important;flex-shrink:0!important}.flex-xl-shrink-1{-ms-flex-negative:1!important;flex-shrink:1!important}.justify-content-xl-start{-ms-flex-pack:start!important;justify-content:flex-start!important}.justify-content-xl-end{-ms-flex-pack:end!important;justify-content:flex-end!important}.justify-content-xl-center{-ms-flex-pack:center!important;justify-content:center!important}.justify-content-xl-between{-ms-flex-pack:justify!important;justify-content:space-between!important}.justify-content-xl-around{-ms-flex-pack:distribute!important;justify-content:space-around!important}.align-items-xl-start{-ms-flex-align:start!important;align-items:flex-start!important}.align-items-xl-end{-ms-flex-align:end!important;align-items:flex-end!important}.align-items-xl-center{-ms-flex-align:center!important;align-items:center!important}.align-items-xl-baseline{-ms-flex-align:baseline!important;align-items:baseline!important}.align-items-xl-stretch{-ms-flex-align:stretch!important;align-items:stretch!important}.align-content-xl-start{-ms-flex-line-pack:start!important;align-content:flex-start!important}.align-content-xl-end{-ms-flex-line-pack:end!important;align-content:flex-end!important}.align-content-xl-center{-ms-flex-line-pack:center!important;align-content:center!important}.align-content-xl-between{-ms-flex-line-pack:justify!important;align-content:space-between!important}.align-content-xl-around{-ms-flex-line-pack:distribute!important;align-content:space-around!important}.align-content-xl-stretch{-ms-flex-line-pack:stretch!important;align-content:stretch!important}.align-self-xl-auto{-ms-flex-item-align:auto!important;align-self:auto!important}.align-self-xl-start{-ms-flex-item-align:start!important;align-self:flex-start!important}.align-self-xl-end{-ms-flex-item-align:end!important;align-self:flex-end!important}.align-self-xl-center{-ms-flex-item-align:center!important;align-self:center!important}.align-self-xl-baseline{-ms-flex-item-align:baseline!important;align-self:baseline!important}.align-self-xl-stretch{-ms-flex-item-align:stretch!important;align-self:stretch!important}}.float-left{float:left!important}.float-right{float:right!important}.float-none{float:none!important}@media (min-width:576px){.float-sm-left{float:left!important}.float-sm-right{float:right!important}.float-sm-none{float:none!important}}@media (min-width:768px){.float-md-left{float:left!important}.float-md-right{float:right!important}.float-md-none{float:none!important}}@media (min-width:992px){.float-lg-left{float:left!important}.float-lg-right{float:right!important}.float-lg-none{float:none!important}}@media (min-width:1200px){.float-xl-left{float:left!important}.float-xl-right{float:right!important}.float-xl-none{float:none!important}}.overflow-auto{overflow:auto!important}.overflow-hidden{overflow:hidden!important}.position-static{position:static!important}.position-relative{position:relative!important}.position-absolute{position:absolute!important}.position-fixed{position:fixed!important}.position-sticky{position:-webkit-sticky!important;position:sticky!important}.fixed-top{position:fixed;top:0;right:0;left:0;z-index:1030}.fixed-bottom{position:fixed;right:0;bottom:0;left:0;z-index:1030}@supports ((position:-webkit-sticky) or (position:sticky)){.sticky-top{position:-webkit-sticky;position:sticky;top:0;z-index:1020}}.sr-only{position:absolute;width:1px;height:1px;padding:0;overflow:hidden;clip:rect(0,0,0,0);white-space:nowrap;border:0}.sr-only-focusable:active,.sr-only-focusable:focus{position:static;width:auto;height:auto;overflow:visible;clip:auto;white-space:normal}.shadow-sm{box-shadow:0 .125rem .25rem rgba(0,0,0,.075)!important}.shadow{box-shadow:0 .5rem 1rem rgba(0,0,0,.15)!important}.shadow-lg{box-shadow:0 1rem 3rem rgba(0,0,0,.175)!important}.shadow-none{box-shadow:none!important}.w-25{width:25%!important}.w-50{width:50%!important}.w-75{width:75%!important}.w-100{width:100%!important}.w-auto{width:auto!important}.h-25{height:25%!important}.h-50{height:50%!important}.h-75{height:75%!important}.h-100{height:100%!important}.h-auto{height:auto!important}.mw-100{max-width:100%!important}.mh-100{max-height:100%!important}.min-vw-100{min-width:100vw!important}.min-vh-100{min-height:100vh!important}.vw-100{width:100vw!important}.vh-100{height:100vh!important}.stretched-link::after{position:absolute;top:0;right:0;bottom:0;left:0;z-index:1;pointer-events:auto;content:"";background-color:rgba(0,0,0,0)}.m-0{margin:0!important}.mt-0,.my-0{margin-top:0!important}.mr-0,.mx-0{margin-right:0!important}.mb-0,.my-0{margin-bottom:0!important}.ml-0,.mx-0{margin-left:0!important}.m-1{margin:.25rem!important}.mt-1,.my-1{margin-top:.25rem!important}.mr-1,.mx-1{margin-right:.25rem!important}.mb-1,.my-1{margin-bottom:.25rem!important}.ml-1,.mx-1{margin-left:.25rem!important}.m-2{margin:.5rem!important}.mt-2,.my-2{margin-top:.5rem!important}.mr-2,.mx-2{margin-right:.5rem!important}.mb-2,.my-2{margin-bottom:.5rem!important}.ml-2,.mx-2{margin-left:.5rem!important}.m-3{margin:1rem!important}.mt-3,.my-3{margin-top:1rem!important}.mr-3,.mx-3{margin-right:1rem!important}.mb-3,.my-3{margin-bottom:1rem!important}.ml-3,.mx-3{margin-left:1rem!important}.m-4{margin:1.5rem!important}.mt-4,.my-4{margin-top:1.5rem!important}.mr-4,.mx-4{margin-right:1.5rem!important}.mb-4,.my-4{margin-bottom:1.5rem!important}.ml-4,.mx-4{margin-left:1.5rem!important}.m-5{margin:3rem!important}.mt-5,.my-5{margin-top:3rem!important}.mr-5,.mx-5{margin-right:3rem!important}.mb-5,.my-5{margin-bottom:3rem!important}.ml-5,.mx-5{margin-left:3rem!important}.p-0{padding:0!important}.pt-0,.py-0{padding-top:0!important}.pr-0,.px-0{padding-right:0!important}.pb-0,.py-0{padding-bottom:0!important}.pl-0,.px-0{padding-left:0!important}.p-1{padding:.25rem!important}.pt-1,.py-1{padding-top:.25rem!important}.pr-1,.px-1{padding-right:.25rem!important}.pb-1,.py-1{padding-bottom:.25rem!important}.pl-1,.px-1{padding-left:.25rem!important}.p-2{padding:.5rem!important}.pt-2,.py-2{padding-top:.5rem!important}.pr-2,.px-2{padding-right:.5rem!important}.pb-2,.py-2{padding-bottom:.5rem!important}.pl-2,.px-2{padding-left:.5rem!important}.p-3{padding:1rem!important}.pt-3,.py-3{padding-top:1rem!important}.pr-3,.px-3{padding-right:1rem!important}.pb-3,.py-3{padding-bottom:1rem!important}.pl-3,.px-3{padding-left:1rem!important}.p-4{padding:1.5rem!important}.pt-4,.py-4{padding-top:1.5rem!important}.pr-4,.px-4{padding-right:1.5rem!important}.pb-4,.py-4{padding-bottom:1.5rem!important}.pl-4,.px-4{padding-left:1.5rem!important}.p-5{padding:3rem!important}.pt-5,.py-5{padding-top:3rem!important}.pr-5,.px-5{padding-right:3rem!important}.pb-5,.py-5{padding-bottom:3rem!important}.pl-5,.px-5{padding-left:3rem!important}.m-n1{margin:-.25rem!important}.mt-n1,.my-n1{margin-top:-.25rem!important}.mr-n1,.mx-n1{margin-right:-.25rem!important}.mb-n1,.my-n1{margin-bottom:-.25rem!important}.ml-n1,.mx-n1{margin-left:-.25rem!important}.m-n2{margin:-.5rem!important}.mt-n2,.my-n2{margin-top:-.5rem!important}.mr-n2,.mx-n2{margin-right:-.5rem!important}.mb-n2,.my-n2{margin-bottom:-.5rem!important}.ml-n2,.mx-n2{margin-left:-.5rem!important}.m-n3{margin:-1rem!important}.mt-n3,.my-n3{margin-top:-1rem!important}.mr-n3,.mx-n3{margin-right:-1rem!important}.mb-n3,.my-n3{margin-bottom:-1rem!important}.ml-n3,.mx-n3{margin-left:-1rem!important}.m-n4{margin:-1.5rem!important}.mt-n4,.my-n4{margin-top:-1.5rem!important}.mr-n4,.mx-n4{margin-right:-1.5rem!important}.mb-n4,.my-n4{margin-bottom:-1.5rem!important}.ml-n4,.mx-n4{margin-left:-1.5rem!important}.m-n5{margin:-3rem!important}.mt-n5,.my-n5{margin-top:-3rem!important}.mr-n5,.mx-n5{margin-right:-3rem!important}.mb-n5,.my-n5{margin-bottom:-3rem!important}.ml-n5,.mx-n5{margin-left:-3rem!important}.m-auto{margin:auto!important}.mt-auto,.my-auto{margin-top:auto!important}.mr-auto,.mx-auto{margin-right:auto!important}.mb-auto,.my-auto{margin-bottom:auto!important}.ml-auto,.mx-auto{margin-left:auto!important}@media (min-width:576px){.m-sm-0{margin:0!important}.mt-sm-0,.my-sm-0{margin-top:0!important}.mr-sm-0,.mx-sm-0{margin-right:0!important}.mb-sm-0,.my-sm-0{margin-bottom:0!important}.ml-sm-0,.mx-sm-0{margin-left:0!important}.m-sm-1{margin:.25rem!important}.mt-sm-1,.my-sm-1{margin-top:.25rem!important}.mr-sm-1,.mx-sm-1{margin-right:.25rem!important}.mb-sm-1,.my-sm-1{margin-bottom:.25rem!important}.ml-sm-1,.mx-sm-1{margin-left:.25rem!important}.m-sm-2{margin:.5rem!important}.mt-sm-2,.my-sm-2{margin-top:.5rem!important}.mr-sm-2,.mx-sm-2{margin-right:.5rem!important}.mb-sm-2,.my-sm-2{margin-bottom:.5rem!important}.ml-sm-2,.mx-sm-2{margin-left:.5rem!important}.m-sm-3{margin:1rem!important}.mt-sm-3,.my-sm-3{margin-top:1rem!important}.mr-sm-3,.mx-sm-3{margin-right:1rem!important}.mb-sm-3,.my-sm-3{margin-bottom:1rem!important}.ml-sm-3,.mx-sm-3{margin-left:1rem!important}.m-sm-4{margin:1.5rem!important}.mt-sm-4,.my-sm-4{margin-top:1.5rem!important}.mr-sm-4,.mx-sm-4{margin-right:1.5rem!important}.mb-sm-4,.my-sm-4{margin-bottom:1.5rem!important}.ml-sm-4,.mx-sm-4{margin-left:1.5rem!important}.m-sm-5{margin:3rem!important}.mt-sm-5,.my-sm-5{margin-top:3rem!important}.mr-sm-5,.mx-sm-5{margin-right:3rem!important}.mb-sm-5,.my-sm-5{margin-bottom:3rem!important}.ml-sm-5,.mx-sm-5{margin-left:3rem!important}.p-sm-0{padding:0!important}.pt-sm-0,.py-sm-0{padding-top:0!important}.pr-sm-0,.px-sm-0{padding-right:0!important}.pb-sm-0,.py-sm-0{padding-bottom:0!important}.pl-sm-0,.px-sm-0{padding-left:0!important}.p-sm-1{padding:.25rem!important}.pt-sm-1,.py-sm-1{padding-top:.25rem!important}.pr-sm-1,.px-sm-1{padding-right:.25rem!important}.pb-sm-1,.py-sm-1{padding-bottom:.25rem!important}.pl-sm-1,.px-sm-1{padding-left:.25rem!important}.p-sm-2{padding:.5rem!important}.pt-sm-2,.py-sm-2{padding-top:.5rem!important}.pr-sm-2,.px-sm-2{padding-right:.5rem!important}.pb-sm-2,.py-sm-2{padding-bottom:.5rem!important}.pl-sm-2,.px-sm-2{padding-left:.5rem!important}.p-sm-3{padding:1rem!important}.pt-sm-3,.py-sm-3{padding-top:1rem!important}.pr-sm-3,.px-sm-3{padding-right:1rem!important}.pb-sm-3,.py-sm-3{padding-bottom:1rem!important}.pl-sm-3,.px-sm-3{padding-left:1rem!important}.p-sm-4{padding:1.5rem!important}.pt-sm-4,.py-sm-4{padding-top:1.5rem!important}.pr-sm-4,.px-sm-4{padding-right:1.5rem!important}.pb-sm-4,.py-sm-4{padding-bottom:1.5rem!important}.pl-sm-4,.px-sm-4{padding-left:1.5rem!important}.p-sm-5{padding:3rem!important}.pt-sm-5,.py-sm-5{padding-top:3rem!important}.pr-sm-5,.px-sm-5{padding-right:3rem!important}.pb-sm-5,.py-sm-5{padding-bottom:3rem!important}.pl-sm-5,.px-sm-5{padding-left:3rem!important}.m-sm-n1{margin:-.25rem!important}.mt-sm-n1,.my-sm-n1{margin-top:-.25rem!important}.mr-sm-n1,.mx-sm-n1{margin-right:-.25rem!important}.mb-sm-n1,.my-sm-n1{margin-bottom:-.25rem!important}.ml-sm-n1,.mx-sm-n1{margin-left:-.25rem!important}.m-sm-n2{margin:-.5rem!important}.mt-sm-n2,.my-sm-n2{margin-top:-.5rem!important}.mr-sm-n2,.mx-sm-n2{margin-right:-.5rem!important}.mb-sm-n2,.my-sm-n2{margin-bottom:-.5rem!important}.ml-sm-n2,.mx-sm-n2{margin-left:-.5rem!important}.m-sm-n3{margin:-1rem!important}.mt-sm-n3,.my-sm-n3{margin-top:-1rem!important}.mr-sm-n3,.mx-sm-n3{margin-right:-1rem!important}.mb-sm-n3,.my-sm-n3{margin-bottom:-1rem!important}.ml-sm-n3,.mx-sm-n3{margin-left:-1rem!important}.m-sm-n4{margin:-1.5rem!important}.mt-sm-n4,.my-sm-n4{margin-top:-1.5rem!important}.mr-sm-n4,.mx-sm-n4{margin-right:-1.5rem!important}.mb-sm-n4,.my-sm-n4{margin-bottom:-1.5rem!important}.ml-sm-n4,.mx-sm-n4{margin-left:-1.5rem!important}.m-sm-n5{margin:-3rem!important}.mt-sm-n5,.my-sm-n5{margin-top:-3rem!important}.mr-sm-n5,.mx-sm-n5{margin-right:-3rem!important}.mb-sm-n5,.my-sm-n5{margin-bottom:-3rem!important}.ml-sm-n5,.mx-sm-n5{margin-left:-3rem!important}.m-sm-auto{margin:auto!important}.mt-sm-auto,.my-sm-auto{margin-top:auto!important}.mr-sm-auto,.mx-sm-auto{margin-right:auto!important}.mb-sm-auto,.my-sm-auto{margin-bottom:auto!important}.ml-sm-auto,.mx-sm-auto{margin-left:auto!important}}@media (min-width:768px){.m-md-0{margin:0!important}.mt-md-0,.my-md-0{margin-top:0!important}.mr-md-0,.mx-md-0{margin-right:0!important}.mb-md-0,.my-md-0{margin-bottom:0!important}.ml-md-0,.mx-md-0{margin-left:0!important}.m-md-1{margin:.25rem!important}.mt-md-1,.my-md-1{margin-top:.25rem!important}.mr-md-1,.mx-md-1{margin-right:.25rem!important}.mb-md-1,.my-md-1{margin-bottom:.25rem!important}.ml-md-1,.mx-md-1{margin-left:.25rem!important}.m-md-2{margin:.5rem!important}.mt-md-2,.my-md-2{margin-top:.5rem!important}.mr-md-2,.mx-md-2{margin-right:.5rem!important}.mb-md-2,.my-md-2{margin-bottom:.5rem!important}.ml-md-2,.mx-md-2{margin-left:.5rem!important}.m-md-3{margin:1rem!important}.mt-md-3,.my-md-3{margin-top:1rem!important}.mr-md-3,.mx-md-3{margin-right:1rem!important}.mb-md-3,.my-md-3{margin-bottom:1rem!important}.ml-md-3,.mx-md-3{margin-left:1rem!important}.m-md-4{margin:1.5rem!important}.mt-md-4,.my-md-4{margin-top:1.5rem!important}.mr-md-4,.mx-md-4{margin-right:1.5rem!important}.mb-md-4,.my-md-4{margin-bottom:1.5rem!important}.ml-md-4,.mx-md-4{margin-left:1.5rem!important}.m-md-5{margin:3rem!important}.mt-md-5,.my-md-5{margin-top:3rem!important}.mr-md-5,.mx-md-5{margin-right:3rem!important}.mb-md-5,.my-md-5{margin-bottom:3rem!important}.ml-md-5,.mx-md-5{margin-left:3rem!important}.p-md-0{padding:0!important}.pt-md-0,.py-md-0{padding-top:0!important}.pr-md-0,.px-md-0{padding-right:0!important}.pb-md-0,.py-md-0{padding-bottom:0!important}.pl-md-0,.px-md-0{padding-left:0!important}.p-md-1{padding:.25rem!important}.pt-md-1,.py-md-1{padding-top:.25rem!important}.pr-md-1,.px-md-1{padding-right:.25rem!important}.pb-md-1,.py-md-1{padding-bottom:.25rem!important}.pl-md-1,.px-md-1{padding-left:.25rem!important}.p-md-2{padding:.5rem!important}.pt-md-2,.py-md-2{padding-top:.5rem!important}.pr-md-2,.px-md-2{padding-right:.5rem!important}.pb-md-2,.py-md-2{padding-bottom:.5rem!important}.pl-md-2,.px-md-2{padding-left:.5rem!important}.p-md-3{padding:1rem!important}.pt-md-3,.py-md-3{padding-top:1rem!important}.pr-md-3,.px-md-3{padding-right:1rem!important}.pb-md-3,.py-md-3{padding-bottom:1rem!important}.pl-md-3,.px-md-3{padding-left:1rem!important}.p-md-4{padding:1.5rem!important}.pt-md-4,.py-md-4{padding-top:1.5rem!important}.pr-md-4,.px-md-4{padding-right:1.5rem!important}.pb-md-4,.py-md-4{padding-bottom:1.5rem!important}.pl-md-4,.px-md-4{padding-left:1.5rem!important}.p-md-5{padding:3rem!important}.pt-md-5,.py-md-5{padding-top:3rem!important}.pr-md-5,.px-md-5{padding-right:3rem!important}.pb-md-5,.py-md-5{padding-bottom:3rem!important}.pl-md-5,.px-md-5{padding-left:3rem!important}.m-md-n1{margin:-.25rem!important}.mt-md-n1,.my-md-n1{margin-top:-.25rem!important}.mr-md-n1,.mx-md-n1{margin-right:-.25rem!important}.mb-md-n1,.my-md-n1{margin-bottom:-.25rem!important}.ml-md-n1,.mx-md-n1{margin-left:-.25rem!important}.m-md-n2{margin:-.5rem!important}.mt-md-n2,.my-md-n2{margin-top:-.5rem!important}.mr-md-n2,.mx-md-n2{margin-right:-.5rem!important}.mb-md-n2,.my-md-n2{margin-bottom:-.5rem!important}.ml-md-n2,.mx-md-n2{margin-left:-.5rem!important}.m-md-n3{margin:-1rem!important}.mt-md-n3,.my-md-n3{margin-top:-1rem!important}.mr-md-n3,.mx-md-n3{margin-right:-1rem!important}.mb-md-n3,.my-md-n3{margin-bottom:-1rem!important}.ml-md-n3,.mx-md-n3{margin-left:-1rem!important}.m-md-n4{margin:-1.5rem!important}.mt-md-n4,.my-md-n4{margin-top:-1.5rem!important}.mr-md-n4,.mx-md-n4{margin-right:-1.5rem!important}.mb-md-n4,.my-md-n4{margin-bottom:-1.5rem!important}.ml-md-n4,.mx-md-n4{margin-left:-1.5rem!important}.m-md-n5{margin:-3rem!important}.mt-md-n5,.my-md-n5{margin-top:-3rem!important}.mr-md-n5,.mx-md-n5{margin-right:-3rem!important}.mb-md-n5,.my-md-n5{margin-bottom:-3rem!important}.ml-md-n5,.mx-md-n5{margin-left:-3rem!important}.m-md-auto{margin:auto!important}.mt-md-auto,.my-md-auto{margin-top:auto!important}.mr-md-auto,.mx-md-auto{margin-right:auto!important}.mb-md-auto,.my-md-auto{margin-bottom:auto!important}.ml-md-auto,.mx-md-auto{margin-left:auto!important}}@media (min-width:992px){.m-lg-0{margin:0!important}.mt-lg-0,.my-lg-0{margin-top:0!important}.mr-lg-0,.mx-lg-0{margin-right:0!important}.mb-lg-0,.my-lg-0{margin-bottom:0!important}.ml-lg-0,.mx-lg-0{margin-left:0!important}.m-lg-1{margin:.25rem!important}.mt-lg-1,.my-lg-1{margin-top:.25rem!important}.mr-lg-1,.mx-lg-1{margin-right:.25rem!important}.mb-lg-1,.my-lg-1{margin-bottom:.25rem!important}.ml-lg-1,.mx-lg-1{margin-left:.25rem!important}.m-lg-2{margin:.5rem!important}.mt-lg-2,.my-lg-2{margin-top:.5rem!important}.mr-lg-2,.mx-lg-2{margin-right:.5rem!important}.mb-lg-2,.my-lg-2{margin-bottom:.5rem!important}.ml-lg-2,.mx-lg-2{margin-left:.5rem!important}.m-lg-3{margin:1rem!important}.mt-lg-3,.my-lg-3{margin-top:1rem!important}.mr-lg-3,.mx-lg-3{margin-right:1rem!important}.mb-lg-3,.my-lg-3{margin-bottom:1rem!important}.ml-lg-3,.mx-lg-3{margin-left:1rem!important}.m-lg-4{margin:1.5rem!important}.mt-lg-4,.my-lg-4{margin-top:1.5rem!important}.mr-lg-4,.mx-lg-4{margin-right:1.5rem!important}.mb-lg-4,.my-lg-4{margin-bottom:1.5rem!important}.ml-lg-4,.mx-lg-4{margin-left:1.5rem!important}.m-lg-5{margin:3rem!important}.mt-lg-5,.my-lg-5{margin-top:3rem!important}.mr-lg-5,.mx-lg-5{margin-right:3rem!important}.mb-lg-5,.my-lg-5{margin-bottom:3rem!important}.ml-lg-5,.mx-lg-5{margin-left:3rem!important}.p-lg-0{padding:0!important}.pt-lg-0,.py-lg-0{padding-top:0!important}.pr-lg-0,.px-lg-0{padding-right:0!important}.pb-lg-0,.py-lg-0{padding-bottom:0!important}.pl-lg-0,.px-lg-0{padding-left:0!important}.p-lg-1{padding:.25rem!important}.pt-lg-1,.py-lg-1{padding-top:.25rem!important}.pr-lg-1,.px-lg-1{padding-right:.25rem!important}.pb-lg-1,.py-lg-1{padding-bottom:.25rem!important}.pl-lg-1,.px-lg-1{padding-left:.25rem!important}.p-lg-2{padding:.5rem!important}.pt-lg-2,.py-lg-2{padding-top:.5rem!important}.pr-lg-2,.px-lg-2{padding-right:.5rem!important}.pb-lg-2,.py-lg-2{padding-bottom:.5rem!important}.pl-lg-2,.px-lg-2{padding-left:.5rem!important}.p-lg-3{padding:1rem!important}.pt-lg-3,.py-lg-3{padding-top:1rem!important}.pr-lg-3,.px-lg-3{padding-right:1rem!important}.pb-lg-3,.py-lg-3{padding-bottom:1rem!important}.pl-lg-3,.px-lg-3{padding-left:1rem!important}.p-lg-4{padding:1.5rem!important}.pt-lg-4,.py-lg-4{padding-top:1.5rem!important}.pr-lg-4,.px-lg-4{padding-right:1.5rem!important}.pb-lg-4,.py-lg-4{padding-bottom:1.5rem!important}.pl-lg-4,.px-lg-4{padding-left:1.5rem!important}.p-lg-5{padding:3rem!important}.pt-lg-5,.py-lg-5{padding-top:3rem!important}.pr-lg-5,.px-lg-5{padding-right:3rem!important}.pb-lg-5,.py-lg-5{padding-bottom:3rem!important}.pl-lg-5,.px-lg-5{padding-left:3rem!important}.m-lg-n1{margin:-.25rem!important}.mt-lg-n1,.my-lg-n1{margin-top:-.25rem!important}.mr-lg-n1,.mx-lg-n1{margin-right:-.25rem!important}.mb-lg-n1,.my-lg-n1{margin-bottom:-.25rem!important}.ml-lg-n1,.mx-lg-n1{margin-left:-.25rem!important}.m-lg-n2{margin:-.5rem!important}.mt-lg-n2,.my-lg-n2{margin-top:-.5rem!important}.mr-lg-n2,.mx-lg-n2{margin-right:-.5rem!important}.mb-lg-n2,.my-lg-n2{margin-bottom:-.5rem!important}.ml-lg-n2,.mx-lg-n2{margin-left:-.5rem!important}.m-lg-n3{margin:-1rem!important}.mt-lg-n3,.my-lg-n3{margin-top:-1rem!important}.mr-lg-n3,.mx-lg-n3{margin-right:-1rem!important}.mb-lg-n3,.my-lg-n3{margin-bottom:-1rem!important}.ml-lg-n3,.mx-lg-n3{margin-left:-1rem!important}.m-lg-n4{margin:-1.5rem!important}.mt-lg-n4,.my-lg-n4{margin-top:-1.5rem!important}.mr-lg-n4,.mx-lg-n4{margin-right:-1.5rem!important}.mb-lg-n4,.my-lg-n4{margin-bottom:-1.5rem!important}.ml-lg-n4,.mx-lg-n4{margin-left:-1.5rem!important}.m-lg-n5{margin:-3rem!important}.mt-lg-n5,.my-lg-n5{margin-top:-3rem!important}.mr-lg-n5,.mx-lg-n5{margin-right:-3rem!important}.mb-lg-n5,.my-lg-n5{margin-bottom:-3rem!important}.ml-lg-n5,.mx-lg-n5{margin-left:-3rem!important}.m-lg-auto{margin:auto!important}.mt-lg-auto,.my-lg-auto{margin-top:auto!important}.mr-lg-auto,.mx-lg-auto{margin-right:auto!important}.mb-lg-auto,.my-lg-auto{margin-bottom:auto!important}.ml-lg-auto,.mx-lg-auto{margin-left:auto!important}}@media (min-width:1200px){.m-xl-0{margin:0!important}.mt-xl-0,.my-xl-0{margin-top:0!important}.mr-xl-0,.mx-xl-0{margin-right:0!important}.mb-xl-0,.my-xl-0{margin-bottom:0!important}.ml-xl-0,.mx-xl-0{margin-left:0!important}.m-xl-1{margin:.25rem!important}.mt-xl-1,.my-xl-1{margin-top:.25rem!important}.mr-xl-1,.mx-xl-1{margin-right:.25rem!important}.mb-xl-1,.my-xl-1{margin-bottom:.25rem!important}.ml-xl-1,.mx-xl-1{margin-left:.25rem!important}.m-xl-2{margin:.5rem!important}.mt-xl-2,.my-xl-2{margin-top:.5rem!important}.mr-xl-2,.mx-xl-2{margin-right:.5rem!important}.mb-xl-2,.my-xl-2{margin-bottom:.5rem!important}.ml-xl-2,.mx-xl-2{margin-left:.5rem!important}.m-xl-3{margin:1rem!important}.mt-xl-3,.my-xl-3{margin-top:1rem!important}.mr-xl-3,.mx-xl-3{margin-right:1rem!important}.mb-xl-3,.my-xl-3{margin-bottom:1rem!important}.ml-xl-3,.mx-xl-3{margin-left:1rem!important}.m-xl-4{margin:1.5rem!important}.mt-xl-4,.my-xl-4{margin-top:1.5rem!important}.mr-xl-4,.mx-xl-4{margin-right:1.5rem!important}.mb-xl-4,.my-xl-4{margin-bottom:1.5rem!important}.ml-xl-4,.mx-xl-4{margin-left:1.5rem!important}.m-xl-5{margin:3rem!important}.mt-xl-5,.my-xl-5{margin-top:3rem!important}.mr-xl-5,.mx-xl-5{margin-right:3rem!important}.mb-xl-5,.my-xl-5{margin-bottom:3rem!important}.ml-xl-5,.mx-xl-5{margin-left:3rem!important}.p-xl-0{padding:0!important}.pt-xl-0,.py-xl-0{padding-top:0!important}.pr-xl-0,.px-xl-0{padding-right:0!important}.pb-xl-0,.py-xl-0{padding-bottom:0!important}.pl-xl-0,.px-xl-0{padding-left:0!important}.p-xl-1{padding:.25rem!important}.pt-xl-1,.py-xl-1{padding-top:.25rem!important}.pr-xl-1,.px-xl-1{padding-right:.25rem!important}.pb-xl-1,.py-xl-1{padding-bottom:.25rem!important}.pl-xl-1,.px-xl-1{padding-left:.25rem!important}.p-xl-2{padding:.5rem!important}.pt-xl-2,.py-xl-2{padding-top:.5rem!important}.pr-xl-2,.px-xl-2{padding-right:.5rem!important}.pb-xl-2,.py-xl-2{padding-bottom:.5rem!important}.pl-xl-2,.px-xl-2{padding-left:.5rem!important}.p-xl-3{padding:1rem!important}.pt-xl-3,.py-xl-3{padding-top:1rem!important}.pr-xl-3,.px-xl-3{padding-right:1rem!important}.pb-xl-3,.py-xl-3{padding-bottom:1rem!important}.pl-xl-3,.px-xl-3{padding-left:1rem!important}.p-xl-4{padding:1.5rem!important}.pt-xl-4,.py-xl-4{padding-top:1.5rem!important}.pr-xl-4,.px-xl-4{padding-right:1.5rem!important}.pb-xl-4,.py-xl-4{padding-bottom:1.5rem!important}.pl-xl-4,.px-xl-4{padding-left:1.5rem!important}.p-xl-5{padding:3rem!important}.pt-xl-5,.py-xl-5{padding-top:3rem!important}.pr-xl-5,.px-xl-5{padding-right:3rem!important}.pb-xl-5,.py-xl-5{padding-bottom:3rem!important}.pl-xl-5,.px-xl-5{padding-left:3rem!important}.m-xl-n1{margin:-.25rem!important}.mt-xl-n1,.my-xl-n1{margin-top:-.25rem!important}.mr-xl-n1,.mx-xl-n1{margin-right:-.25rem!important}.mb-xl-n1,.my-xl-n1{margin-bottom:-.25rem!important}.ml-xl-n1,.mx-xl-n1{margin-left:-.25rem!important}.m-xl-n2{margin:-.5rem!important}.mt-xl-n2,.my-xl-n2{margin-top:-.5rem!important}.mr-xl-n2,.mx-xl-n2{margin-right:-.5rem!important}.mb-xl-n2,.my-xl-n2{margin-bottom:-.5rem!important}.ml-xl-n2,.mx-xl-n2{margin-left:-.5rem!important}.m-xl-n3{margin:-1rem!important}.mt-xl-n3,.my-xl-n3{margin-top:-1rem!important}.mr-xl-n3,.mx-xl-n3{margin-right:-1rem!important}.mb-xl-n3,.my-xl-n3{margin-bottom:-1rem!important}.ml-xl-n3,.mx-xl-n3{margin-left:-1rem!important}.m-xl-n4{margin:-1.5rem!important}.mt-xl-n4,.my-xl-n4{margin-top:-1.5rem!important}.mr-xl-n4,.mx-xl-n4{margin-right:-1.5rem!important}.mb-xl-n4,.my-xl-n4{margin-bottom:-1.5rem!important}.ml-xl-n4,.mx-xl-n4{margin-left:-1.5rem!important}.m-xl-n5{margin:-3rem!important}.mt-xl-n5,.my-xl-n5{margin-top:-3rem!important}.mr-xl-n5,.mx-xl-n5{margin-right:-3rem!important}.mb-xl-n5,.my-xl-n5{margin-bottom:-3rem!important}.ml-xl-n5,.mx-xl-n5{margin-left:-3rem!important}.m-xl-auto{margin:auto!important}.mt-xl-auto,.my-xl-auto{margin-top:auto!important}.mr-xl-auto,.mx-xl-auto{margin-right:auto!important}.mb-xl-auto,.my-xl-auto{margin-bottom:auto!important}.ml-xl-auto,.mx-xl-auto{margin-left:auto!important}}.text-monospace{font-family:SFMono-Regular,Menlo,Monaco,Consolas,"Liberation Mono","Courier New",monospace!important}.text-justify{text-align:justify!important}.text-wrap{white-space:normal!important}.text-nowrap{white-space:nowrap!important}.text-truncate{overflow:hidden;text-overflow:ellipsis;white-space:nowrap}.text-left{text-align:left!important}.text-right{text-align:right!important}.text-center{text-align:center!important}@media (min-width:576px){.text-sm-left{text-align:left!important}.text-sm-right{text-align:right!important}.text-sm-center{text-align:center!important}}@media (min-width:768px){.text-md-left{text-align:left!important}.text-md-right{text-align:right!important}.text-md-center{text-align:center!important}}@media (min-width:992px){.text-lg-left{text-align:left!important}.text-lg-right{text-align:right!important}.text-lg-center{text-align:center!important}}@media (min-width:1200px){.text-xl-left{text-align:left!important}.text-xl-right{text-align:right!important}.text-xl-center{text-align:center!important}}.text-lowercase{text-transform:lowercase!important}.text-uppercase{text-transform:uppercase!important}.text-capitalize{text-transform:capitalize!important}.font-weight-light{font-weight:300!important}.font-weight-lighter{font-weight:lighter!important}.font-weight-normal{font-weight:400!important}.font-weight-bold{font-weight:700!important}.font-weight-bolder{font-weight:bolder!important}.font-italic{font-style:italic!important}.text-white{color:#fff!important}.text-primary{color:#007bff!important}a.text-primary:focus,a.text-primary:hover{color:#0056b3!important}.text-secondary{color:#6c757d!important}a.text-secondary:focus,a.text-secondary:hover{color:#494f54!important}.text-success{color:#28a745!important}a.text-success:focus,a.text-success:hover{color:#19692c!important}.text-info{color:#17a2b8!important}a.text-info:focus,a.text-info:hover{color:#0f6674!important}.text-warning{color:#ffc107!important}a.text-warning:focus,a.text-warning:hover{color:#ba8b00!important}.text-danger{color:#dc3545!important}a.text-danger:focus,a.text-danger:hover{color:#a71d2a!important}.text-light{color:#f8f9fa!important}a.text-light:focus,a.text-light:hover{color:#cbd3da!important}.text-dark{color:#343a40!important}a.text-dark:focus,a.text-dark:hover{color:#121416!important}.text-body{color:#212529!important}.text-muted{color:#6c757d!important}.text-black-50{color:rgba(0,0,0,.5)!important}.text-white-50{color:rgba(255,255,255,.5)!important}.text-hide{font:0/0 a;color:transparent;text-shadow:none;background-color:transparent;border:0}.text-decoration-none{text-decoration:none!important}.text-break{word-break:break-word!important;overflow-wrap:break-word!important}.text-reset{color:inherit!important}.visible{visibility:visible!important}.invisible{visibility:hidden!important}@media print{*,::after,::before{text-shadow:none!important;box-shadow:none!important}a:not(.btn){text-decoration:underline}abbr[title]::after{content:" (" attr(title) ")"}pre{white-space:pre-wrap!important}blockquote,pre{border:1px solid #adb5bd;page-break-inside:avoid}thead{display:table-header-group}img,tr{page-break-inside:avoid}h2,h3,p{orphans:3;widows:3}h2,h3{page-break-after:avoid}@page{size:a3}body{min-width:992px!important}.container{min-width:992px!important}.navbar{display:none}.badge{border:1px solid #000}.table{border-collapse:collapse!important}.table td,.table th{background-color:#fff!important}.table-bordered td,.table-bordered th{border:1px solid #dee2e6!important}.table-dark{color:inherit}.table-dark tbody+tbody,.table-dark td,.table-dark th,.table-dark thead th{border-color:#dee2e6}.table .thead-dark th{color:inherit;border-color:#dee2e6}}[m
[31m-/*# sourceMappingURL=bootstrap.min.css.map */[m
[1mdiff --git a/css/bulma.min.css b/css/bulma.min.css[m
[1mdeleted file mode 100644[m
[1mindex 59825f7..0000000[m
[1m--- a/css/bulma.min.css[m
[1m+++ /dev/null[m
[36m@@ -1 +0,0 @@[m
[31m-/*! bulma.io v0.7.1 | MIT License | github.com/jgthms/bulma */@-webkit-keyframes spinAround{from{-webkit-transform:rotate(0);transform:rotate(0)}to{-webkit-transform:rotate(359deg);transform:rotate(359deg)}}@keyframes spinAround{from{-webkit-transform:rotate(0);transform:rotate(0)}to{-webkit-transform:rotate(359deg);transform:rotate(359deg)}}.breadcrumb,.button,.delete,.file,.is-unselectable,.modal-close,.pagination-ellipsis,.pagination-link,.pagination-next,.pagination-previous,.tabs{-webkit-touch-callout:none;-webkit-user-select:none;-moz-user-select:none;-ms-user-select:none;user-select:none}.navbar-link::after,.select:not(.is-multiple):not(.is-loading)::after{border:3px solid transparent;border-radius:2px;border-right:0;border-top:0;content:" ";display:block;height:.625em;margin-top:-.4375em;pointer-events:none;position:absolute;top:50%;-webkit-transform:rotate(-45deg);transform:rotate(-45deg);-webkit-transform-origin:center;transform-origin:center;width:.625em}.block:not(:last-child),.box:not(:last-child),.breadcrumb:not(:last-child),.content:not(:last-child),.highlight:not(:last-child),.level:not(:last-child),.message:not(:last-child),.notification:not(:last-child),.progress:not(:last-child),.subtitle:not(:last-child),.table-container:not(:last-child),.table:not(:last-child),.tabs:not(:last-child),.title:not(:last-child){margin-bottom:1.5rem}.delete,.modal-close{-moz-appearance:none;-webkit-appearance:none;background-color:rgba(10,10,10,.2);border:none;border-radius:290486px;cursor:pointer;display:inline-block;flex-grow:0;flex-shrink:0;font-size:0;height:20px;max-height:20px;max-width:20px;min-height:20px;min-width:20px;outline:0;position:relative;vertical-align:top;width:20px}.delete::after,.delete::before,.modal-close::after,.modal-close::before{background-color:#fff;content:"";display:block;left:50%;position:absolute;top:50%;-webkit-transform:translateX(-50%) translateY(-50%) rotate(45deg);transform:translateX(-50%) translateY(-50%) rotate(45deg);-webkit-transform-origin:center center;transform-origin:center center}.delete::before,.modal-close::before{height:2px;width:50%}.delete::after,.modal-close::after{height:50%;width:2px}.delete:focus,.delete:hover,.modal-close:focus,.modal-close:hover{background-color:rgba(10,10,10,.3)}.delete:active,.modal-close:active{background-color:rgba(10,10,10,.4)}.is-small.delete,.is-small.modal-close{height:16px;max-height:16px;max-width:16px;min-height:16px;min-width:16px;width:16px}.is-medium.delete,.is-medium.modal-close{height:24px;max-height:24px;max-width:24px;min-height:24px;min-width:24px;width:24px}.is-large.delete,.is-large.modal-close{height:32px;max-height:32px;max-width:32px;min-height:32px;min-width:32px;width:32px}.button.is-loading::after,.control.is-loading::after,.loader,.select.is-loading::after{-webkit-animation:spinAround .5s infinite linear;animation:spinAround .5s infinite linear;border:2px solid #dbdbdb;border-radius:290486px;border-right-color:transparent;border-top-color:transparent;content:"";display:block;height:1em;position:relative;width:1em}.hero-video,.image.is-16by9 img,.image.is-1by1 img,.image.is-1by2 img,.image.is-1by3 img,.image.is-2by1 img,.image.is-2by3 img,.image.is-3by1 img,.image.is-3by2 img,.image.is-3by4 img,.image.is-3by5 img,.image.is-4by3 img,.image.is-4by5 img,.image.is-5by3 img,.image.is-5by4 img,.image.is-9by16 img,.image.is-square img,.is-overlay,.modal,.modal-background{bottom:0;left:0;position:absolute;right:0;top:0}.button,.file-cta,.file-name,.input,.pagination-ellipsis,.pagination-link,.pagination-next,.pagination-previous,.select select,.textarea{-moz-appearance:none;-webkit-appearance:none;align-items:center;border:1px solid transparent;border-radius:4px;box-shadow:none;display:inline-flex;font-size:1rem;height:2.25em;justify-content:flex-start;line-height:1.5;padding-bottom:calc(.375em - 1px);padding-left:calc(.625em - 1px);padding-right:calc(.625em - 1px);padding-top:calc(.375em - 1px);position:relative;vertical-align:top}.button:active,.button:focus,.file-cta:active,.file-cta:focus,.file-name:active,.file-name:focus,.input:active,.input:focus,.is-active.button,.is-active.file-cta,.is-active.file-name,.is-active.input,.is-active.pagination-ellipsis,.is-active.pagination-link,.is-active.pagination-next,.is-active.pagination-previous,.is-active.textarea,.is-focused.button,.is-focused.file-cta,.is-focused.file-name,.is-focused.input,.is-focused.pagination-ellipsis,.is-focused.pagination-link,.is-focused.pagination-next,.is-focused.pagination-previous,.is-focused.textarea,.pagination-ellipsis:active,.pagination-ellipsis:focus,.pagination-link:active,.pagination-link:focus,.pagination-next:active,.pagination-next:focus,.pagination-previous:active,.pagination-previous:focus,.select select.is-active,.select select.is-focused,.select select:active,.select select:focus,.textarea:active,.textarea:focus{outline:0}.button[disabled],.file-cta[disabled],.file-name[disabled],.input[disabled],.pagination-ellipsis[disabled],.pagination-link[disabled],.pagination-next[disabled],.pagination-previous[disabled],.select select[disabled],.textarea[disabled]{cursor:not-allowed}/*! minireset.css v0.0.3 | MIT License | github.com/jgthms/minireset.css */blockquote,body,dd,dl,dt,fieldset,figure,h1,h2,h3,h4,h5,h6,hr,html,iframe,legend,li,ol,p,pre,textarea,ul{margin:0;padding:0}h1,h2,h3,h4,h5,h6{font-size:100%;font-weight:400}ul{list-style:none}button,input,select,textarea{margin:0}html{box-sizing:border-box}*,::after,::before{box-sizing:inherit}audio,img,video{height:auto;max-width:100%}iframe{border:0}table{border-collapse:collapse;border-spacing:0}td,th{padding:0;text-align:left}html{background-color:#fff;font-size:16px;-moz-osx-font-smoothing:grayscale;-webkit-font-smoothing:antialiased;min-width:300px;overflow-x:hidden;overflow-y:scroll;text-rendering:optimizeLegibility;-webkit-text-size-adjust:100%;-moz-text-size-adjust:100%;-ms-text-size-adjust:100%;text-size-adjust:100%}article,aside,figure,footer,header,hgroup,section{display:block}body,button,input,select,textarea{font-family:BlinkMacSystemFont,-apple-system,"Segoe UI",Roboto,Oxygen,Ubuntu,Cantarell,"Fira Sans","Droid Sans","Helvetica Neue",Helvetica,Arial,sans-serif}code,pre{-moz-osx-font-smoothing:auto;-webkit-font-smoothing:auto;font-family:monospace}body{color:#4a4a4a;font-size:1rem;font-weight:400;line-height:1.5}a{color:#3273dc;cursor:pointer;text-decoration:none}a strong{color:currentColor}a:hover{color:#363636}code{background-color:#f5f5f5;color:#ff3860;font-size:.875em;font-weight:400;padding:.25em .5em .25em}hr{background-color:#f5f5f5;border:none;display:block;height:2px;margin:1.5rem 0}img{height:auto;max-width:100%}input[type=checkbox],input[type=radio]{vertical-align:baseline}small{font-size:.875em}span{font-style:inherit;font-weight:inherit}strong{color:#363636;font-weight:700}pre{-webkit-overflow-scrolling:touch;background-color:#f5f5f5;color:#4a4a4a;font-size:.875em;overflow-x:auto;padding:1.25rem 1.5rem;white-space:pre;word-wrap:normal}pre code{background-color:transparent;color:currentColor;font-size:1em;padding:0}table td,table th{text-align:left;vertical-align:top}table th{color:#363636}.is-clearfix::after{clear:both;content:" ";display:table}.is-pulled-left{float:left!important}.is-pulled-right{float:right!important}.is-clipped{overflow:hidden!important}.is-size-1{font-size:3rem!important}.is-size-2{font-size:2.5rem!important}.is-size-3{font-size:2rem!important}.is-size-4{font-size:1.5rem!important}.is-size-5{font-size:1.25rem!important}.is-size-6{font-size:1rem!important}.is-size-7{font-size:.75rem!important}@media screen and (max-width:768px){.is-size-1-mobile{font-size:3rem!important}.is-size-2-mobile{font-size:2.5rem!important}.is-size-3-mobile{font-size:2rem!important}.is-size-4-mobile{font-size:1.5rem!important}.is-size-5-mobile{font-size:1.25rem!important}.is-size-6-mobile{font-size:1rem!important}.is-size-7-mobile{font-size:.75rem!important}}@media screen and (min-width:769px),print{.is-size-1-tablet{font-size:3rem!important}.is-size-2-tablet{font-size:2.5rem!important}.is-size-3-tablet{font-size:2rem!important}.is-size-4-tablet{font-size:1.5rem!important}.is-size-5-tablet{font-size:1.25rem!important}.is-size-6-tablet{font-size:1rem!important}.is-size-7-tablet{font-size:.75rem!important}}@media screen and (max-width:1087px){.is-size-1-touch{font-size:3rem!important}.is-size-2-touch{font-size:2.5rem!important}.is-size-3-touch{font-size:2rem!important}.is-size-4-touch{font-size:1.5rem!important}.is-size-5-touch{font-size:1.25rem!important}.is-size-6-touch{font-size:1rem!important}.is-size-7-touch{font-size:.75rem!important}}@media screen and (min-width:1088px){.is-size-1-desktop{font-size:3rem!important}.is-size-2-desktop{font-size:2.5rem!important}.is-size-3-desktop{font-size:2rem!important}.is-size-4-desktop{font-size:1.5rem!important}.is-size-5-desktop{font-size:1.25rem!important}.is-size-6-desktop{font-size:1rem!important}.is-size-7-desktop{font-size:.75rem!important}}@media screen and (min-width:1280px){.is-size-1-widescreen{font-size:3rem!important}.is-size-2-widescreen{font-size:2.5rem!important}.is-size-3-widescreen{font-size:2rem!important}.is-size-4-widescreen{font-size:1.5rem!important}.is-size-5-widescreen{font-size:1.25rem!important}.is-size-6-widescreen{font-size:1rem!important}.is-size-7-widescreen{font-size:.75rem!important}}@media screen and (min-width:1472px){.is-size-1-fullhd{font-size:3rem!important}.is-size-2-fullhd{font-size:2.5rem!important}.is-size-3-fullhd{font-size:2rem!important}.is-size-4-fullhd{font-size:1.5rem!important}.is-size-5-fullhd{font-size:1.25rem!important}.is-size-6-fullhd{font-size:1rem!important}.is-size-7-fullhd{font-size:.75rem!important}}.has-text-centered{text-align:center!important}.has-text-justified{text-align:justify!important}.has-text-left{text-align:left!important}.has-text-right{text-align:right!important}@media screen and (max-width:768px){.has-text-centered-mobile{text-align:center!important}}@media screen and (min-width:769px),print{.has-text-centered-tablet{text-align:center!important}}@media screen and (min-width:769px) and (max-width:1087px){.has-text-centered-tablet-only{text-align:center!important}}@media screen and (max-width:1087px){.has-text-centered-touch{text-align:center!important}}@media screen and (min-width:1088px){.has-text-centered-desktop{text-align:center!important}}@media screen and (min-width:1088px) and (max-width:1279px){.has-text-centered-desktop-only{text-align:center!important}}@media screen and (min-width:1280px){.has-text-centered-widescreen{text-align:center!important}}@media screen and (min-width:1280px) and (max-width:1471px){.has-text-centered-widescreen-only{text-align:center!important}}@media screen and (min-width:1472px){.has-text-centered-fullhd{text-align:center!important}}@media screen and (max-width:768px){.has-text-justified-mobile{text-align:justify!important}}@media screen and (min-width:769px),print{.has-text-justified-tablet{text-align:justify!important}}@media screen and (min-width:769px) and (max-width:1087px){.has-text-justified-tablet-only{text-align:justify!important}}@media screen and (max-width:1087px){.has-text-justified-touch{text-align:justify!important}}@media screen and (min-width:1088px){.has-text-justified-desktop{text-align:justify!important}}@media screen and (min-width:1088px) and (max-width:1279px){.has-text-justified-desktop-only{text-align:justify!important}}@media screen and (min-width:1280px){.has-text-justified-widescreen{text-align:justify!important}}@media screen and (min-width:1280px) and (max-width:1471px){.has-text-justified-widescreen-only{text-align:justify!important}}@media screen and (min-width:1472px){.has-text-justified-fullhd{text-align:justify!important}}@media screen and (max-width:768px){.has-text-left-mobile{text-align:left!important}}@media screen and (min-width:769px),print{.has-text-left-tablet{text-align:left!important}}@media screen and (min-width:769px) and (max-width:1087px){.has-text-left-tablet-only{text-align:left!important}}@media screen and (max-width:1087px){.has-text-left-touch{text-align:left!important}}@media screen and (min-width:1088px){.has-text-left-desktop{text-align:left!important}}@media screen and (min-width:1088px) and (max-width:1279px){.has-text-left-desktop-only{text-align:left!important}}@media screen and (min-width:1280px){.has-text-left-widescreen{text-align:left!important}}@media screen and (min-width:1280px) and (max-width:1471px){.has-text-left-widescreen-only{text-align:left!important}}@media screen and (min-width:1472px){.has-text-left-fullhd{text-align:left!important}}@media screen and (max-width:768px){.has-text-right-mobile{text-align:right!important}}@media screen and (min-width:769px),print{.has-text-right-tablet{text-align:right!important}}@media screen and (min-width:769px) and (max-width:1087px){.has-text-right-tablet-only{text-align:right!important}}@media screen and (max-width:1087px){.has-text-right-touch{text-align:right!important}}@media screen and (min-width:1088px){.has-text-right-desktop{text-align:right!important}}@media screen and (min-width:1088px) and (max-width:1279px){.has-text-right-desktop-only{text-align:right!important}}@media screen and (min-width:1280px){.has-text-right-widescreen{text-align:right!important}}@media screen and (min-width:1280px) and (max-width:1471px){.has-text-right-widescreen-only{text-align:right!important}}@media screen and (min-width:1472px){.has-text-right-fullhd{text-align:right!important}}.is-capitalized{text-transform:capitalize!important}.is-lowercase{text-transform:lowercase!important}.is-uppercase{text-transform:uppercase!important}.is-italic{font-style:italic!important}.has-text-white{color:#fff!important}a.has-text-white:focus,a.has-text-white:hover{color:#e6e6e6!important}.has-background-white{background-color:#fff!important}.has-text-black{color:#0a0a0a!important}a.has-text-black:focus,a.has-text-black:hover{color:#000!important}.has-background-black{background-color:#0a0a0a!important}.has-text-light{color:#f5f5f5!important}a.has-text-light:focus,a.has-text-light:hover{color:#dbdbdb!important}.has-background-light{background-color:#f5f5f5!important}.has-text-dark{color:#363636!important}a.has-text-dark:focus,a.has-text-dark:hover{color:#1c1c1c!important}.has-background-dark{background-color:#363636!important}.has-text-primary{color:#00d1b2!important}a.has-text-primary:focus,a.has-text-primary:hover{color:#009e86!important}.has-background-primary{background-color:#00d1b2!important}.has-text-link{color:#3273dc!important}a.has-text-link:focus,a.has-text-link:hover{color:#205bbc!important}.has-background-link{background-color:#3273dc!important}.has-text-info{color:#209cee!important}a.has-text-info:focus,a.has-text-info:hover{color:#0f81cc!important}.has-background-info{background-color:#209cee!important}.has-text-success{color:#23d160!important}a.has-text-success:focus,a.has-text-success:hover{color:#1ca64c!important}.has-background-success{background-color:#23d160!important}.has-text-warning{color:#ffdd57!important}a.has-text-warning:focus,a.has-text-warning:hover{color:#ffd324!important}.has-background-warning{background-color:#ffdd57!important}.has-text-danger{color:#ff3860!important}a.has-text-danger:focus,a.has-text-danger:hover{color:#ff0537!important}.has-background-danger{background-color:#ff3860!important}.has-text-black-bis{color:#121212!important}.has-background-black-bis{background-color:#121212!important}.has-text-black-ter{color:#242424!important}.has-background-black-ter{background-color:#242424!important}.has-text-grey-darker{color:#363636!important}.has-background-grey-darker{background-color:#363636!important}.has-text-grey-dark{color:#4a4a4a!important}.has-background-grey-dark{background-color:#4a4a4a!important}.has-text-grey{color:#7a7a7a!important}.has-background-grey{background-color:#7a7a7a!important}.has-text-grey-light{color:#b5b5b5!important}.has-background-grey-light{background-color:#b5b5b5!important}.has-text-grey-lighter{color:#dbdbdb!important}.has-background-grey-lighter{background-color:#dbdbdb!important}.has-text-white-ter{color:#f5f5f5!important}.has-background-white-ter{background-color:#f5f5f5!important}.has-text-white-bis{color:#fafafa!important}.has-background-white-bis{background-color:#fafafa!important}.has-text-weight-light{font-weight:300!important}.has-text-weight-normal{font-weight:400!important}.has-text-weight-semibold{font-weight:600!important}.has-text-weight-bold{font-weight:700!important}.is-block{display:block!important}@media screen and (max-width:768px){.is-block-mobile{display:block!important}}@media screen and (min-width:769px),print{.is-block-tablet{display:block!important}}@media screen and (min-width:769px) and (max-width:1087px){.is-block-tablet-only{display:block!important}}@media screen and (max-width:1087px){.is-block-touch{display:block!important}}@media screen and (min-width:1088px){.is-block-desktop{display:block!important}}@media screen and (min-width:1088px) and (max-width:1279px){.is-block-desktop-only{display:block!important}}@media screen and (min-width:1280px){.is-block-widescreen{display:block!important}}@media screen and (min-width:1280px) and (max-width:1471px){.is-block-widescreen-only{display:block!important}}@media screen and (min-width:1472px){.is-block-fullhd{display:block!important}}.is-flex{display:flex!important}@media screen and (max-width:768px){.is-flex-mobile{display:flex!important}}@media screen and (min-width:769px),print{.is-flex-tablet{display:flex!important}}@media screen and (min-width:769px) and (max-width:1087px){.is-flex-tablet-only{display:flex!important}}@media screen and (max-width:1087px){.is-flex-touch{display:flex!important}}@media screen and (min-width:1088px){.is-flex-desktop{display:flex!important}}@media screen and (min-width:1088px) and (max-width:1279px){.is-flex-desktop-only{display:flex!important}}@media screen and (min-width:1280px){.is-flex-widescreen{display:flex!important}}@media screen and (min-width:1280px) and (max-width:1471px){.is-flex-widescreen-only{display:flex!important}}@media screen and (min-width:1472px){.is-flex-fullhd{display:flex!important}}.is-inline{display:inline!important}@media screen and (max-width:768px){.is-inline-mobile{display:inline!important}}@media screen and (min-width:769px),print{.is-inline-tablet{display:inline!important}}@media screen and (min-width:769px) and (max-width:1087px){.is-inline-tablet-only{display:inline!important}}@media screen and (max-width:1087px){.is-inline-touch{display:inline!important}}@media screen and (min-width:1088px){.is-inline-desktop{display:inline!important}}@media screen and (min-width:1088px) and (max-width:1279px){.is-inline-desktop-only{display:inline!important}}@media screen and (min-width:1280px){.is-inline-widescreen{display:inline!important}}@media screen and (min-width:1280px) and (max-width:1471px){.is-inline-widescreen-only{display:inline!important}}@media screen and (min-width:1472px){.is-inline-fullhd{display:inline!important}}.is-inline-block{display:inline-block!important}@media screen and (max-width:768px){.is-inline-block-mobile{display:inline-block!important}}@media screen and (min-width:769px),print{.is-inline-block-tablet{display:inline-block!important}}@media screen and (min-width:769px) and (max-width:1087px){.is-inline-block-tablet-only{display:inline-block!important}}@media screen and (max-width:1087px){.is-inline-block-touch{display:inline-block!important}}@media screen and (min-width:1088px){.is-inline-block-desktop{display:inline-block!important}}@media screen and (min-width:1088px) and (max-width:1279px){.is-inline-block-desktop-only{display:inline-block!important}}@media screen and (min-width:1280px){.is-inline-block-widescreen{display:inline-block!important}}@media screen and (min-width:1280px) and (max-width:1471px){.is-inline-block-widescreen-only{display:inline-block!important}}@media screen and (min-width:1472px){.is-inline-block-fullhd{display:inline-block!important}}.is-inline-flex{display:inline-flex!important}@media screen and (max-width:768px){.is-inline-flex-mobile{display:inline-flex!important}}@media screen and (min-width:769px),print{.is-inline-flex-tablet{display:inline-flex!important}}@media screen and (min-width:769px) and (max-width:1087px){.is-inline-flex-tablet-only{display:inline-flex!important}}@media screen and (max-width:1087px){.is-inline-flex-touch{display:inline-flex!important}}@media screen and (min-width:1088px){.is-inline-flex-desktop{display:inline-flex!important}}@media screen and (min-width:1088px) and (max-width:1279px){.is-inline-flex-desktop-only{display:inline-flex!important}}@media screen and (min-width:1280px){.is-inline-flex-widescreen{display:inline-flex!important}}@media screen and (min-width:1280px) and (max-width:1471px){.is-inline-flex-widescreen-only{display:inline-flex!important}}@media screen and (min-width:1472px){.is-inline-flex-fullhd{display:inline-flex!important}}.is-hidden{display:none!important}@media screen and (max-width:768px){.is-hidden-mobile{display:none!important}}@media screen and (min-width:769px),print{.is-hidden-tablet{display:none!important}}@media screen and (min-width:769px) and (max-width:1087px){.is-hidden-tablet-only{display:none!important}}@media screen and (max-width:1087px){.is-hidden-touch{display:none!important}}@media screen and (min-width:1088px){.is-hidden-desktop{display:none!important}}@media screen and (min-width:1088px) and (max-width:1279px){.is-hidden-desktop-only{display:none!important}}@media screen and (min-width:1280px){.is-hidden-widescreen{display:none!important}}@media screen and (min-width:1280px) and (max-width:1471px){.is-hidden-widescreen-only{display:none!important}}@media screen and (min-width:1472px){.is-hidden-fullhd{display:none!important}}.is-invisible{visibility:hidden!important}@media screen and (max-width:768px){.is-invisible-mobile{visibility:hidden!important}}@media screen and (min-width:769px),print{.is-invisible-tablet{visibility:hidden!important}}@media screen and (min-width:769px) and (max-width:1087px){.is-invisible-tablet-only{visibility:hidden!important}}@media screen and (max-width:1087px){.is-invisible-touch{visibility:hidden!important}}@media screen and (min-width:1088px){.is-invisible-desktop{visibility:hidden!important}}@media screen and (min-width:1088px) and (max-width:1279px){.is-invisible-desktop-only{visibility:hidden!important}}@media screen and (min-width:1280px){.is-invisible-widescreen{visibility:hidden!important}}@media screen and (min-width:1280px) and (max-width:1471px){.is-invisible-widescreen-only{visibility:hidden!important}}@media screen and (min-width:1472px){.is-invisible-fullhd{visibility:hidden!important}}.is-marginless{margin:0!important}.is-paddingless{padding:0!important}.is-radiusless{border-radius:0!important}.is-shadowless{box-shadow:none!important}.box{background-color:#fff;border-radius:6px;box-shadow:0 2px 3px rgba(10,10,10,.1),0 0 0 1px rgba(10,10,10,.1);color:#4a4a4a;display:block;padding:1.25rem}a.box:focus,a.box:hover{box-shadow:0 2px 3px rgba(10,10,10,.1),0 0 0 1px #3273dc}a.box:active{box-shadow:inset 0 1px 2px rgba(10,10,10,.2),0 0 0 1px #3273dc}.button{background-color:#fff;border-color:#dbdbdb;border-width:1px;color:#363636;cursor:pointer;justify-content:center;padding-bottom:calc(.375em - 1px);padding-left:.75em;padding-right:.75em;padding-top:calc(.375em - 1px);text-align:center;white-space:nowrap}.button strong{color:inherit}.button .icon,.button .icon.is-large,.button .icon.is-medium,.button .icon.is-small{height:1.5em;width:1.5em}.button .icon:first-child:not(:last-child){margin-left:calc(-.375em - 1px);margin-right:.1875em}.button .icon:last-child:not(:first-child){margin-left:.1875em;margin-right:calc(-.375em - 1px)}.button .icon:first-child:last-child{margin-left:calc(-.375em - 1px);margin-right:calc(-.375em - 1px)}.button.is-hovered,.button:hover{border-color:#b5b5b5;color:#363636}.button.is-focused,.button:focus{border-color:#3273dc;color:#363636}.button.is-focused:not(:active),.button:focus:not(:active){box-shadow:0 0 0 .125em rgba(50,115,220,.25)}.button.is-active,.button:active{border-color:#4a4a4a;color:#363636}.button.is-text{background-color:transparent;border-color:transparent;color:#4a4a4a;text-decoration:underline}.button.is-text.is-focused,.button.is-text.is-hovered,.button.is-text:focus,.button.is-text:hover{background-color:#f5f5f5;color:#363636}.button.is-text.is-active,.button.is-text:active{background-color:#e8e8e8;color:#363636}.button.is-text[disabled]{background-color:transparent;border-color:transparent;box-shadow:none}.button.is-white{background-color:#fff;border-color:transparent;color:#0a0a0a}.button.is-white.is-hovered,.button.is-white:hover{background-color:#f9f9f9;border-color:transparent;color:#0a0a0a}.button.is-white.is-focused,.button.is-white:focus{border-color:transparent;color:#0a0a0a}.button.is-white.is-focused:not(:active),.button.is-white:focus:not(:active){box-shadow:0 0 0 .125em rgba(255,255,255,.25)}.button.is-white.is-active,.button.is-white:active{background-color:#f2f2f2;border-color:transparent;color:#0a0a0a}.button.is-white[disabled]{background-color:#fff;border-color:transparent;box-shadow:none}.button.is-white.is-inverted{background-color:#0a0a0a;color:#fff}.button.is-white.is-inverted:hover{background-color:#000}.button.is-white.is-inverted[disabled]{background-color:#0a0a0a;border-color:transparent;box-shadow:none;color:#fff}.button.is-white.is-loading::after{border-color:transparent transparent #0a0a0a #0a0a0a!important}.button.is-white.is-outlined{background-color:transparent;border-color:#fff;color:#fff}.button.is-white.is-outlined:focus,.button.is-white.is-outlined:hover{background-color:#fff;border-color:#fff;color:#0a0a0a}.button.is-white.is-outlined.is-loading::after{border-color:transparent transparent #fff #fff!important}.button.is-white.is-outlined[disabled]{background-color:transparent;border-color:#fff;box-shadow:none;color:#fff}.button.is-white.is-inverted.is-outlined{background-color:transparent;border-color:#0a0a0a;color:#0a0a0a}.button.is-white.is-inverted.is-outlined:focus,.button.is-white.is-inverted.is-outlined:hover{background-color:#0a0a0a;color:#fff}.button.is-white.is-inverted.is-outlined[disabled]{background-color:transparent;border-color:#0a0a0a;box-shadow:none;color:#0a0a0a}.button.is-black{background-color:#0a0a0a;border-color:transparent;color:#fff}.button.is-black.is-hovered,.button.is-black:hover{background-color:#040404;border-color:transparent;color:#fff}.button.is-black.is-focused,.button.is-black:focus{border-color:transparent;color:#fff}.button.is-black.is-focused:not(:active),.button.is-black:focus:not(:active){box-shadow:0 0 0 .125em rgba(10,10,10,.25)}.button.is-black.is-active,.button.is-black:active{background-color:#000;border-color:transparent;color:#fff}.button.is-black[disabled]{background-color:#0a0a0a;border-color:transparent;box-shadow:none}.button.is-black.is-inverted{background-color:#fff;color:#0a0a0a}.button.is-black.is-inverted:hover{background-color:#f2f2f2}.button.is-black.is-inverted[disabled]{background-color:#fff;border-color:transparent;box-shadow:none;color:#0a0a0a}.button.is-black.is-loading::after{border-color:transparent transparent #fff #fff!important}.button.is-black.is-outlined{background-color:transparent;border-color:#0a0a0a;color:#0a0a0a}.button.is-black.is-outlined:focus,.button.is-black.is-outlined:hover{background-color:#0a0a0a;border-color:#0a0a0a;color:#fff}.button.is-black.is-outlined.is-loading::after{border-color:transparent transparent #0a0a0a #0a0a0a!important}.button.is-black.is-outlined[disabled]{background-color:transparent;border-color:#0a0a0a;box-shadow:none;color:#0a0a0a}.button.is-black.is-inverted.is-outlined{background-color:transparent;border-color:#fff;color:#fff}.button.is-black.is-inverted.is-outlined:focus,.button.is-black.is-inverted.is-outlined:hover{background-color:#fff;color:#0a0a0a}.button.is-black.is-inverted.is-outlined[disabled]{background-color:transparent;border-color:#fff;box-shadow:none;color:#fff}.button.is-light{background-color:#f5f5f5;border-color:transparent;color:#363636}.button.is-light.is-hovered,.button.is-light:hover{background-color:#eee;border-color:transparent;color:#363636}.button.is-light.is-focused,.button.is-light:focus{border-color:transparent;color:#363636}.button.is-light.is-focused:not(:active),.button.is-light:focus:not(:active){box-shadow:0 0 0 .125em rgba(245,245,245,.25)}.button.is-light.is-active,.button.is-light:active{background-color:#e8e8e8;border-color:transparent;color:#363636}.button.is-light[disabled]{background-color:#f5f5f5;border-color:transparent;box-shadow:none}.button.is-light.is-inverted{background-color:#363636;color:#f5f5f5}.button.is-light.is-inverted:hover{background-color:#292929}.button.is-light.is-inverted[disabled]{background-color:#363636;border-color:transparent;box-shadow:none;color:#f5f5f5}.button.is-light.is-loading::after{border-color:transparent transparent #363636 #363636!important}.button.is-light.is-outlined{background-color:transparent;border-color:#f5f5f5;color:#f5f5f5}.button.is-light.is-outlined:focus,.button.is-light.is-outlined:hover{background-color:#f5f5f5;border-color:#f5f5f5;color:#363636}.button.is-light.is-outlined.is-loading::after{border-color:transparent transparent #f5f5f5 #f5f5f5!important}.button.is-light.is-outlined[disabled]{background-color:transparent;border-color:#f5f5f5;box-shadow:none;color:#f5f5f5}.button.is-light.is-inverted.is-outlined{background-color:transparent;border-color:#363636;color:#363636}.button.is-light.is-inverted.is-outlined:focus,.button.is-light.is-inverted.is-outlined:hover{background-color:#363636;color:#f5f5f5}.button.is-light.is-inverted.is-outlined[disabled]{background-color:transparent;border-color:#363636;box-shadow:none;color:#363636}.button.is-dark{background-color:#363636;border-color:transparent;color:#f5f5f5}.button.is-dark.is-hovered,.button.is-dark:hover{background-color:#2f2f2f;border-color:transparent;color:#f5f5f5}.button.is-dark.is-focused,.button.is-dark:focus{border-color:transparent;color:#f5f5f5}.button.is-dark.is-focused:not(:active),.button.is-dark:focus:not(:active){box-shadow:0 0 0 .125em rgba(54,54,54,.25)}.button.is-dark.is-active,.button.is-dark:active{background-color:#292929;border-color:transparent;color:#f5f5f5}.button.is-dark[disabled]{background-color:#363636;border-color:transparent;box-shadow:none}.button.is-dark.is-inverted{background-color:#f5f5f5;color:#363636}.button.is-dark.is-inverted:hover{background-color:#e8e8e8}.button.is-dark.is-inverted[disabled]{background-color:#f5f5f5;border-color:transparent;box-shadow:none;color:#363636}.button.is-dark.is-loading::after{border-color:transparent transparent #f5f5f5 #f5f5f5!important}.button.is-dark.is-outlined{background-color:transparent;border-color:#363636;color:#363636}.button.is-dark.is-outlined:focus,.button.is-dark.is-outlined:hover{background-color:#363636;border-color:#363636;color:#f5f5f5}.button.is-dark.is-outlined.is-loading::after{border-color:transparent transparent #363636 #363636!important}.button.is-dark.is-outlined[disabled]{background-color:transparent;border-color:#363636;box-shadow:none;color:#363636}.button.is-dark.is-inverted.is-outlined{background-color:transparent;border-color:#f5f5f5;color:#f5f5f5}.button.is-dark.is-inverted.is-outlined:focus,.button.is-dark.is-inverted.is-outlined:hover{background-color:#f5f5f5;color:#363636}.button.is-dark.is-inverted.is-outlined[disabled]{background-color:transparent;border-color:#f5f5f5;box-shadow:none;color:#f5f5f5}.button.is-primary{background-color:#00d1b2;border-color:transparent;color:#fff}.button.is-primary.is-hovered,.button.is-primary:hover{background-color:#00c4a7;border-color:transparent;color:#fff}.button.is-primary.is-focused,.button.is-primary:focus{border-color:transparent;color:#fff}.button.is-primary.is-focused:not(:active),.button.is-primary:focus:not(:active){box-shadow:0 0 0 .125em rgba(0,209,178,.25)}.button.is-primary.is-active,.button.is-primary:active{background-color:#00b89c;border-color:transparent;color:#fff}.button.is-primary[disabled]{background-color:#00d1b2;border-color:transparent;box-shadow:none}.button.is-primary.is-inverted{background-color:#fff;color:#00d1b2}.button.is-primary.is-inverted:hover{background-color:#f2f2f2}.button.is-primary.is-inverted[disabled]{background-color:#fff;border-color:transparent;box-shadow:none;color:#00d1b2}.button.is-primary.is-loading::after{border-color:transparent transparent #fff #fff!important}.button.is-primary.is-outlined{background-color:transparent;border-color:#00d1b2;color:#00d1b2}.button.is-primary.is-outlined:focus,.button.is-primary.is-outlined:hover{background-color:#00d1b2;border-color:#00d1b2;color:#fff}.button.is-primary.is-outlined.is-loading::after{border-color:transparent transparent #00d1b2 #00d1b2!important}.button.is-primary.is-outlined[disabled]{background-color:transparent;border-color:#00d1b2;box-shadow:none;color:#00d1b2}.button.is-primary.is-inverted.is-outlined{background-color:transparent;border-color:#fff;color:#fff}.button.is-primary.is-inverted.is-outlined:focus,.button.is-primary.is-inverted.is-outlined:hover{background-color:#fff;color:#00d1b2}.button.is-primary.is-inverted.is-outlined[disabled]{background-color:transparent;border-color:#fff;box-shadow:none;color:#fff}.button.is-link{background-color:#3273dc;border-color:transparent;color:#fff}.button.is-link.is-hovered,.button.is-link:hover{background-color:#276cda;border-color:transparent;color:#fff}.button.is-link.is-focused,.button.is-link:focus{border-color:transparent;color:#fff}.button.is-link.is-focused:not(:active),.button.is-link:focus:not(:active){box-shadow:0 0 0 .125em rgba(50,115,220,.25)}.button.is-link.is-active,.button.is-link:active{background-color:#2366d1;border-color:transparent;color:#fff}.button.is-link[disabled]{background-color:#3273dc;border-color:transparent;box-shadow:none}.button.is-link.is-inverted{background-color:#fff;color:#3273dc}.button.is-link.is-inverted:hover{background-color:#f2f2f2}.button.is-link.is-inverted[disabled]{background-color:#fff;border-color:transparent;box-shadow:none;color:#3273dc}.button.is-link.is-loading::after{border-color:transparent transparent #fff #fff!important}.button.is-link.is-outlined{background-color:transparent;border-color:#3273dc;color:#3273dc}.button.is-link.is-outlined:focus,.button.is-link.is-outlined:hover{background-color:#3273dc;border-color:#3273dc;color:#fff}.button.is-link.is-outlined.is-loading::after{border-color:transparent transparent #3273dc #3273dc!important}.button.is-link.is-outlined[disabled]{background-color:transparent;border-color:#3273dc;box-shadow:none;color:#3273dc}.button.is-link.is-inverted.is-outlined{background-color:transparent;border-color:#fff;color:#fff}.button.is-link.is-inverted.is-outlined:focus,.button.is-link.is-inverted.is-outlined:hover{background-color:#fff;color:#3273dc}.button.is-link.is-inverted.is-outlined[disabled]{background-color:transparent;border-color:#fff;box-shadow:none;color:#fff}.button.is-info{background-color:#209cee;border-color:transparent;color:#fff}.button.is-info.is-hovered,.button.is-info:hover{background-color:#1496ed;border-color:transparent;color:#fff}.button.is-info.is-focused,.button.is-info:focus{border-color:transparent;color:#fff}.button.is-info.is-focused:not(:active),.button.is-info:focus:not(:active){box-shadow:0 0 0 .125em rgba(32,156,238,.25)}.button.is-info.is-active,.button.is-info:active{background-color:#118fe4;border-color:transparent;color:#fff}.button.is-info[disabled]{background-color:#209cee;border-color:transparent;box-shadow:none}.button.is-info.is-inverted{background-color:#fff;color:#209cee}.button.is-info.is-inverted:hover{background-color:#f2f2f2}.button.is-info.is-inverted[disabled]{background-color:#fff;border-color:transparent;box-shadow:none;color:#209cee}.button.is-info.is-loading::after{border-color:transparent transparent #fff #fff!important}.button.is-info.is-outlined{background-color:transparent;border-color:#209cee;color:#209cee}.button.is-info.is-outlined:focus,.button.is-info.is-outlined:hover{background-color:#209cee;border-color:#209cee;color:#fff}.button.is-info.is-outlined.is-loading::after{border-color:transparent transparent #209cee #209cee!important}.button.is-info.is-outlined[disabled]{background-color:transparent;border-color:#209cee;box-shadow:none;color:#209cee}.button.is-info.is-inverted.is-outlined{background-color:transparent;border-color:#fff;color:#fff}.button.is-info.is-inverted.is-outlined:focus,.button.is-info.is-inverted.is-outlined:hover{background-color:#fff;color:#209cee}.button.is-info.is-inverted.is-outlined[disabled]{background-color:transparent;border-color:#fff;box-shadow:none;color:#fff}.button.is-success{background-color:#23d160;border-color:transparent;color:#fff}.button.is-success.is-hovered,.button.is-success:hover{background-color:#22c65b;border-color:transparent;color:#fff}.button.is-success.is-focused,.button.is-success:focus{border-color:transparent;color:#fff}.button.is-success.is-focused:not(:active),.button.is-success:focus:not(:active){box-shadow:0 0 0 .125em rgba(35,209,96,.25)}.button.is-success.is-active,.button.is-success:active{background-color:#20bc56;border-color:transparent;color:#fff}.button.is-success[disabled]{background-color:#23d160;border-color:transparent;box-shadow:none}.button.is-success.is-inverted{background-color:#fff;color:#23d160}.button.is-success.is-inverted:hover{background-color:#f2f2f2}.button.is-success.is-inverted[disabled]{background-color:#fff;border-color:transparent;box-shadow:none;color:#23d160}.button.is-success.is-loading::after{border-color:transparent transparent #fff #fff!important}.button.is-success.is-outlined{background-color:transparent;border-color:#23d160;color:#23d160}.button.is-success.is-outlined:focus,.button.is-success.is-outlined:hover{background-color:#23d160;border-color:#23d160;color:#fff}.button.is-success.is-outlined.is-loading::after{border-color:transparent transparent #23d160 #23d160!important}.button.is-success.is-outlined[disabled]{background-color:transparent;border-color:#23d160;box-shadow:none;color:#23d160}.button.is-success.is-inverted.is-outlined{background-color:transparent;border-color:#fff;color:#fff}.button.is-success.is-inverted.is-outlined:focus,.button.is-success.is-inverted.is-outlined:hover{background-color:#fff;color:#23d160}.button.is-success.is-inverted.is-outlined[disabled]{background-color:transparent;border-color:#fff;box-shadow:none;color:#fff}.button.is-warning{background-color:#ffdd57;border-color:transparent;color:rgba(0,0,0,.7)}.button.is-warning.is-hovered,.button.is-warning:hover{background-color:#ffdb4a;border-color:transparent;color:rgba(0,0,0,.7)}.button.is-warning.is-focused,.button.is-warning:focus{border-color:transparent;color:rgba(0,0,0,.7)}.button.is-warning.is-focused:not(:active),.button.is-warning:focus:not(:active){box-shadow:0 0 0 .125em rgba(255,221,87,.25)}.button.is-warning.is-active,.button.is-warning:active{background-color:#ffd83d;border-color:transparent;color:rgba(0,0,0,.7)}.button.is-warning[disabled]{background-color:#ffdd57;border-color:transparent;box-shadow:none}.button.is-warning.is-inverted{background-color:rgba(0,0,0,.7);color:#ffdd57}.button.is-warning.is-inverted:hover{background-color:rgba(0,0,0,.7)}.button.is-warning.is-inverted[disabled]{background-color:rgba(0,0,0,.7);border-color:transparent;box-shadow:none;color:#ffdd57}.button.is-warning.is-loading::after{border-color:transparent transparent rgba(0,0,0,.7) rgba(0,0,0,.7)!important}.button.is-warning.is-outlined{background-color:transparent;border-color:#ffdd57;color:#ffdd57}.button.is-warning.is-outlined:focus,.button.is-warning.is-outlined:hover{background-color:#ffdd57;border-color:#ffdd57;color:rgba(0,0,0,.7)}.button.is-warning.is-outlined.is-loading::after{border-color:transparent transparent #ffdd57 #ffdd57!important}.button.is-warning.is-outlined[disabled]{background-color:transparent;border-color:#ffdd57;box-shadow:none;color:#ffdd57}.button.is-warning.is-inverted.is-outlined{background-color:transparent;border-color:rgba(0,0,0,.7);color:rgba(0,0,0,.7)}.button.is-warning.is-inverted.is-outlined:focus,.button.is-warning.is-inverted.is-outlined:hover{background-color:rgba(0,0,0,.7);color:#ffdd57}.button.is-warning.is-inverted.is-outlined[disabled]{background-color:transparent;border-color:rgba(0,0,0,.7);box-shadow:none;color:rgba(0,0,0,.7)}.button.is-danger{background-color:#ff3860;border-color:transparent;color:#fff}.button.is-danger.is-hovered,.button.is-danger:hover{background-color:#ff2b56;border-color:transparent;color:#fff}.button.is-danger.is-focused,.button.is-danger:focus{border-color:transparent;color:#fff}.button.is-danger.is-focused:not(:active),.button.is-danger:focus:not(:active){box-shadow:0 0 0 .125em rgba(255,56,96,.25)}.button.is-danger.is-active,.button.is-danger:active{background-color:#ff1f4b;border-color:transparent;color:#fff}.button.is-danger[disabled]{background-color:#ff3860;border-color:transparent;box-shadow:none}.button.is-danger.is-inverted{background-color:#fff;color:#ff3860}.button.is-danger.is-inverted:hover{background-color:#f2f2f2}.button.is-danger.is-inverted[disabled]{background-color:#fff;border-color:transparent;box-shadow:none;color:#ff3860}.button.is-danger.is-loading::after{border-color:transparent transparent #fff #fff!important}.button.is-danger.is-outlined{background-color:transparent;border-color:#ff3860;color:#ff3860}.button.is-danger.is-outlined:focus,.button.is-danger.is-outlined:hover{background-color:#ff3860;border-color:#ff3860;color:#fff}.button.is-danger.is-outlined.is-loading::after{border-color:transparent transparent #ff3860 #ff3860!important}.button.is-danger.is-outlined[disabled]{background-color:transparent;border-color:#ff3860;box-shadow:none;color:#ff3860}.button.is-danger.is-inverted.is-outlined{background-color:transparent;border-color:#fff;color:#fff}.button.is-danger.is-inverted.is-outlined:focus,.button.is-danger.is-inverted.is-outlined:hover{background-color:#fff;color:#ff3860}.button.is-danger.is-inverted.is-outlined[disabled]{background-color:transparent;border-color:#fff;box-shadow:none;color:#fff}.button.is-small{border-radius:2px;font-size:.75rem}.button.is-medium{font-size:1.25rem}.button.is-large{font-size:1.5rem}.button[disabled]{background-color:#fff;border-color:#dbdbdb;box-shadow:none;opacity:.5}.button.is-fullwidth{display:flex;width:100%}.button.is-loading{color:transparent!important;pointer-events:none}.button.is-loading::after{position:absolute;left:calc(50% - (1em / 2));top:calc(50% - (1em / 2));position:absolute!important}.button.is-static{background-color:#f5f5f5;border-color:#dbdbdb;color:#7a7a7a;box-shadow:none;pointer-events:none}.button.is-rounded{border-radius:290486px;padding-left:1em;padding-right:1em}.buttons{align-items:center;display:flex;flex-wrap:wrap;justify-content:flex-start}.buttons .button{margin-bottom:.5rem}.buttons .button:not(:last-child){margin-right:.5rem}.buttons:last-child{margin-bottom:-.5rem}.buttons:not(:last-child){margin-bottom:1rem}.buttons.has-addons .button:not(:first-child){border-bottom-left-radius:0;border-top-left-radius:0}.buttons.has-addons .button:not(:last-child){border-bottom-right-radius:0;border-top-right-radius:0;margin-right:-1px}.buttons.has-addons .button:last-child{margin-right:0}.buttons.has-addons .button.is-hovered,.buttons.has-addons .button:hover{z-index:2}.buttons.has-addons .button.is-active,.buttons.has-addons .button.is-focused,.buttons.has-addons .button.is-selected,.buttons.has-addons .button:active,.buttons.has-addons .button:focus{z-index:3}.buttons.has-addons .button.is-active:hover,.buttons.has-addons .button.is-focused:hover,.buttons.has-addons .button.is-selected:hover,.buttons.has-addons .button:active:hover,.buttons.has-addons .button:focus:hover{z-index:4}.buttons.has-addons .button.is-expanded{flex-grow:1}.buttons.is-centered{justify-content:center}.buttons.is-right{justify-content:flex-end}.container{margin:0 auto;position:relative}@media screen and (min-width:1088px){.container{max-width:960px;width:960px}.container.is-fluid{margin-left:64px;margin-right:64px;max-width:none;width:auto}}@media screen and (max-width:1279px){.container.is-widescreen{max-width:1152px;width:auto}}@media screen and (max-width:1471px){.container.is-fullhd{max-width:1344px;width:auto}}@media screen and (min-width:1280px){.container{max-width:1152px;width:1152px}}@media screen and (min-width:1472px){.container{max-width:1344px;width:1344px}}.content li+li{margin-top:.25em}.content blockquote:not(:last-child),.content dl:not(:last-child),.content ol:not(:last-child),.content p:not(:last-child),.content pre:not(:last-child),.content table:not(:last-child),.content ul:not(:last-child){margin-bottom:1em}.content h1,.content h2,.content h3,.content h4,.content h5,.content h6{color:#363636;font-weight:600;line-height:1.125}.content h1{font-size:2em;margin-bottom:.5em}.content h1:not(:first-child){margin-top:1em}.content h2{font-size:1.75em;margin-bottom:.5714em}.content h2:not(:first-child){margin-top:1.1428em}.content h3{font-size:1.5em;margin-bottom:.6666em}.content h3:not(:first-child){margin-top:1.3333em}.content h4{font-size:1.25em;margin-bottom:.8em}.content h5{font-size:1.125em;margin-bottom:.8888em}.content h6{font-size:1em;margin-bottom:1em}.content blockquote{background-color:#f5f5f5;border-left:5px solid #dbdbdb;padding:1.25em 1.5em}.content ol{list-style:decimal outside;margin-left:2em;margin-top:1em}.content ul{list-style:disc outside;margin-left:2em;margin-top:1em}.content ul ul{list-style-type:circle;margin-top:.5em}.content ul ul ul{list-style-type:square}.content dd{margin-left:2em}.content figure{margin-left:2em;margin-right:2em;text-align:center}.content figure:not(:first-child){margin-top:2em}.content figure:not(:last-child){margin-bottom:2em}.content figure img{display:inline-block}.content figure figcaption{font-style:italic}.content pre{-webkit-overflow-scrolling:touch;overflow-x:auto;padding:1.25em 1.5em;white-space:pre;word-wrap:normal}.content sub,.content sup{font-size:75%}.content table{width:100%}.content table td,.content table th{border:1px solid #dbdbdb;border-width:0 0 1px;padding:.5em .75em;vertical-align:top}.content table th{color:#363636;text-align:left}.content table thead td,.content table thead th{border-width:0 0 2px;color:#363636}.content table tfoot td,.content table tfoot th{border-width:2px 0 0;color:#363636}.content table tbody tr:last-child td,.content table tbody tr:last-child th{border-bottom-width:0}.content.is-small{font-size:.75rem}.content.is-medium{font-size:1.25rem}.content.is-large{font-size:1.5rem}.input,.textarea{background-color:#fff;border-color:#dbdbdb;color:#363636;box-shadow:inset 0 1px 2px rgba(10,10,10,.1);max-width:100%;width:100%}.input::-moz-placeholder,.textarea::-moz-placeholder{color:rgba(54,54,54,.3)}.input::-webkit-input-placeholder,.textarea::-webkit-input-placeholder{color:rgba(54,54,54,.3)}.input:-moz-placeholder,.textarea:-moz-placeholder{color:rgba(54,54,54,.3)}.input:-ms-input-placeholder,.textarea:-ms-input-placeholder{color:rgba(54,54,54,.3)}.input.is-hovered,.input:hover,.textarea.is-hovered,.textarea:hover{border-color:#b5b5b5}.input.is-active,.input.is-focused,.input:active,.input:focus,.textarea.is-active,.textarea.is-focused,.textarea:active,.textarea:focus{border-color:#3273dc;box-shadow:0 0 0 .125em rgba(50,115,220,.25)}.input[disabled],.textarea[disabled]{background-color:#f5f5f5;border-color:#f5f5f5;box-shadow:none;color:#7a7a7a}.input[disabled]::-moz-placeholder,.textarea[disabled]::-moz-placeholder{color:rgba(122,122,122,.3)}.input[disabled]::-webkit-input-placeholder,.textarea[disabled]::-webkit-input-placeholder{color:rgba(122,122,122,.3)}.input[disabled]:-moz-placeholder,.textarea[disabled]:-moz-placeholder{color:rgba(122,122,122,.3)}.input[disabled]:-ms-input-placeholder,.textarea[disabled]:-ms-input-placeholder{color:rgba(122,122,122,.3)}.input[readonly],.textarea[readonly]{box-shadow:none}.input.is-white,.textarea.is-white{border-color:#fff}.input.is-white.is-active,.input.is-white.is-focused,.input.is-white:active,.input.is-white:focus,.textarea.is-white.is-active,.textarea.is-white.is-focused,.textarea.is-white:active,.textarea.is-white:focus{box-shadow:0 0 0 .125em rgba(255,255,255,.25)}.input.is-black,.textarea.is-black{border-color:#0a0a0a}.input.is-black.is-active,.input.is-black.is-focused,.input.is-black:active,.input.is-black:focus,.textarea.is-black.is-active,.textarea.is-black.is-focused,.textarea.is-black:active,.textarea.is-black:focus{box-shadow:0 0 0 .125em rgba(10,10,10,.25)}.input.is-light,.textarea.is-light{border-color:#f5f5f5}.input.is-light.is-active,.input.is-light.is-focused,.input.is-light:active,.input.is-light:focus,.textarea.is-light.is-active,.textarea.is-light.is-focused,.textarea.is-light:active,.textarea.is-light:focus{box-shadow:0 0 0 .125em rgba(245,245,245,.25)}.input.is-dark,.textarea.is-dark{border-color:#363636}.input.is-dark.is-active,.input.is-dark.is-focused,.input.is-dark:active,.input.is-dark:focus,.textarea.is-dark.is-active,.textarea.is-dark.is-focused,.textarea.is-dark:active,.textarea.is-dark:focus{box-shadow:0 0 0 .125em rgba(54,54,54,.25)}.input.is-primary,.textarea.is-primary{border-color:#00d1b2}.input.is-primary.is-active,.input.is-primary.is-focused,.input.is-primary:active,.input.is-primary:focus,.textarea.is-primary.is-active,.textarea.is-primary.is-focused,.textarea.is-primary:active,.textarea.is-primary:focus{box-shadow:0 0 0 .125em rgba(0,209,178,.25)}.input.is-link,.textarea.is-link{border-color:#3273dc}.input.is-link.is-active,.input.is-link.is-focused,.input.is-link:active,.input.is-link:focus,.textarea.is-link.is-active,.textarea.is-link.is-focused,.textarea.is-link:active,.textarea.is-link:focus{box-shadow:0 0 0 .125em rgba(50,115,220,.25)}.input.is-info,.textarea.is-info{border-color:#209cee}.input.is-info.is-active,.input.is-info.is-focused,.input.is-info:active,.input.is-info:focus,.textarea.is-info.is-active,.textarea.is-info.is-focused,.textarea.is-info:active,.textarea.is-info:focus{box-shadow:0 0 0 .125em rgba(32,156,238,.25)}.input.is-success,.textarea.is-success{border-color:#23d160}.input.is-success.is-active,.input.is-success.is-focused,.input.is-success:active,.input.is-success:focus,.textarea.is-success.is-active,.textarea.is-success.is-focused,.textarea.is-success:active,.textarea.is-success:focus{box-shadow:0 0 0 .125em rgba(35,209,96,.25)}.input.is-warning,.textarea.is-warning{border-color:#ffdd57}.input.is-warning.is-active,.input.is-warning.is-focused,.input.is-warning:active,.input.is-warning:focus,.textarea.is-warning.is-active,.textarea.is-warning.is-focused,.textarea.is-warning:active,.textarea.is-warning:focus{box-shadow:0 0 0 .125em rgba(255,221,87,.25)}.input.is-danger,.textarea.is-danger{border-color:#ff3860}.input.is-danger.is-active,.input.is-danger.is-focused,.input.is-danger:active,.input.is-danger:focus,.textarea.is-danger.is-active,.textarea.is-danger.is-focused,.textarea.is-danger:active,.textarea.is-danger:focus{box-shadow:0 0 0 .125em rgba(255,56,96,.25)}.input.is-small,.textarea.is-small{border-radius:2px;font-size:.75rem}.input.is-medium,.textarea.is-medium{font-size:1.25rem}.input.is-large,.textarea.is-large{font-size:1.5rem}.input.is-fullwidth,.textarea.is-fullwidth{display:block;width:100%}.input.is-inline,.textarea.is-inline{display:inline;width:auto}.input.is-rounded{border-radius:290486px;padding-left:1em;padding-right:1em}.input.is-static{background-color:transparent;border-color:transparent;box-shadow:none;padding-left:0;padding-right:0}.textarea{display:block;max-width:100%;min-width:100%;padding:.625em;resize:vertical}.textarea:not([rows]){max-height:600px;min-height:120px}.textarea[rows]{height:initial}.textarea.has-fixed-size{resize:none}.checkbox,.radio{cursor:pointer;display:inline-block;line-height:1.25;position:relative}.checkbox input,.radio input{cursor:pointer}.checkbox:hover,.radio:hover{color:#363636}.checkbox[disabled],.radio[disabled]{color:#7a7a7a;cursor:not-allowed}.radio+.radio{margin-left:.5em}.select{display:inline-block;max-width:100%;position:relative;vertical-align:top}.select:not(.is-multiple){height:2.25em}.select:not(.is-multiple):not(.is-loading)::after{border-color:#3273dc;right:1.125em;z-index:4}.select.is-rounded select{border-radius:290486px;padding-left:1em}.select select{background-color:#fff;border-color:#dbdbdb;color:#363636;cursor:pointer;display:block;font-size:1em;max-width:100%;outline:0}.select select::-moz-placeholder{color:rgba(54,54,54,.3)}.select select::-webkit-input-placeholder{color:rgba(54,54,54,.3)}.select select:-moz-placeholder{color:rgba(54,54,54,.3)}.select select:-ms-input-placeholder{color:rgba(54,54,54,.3)}.select select.is-hovered,.select select:hover{border-color:#b5b5b5}.select select.is-active,.select select.is-focused,.select select:active,.select select:focus{border-color:#3273dc;box-shadow:0 0 0 .125em rgba(50,115,220,.25)}.select select[disabled]{background-color:#f5f5f5;border-color:#f5f5f5;box-shadow:none;color:#7a7a7a}.select select[disabled]::-moz-placeholder{color:rgba(122,122,122,.3)}.select select[disabled]::-webkit-input-placeholder{color:rgba(122,122,122,.3)}.select select[disabled]:-moz-placeholder{color:rgba(122,122,122,.3)}.select select[disabled]:-ms-input-placeholder{color:rgba(122,122,122,.3)}.select select::-ms-expand{display:none}.select select[disabled]:hover{border-color:#f5f5f5}.select select:not([multiple]){padding-right:2.5em}.select select[multiple]{height:initial;padding:0}.select select[multiple] option{padding:.5em 1em}.select:not(.is-multiple):not(.is-loading):hover::after{border-color:#363636}.select.is-white:not(:hover)::after{border-color:#fff}.select.is-white select{border-color:#fff}.select.is-white select.is-hovered,.select.is-white select:hover{border-color:#f2f2f2}.select.is-white select.is-active,.select.is-white select.is-focused,.select.is-white select:active,.select.is-white select:focus{box-shadow:0 0 0 .125em rgba(255,255,255,.25)}.select.is-black:not(:hover)::after{border-color:#0a0a0a}.select.is-black select{border-color:#0a0a0a}.select.is-black select.is-hovered,.select.is-black select:hover{border-color:#000}.select.is-black select.is-active,.select.is-black select.is-focused,.select.is-black select:active,.select.is-black select:focus{box-shadow:0 0 0 .125em rgba(10,10,10,.25)}.select.is-light:not(:hover)::after{border-color:#f5f5f5}.select.is-light select{border-color:#f5f5f5}.select.is-light select.is-hovered,.select.is-light select:hover{border-color:#e8e8e8}.select.is-light select.is-active,.select.is-light select.is-focused,.select.is-light select:active,.select.is-light select:focus{box-shadow:0 0 0 .125em rgba(245,245,245,.25)}.select.is-dark:not(:hover)::after{border-color:#363636}.select.is-dark select{border-color:#363636}.select.is-dark select.is-hovered,.select.is-dark select:hover{border-color:#292929}.select.is-dark select.is-active,.select.is-dark select.is-focused,.select.is-dark select:active,.select.is-dark select:focus{box-shadow:0 0 0 .125em rgba(54,54,54,.25)}.select.is-primary:not(:hover)::after{border-color:#00d1b2}.select.is-primary select{border-color:#00d1b2}.select.is-primary select.is-hovered,.select.is-primary select:hover{border-color:#00b89c}.select.is-primary select.is-active,.select.is-primary select.is-focused,.select.is-primary select:active,.select.is-primary select:focus{box-shadow:0 0 0 .125em rgba(0,209,178,.25)}.select.is-link:not(:hover)::after{border-color:#3273dc}.select.is-link select{border-color:#3273dc}.select.is-link select.is-hovered,.select.is-link select:hover{border-color:#2366d1}.select.is-link select.is-active,.select.is-link select.is-focused,.select.is-link select:active,.select.is-link select:focus{box-shadow:0 0 0 .125em rgba(50,115,220,.25)}.select.is-info:not(:hover)::after{border-color:#209cee}.select.is-info select{border-color:#209cee}.select.is-info select.is-hovered,.select.is-info select:hover{border-color:#118fe4}.select.is-info select.is-active,.select.is-info select.is-focused,.select.is-info select:active,.select.is-info select:focus{box-shadow:0 0 0 .125em rgba(32,156,238,.25)}.select.is-success:not(:hover)::after{border-color:#23d160}.select.is-success select{border-color:#23d160}.select.is-success select.is-hovered,.select.is-success select:hover{border-color:#20bc56}.select.is-success select.is-active,.select.is-success select.is-focused,.select.is-success select:active,.select.is-success select:focus{box-shadow:0 0 0 .125em rgba(35,209,96,.25)}.select.is-warning:not(:hover)::after{border-color:#ffdd57}.select.is-warning select{border-color:#ffdd57}.select.is-warning select.is-hovered,.select.is-warning select:hover{border-color:#ffd83d}.select.is-warning select.is-active,.select.is-warning select.is-focused,.select.is-warning select:active,.select.is-warning select:focus{box-shadow:0 0 0 .125em rgba(255,221,87,.25)}.select.is-danger:not(:hover)::after{border-color:#ff3860}.select.is-danger select{border-color:#ff3860}.select.is-danger select.is-hovered,.select.is-danger select:hover{border-color:#ff1f4b}.select.is-danger select.is-active,.select.is-danger select.is-focused,.select.is-danger select:active,.select.is-danger select:focus{box-shadow:0 0 0 .125em rgba(255,56,96,.25)}.select.is-small{border-radius:2px;font-size:.75rem}.select.is-medium{font-size:1.25rem}.select.is-large{font-size:1.5rem}.select.is-disabled::after{border-color:#7a7a7a}.select.is-fullwidth{width:100%}.select.is-fullwidth select{width:100%}.select.is-loading::after{margin-top:0;position:absolute;right:.625em;top:.625em;-webkit-transform:none;transform:none}.select.is-loading.is-small:after{font-size:.75rem}.select.is-loading.is-medium:after{font-size:1.25rem}.select.is-loading.is-large:after{font-size:1.5rem}.file{align-items:stretch;display:flex;justify-content:flex-start;position:relative}.file.is-white .file-cta{background-color:#fff;border-color:transparent;color:#0a0a0a}.file.is-white.is-hovered .file-cta,.file.is-white:hover .file-cta{background-color:#f9f9f9;border-color:transparent;color:#0a0a0a}.file.is-white.is-focused .file-cta,.file.is-white:focus .file-cta{border-color:transparent;box-shadow:0 0 .5em rgba(255,255,255,.25);color:#0a0a0a}.file.is-white.is-active .file-cta,.file.is-white:active .file-cta{background-color:#f2f2f2;border-color:transparent;color:#0a0a0a}.file.is-black .file-cta{background-color:#0a0a0a;border-color:transparent;color:#fff}.file.is-black.is-hovered .file-cta,.file.is-black:hover .file-cta{background-color:#040404;border-color:transparent;color:#fff}.file.is-black.is-focused .file-cta,.file.is-black:focus .file-cta{border-color:transparent;box-shadow:0 0 .5em rgba(10,10,10,.25);color:#fff}.file.is-black.is-active .file-cta,.file.is-black:active .file-cta{background-color:#000;border-color:transparent;color:#fff}.file.is-light .file-cta{background-color:#f5f5f5;border-color:transparent;color:#363636}.file.is-light.is-hovered .file-cta,.file.is-light:hover .file-cta{background-color:#eee;border-color:transparent;color:#363636}.file.is-light.is-focused .file-cta,.file.is-light:focus .file-cta{border-color:transparent;box-shadow:0 0 .5em rgba(245,245,245,.25);color:#363636}.file.is-light.is-active .file-cta,.file.is-light:active .file-cta{background-color:#e8e8e8;border-color:transparent;color:#363636}.file.is-dark .file-cta{background-color:#363636;border-color:transparent;color:#f5f5f5}.file.is-dark.is-hovered .file-cta,.file.is-dark:hover .file-cta{background-color:#2f2f2f;border-color:transparent;color:#f5f5f5}.file.is-dark.is-focused .file-cta,.file.is-dark:focus .file-cta{border-color:transparent;box-shadow:0 0 .5em rgba(54,54,54,.25);color:#f5f5f5}.file.is-dark.is-active .file-cta,.file.is-dark:active .file-cta{background-color:#292929;border-color:transparent;color:#f5f5f5}.file.is-primary .file-cta{background-color:#00d1b2;border-color:transparent;color:#fff}.file.is-primary.is-hovered .file-cta,.file.is-primary:hover .file-cta{background-color:#00c4a7;border-color:transparent;color:#fff}.file.is-primary.is-focused .file-cta,.file.is-primary:focus .file-cta{border-color:transparent;box-shadow:0 0 .5em rgba(0,209,178,.25);color:#fff}.file.is-primary.is-active .file-cta,.file.is-primary:active .file-cta{background-color:#00b89c;border-color:transparent;color:#fff}.file.is-link .file-cta{background-color:#3273dc;border-color:transparent;color:#fff}.file.is-link.is-hovered .file-cta,.file.is-link:hover .file-cta{background-color:#276cda;border-color:transparent;color:#fff}.file.is-link.is-focused .file-cta,.file.is-link:focus .file-cta{border-color:transparent;box-shadow:0 0 .5em rgba(50,115,220,.25);color:#fff}.file.is-link.is-active .file-cta,.file.is-link:active .file-cta{background-color:#2366d1;border-color:transparent;color:#fff}.file.is-info .file-cta{background-color:#209cee;border-color:transparent;color:#fff}.file.is-info.is-hovered .file-cta,.file.is-info:hover .file-cta{background-color:#1496ed;border-color:transparent;color:#fff}.file.is-info.is-focused .file-cta,.file.is-info:focus .file-cta{border-color:transparent;box-shadow:0 0 .5em rgba(32,156,238,.25);color:#fff}.file.is-info.is-active .file-cta,.file.is-info:active .file-cta{background-color:#118fe4;border-color:transparent;color:#fff}.file.is-success .file-cta{background-color:#23d160;border-color:transparent;color:#fff}.file.is-success.is-hovered .file-cta,.file.is-success:hover .file-cta{background-color:#22c65b;border-color:transparent;color:#fff}.file.is-success.is-focused .file-cta,.file.is-success:focus .file-cta{border-color:transparent;box-shadow:0 0 .5em rgba(35,209,96,.25);color:#fff}.file.is-success.is-active .file-cta,.file.is-success:active .file-cta{background-color:#20bc56;border-color:transparent;color:#fff}.file.is-warning .file-cta{background-color:#ffdd57;border-color:transparent;color:rgba(0,0,0,.7)}.file.is-warning.is-hovered .file-cta,.file.is-warning:hover .file-cta{background-color:#ffdb4a;border-color:transparent;color:rgba(0,0,0,.7)}.file.is-warning.is-focused .file-cta,.file.is-warning:focus .file-cta{border-color:transparent;box-shadow:0 0 .5em rgba(255,221,87,.25);color:rgba(0,0,0,.7)}.file.is-warning.is-active .file-cta,.file.is-warning:active .file-cta{background-color:#ffd83d;border-color:transparent;color:rgba(0,0,0,.7)}.file.is-danger .file-cta{background-color:#ff3860;border-color:transparent;color:#fff}.file.is-danger.is-hovered .file-cta,.file.is-danger:hover .file-cta{background-color:#ff2b56;border-color:transparent;color:#fff}.file.is-danger.is-focused .file-cta,.file.is-danger:focus .file-cta{border-color:transparent;box-shadow:0 0 .5em rgba(255,56,96,.25);color:#fff}.file.is-danger.is-active .file-cta,.file.is-danger:active .file-cta{background-color:#ff1f4b;border-color:transparent;color:#fff}.file.is-small{font-size:.75rem}.file.is-medium{font-size:1.25rem}.file.is-medium .file-icon .fa{font-size:21px}.file.is-large{font-size:1.5rem}.file.is-large .file-icon .fa{font-size:28px}.file.has-name .file-cta{border-bottom-right-radius:0;border-top-right-radius:0}.file.has-name .file-name{border-bottom-left-radius:0;border-top-left-radius:0}.file.has-name.is-empty .file-cta{border-radius:4px}.file.has-name.is-empty .file-name{display:none}.file.is-boxed .file-label{flex-direction:column}.file.is-boxed .file-cta{flex-direction:column;height:auto;padding:1em 3em}.file.is-boxed .file-name{border-width:0 1px 1px}.file.is-boxed .file-icon{height:1.5em;width:1.5em}.file.is-boxed .file-icon .fa{font-size:21px}.file.is-boxed.is-small .file-icon .fa{font-size:14px}.file.is-boxed.is-medium .file-icon .fa{font-size:28px}.file.is-boxed.is-large .file-icon .fa{font-size:35px}.file.is-boxed.has-name .file-cta{border-radius:4px 4px 0 0}.file.is-boxed.has-name .file-name{border-radius:0 0 4px 4px;border-width:0 1px 1px}.file.is-centered{justify-content:center}.file.is-fullwidth .file-label{width:100%}.file.is-fullwidth .file-name{flex-grow:1;max-width:none}.file.is-right{justify-content:flex-end}.file.is-right .file-cta{border-radius:0 4px 4px 0}.file.is-right .file-name{border-radius:4px 0 0 4px;border-width:1px 0 1px 1px;order:-1}.file-label{align-items:stretch;display:flex;cursor:pointer;justify-content:flex-start;overflow:hidden;position:relative}.file-label:hover .file-cta{background-color:#eee;color:#363636}.file-label:hover .file-name{border-color:#d5d5d5}.file-label:active .file-cta{background-color:#e8e8e8;color:#363636}.file-label:active .file-name{border-color:#cfcfcf}.file-input{height:.01em;left:0;outline:0;position:absolute;top:0;width:.01em}.file-cta,.file-name{border-color:#dbdbdb;border-radius:4px;font-size:1em;padding-left:1em;padding-right:1em;white-space:nowrap}.file-cta{background-color:#f5f5f5;color:#4a4a4a}.file-name{border-color:#dbdbdb;border-style:solid;border-width:1px 1px 1px 0;display:block;max-width:16em;overflow:hidden;text-align:left;text-overflow:ellipsis}.file-icon{align-items:center;display:flex;height:1em;justify-content:center;margin-right:.5em;width:1em}.file-icon .fa{font-size:14px}.label{color:#363636;display:block;font-size:1rem;font-weight:700}.label:not(:last-child){margin-bottom:.5em}.label.is-small{font-size:.75rem}.label.is-medium{font-size:1.25rem}.label.is-large{font-size:1.5rem}.help{display:block;font-size:.75rem;margin-top:.25rem}.help.is-white{color:#fff}.help.is-black{color:#0a0a0a}.help.is-light{color:#f5f5f5}.help.is-dark{color:#363636}.help.is-primary{color:#00d1b2}.help.is-link{color:#3273dc}.help.is-info{color:#209cee}.help.is-success{color:#23d160}.help.is-warning{color:#ffdd57}.help.is-danger{color:#ff3860}.field:not(:last-child){margin-bottom:.75rem}.field.has-addons{display:flex;justify-content:flex-start}.field.has-addons .control:not(:last-child){margin-right:-1px}.field.has-addons .control:not(:first-child):not(:last-child) .button,.field.has-addons .control:not(:first-child):not(:last-child) .input,.field.has-addons .control:not(:first-child):not(:last-child) .select select{border-radius:0}.field.has-addons .control:first-child .button,.field.has-addons .control:first-child .input,.field.has-addons .control:first-child .select select{border-bottom-right-radius:0;border-top-right-radius:0}.field.has-addons .control:last-child .button,.field.has-addons .control:last-child .input,.field.has-addons .control:last-child .select select{border-bottom-left-radius:0;border-top-left-radius:0}.field.has-addons .control .button.is-hovered,.field.has-addons .control .button:hover,.field.has-addons .control .input.is-hovered,.field.has-addons .control .input:hover,.field.has-addons .control .select select.is-hovered,.field.has-addons .control .select select:hover{z-index:2}.field.has-addons .control .button.is-active,.field.has-addons .control .button.is-focused,.field.has-addons .control .button:active,.field.has-addons .control .button:focus,.field.has-addons .control .input.is-active,.field.has-addons .control .input.is-focused,.field.has-addons .control .input:active,.field.has-addons .control .input:focus,.field.has-addons .control .select select.is-active,.field.has-addons .control .select select.is-focused,.field.has-addons .control .select select:active,.field.has-addons .control .select select:focus{z-index:3}.field.has-addons .control .button.is-active:hover,.field.has-addons .control .button.is-focused:hover,.field.has-addons .control .button:active:hover,.field.has-addons .control .button:focus:hover,.field.has-addons .control .input.is-active:hover,.field.has-addons .control .input.is-focused:hover,.field.has-addons .control .input:active:hover,.field.has-addons .control .input:focus:hover,.field.has-addons .control .select select.is-active:hover,.field.has-addons .control .select select.is-focused:hover,.field.has-addons .control .select select:active:hover,.field.has-addons .control .select select:focus:hover{z-index:4}.field.has-addons .control.is-expanded{flex-grow:1}.field.has-addons.has-addons-centered{justify-content:center}.field.has-addons.has-addons-right{justify-content:flex-end}.field.has-addons.has-addons-fullwidth .control{flex-grow:1;flex-shrink:0}.field.is-grouped{display:flex;justify-content:flex-start}.field.is-grouped>.control{flex-shrink:0}.field.is-grouped>.control:not(:last-child){margin-bottom:0;margin-right:.75rem}.field.is-grouped>.control.is-expanded{flex-grow:1;flex-shrink:1}.field.is-grouped.is-grouped-centered{justify-content:center}.field.is-grouped.is-grouped-right{justify-content:flex-end}.field.is-grouped.is-grouped-multiline{flex-wrap:wrap}.field.is-grouped.is-grouped-multiline>.control:last-child,.field.is-grouped.is-grouped-multiline>.control:not(:last-child){margin-bottom:.75rem}.field.is-grouped.is-grouped-multiline:last-child{margin-bottom:-.75rem}.field.is-grouped.is-grouped-multiline:not(:last-child){margin-bottom:0}@media screen and (min-width:769px),print{.field.is-horizontal{display:flex}}.field-label .label{font-size:inherit}@media screen and (max-width:768px){.field-label{margin-bottom:.5rem}}@media screen and (min-width:769px),print{.field-label{flex-basis:0;flex-grow:1;flex-shrink:0;margin-right:1.5rem;text-align:right}.field-label.is-small{font-size:.75rem;padding-top:.375em}.field-label.is-normal{padding-top:.375em}.field-label.is-medium{font-size:1.25rem;padding-top:.375em}.field-label.is-large{font-size:1.5rem;padding-top:.375em}}.field-body .field .field{margin-bottom:0}@media screen and (min-width:769px),print{.field-body{display:flex;flex-basis:0;flex-grow:5;flex-shrink:1}.field-body .field{margin-bottom:0}.field-body>.field{flex-shrink:1}.field-body>.field:not(.is-narrow){flex-grow:1}.field-body>.field:not(:last-child){margin-right:.75rem}}.control{font-size:1rem;position:relative;text-align:left}.control.has-icon .icon{color:#dbdbdb;height:2.25em;pointer-events:none;position:absolute;top:0;width:2.25em;z-index:4}.control.has-icon .input:focus+.icon{color:#7a7a7a}.control.has-icon .input.is-small+.icon{font-size:.75rem}.control.has-icon .input.is-medium+.icon{font-size:1.25rem}.control.has-icon .input.is-large+.icon{font-size:1.5rem}.control.has-icon:not(.has-icon-right) .icon{left:0}.control.has-icon:not(.has-icon-right) .input{padding-left:2.25em}.control.has-icon.has-icon-right .icon{right:0}.control.has-icon.has-icon-right .input{padding-right:2.25em}.control.has-icons-left .input:focus~.icon,.control.has-icons-left .select:focus~.icon,.control.has-icons-right .input:focus~.icon,.control.has-icons-right .select:focus~.icon{color:#7a7a7a}.control.has-icons-left .input.is-small~.icon,.control.has-icons-left .select.is-small~.icon,.control.has-icons-right .input.is-small~.icon,.control.has-icons-right .select.is-small~.icon{font-size:.75rem}.control.has-icons-left .input.is-medium~.icon,.control.has-icons-left .select.is-medium~.icon,.control.has-icons-right .input.is-medium~.icon,.control.has-icons-right .select.is-medium~.icon{font-size:1.25rem}.control.has-icons-left .input.is-large~.icon,.control.has-icons-left .select.is-large~.icon,.control.has-icons-right .input.is-large~.icon,.control.has-icons-right .select.is-large~.icon{font-size:1.5rem}.control.has-icons-left .icon,.control.has-icons-right .icon{color:#dbdbdb;height:2.25em;pointer-events:none;position:absolute;top:0;width:2.25em;z-index:4}.control.has-icons-left .input,.control.has-icons-left .select select{padding-left:2.25em}.control.has-icons-left .icon.is-left{left:0}.control.has-icons-right .input,.control.has-icons-right .select select{padding-right:2.25em}.control.has-icons-right .icon.is-right{right:0}.control.is-loading::after{position:absolute!important;right:.625em;top:.625em;z-index:4}.control.is-loading.is-small:after{font-size:.75rem}.control.is-loading.is-medium:after{font-size:1.25rem}.control.is-loading.is-large:after{font-size:1.5rem}.icon{align-items:center;display:inline-flex;justify-content:center;height:1.5rem;width:1.5rem}.icon.is-small{height:1rem;width:1rem}.icon.is-medium{height:2rem;width:2rem}.icon.is-large{height:3rem;width:3rem}.image{display:block;position:relative}.image img{display:block;height:auto;width:100%}.image img.is-rounded{border-radius:290486px}.image.is-16by9 img,.image.is-1by1 img,.image.is-1by2 img,.image.is-1by3 img,.image.is-2by1 img,.image.is-2by3 img,.image.is-3by1 img,.image.is-3by2 img,.image.is-3by4 img,.image.is-3by5 img,.image.is-4by3 img,.image.is-4by5 img,.image.is-5by3 img,.image.is-5by4 img,.image.is-9by16 img,.image.is-square img{height:100%;width:100%}.image.is-1by1,.image.is-square{padding-top:100%}.image.is-5by4{padding-top:80%}.image.is-4by3{padding-top:75%}.image.is-3by2{padding-top:66.6666%}.image.is-5by3{padding-top:60%}.image.is-16by9{padding-top:56.25%}.image.is-2by1{padding-top:50%}.image.is-3by1{padding-top:33.3333%}.image.is-4by5{padding-top:125%}.image.is-3by4{padding-top:133.3333%}.image.is-2by3{padding-top:150%}.image.is-3by5{padding-top:166.6666%}.image.is-9by16{padding-top:177.7777%}.image.is-1by2{padding-top:200%}.image.is-1by3{padding-top:300%}.image.is-16x16{height:16px;width:16px}.image.is-24x24{height:24px;width:24px}.image.is-32x32{height:32px;width:32px}.image.is-48x48{height:48px;width:48px}.image.is-64x64{height:64px;width:64px}.image.is-96x96{height:96px;width:96px}.image.is-128x128{height:128px;width:128px}.notification{background-color:#f5f5f5;border-radius:4px;padding:1.25rem 2.5rem 1.25rem 1.5rem;position:relative}.notification a:not(.button){color:currentColor;text-decoration:underline}.notification strong{color:currentColor}.notification code,.notification pre{background:#fff}.notification pre code{background:0 0}.notification>.delete{position:absolute;right:.5rem;top:.5rem}.notification .content,.notification .subtitle,.notification .title{color:currentColor}.notification.is-white{background-color:#fff;color:#0a0a0a}.notification.is-black{background-color:#0a0a0a;color:#fff}.notification.is-light{background-color:#f5f5f5;color:#363636}.notification.is-dark{background-color:#363636;color:#f5f5f5}.notification.is-primary{background-color:#00d1b2;color:#fff}.notification.is-link{background-color:#3273dc;color:#fff}.notification.is-info{background-color:#209cee;color:#fff}.notification.is-success{background-color:#23d160;color:#fff}.notification.is-warning{background-color:#ffdd57;color:rgba(0,0,0,.7)}.notification.is-danger{background-color:#ff3860;color:#fff}.progress{-moz-appearance:none;-webkit-appearance:none;border:none;border-radius:290486px;display:block;height:1rem;overflow:hidden;padding:0;width:100%}.progress::-webkit-progress-bar{background-color:#dbdbdb}.progress::-webkit-progress-value{background-color:#4a4a4a}.progress::-moz-progress-bar{background-color:#4a4a4a}.progress::-ms-fill{background-color:#4a4a4a;border:none}.progress.is-white::-webkit-progress-value{background-color:#fff}.progress.is-white::-moz-progress-bar{background-color:#fff}.progress.is-white::-ms-fill{background-color:#fff}.progress.is-black::-webkit-progress-value{background-color:#0a0a0a}.progress.is-black::-moz-progress-bar{background-color:#0a0a0a}.progress.is-black::-ms-fill{background-color:#0a0a0a}.progress.is-light::-webkit-progress-value{background-color:#f5f5f5}.progress.is-light::-moz-progress-bar{background-color:#f5f5f5}.progress.is-light::-ms-fill{background-color:#f5f5f5}.progress.is-dark::-webkit-progress-value{background-color:#363636}.progress.is-dark::-moz-progress-bar{background-color:#363636}.progress.is-dark::-ms-fill{background-color:#363636}.progress.is-primary::-webkit-progress-value{background-color:#00d1b2}.progress.is-primary::-moz-progress-bar{background-color:#00d1b2}.progress.is-primary::-ms-fill{background-color:#00d1b2}.progress.is-link::-webkit-progress-value{background-color:#3273dc}.progress.is-link::-moz-progress-bar{background-color:#3273dc}.progress.is-link::-ms-fill{background-color:#3273dc}.progress.is-info::-webkit-progress-value{background-color:#209cee}.progress.is-info::-moz-progress-bar{background-color:#209cee}.progress.is-info::-ms-fill{background-color:#209cee}.progress.is-success::-webkit-progress-value{background-color:#23d160}.progress.is-success::-moz-progress-bar{background-color:#23d160}.progress.is-success::-ms-fill{background-color:#23d160}.progress.is-warning::-webkit-progress-value{background-color:#ffdd57}.progress.is-warning::-moz-progress-bar{background-color:#ffdd57}.progress.is-warning::-ms-fill{background-color:#ffdd57}.progress.is-danger::-webkit-progress-value{background-color:#ff3860}.progress.is-danger::-moz-progress-bar{background-color:#ff3860}.progress.is-danger::-ms-fill{background-color:#ff3860}.progress.is-small{height:.75rem}.progress.is-medium{height:1.25rem}.progress.is-large{height:1.5rem}.table{background-color:#fff;color:#363636}.table td,.table th{border:1px solid #dbdbdb;border-width:0 0 1px;padding:.5em .75em;vertical-align:top}.table td.is-white,.table th.is-white{background-color:#fff;border-color:#fff;color:#0a0a0a}.table td.is-black,.table th.is-black{background-color:#0a0a0a;border-color:#0a0a0a;color:#fff}.table td.is-light,.table th.is-light{background-color:#f5f5f5;border-color:#f5f5f5;color:#363636}.table td.is-dark,.table th.is-dark{background-color:#363636;border-color:#363636;color:#f5f5f5}.table td.is-primary,.table th.is-primary{background-color:#00d1b2;border-color:#00d1b2;color:#fff}.table td.is-link,.table th.is-link{background-color:#3273dc;border-color:#3273dc;color:#fff}.table td.is-info,.table th.is-info{background-color:#209cee;border-color:#209cee;color:#fff}.table td.is-success,.table th.is-success{background-color:#23d160;border-color:#23d160;color:#fff}.table td.is-warning,.table th.is-warning{background-color:#ffdd57;border-color:#ffdd57;color:rgba(0,0,0,.7)}.table td.is-danger,.table th.is-danger{background-color:#ff3860;border-color:#ff3860;color:#fff}.table td.is-narrow,.table th.is-narrow{white-space:nowrap;width:1%}.table td.is-selected,.table th.is-selected{background-color:#00d1b2;color:#fff}.table td.is-selected a,.table td.is-selected strong,.table th.is-selected a,.table th.is-selected strong{color:currentColor}.table th{color:#363636;text-align:left}.table tr.is-selected{background-color:#00d1b2;color:#fff}.table tr.is-selected a,.table tr.is-selected strong{color:currentColor}.table tr.is-selected td,.table tr.is-selected th{border-color:#fff;color:currentColor}.table thead td,.table thead th{border-width:0 0 2px;color:#363636}.table tfoot td,.table tfoot th{border-width:2px 0 0;color:#363636}.table tbody tr:last-child td,.table tbody tr:last-child th{border-bottom-width:0}.table.is-bordered td,.table.is-bordered th{border-width:1px}.table.is-bordered tr:last-child td,.table.is-bordered tr:last-child th{border-bottom-width:1px}.table.is-fullwidth{width:100%}.table.is-hoverable tbody tr:not(.is-selected):hover{background-color:#fafafa}.table.is-hoverable.is-striped tbody tr:not(.is-selected):hover{background-color:#f5f5f5}.table.is-narrow td,.table.is-narrow th{padding:.25em .5em}.table.is-striped tbody tr:not(.is-selected):nth-child(even){background-color:#fafafa}.table-container{-webkit-overflow-scrolling:touch;overflow:auto;overflow-y:hidden;max-width:100%}.tags{align-items:center;display:flex;flex-wrap:wrap;justify-content:flex-start}.tags .tag{margin-bottom:.5rem}.tags .tag:not(:last-child){margin-right:.5rem}.tags:last-child{margin-bottom:-.5rem}.tags:not(:last-child){margin-bottom:1rem}.tags.has-addons .tag{margin-right:0}.tags.has-addons .tag:not(:first-child){border-bottom-left-radius:0;border-top-left-radius:0}.tags.has-addons .tag:not(:last-child){border-bottom-right-radius:0;border-top-right-radius:0}.tags.is-centered{justify-content:center}.tags.is-centered .tag{margin-right:.25rem;margin-left:.25rem}.tags.is-right{justify-content:flex-end}.tags.is-right .tag:not(:first-child){margin-left:.5rem}.tags.is-right .tag:not(:last-child){margin-right:0}.tag:not(body){align-items:center;background-color:#f5f5f5;border-radius:4px;color:#4a4a4a;display:inline-flex;font-size:.75rem;height:2em;justify-content:center;line-height:1.5;padding-left:.75em;padding-right:.75em;white-space:nowrap}.tag:not(body) .delete{margin-left:.25rem;margin-right:-.375rem}.tag:not(body).is-white{background-color:#fff;color:#0a0a0a}.tag:not(body).is-black{background-color:#0a0a0a;color:#fff}.tag:not(body).is-light{background-color:#f5f5f5;color:#363636}.tag:not(body).is-dark{background-color:#363636;color:#f5f5f5}.tag:not(body).is-primary{background-color:#00d1b2;color:#fff}.tag:not(body).is-link{background-color:#3273dc;color:#fff}.tag:not(body).is-info{background-color:#209cee;color:#fff}.tag:not(body).is-success{background-color:#23d160;color:#fff}.tag:not(body).is-warning{background-color:#ffdd57;color:rgba(0,0,0,.7)}.tag:not(body).is-danger{background-color:#ff3860;color:#fff}.tag:not(body).is-medium{font-size:1rem}.tag:not(body).is-large{font-size:1.25rem}.tag:not(body) .icon:first-child:not(:last-child){margin-left:-.375em;margin-right:.1875em}.tag:not(body) .icon:last-child:not(:first-child){margin-left:.1875em;margin-right:-.375em}.tag:not(body) .icon:first-child:last-child{margin-left:-.375em;margin-right:-.375em}.tag:not(body).is-delete{margin-left:1px;padding:0;position:relative;width:2em}.tag:not(body).is-delete::after,.tag:not(body).is-delete::before{background-color:currentColor;content:"";display:block;left:50%;position:absolute;top:50%;-webkit-transform:translateX(-50%) translateY(-50%) rotate(45deg);transform:translateX(-50%) translateY(-50%) rotate(45deg);-webkit-transform-origin:center center;transform-origin:center center}.tag:not(body).is-delete::before{height:1px;width:50%}.tag:not(body).is-delete::after{height:50%;width:1px}.tag:not(body).is-delete:focus,.tag:not(body).is-delete:hover{background-color:#e8e8e8}.tag:not(body).is-delete:active{background-color:#dbdbdb}.tag:not(body).is-rounded{border-radius:290486px}a.tag:hover{text-decoration:underline}.subtitle,.title{word-break:break-word}.subtitle em,.subtitle span,.title em,.title span{font-weight:inherit}.subtitle sub,.title sub{font-size:.75em}.subtitle sup,.title sup{font-size:.75em}.subtitle .tag,.title .tag{vertical-align:middle}.title{color:#363636;font-size:2rem;font-weight:600;line-height:1.125}.title strong{color:inherit;font-weight:inherit}.title+.highlight{margin-top:-.75rem}.title:not(.is-spaced)+.subtitle{margin-top:-1.25rem}.title.is-1{font-size:3rem}.title.is-2{font-size:2.5rem}.title.is-3{font-size:2rem}.title.is-4{font-size:1.5rem}.title.is-5{font-size:1.25rem}.title.is-6{font-size:1rem}.title.is-7{font-size:.75rem}.subtitle{color:#4a4a4a;font-size:1.25rem;font-weight:400;line-height:1.25}.subtitle strong{color:#363636;font-weight:600}.subtitle:not(.is-spaced)+.title{margin-top:-1.25rem}.subtitle.is-1{font-size:3rem}.subtitle.is-2{font-size:2.5rem}.subtitle.is-3{font-size:2rem}.subtitle.is-4{font-size:1.5rem}.subtitle.is-5{font-size:1.25rem}.subtitle.is-6{font-size:1rem}.subtitle.is-7{font-size:.75rem}.heading{display:block;font-size:11px;letter-spacing:1px;margin-bottom:5px;text-transform:uppercase}.highlight{font-weight:400;max-width:100%;overflow:hidden;padding:0}.highlight pre{overflow:auto;max-width:100%}.number{align-items:center;background-color:#f5f5f5;border-radius:290486px;display:inline-flex;font-size:1.25rem;height:2em;justify-content:center;margin-right:1.5rem;min-width:2.5em;padding:.25rem .5rem;text-align:center;vertical-align:top}.breadcrumb{font-size:1rem;white-space:nowrap}.breadcrumb a{align-items:center;color:#3273dc;display:flex;justify-content:center;padding:0 .75em}.breadcrumb a:hover{color:#363636}.breadcrumb li{align-items:center;display:flex}.breadcrumb li:first-child a{padding-left:0}.breadcrumb li.is-active a{color:#363636;cursor:default;pointer-events:none}.breadcrumb li+li::before{color:#b5b5b5;content:"\0002f"}.breadcrumb ol,.breadcrumb ul{align-items:flex-start;display:flex;flex-wrap:wrap;justify-content:flex-start}.breadcrumb .icon:first-child{margin-right:.5em}.breadcrumb .icon:last-child{margin-left:.5em}.breadcrumb.is-centered ol,.breadcrumb.is-centered ul{justify-content:center}.breadcrumb.is-right ol,.breadcrumb.is-right ul{justify-content:flex-end}.breadcrumb.is-small{font-size:.75rem}.breadcrumb.is-medium{font-size:1.25rem}.breadcrumb.is-large{font-size:1.5rem}.breadcrumb.has-arrow-separator li+li::before{content:"\02192"}.breadcrumb.has-bullet-separator li+li::before{content:"\02022"}.breadcrumb.has-dot-separator li+li::before{content:"\000b7"}.breadcrumb.has-succeeds-separator li+li::before{content:"\0227B"}.card{background-color:#fff;box-shadow:0 2px 3px rgba(10,10,10,.1),0 0 0 1px rgba(10,10,10,.1);color:#4a4a4a;max-width:100%;position:relative}.card-header{background-color:none;align-items:stretch;box-shadow:0 1px 2px rgba(10,10,10,.1);display:flex}.card-header-title{align-items:center;color:#363636;display:flex;flex-grow:1;font-weight:700;padding:.75rem}.card-header-title.is-centered{justify-content:center}.card-header-icon{align-items:center;cursor:pointer;display:flex;justify-content:center;padding:.75rem}.card-image{display:block;position:relative}.card-content{background-color:none;padding:1.5rem}.card-footer{background-color:none;border-top:1px solid #dbdbdb;align-items:stretch;display:flex}.card-footer-item{align-items:center;display:flex;flex-basis:0;flex-grow:1;flex-shrink:0;justify-content:center;padding:.75rem}.card-footer-item:not(:last-child){border-right:1px solid #dbdbdb}.card .media:not(:last-child){margin-bottom:.75rem}.dropdown{display:inline-flex;position:relative;vertical-align:top}.dropdown.is-active .dropdown-menu,.dropdown.is-hoverable:hover .dropdown-menu{display:block}.dropdown.is-right .dropdown-menu{left:auto;right:0}.dropdown.is-up .dropdown-menu{bottom:100%;padding-bottom:4px;padding-top:initial;top:auto}.dropdown-menu{display:none;left:0;min-width:12rem;padding-top:4px;position:absolute;top:100%;z-index:20}.dropdown-content{background-color:#fff;border-radius:4px;box-shadow:0 2px 3px rgba(10,10,10,.1),0 0 0 1px rgba(10,10,10,.1);padding-bottom:.5rem;padding-top:.5rem}.dropdown-item{color:#4a4a4a;display:block;font-size:.875rem;line-height:1.5;padding:.375rem 1rem;position:relative}a.dropdown-item{padding-right:3rem;white-space:nowrap}a.dropdown-item:hover{background-color:#f5f5f5;color:#0a0a0a}a.dropdown-item.is-active{background-color:#3273dc;color:#fff}.dropdown-divider{background-color:#dbdbdb;border:none;display:block;height:1px;margin:.5rem 0}.level{align-items:center;justify-content:space-between}.level code{border-radius:4px}.level img{display:inline-block;vertical-align:top}.level.is-mobile{display:flex}.level.is-mobile .level-left,.level.is-mobile .level-right{display:flex}.level.is-mobile .level-left+.level-right{margin-top:0}.level.is-mobile .level-item{margin-right:.75rem}.level.is-mobile .level-item:not(:last-child){margin-bottom:0}.level.is-mobile .level-item:not(.is-narrow){flex-grow:1}@media screen and (min-width:769px),print{.level{display:flex}.level>.level-item:not(.is-narrow){flex-grow:1}}.level-item{align-items:center;display:flex;flex-basis:auto;flex-grow:0;flex-shrink:0;justify-content:center}.level-item .subtitle,.level-item .title{margin-bottom:0}@media screen and (max-width:768px){.level-item:not(:last-child){margin-bottom:.75rem}}.level-left,.level-right{flex-basis:auto;flex-grow:0;flex-shrink:0}.level-left .level-item.is-flexible,.level-right .level-item.is-flexible{flex-grow:1}@media screen and (min-width:769px),print{.level-left .level-item:not(:last-child),.level-right .level-item:not(:last-child){margin-right:.75rem}}.level-left{align-items:center;justify-content:flex-start}@media screen and (max-width:768px){.level-left+.level-right{margin-top:1.5rem}}@media screen and (min-width:769px),print{.level-left{display:flex}}.level-right{align-items:center;justify-content:flex-end}@media screen and (min-width:769px),print{.level-right{display:flex}}.media{align-items:flex-start;display:flex;text-align:left}.media .content:not(:last-child){margin-bottom:.75rem}.media .media{border-top:1px solid rgba(219,219,219,.5);display:flex;padding-top:.75rem}.media .media .content:not(:last-child),.media .media .control:not(:last-child){margin-bottom:.5rem}.media .media .media{padding-top:.5rem}.media .media .media+.media{margin-top:.5rem}.media+.media{border-top:1px solid rgba(219,219,219,.5);margin-top:1rem;padding-top:1rem}.media.is-large+.media{margin-top:1.5rem;padding-top:1.5rem}.media-left,.media-right{flex-basis:auto;flex-grow:0;flex-shrink:0}.media-left{margin-right:1rem}.media-right{margin-left:1rem}.media-content{flex-basis:auto;flex-grow:1;flex-shrink:1;text-align:left}.menu{font-size:1rem}.menu.is-small{font-size:.75rem}.menu.is-medium{font-size:1.25rem}.menu.is-large{font-size:1.5rem}.menu-list{line-height:1.25}.menu-list a{border-radius:2px;color:#4a4a4a;display:block;padding:.5em .75em}.menu-list a:hover{background-color:#f5f5f5;color:#363636}.menu-list a.is-active{background-color:#3273dc;color:#fff}.menu-list li ul{border-left:1px solid #dbdbdb;margin:.75em;padding-left:.75em}.menu-label{color:#7a7a7a;font-size:.75em;letter-spacing:.1em;text-transform:uppercase}.menu-label:not(:first-child){margin-top:1em}.menu-label:not(:last-child){margin-bottom:1em}.message{background-color:#f5f5f5;border-radius:4px;font-size:1rem}.message strong{color:currentColor}.message a:not(.button):not(.tag){color:currentColor;text-decoration:underline}.message.is-small{font-size:.75rem}.message.is-medium{font-size:1.25rem}.message.is-large{font-size:1.5rem}.message.is-white{background-color:#fff}.message.is-white .message-header{background-color:#fff;color:#0a0a0a}.message.is-white .message-body{border-color:#fff;color:#4d4d4d}.message.is-black{background-color:#fafafa}.message.is-black .message-header{background-color:#0a0a0a;color:#fff}.message.is-black .message-body{border-color:#0a0a0a;color:#090909}.message.is-light{background-color:#fafafa}.message.is-light .message-header{background-color:#f5f5f5;color:#363636}.message.is-light .message-body{border-color:#f5f5f5;color:#505050}.message.is-dark{background-color:#fafafa}.message.is-dark .message-header{background-color:#363636;color:#f5f5f5}.message.is-dark .message-body{border-color:#363636;color:#2a2a2a}.message.is-primary{background-color:#f5fffd}.message.is-primary .message-header{background-color:#00d1b2;color:#fff}.message.is-primary .message-body{border-color:#00d1b2;color:#021310}.message.is-link{background-color:#f6f9fe}.message.is-link .message-header{background-color:#3273dc;color:#fff}.message.is-link .message-body{border-color:#3273dc;color:#22509a}.message.is-info{background-color:#f6fbfe}.message.is-info .message-header{background-color:#209cee;color:#fff}.message.is-info .message-body{border-color:#209cee;color:#12537e}.message.is-success{background-color:#f6fef9}.message.is-success .message-header{background-color:#23d160;color:#fff}.message.is-success .message-body{border-color:#23d160;color:#0e301a}.message.is-warning{background-color:#fffdf5}.message.is-warning .message-header{background-color:#ffdd57;color:rgba(0,0,0,.7)}.message.is-warning .message-body{border-color:#ffdd57;color:#3b3108}.message.is-danger{background-color:#fff5f7}.message.is-danger .message-header{background-color:#ff3860;color:#fff}.message.is-danger .message-body{border-color:#ff3860;color:#cd0930}.message-header{align-items:center;background-color:#4a4a4a;border-radius:4px 4px 0 0;color:#fff;display:flex;font-weight:700;justify-content:space-between;line-height:1.25;padding:.75em 1em;position:relative}.message-header .delete{flex-grow:0;flex-shrink:0;margin-left:.75em}.message-header+.message-body{border-width:0;border-top-left-radius:0;border-top-right-radius:0}.message-body{border-color:#dbdbdb;border-radius:4px;border-style:solid;border-width:0 0 0 4px;color:#4a4a4a;padding:1.25em 1.5em}.message-body code,.message-body pre{background-color:#fff}.message-body pre code{background-color:transparent}.modal{align-items:center;display:none;justify-content:center;overflow:hidden;position:fixed;z-index:40}.modal.is-active{display:flex}.modal-background{background-color:rgba(10,10,10,.86)}.modal-card,.modal-content{margin:0 20px;max-height:calc(100vh - 160px);overflow:auto;position:relative;width:100%}@media screen and (min-width:769px),print{.modal-card,.modal-content{margin:0 auto;max-height:calc(100vh - 40px);width:640px}}.modal-close{background:0 0;height:40px;position:fixed;right:20px;top:20px;width:40px}.modal-card{display:flex;flex-direction:column;max-height:calc(100vh - 40px);overflow:hidden}.modal-card-foot,.modal-card-head{align-items:center;background-color:#f5f5f5;display:flex;flex-shrink:0;justify-content:flex-start;padding:20px;position:relative}.modal-card-head{border-bottom:1px solid #dbdbdb;border-top-left-radius:6px;border-top-right-radius:6px}.modal-card-title{color:#363636;flex-grow:1;flex-shrink:0;font-size:1.5rem;line-height:1}.modal-card-foot{border-bottom-left-radius:6px;border-bottom-right-radius:6px;border-top:1px solid #dbdbdb}.modal-card-foot .button:not(:last-child){margin-right:10px}.modal-card-body{-webkit-overflow-scrolling:touch;background-color:#fff;flex-grow:1;flex-shrink:1;overflow:auto;padding:20px}.navbar{background-color:#fff;min-height:3.25rem;position:relative;z-index:30}.navbar.is-white{background-color:#fff;color:#0a0a0a}.navbar.is-white .navbar-brand .navbar-link,.navbar.is-white .navbar-brand>.navbar-item{color:#0a0a0a}.navbar.is-white .navbar-brand .navbar-link.is-active,.navbar.is-white .navbar-brand .navbar-link:hover,.navbar.is-white .navbar-brand>a.navbar-item.is-active,.navbar.is-white .navbar-brand>a.navbar-item:hover{background-color:#f2f2f2;color:#0a0a0a}.navbar.is-white .navbar-brand .navbar-link::after{border-color:#0a0a0a}@media screen and (min-width:1088px){.navbar.is-white .navbar-end .navbar-link,.navbar.is-white .navbar-end>.navbar-item,.navbar.is-white .navbar-start .navbar-link,.navbar.is-white .navbar-start>.navbar-item{color:#0a0a0a}.navbar.is-white .navbar-end .navbar-link.is-active,.navbar.is-white .navbar-end .navbar-link:hover,.navbar.is-white .navbar-end>a.navbar-item.is-active,.navbar.is-white .navbar-end>a.navbar-item:hover,.navbar.is-white .navbar-start .navbar-link.is-active,.navbar.is-white .navbar-start .navbar-link:hover,.navbar.is-white .navbar-start>a.navbar-item.is-active,.navbar.is-white .navbar-start>a.navbar-item:hover{background-color:#f2f2f2;color:#0a0a0a}.navbar.is-white .navbar-end .navbar-link::after,.navbar.is-white .navbar-start .navbar-link::after{border-color:#0a0a0a}.navbar.is-white .navbar-item.has-dropdown.is-active .navbar-link,.navbar.is-white .navbar-item.has-dropdown:hover .navbar-link{background-color:#f2f2f2;color:#0a0a0a}.navbar.is-white .navbar-dropdown a.navbar-item.is-active{background-color:#fff;color:#0a0a0a}}.navbar.is-black{background-color:#0a0a0a;color:#fff}.navbar.is-black .navbar-brand .navbar-link,.navbar.is-black .navbar-brand>.navbar-item{color:#fff}.navbar.is-black .navbar-brand .navbar-link.is-active,.navbar.is-black .navbar-brand .navbar-link:hover,.navbar.is-black .navbar-brand>a.navbar-item.is-active,.navbar.is-black .navbar-brand>a.navbar-item:hover{background-color:#000;color:#fff}.navbar.is-black .navbar-brand .navbar-link::after{border-color:#fff}@media screen and (min-width:1088px){.navbar.is-black .navbar-end .navbar-link,.navbar.is-black .navbar-end>.navbar-item,.navbar.is-black .navbar-start .navbar-link,.navbar.is-black .navbar-start>.navbar-item{color:#fff}.navbar.is-black .navbar-end .navbar-link.is-active,.navbar.is-black .navbar-end .navbar-link:hover,.navbar.is-black .navbar-end>a.navbar-item.is-active,.navbar.is-black .navbar-end>a.navbar-item:hover,.navbar.is-black .navbar-start .navbar-link.is-active,.navbar.is-black .navbar-start .navbar-link:hover,.navbar.is-black .navbar-start>a.navbar-item.is-active,.navbar.is-black .navbar-start>a.navbar-item:hover{background-color:#000;color:#fff}.navbar.is-black .navbar-end .navbar-link::after,.navbar.is-black .navbar-start .navbar-link::after{border-color:#fff}.navbar.is-black .navbar-item.has-dropdown.is-active .navbar-link,.navbar.is-black .navbar-item.has-dropdown:hover .navbar-link{background-color:#000;color:#fff}.navbar.is-black .navbar-dropdown a.navbar-item.is-active{background-color:#0a0a0a;color:#fff}}.navbar.is-light{background-color:#f5f5f5;color:#363636}.navbar.is-light .navbar-brand .navbar-link,.navbar.is-light .navbar-brand>.navbar-item{color:#363636}.navbar.is-light .navbar-brand .navbar-link.is-active,.navbar.is-light .navbar-brand .navbar-link:hover,.navbar.is-light .navbar-brand>a.navbar-item.is-active,.navbar.is-light .navbar-brand>a.navbar-item:hover{background-color:#e8e8e8;color:#363636}.navbar.is-light .navbar-brand .navbar-link::after{border-color:#363636}@media screen and (min-width:1088px){.navbar.is-light .navbar-end .navbar-link,.navbar.is-light .navbar-end>.navbar-item,.navbar.is-light .navbar-start .navbar-link,.navbar.is-light .navbar-start>.navbar-item{color:#363636}.navbar.is-light .navbar-end .navbar-link.is-active,.navbar.is-light .navbar-end .navbar-link:hover,.navbar.is-light .navbar-end>a.navbar-item.is-active,.navbar.is-light .navbar-end>a.navbar-item:hover,.navbar.is-light .navbar-start .navbar-link.is-active,.navbar.is-light .navbar-start .navbar-link:hover,.navbar.is-light .navbar-start>a.navbar-item.is-active,.navbar.is-light .navbar-start>a.navbar-item:hover{background-color:#e8e8e8;color:#363636}.navbar.is-light .navbar-end .navbar-link::after,.navbar.is-light .navbar-start .navbar-link::after{border-color:#363636}.navbar.is-light .navbar-item.has-dropdown.is-active .navbar-link,.navbar.is-light .navbar-item.has-dropdown:hover .navbar-link{background-color:#e8e8e8;color:#363636}.navbar.is-light .navbar-dropdown a.navbar-item.is-active{background-color:#f5f5f5;color:#363636}}.navbar.is-dark{background-color:#363636;color:#f5f5f5}.navbar.is-dark .navbar-brand .navbar-link,.navbar.is-dark .navbar-brand>.navbar-item{color:#f5f5f5}.navbar.is-dark .navbar-brand .navbar-link.is-active,.navbar.is-dark .navbar-brand .navbar-link:hover,.navbar.is-dark .navbar-brand>a.navbar-item.is-active,.navbar.is-dark .navbar-brand>a.navbar-item:hover{background-color:#292929;color:#f5f5f5}.navbar.is-dark .navbar-brand .navbar-link::after{border-color:#f5f5f5}@media screen and (min-width:1088px){.navbar.is-dark .navbar-end .navbar-link,.navbar.is-dark .navbar-end>.navbar-item,.navbar.is-dark .navbar-start .navbar-link,.navbar.is-dark .navbar-start>.navbar-item{color:#f5f5f5}.navbar.is-dark .navbar-end .navbar-link.is-active,.navbar.is-dark .navbar-end .navbar-link:hover,.navbar.is-dark .navbar-end>a.navbar-item.is-active,.navbar.is-dark .navbar-end>a.navbar-item:hover,.navbar.is-dark .navbar-start .navbar-link.is-active,.navbar.is-dark .navbar-start .navbar-link:hover,.navbar.is-dark .navbar-start>a.navbar-item.is-active,.navbar.is-dark .navbar-start>a.navbar-item:hover{background-color:#292929;color:#f5f5f5}.navbar.is-dark .navbar-end .navbar-link::after,.navbar.is-dark .navbar-start .navbar-link::after{border-color:#f5f5f5}.navbar.is-dark .navbar-item.has-dropdown.is-active .navbar-link,.navbar.is-dark .navbar-item.has-dropdown:hover .navbar-link{background-color:#292929;color:#f5f5f5}.navbar.is-dark .navbar-dropdown a.navbar-item.is-active{background-color:#363636;color:#f5f5f5}}.navbar.is-primary{background-color:#00d1b2;color:#fff}.navbar.is-primary .navbar-brand .navbar-link,.navbar.is-primary .navbar-brand>.navbar-item{color:#fff}.navbar.is-primary .navbar-brand .navbar-link.is-active,.navbar.is-primary .navbar-brand .navbar-link:hover,.navbar.is-primary .navbar-brand>a.navbar-item.is-active,.navbar.is-primary .navbar-brand>a.navbar-item:hover{background-color:#00b89c;color:#fff}.navbar.is-primary .navbar-brand .navbar-link::after{border-color:#fff}@media screen and (min-width:1088px){.navbar.is-primary .navbar-end .navbar-link,.navbar.is-primary .navbar-end>.navbar-item,.navbar.is-primary .navbar-start .navbar-link,.navbar.is-primary .navbar-start>.navbar-item{color:#fff}.navbar.is-primary .navbar-end .navbar-link.is-active,.navbar.is-primary .navbar-end .navbar-link:hover,.navbar.is-primary .navbar-end>a.navbar-item.is-active,.navbar.is-primary .navbar-end>a.navbar-item:hover,.navbar.is-primary .navbar-start .navbar-link.is-active,.navbar.is-primary .navbar-start .navbar-link:hover,.navbar.is-primary .navbar-start>a.navbar-item.is-active,.navbar.is-primary .navbar-start>a.navbar-item:hover{background-color:#00b89c;color:#fff}.navbar.is-primary .navbar-end .navbar-link::after,.navbar.is-primary .navbar-start .navbar-link::after{border-color:#fff}.navbar.is-primary .navbar-item.has-dropdown.is-active .navbar-link,.navbar.is-primary .navbar-item.has-dropdown:hover .navbar-link{background-color:#00b89c;color:#fff}.navbar.is-primary .navbar-dropdown a.navbar-item.is-active{background-color:#00d1b2;color:#fff}}.navbar.is-link{background-color:#3273dc;color:#fff}.navbar.is-link .navbar-brand .navbar-link,.navbar.is-link .navbar-brand>.navbar-item{color:#fff}.navbar.is-link .navbar-brand .navbar-link.is-active,.navbar.is-link .navbar-brand .navbar-link:hover,.navbar.is-link .navbar-brand>a.navbar-item.is-active,.navbar.is-link .navbar-brand>a.navbar-item:hover{background-color:#2366d1;color:#fff}.navbar.is-link .navbar-brand .navbar-link::after{border-color:#fff}@media screen and (min-width:1088px){.navbar.is-link .navbar-end .navbar-link,.navbar.is-link .navbar-end>.navbar-item,.navbar.is-link .navbar-start .navbar-link,.navbar.is-link .navbar-start>.navbar-item{color:#fff}.navbar.is-link .navbar-end .navbar-link.is-active,.navbar.is-link .navbar-end .navbar-link:hover,.navbar.is-link .navbar-end>a.navbar-item.is-active,.navbar.is-link .navbar-end>a.navbar-item:hover,.navbar.is-link .navbar-start .navbar-link.is-active,.navbar.is-link .navbar-start .navbar-link:hover,.navbar.is-link .navbar-start>a.navbar-item.is-active,.navbar.is-link .navbar-start>a.navbar-item:hover{background-color:#2366d1;color:#fff}.navbar.is-link .navbar-end .navbar-link::after,.navbar.is-link .navbar-start .navbar-link::after{border-color:#fff}.navbar.is-link .navbar-item.has-dropdown.is-active .navbar-link,.navbar.is-link .navbar-item.has-dropdown:hover .navbar-link{background-color:#2366d1;color:#fff}.navbar.is-link .navbar-dropdown a.navbar-item.is-active{background-color:#3273dc;color:#fff}}.navbar.is-info{background-color:#209cee;color:#fff}.navbar.is-info .navbar-brand .navbar-link,.navbar.is-info .navbar-brand>.navbar-item{color:#fff}.navbar.is-info .navbar-brand .navbar-link.is-active,.navbar.is-info .navbar-brand .navbar-link:hover,.navbar.is-info .navbar-brand>a.navbar-item.is-active,.navbar.is-info .navbar-brand>a.navbar-item:hover{background-color:#118fe4;color:#fff}.navbar.is-info .navbar-brand .navbar-link::after{border-color:#fff}@media screen and (min-width:1088px){.navbar.is-info .navbar-end .navbar-link,.navbar.is-info .navbar-end>.navbar-item,.navbar.is-info .navbar-start .navbar-link,.navbar.is-info .navbar-start>.navbar-item{color:#fff}.navbar.is-info .navbar-end .navbar-link.is-active,.navbar.is-info .navbar-end .navbar-link:hover,.navbar.is-info .navbar-end>a.navbar-item.is-active,.navbar.is-info .navbar-end>a.navbar-item:hover,.navbar.is-info .navbar-start .navbar-link.is-active,.navbar.is-info .navbar-start .navbar-link:hover,.navbar.is-info .navbar-start>a.navbar-item.is-active,.navbar.is-info .navbar-start>a.navbar-item:hover{background-color:#118fe4;color:#fff}.navbar.is-info .navbar-end .navbar-link::after,.navbar.is-info .navbar-start .navbar-link::after{border-color:#fff}.navbar.is-info .navbar-item.has-dropdown.is-active .navbar-link,.navbar.is-info .navbar-item.has-dropdown:hover .navbar-link{background-color:#118fe4;color:#fff}.navbar.is-info .navbar-dropdown a.navbar-item.is-active{background-color:#209cee;color:#fff}}.navbar.is-success{background-color:#23d160;color:#fff}.navbar.is-success .navbar-brand .navbar-link,.navbar.is-success .navbar-brand>.navbar-item{color:#fff}.navbar.is-success .navbar-brand .navbar-link.is-active,.navbar.is-success .navbar-brand .navbar-link:hover,.navbar.is-success .navbar-brand>a.navbar-item.is-active,.navbar.is-success .navbar-brand>a.navbar-item:hover{background-color:#20bc56;color:#fff}.navbar.is-success .navbar-brand .navbar-link::after{border-color:#fff}@media screen and (min-width:1088px){.navbar.is-success .navbar-end .navbar-link,.navbar.is-success .navbar-end>.navbar-item,.navbar.is-success .navbar-start .navbar-link,.navbar.is-success .navbar-start>.navbar-item{color:#fff}.navbar.is-success .navbar-end .navbar-link.is-active,.navbar.is-success .navbar-end .navbar-link:hover,.navbar.is-success .navbar-end>a.navbar-item.is-active,.navbar.is-success .navbar-end>a.navbar-item:hover,.navbar.is-success .navbar-start .navbar-link.is-active,.navbar.is-success .navbar-start .navbar-link:hover,.navbar.is-success .navbar-start>a.navbar-item.is-active,.navbar.is-success .navbar-start>a.navbar-item:hover{background-color:#20bc56;color:#fff}.navbar.is-success .navbar-end .navbar-link::after,.navbar.is-success .navbar-start .navbar-link::after{border-color:#fff}.navbar.is-success .navbar-item.has-dropdown.is-active .navbar-link,.navbar.is-success .navbar-item.has-dropdown:hover .navbar-link{background-color:#20bc56;color:#fff}.navbar.is-success .navbar-dropdown a.navbar-item.is-active{background-color:#23d160;color:#fff}}.navbar.is-warning{background-color:#ffdd57;color:rgba(0,0,0,.7)}.navbar.is-warning .navbar-brand .navbar-link,.navbar.is-warning .navbar-brand>.navbar-item{color:rgba(0,0,0,.7)}.navbar.is-warning .navbar-brand .navbar-link.is-active,.navbar.is-warning .navbar-brand .navbar-link:hover,.navbar.is-warning .navbar-brand>a.navbar-item.is-active,.navbar.is-warning .navbar-brand>a.navbar-item:hover{background-color:#ffd83d;color:rgba(0,0,0,.7)}.navbar.is-warning .navbar-brand .navbar-link::after{border-color:rgba(0,0,0,.7)}@media screen and (min-width:1088px){.navbar.is-warning .navbar-end .navbar-link,.navbar.is-warning .navbar-end>.navbar-item,.navbar.is-warning .navbar-start .navbar-link,.navbar.is-warning .navbar-start>.navbar-item{color:rgba(0,0,0,.7)}.navbar.is-warning .navbar-end .navbar-link.is-active,.navbar.is-warning .navbar-end .navbar-link:hover,.navbar.is-warning .navbar-end>a.navbar-item.is-active,.navbar.is-warning .navbar-end>a.navbar-item:hover,.navbar.is-warning .navbar-start .navbar-link.is-active,.navbar.is-warning .navbar-start .navbar-link:hover,.navbar.is-warning .navbar-start>a.navbar-item.is-active,.navbar.is-warning .navbar-start>a.navbar-item:hover{background-color:#ffd83d;color:rgba(0,0,0,.7)}.navbar.is-warning .navbar-end .navbar-link::after,.navbar.is-warning .navbar-start .navbar-link::after{border-color:rgba(0,0,0,.7)}.navbar.is-warning .navbar-item.has-dropdown.is-active .navbar-link,.navbar.is-warning .navbar-item.has-dropdown:hover .navbar-link{background-color:#ffd83d;color:rgba(0,0,0,.7)}.navbar.is-warning .navbar-dropdown a.navbar-item.is-active{background-color:#ffdd57;color:rgba(0,0,0,.7)}}.navbar.is-danger{background-color:#ff3860;color:#fff}.navbar.is-danger .navbar-brand .navbar-link,.navbar.is-danger .navbar-brand>.navbar-item{color:#fff}.navbar.is-danger .navbar-brand .navbar-link.is-active,.navbar.is-danger .navbar-brand .navbar-link:hover,.navbar.is-danger .navbar-brand>a.navbar-item.is-active,.navbar.is-danger .navbar-brand>a.navbar-item:hover{background-color:#ff1f4b;color:#fff}.navbar.is-danger .navbar-brand .navbar-link::after{border-color:#fff}@media screen and (min-width:1088px){.navbar.is-danger .navbar-end .navbar-link,.navbar.is-danger .navbar-end>.navbar-item,.navbar.is-danger .navbar-start .navbar-link,.navbar.is-danger .navbar-start>.navbar-item{color:#fff}.navbar.is-danger .navbar-end .navbar-link.is-active,.navbar.is-danger .navbar-end .navbar-link:hover,.navbar.is-danger .navbar-end>a.navbar-item.is-active,.navbar.is-danger .navbar-end>a.navbar-item:hover,.navbar.is-danger .navbar-start .navbar-link.is-active,.navbar.is-danger .navbar-start .navbar-link:hover,.navbar.is-danger .navbar-start>a.navbar-item.is-active,.navbar.is-danger .navbar-start>a.navbar-item:hover{background-color:#ff1f4b;color:#fff}.navbar.is-danger .navbar-end .navbar-link::after,.navbar.is-danger .navbar-start .navbar-link::after{border-color:#fff}.navbar.is-danger .navbar-item.has-dropdown.is-active .navbar-link,.navbar.is-danger .navbar-item.has-dropdown:hover .navbar-link{background-color:#ff1f4b;color:#fff}.navbar.is-danger .navbar-dropdown a.navbar-item.is-active{background-color:#ff3860;color:#fff}}.navbar>.container{align-items:stretch;display:flex;min-height:3.25rem;width:100%}.navbar.has-shadow{box-shadow:0 2px 0 0 #f5f5f5}.navbar.is-fixed-bottom,.navbar.is-fixed-top{left:0;position:fixed;right:0;z-index:30}.navbar.is-fixed-bottom{bottom:0}.navbar.is-fixed-bottom.has-shadow{box-shadow:0 -2px 0 0 #f5f5f5}.navbar.is-fixed-top{top:0}body.has-navbar-fixed-top,html.has-navbar-fixed-top{padding-top:3.25rem}body.has-navbar-fixed-bottom,html.has-navbar-fixed-bottom{padding-bottom:3.25rem}.navbar-brand,.navbar-tabs{align-items:stretch;display:flex;flex-shrink:0;min-height:3.25rem}.navbar-brand a.navbar-item:hover{background-color:transparent}.navbar-tabs{-webkit-overflow-scrolling:touch;max-width:100vw;overflow-x:auto;overflow-y:hidden}.navbar-burger{cursor:pointer;display:block;height:3.25rem;position:relative;width:3.25rem;margin-left:auto}.navbar-burger span{background-color:currentColor;display:block;height:1px;left:calc(50% - 8px);position:absolute;-webkit-transform-origin:center;transform-origin:center;transition-duration:86ms;transition-property:background-color,opacity,-webkit-transform;transition-property:background-color,opacity,transform;transition-property:background-color,opacity,transform,-webkit-transform;transition-timing-function:ease-out;width:16px}.navbar-burger span:nth-child(1){top:calc(50% - 6px)}.navbar-burger span:nth-child(2){top:calc(50% - 1px)}.navbar-burger span:nth-child(3){top:calc(50% + 4px)}.navbar-burger:hover{background-color:rgba(0,0,0,.05)}.navbar-burger.is-active span:nth-child(1){-webkit-transform:translateY(5px) rotate(45deg);transform:translateY(5px) rotate(45deg)}.navbar-burger.is-active span:nth-child(2){opacity:0}.navbar-burger.is-active span:nth-child(3){-webkit-transform:translateY(-5px) rotate(-45deg);transform:translateY(-5px) rotate(-45deg)}.navbar-menu{display:none}.navbar-item,.navbar-link{color:#4a4a4a;display:block;line-height:1.5;padding:.5rem .75rem;position:relative}.navbar-item .icon:only-child,.navbar-link .icon:only-child{margin-left:-.25rem;margin-right:-.25rem}.navbar-link,a.navbar-item{cursor:pointer}.navbar-link.is-active,.navbar-link:hover,a.navbar-item.is-active,a.navbar-item:hover{background-color:#fafafa;color:#3273dc}.navbar-item{display:block;flex-grow:0;flex-shrink:0}.navbar-item img{max-height:1.75rem}.navbar-item.has-dropdown{padding:0}.navbar-item.is-expanded{flex-grow:1;flex-shrink:1}.navbar-item.is-tab{border-bottom:1px solid transparent;min-height:3.25rem;padding-bottom:calc(.5rem - 1px)}.navbar-item.is-tab:hover{background-color:transparent;border-bottom-color:#3273dc}.navbar-item.is-tab.is-active{background-color:transparent;border-bottom-color:#3273dc;border-bottom-style:solid;border-bottom-width:3px;color:#3273dc;padding-bottom:calc(.5rem - 3px)}.navbar-content{flex-grow:1;flex-shrink:1}.navbar-link{padding-right:2.5em}.navbar-link::after{border-color:#3273dc;margin-top:-.375em;right:1.125em}.navbar-dropdown{font-size:.875rem;padding-bottom:.5rem;padding-top:.5rem}.navbar-dropdown .navbar-item{padding-left:1.5rem;padding-right:1.5rem}.navbar-divider{background-color:#f5f5f5;border:none;display:none;height:2px;margin:.5rem 0}@media screen and (max-width:1087px){.navbar>.container{display:block}.navbar-brand .navbar-item,.navbar-tabs .navbar-item{align-items:center;display:flex}.navbar-link::after{display:none}.navbar-menu{background-color:#fff;box-shadow:0 8px 16px rgba(10,10,10,.1);padding:.5rem 0}.navbar-menu.is-active{display:block}.navbar.is-fixed-bottom-touch,.navbar.is-fixed-top-touch{left:0;position:fixed;right:0;z-index:30}.navbar.is-fixed-bottom-touch{bottom:0}.navbar.is-fixed-bottom-touch.has-shadow{box-shadow:0 -2px 3px rgba(10,10,10,.1)}.navbar.is-fixed-top-touch{top:0}.navbar.is-fixed-top .navbar-menu,.navbar.is-fixed-top-touch .navbar-menu{-webkit-overflow-scrolling:touch;max-height:calc(100vh - 3.25rem);overflow:auto}body.has-navbar-fixed-top-touch,html.has-navbar-fixed-top-touch{padding-top:3.25rem}body.has-navbar-fixed-bottom-touch,html.has-navbar-fixed-bottom-touch{padding-bottom:3.25rem}}@media screen and (min-width:1088px){.navbar,.navbar-end,.navbar-menu,.navbar-start{align-items:stretch;display:flex}.navbar{min-height:3.25rem}.navbar.is-spaced{padding:1rem 2rem}.navbar.is-spaced .navbar-end,.navbar.is-spaced .navbar-start{align-items:center}.navbar.is-spaced .navbar-link,.navbar.is-spaced a.navbar-item{border-radius:4px}.navbar.is-transparent .navbar-link.is-active,.navbar.is-transparent .navbar-link:hover,.navbar.is-transparent a.navbar-item.is-active,.navbar.is-transparent a.navbar-item:hover{background-color:transparent!important}.navbar.is-transparent .navbar-item.has-dropdown.is-active .navbar-link,.navbar.is-transparent .navbar-item.has-dropdown.is-hoverable:hover .navbar-link{background-color:transparent!important}.navbar.is-transparent .navbar-dropdown a.navbar-item:hover{background-color:#f5f5f5;color:#0a0a0a}.navbar.is-transparent .navbar-dropdown a.navbar-item.is-active{background-color:#f5f5f5;color:#3273dc}.navbar-burger{display:none}.navbar-item,.navbar-link{align-items:center;display:flex}.navbar-item{display:flex}.navbar-item.has-dropdown{align-items:stretch}.navbar-item.has-dropdown-up .navbar-link::after{-webkit-transform:rotate(135deg) translate(.25em,-.25em);transform:rotate(135deg) translate(.25em,-.25em)}.navbar-item.has-dropdown-up .navbar-dropdown{border-bottom:2px solid #dbdbdb;border-radius:6px 6px 0 0;border-top:none;bottom:100%;box-shadow:0 -8px 8px rgba(10,10,10,.1);top:auto}.navbar-item.is-active .navbar-dropdown,.navbar-item.is-hoverable:hover .navbar-dropdown{display:block}.navbar-item.is-active .navbar-dropdown.is-boxed,.navbar-item.is-hoverable:hover .navbar-dropdown.is-boxed,.navbar.is-spaced .navbar-item.is-active .navbar-dropdown,.navbar.is-spaced .navbar-item.is-hoverable:hover .navbar-dropdown{opacity:1;pointer-events:auto;-webkit-transform:translateY(0);transform:translateY(0)}.navbar-menu{flex-grow:1;flex-shrink:0}.navbar-start{justify-content:flex-start;margin-right:auto}.navbar-end{justify-content:flex-end;margin-left:auto}.navbar-dropdown{background-color:#fff;border-bottom-left-radius:6px;border-bottom-right-radius:6px;border-top:2px solid #dbdbdb;box-shadow:0 8px 8px rgba(10,10,10,.1);display:none;font-size:.875rem;left:0;min-width:100%;position:absolute;top:100%;z-index:20}.navbar-dropdown .navbar-item{padding:.375rem 1rem;white-space:nowrap}.navbar-dropdown a.navbar-item{padding-right:3rem}.navbar-dropdown a.navbar-item:hover{background-color:#f5f5f5;color:#0a0a0a}.navbar-dropdown a.navbar-item.is-active{background-color:#f5f5f5;color:#3273dc}.navbar-dropdown.is-boxed,.navbar.is-spaced .navbar-dropdown{border-radius:6px;border-top:none;box-shadow:0 8px 8px rgba(10,10,10,.1),0 0 0 1px rgba(10,10,10,.1);display:block;opacity:0;pointer-events:none;top:calc(100% + (-4px));-webkit-transform:translateY(-5px);transform:translateY(-5px);transition-duration:86ms;transition-property:opacity,-webkit-transform;transition-property:opacity,transform;transition-property:opacity,transform,-webkit-transform}.navbar-dropdown.is-right{left:auto;right:0}.navbar-divider{display:block}.container>.navbar .navbar-brand,.navbar>.container .navbar-brand{margin-left:-1rem}.container>.navbar .navbar-menu,.navbar>.container .navbar-menu{margin-right:-1rem}.navbar.is-fixed-bottom-desktop,.navbar.is-fixed-top-desktop{left:0;position:fixed;right:0;z-index:30}.navbar.is-fixed-bottom-desktop{bottom:0}.navbar.is-fixed-bottom-desktop.has-shadow{box-shadow:0 -2px 3px rgba(10,10,10,.1)}.navbar.is-fixed-top-desktop{top:0}body.has-navbar-fixed-top-desktop,html.has-navbar-fixed-top-desktop{padding-top:3.25rem}body.has-navbar-fixed-bottom-desktop,html.has-navbar-fixed-bottom-desktop{padding-bottom:3.25rem}body.has-spaced-navbar-fixed-top,html.has-spaced-navbar-fixed-top{padding-top:5.25rem}body.has-spaced-navbar-fixed-bottom,html.has-spaced-navbar-fixed-bottom{padding-bottom:5.25rem}.navbar-link.is-active,a.navbar-item.is-active{color:#0a0a0a}.navbar-link.is-active:not(:hover),a.navbar-item.is-active:not(:hover){background-color:transparent}.navbar-item.has-dropdown.is-active .navbar-link,.navbar-item.has-dropdown:hover .navbar-link{background-color:#fafafa}}.pagination{font-size:1rem;margin:-.25rem}.pagination.is-small{font-size:.75rem}.pagination.is-medium{font-size:1.25rem}.pagination.is-large{font-size:1.5rem}.pagination.is-rounded .pagination-next,.pagination.is-rounded .pagination-previous{padding-left:1em;padding-right:1em;border-radius:290486px}.pagination.is-rounded .pagination-link{border-radius:290486px}.pagination,.pagination-list{align-items:center;display:flex;justify-content:center;text-align:center}.pagination-ellipsis,.pagination-link,.pagination-next,.pagination-previous{font-size:1em;padding-left:.5em;padding-right:.5em;justify-content:center;margin:.25rem;text-align:center}.pagination-link,.pagination-next,.pagination-previous{border-color:#dbdbdb;color:#363636;min-width:2.25em}.pagination-link:hover,.pagination-next:hover,.pagination-previous:hover{border-color:#b5b5b5;color:#363636}.pagination-link:focus,.pagination-next:focus,.pagination-previous:focus{border-color:#3273dc}.pagination-link:active,.pagination-next:active,.pagination-previous:active{box-shadow:inset 0 1px 2px rgba(10,10,10,.2)}.pagination-link[disabled],.pagination-next[disabled],.pagination-previous[disabled]{background-color:#dbdbdb;border-color:#dbdbdb;box-shadow:none;color:#7a7a7a;opacity:.5}.pagination-next,.pagination-previous{padding-left:.75em;padding-right:.75em;white-space:nowrap}.pagination-link.is-current{background-color:#3273dc;border-color:#3273dc;color:#fff}.pagination-ellipsis{color:#b5b5b5;pointer-events:none}.pagination-list{flex-wrap:wrap}@media screen and (max-width:768px){.pagination{flex-wrap:wrap}.pagination-next,.pagination-previous{flex-grow:1;flex-shrink:1}.pagination-list li{flex-grow:1;flex-shrink:1}}@media screen and (min-width:769px),print{.pagination-list{flex-grow:1;flex-shrink:1;justify-content:flex-start;order:1}.pagination-previous{order:2}.pagination-next{order:3}.pagination{justify-content:space-between}.pagination.is-centered .pagination-previous{order:1}.pagination.is-centered .pagination-list{justify-content:center;order:2}.pagination.is-centered .pagination-next{order:3}.pagination.is-right .pagination-previous{order:1}.pagination.is-right .pagination-next{order:2}.pagination.is-right .pagination-list{justify-content:flex-end;order:3}}.panel{font-size:1rem}.panel:not(:last-child){margin-bottom:1.5rem}.panel-block,.panel-heading,.panel-tabs{border-bottom:1px solid #dbdbdb;border-left:1px solid #dbdbdb;border-right:1px solid #dbdbdb}.panel-block:first-child,.panel-heading:first-child,.panel-tabs:first-child{border-top:1px solid #dbdbdb}.panel-heading{background-color:#f5f5f5;border-radius:4px 4px 0 0;color:#363636;font-size:1.25em;font-weight:300;line-height:1.25;padding:.5em .75em}.panel-tabs{align-items:flex-end;display:flex;font-size:.875em;justify-content:center}.panel-tabs a{border-bottom:1px solid #dbdbdb;margin-bottom:-1px;padding:.5em}.panel-tabs a.is-active{border-bottom-color:#4a4a4a;color:#363636}.panel-list a{color:#4a4a4a}.panel-list a:hover{color:#3273dc}.panel-block{align-items:center;color:#363636;display:flex;justify-content:flex-start;padding:.5em .75em}.panel-block input[type=checkbox]{margin-right:.75em}.panel-block>.control{flex-grow:1;flex-shrink:1;width:100%}.panel-block.is-wrapped{flex-wrap:wrap}.panel-block.is-active{border-left-color:#3273dc;color:#363636}.panel-block.is-active .panel-icon{color:#3273dc}a.panel-block,label.panel-block{cursor:pointer}a.panel-block:hover,label.panel-block:hover{background-color:#f5f5f5}.panel-icon{display:inline-block;font-size:14px;height:1em;line-height:1em;text-align:center;vertical-align:top;width:1em;color:#7a7a7a;margin-right:.75em}.panel-icon .fa{font-size:inherit;line-height:inherit}.tabs{-webkit-overflow-scrolling:touch;align-items:stretch;display:flex;font-size:1rem;justify-content:space-between;overflow:hidden;overflow-x:auto;white-space:nowrap}.tabs a{align-items:center;border-bottom-color:#dbdbdb;border-bottom-style:solid;border-bottom-width:1px;color:#4a4a4a;display:flex;justify-content:center;margin-bottom:-1px;padding:.5em 1em;vertical-align:top}.tabs a:hover{border-bottom-color:#363636;color:#363636}.tabs li{display:block}.tabs li.is-active a{border-bottom-color:#3273dc;color:#3273dc}.tabs ul{align-items:center;border-bottom-color:#dbdbdb;border-bottom-style:solid;border-bottom-width:1px;display:flex;flex-grow:1;flex-shrink:0;justify-content:flex-start}.tabs ul.is-left{padding-right:.75em}.tabs ul.is-center{flex:none;justify-content:center;padding-left:.75em;padding-right:.75em}.tabs ul.is-right{justify-content:flex-end;padding-left:.75em}.tabs .icon:first-child{margin-right:.5em}.tabs .icon:last-child{margin-left:.5em}.tabs.is-centered ul{justify-content:center}.tabs.is-right ul{justify-content:flex-end}.tabs.is-boxed a{border:1px solid transparent;border-radius:4px 4px 0 0}.tabs.is-boxed a:hover{background-color:#f5f5f5;border-bottom-color:#dbdbdb}.tabs.is-boxed li.is-active a{background-color:#fff;border-color:#dbdbdb;border-bottom-color:transparent!important}.tabs.is-fullwidth li{flex-grow:1;flex-shrink:0}.tabs.is-toggle a{border-color:#dbdbdb;border-style:solid;border-width:1px;margin-bottom:0;position:relative}.tabs.is-toggle a:hover{background-color:#f5f5f5;border-color:#b5b5b5;z-index:2}.tabs.is-toggle li+li{margin-left:-1px}.tabs.is-toggle li:first-child a{border-radius:4px 0 0 4px}.tabs.is-toggle li:last-child a{border-radius:0 4px 4px 0}.tabs.is-toggle li.is-active a{background-color:#3273dc;border-color:#3273dc;color:#fff;z-index:1}.tabs.is-toggle ul{border-bottom:none}.tabs.is-toggle.is-toggle-rounded li:first-child a{border-bottom-left-radius:290486px;border-top-left-radius:290486px;padding-left:1.25em}.tabs.is-toggle.is-toggle-rounded li:last-child a{border-bottom-right-radius:290486px;border-top-right-radius:290486px;padding-right:1.25em}.tabs.is-small{font-size:.75rem}.tabs.is-medium{font-size:1.25rem}.tabs.is-large{font-size:1.5rem}.column{display:block;flex-basis:0;flex-grow:1;flex-shrink:1;padding:.75rem}.columns.is-mobile>.column.is-narrow{flex:none}.columns.is-mobile>.column.is-full{flex:none;width:100%}.columns.is-mobile>.column.is-three-quarters{flex:none;width:75%}.columns.is-mobile>.column.is-two-thirds{flex:none;width:66.6666%}.columns.is-mobile>.column.is-half{flex:none;width:50%}.columns.is-mobile>.column.is-one-third{flex:none;width:33.3333%}.columns.is-mobile>.column.is-one-quarter{flex:none;width:25%}.columns.is-mobile>.column.is-one-fifth{flex:none;width:20%}.columns.is-mobile>.column.is-two-fifths{flex:none;width:40%}.columns.is-mobile>.column.is-three-fifths{flex:none;width:60%}.columns.is-mobile>.column.is-four-fifths{flex:none;width:80%}.columns.is-mobile>.column.is-offset-three-quarters{margin-left:75%}.columns.is-mobile>.column.is-offset-two-thirds{margin-left:66.6666%}.columns.is-mobile>.column.is-offset-half{margin-left:50%}.columns.is-mobile>.column.is-offset-one-third{margin-left:33.3333%}.columns.is-mobile>.column.is-offset-one-quarter{margin-left:25%}.columns.is-mobile>.column.is-offset-one-fifth{margin-left:20%}.columns.is-mobile>.column.is-offset-two-fifths{margin-left:40%}.columns.is-mobile>.column.is-offset-three-fifths{margin-left:60%}.columns.is-mobile>.column.is-offset-four-fifths{margin-left:80%}.columns.is-mobile>.column.is-1{flex:none;width:8.33333%}.columns.is-mobile>.column.is-offset-1{margin-left:8.33333%}.columns.is-mobile>.column.is-2{flex:none;width:16.66667%}.columns.is-mobile>.column.is-offset-2{margin-left:16.66667%}.columns.is-mobile>.column.is-3{flex:none;width:25%}.columns.is-mobile>.column.is-offset-3{margin-left:25%}.columns.is-mobile>.column.is-4{flex:none;width:33.33333%}.columns.is-mobile>.column.is-offset-4{margin-left:33.33333%}.columns.is-mobile>.column.is-5{flex:none;width:41.66667%}.columns.is-mobile>.column.is-offset-5{margin-left:41.66667%}.columns.is-mobile>.column.is-6{flex:none;width:50%}.columns.is-mobile>.column.is-offset-6{margin-left:50%}.columns.is-mobile>.column.is-7{flex:none;width:58.33333%}.columns.is-mobile>.column.is-offset-7{margin-left:58.33333%}.columns.is-mobile>.column.is-8{flex:none;width:66.66667%}.columns.is-mobile>.column.is-offset-8{margin-left:66.66667%}.columns.is-mobile>.column.is-9{flex:none;width:75%}.columns.is-mobile>.column.is-offset-9{margin-left:75%}.columns.is-mobile>.column.is-10{flex:none;width:83.33333%}.columns.is-mobile>.column.is-offset-10{margin-left:83.33333%}.columns.is-mobile>.column.is-11{flex:none;width:91.66667%}.columns.is-mobile>.column.is-offset-11{margin-left:91.66667%}.columns.is-mobile>.column.is-12{flex:none;width:100%}.columns.is-mobile>.column.is-offset-12{margin-left:100%}@media screen and (max-width:768px){.column.is-narrow-mobile{flex:none}.column.is-full-mobile{flex:none;width:100%}.column.is-three-quarters-mobile{flex:none;width:75%}.column.is-two-thirds-mobile{flex:none;width:66.6666%}.column.is-half-mobile{flex:none;width:50%}.column.is-one-third-mobile{flex:none;width:33.3333%}.column.is-one-quarter-mobile{flex:none;width:25%}.column.is-one-fifth-mobile{flex:none;width:20%}.column.is-two-fifths-mobile{flex:none;width:40%}.column.is-three-fifths-mobile{flex:none;width:60%}.column.is-four-fifths-mobile{flex:none;width:80%}.column.is-offset-three-quarters-mobile{margin-left:75%}.column.is-offset-two-thirds-mobile{margin-left:66.6666%}.column.is-offset-half-mobile{margin-left:50%}.column.is-offset-one-third-mobile{margin-left:33.3333%}.column.is-offset-one-quarter-mobile{margin-left:25%}.column.is-offset-one-fifth-mobile{margin-left:20%}.column.is-offset-two-fifths-mobile{margin-left:40%}.column.is-offset-three-fifths-mobile{margin-left:60%}.column.is-offset-four-fifths-mobile{margin-left:80%}.column.is-1-mobile{flex:none;width:8.33333%}.column.is-offset-1-mobile{margin-left:8.33333%}.column.is-2-mobile{flex:none;width:16.66667%}.column.is-offset-2-mobile{margin-left:16.66667%}.column.is-3-mobile{flex:none;width:25%}.column.is-offset-3-mobile{margin-left:25%}.column.is-4-mobile{flex:none;width:33.33333%}.column.is-offset-4-mobile{margin-left:33.33333%}.column.is-5-mobile{flex:none;width:41.66667%}.column.is-offset-5-mobile{margin-left:41.66667%}.column.is-6-mobile{flex:none;width:50%}.column.is-offset-6-mobile{margin-left:50%}.column.is-7-mobile{flex:none;width:58.33333%}.column.is-offset-7-mobile{margin-left:58.33333%}.column.is-8-mobile{flex:none;width:66.66667%}.column.is-offset-8-mobile{margin-left:66.66667%}.column.is-9-mobile{flex:none;width:75%}.column.is-offset-9-mobile{margin-left:75%}.column.is-10-mobile{flex:none;width:83.33333%}.column.is-offset-10-mobile{margin-left:83.33333%}.column.is-11-mobile{flex:none;width:91.66667%}.column.is-offset-11-mobile{margin-left:91.66667%}.column.is-12-mobile{flex:none;width:100%}.column.is-offset-12-mobile{margin-left:100%}}@media screen and (min-width:769px),print{.column.is-narrow,.column.is-narrow-tablet{flex:none}.column.is-full,.column.is-full-tablet{flex:none;width:100%}.column.is-three-quarters,.column.is-three-quarters-tablet{flex:none;width:75%}.column.is-two-thirds,.column.is-two-thirds-tablet{flex:none;width:66.6666%}.column.is-half,.column.is-half-tablet{flex:none;width:50%}.column.is-one-third,.column.is-one-third-tablet{flex:none;width:33.3333%}.column.is-one-quarter,.column.is-one-quarter-tablet{flex:none;width:25%}.column.is-one-fifth,.column.is-one-fifth-tablet{flex:none;width:20%}.column.is-two-fifths,.column.is-two-fifths-tablet{flex:none;width:40%}.column.is-three-fifths,.column.is-three-fifths-tablet{flex:none;width:60%}.column.is-four-fifths,.column.is-four-fifths-tablet{flex:none;width:80%}.column.is-offset-three-quarters,.column.is-offset-three-quarters-tablet{margin-left:75%}.column.is-offset-two-thirds,.column.is-offset-two-thirds-tablet{margin-left:66.6666%}.column.is-offset-half,.column.is-offset-half-tablet{margin-left:50%}.column.is-offset-one-third,.column.is-offset-one-third-tablet{margin-left:33.3333%}.column.is-offset-one-quarter,.column.is-offset-one-quarter-tablet{margin-left:25%}.column.is-offset-one-fifth,.column.is-offset-one-fifth-tablet{margin-left:20%}.column.is-offset-two-fifths,.column.is-offset-two-fifths-tablet{margin-left:40%}.column.is-offset-three-fifths,.column.is-offset-three-fifths-tablet{margin-left:60%}.column.is-offset-four-fifths,.column.is-offset-four-fifths-tablet{margin-left:80%}.column.is-1,.column.is-1-tablet{flex:none;width:8.33333%}.column.is-offset-1,.column.is-offset-1-tablet{margin-left:8.33333%}.column.is-2,.column.is-2-tablet{flex:none;width:16.66667%}.column.is-offset-2,.column.is-offset-2-tablet{margin-left:16.66667%}.column.is-3,.column.is-3-tablet{flex:none;width:25%}.column.is-offset-3,.column.is-offset-3-tablet{margin-left:25%}.column.is-4,.column.is-4-tablet{flex:none;width:33.33333%}.column.is-offset-4,.column.is-offset-4-tablet{margin-left:33.33333%}.column.is-5,.column.is-5-tablet{flex:none;width:41.66667%}.column.is-offset-5,.column.is-offset-5-tablet{margin-left:41.66667%}.column.is-6,.column.is-6-tablet{flex:none;width:50%}.column.is-offset-6,.column.is-offset-6-tablet{margin-left:50%}.column.is-7,.column.is-7-tablet{flex:none;width:58.33333%}.column.is-offset-7,.column.is-offset-7-tablet{margin-left:58.33333%}.column.is-8,.column.is-8-tablet{flex:none;width:66.66667%}.column.is-offset-8,.column.is-offset-8-tablet{margin-left:66.66667%}.column.is-9,.column.is-9-tablet{flex:none;width:75%}.column.is-offset-9,.column.is-offset-9-tablet{margin-left:75%}.column.is-10,.column.is-10-tablet{flex:none;width:83.33333%}.column.is-offset-10,.column.is-offset-10-tablet{margin-left:83.33333%}.column.is-11,.column.is-11-tablet{flex:none;width:91.66667%}.column.is-offset-11,.column.is-offset-11-tablet{margin-left:91.66667%}.column.is-12,.column.is-12-tablet{flex:none;width:100%}.column.is-offset-12,.column.is-offset-12-tablet{margin-left:100%}}@media screen and (max-width:1087px){.column.is-narrow-touch{flex:none}.column.is-full-touch{flex:none;width:100%}.column.is-three-quarters-touch{flex:none;width:75%}.column.is-two-thirds-touch{flex:none;width:66.6666%}.column.is-half-touch{flex:none;width:50%}.column.is-one-third-touch{flex:none;width:33.3333%}.column.is-one-quarter-touch{flex:none;width:25%}.column.is-one-fifth-touch{flex:none;width:20%}.column.is-two-fifths-touch{flex:none;width:40%}.column.is-three-fifths-touch{flex:none;width:60%}.column.is-four-fifths-touch{flex:none;width:80%}.column.is-offset-three-quarters-touch{margin-left:75%}.column.is-offset-two-thirds-touch{margin-left:66.6666%}.column.is-offset-half-touch{margin-left:50%}.column.is-offset-one-third-touch{margin-left:33.3333%}.column.is-offset-one-quarter-touch{margin-left:25%}.column.is-offset-one-fifth-touch{margin-left:20%}.column.is-offset-two-fifths-touch{margin-left:40%}.column.is-offset-three-fifths-touch{margin-left:60%}.column.is-offset-four-fifths-touch{margin-left:80%}.column.is-1-touch{flex:none;width:8.33333%}.column.is-offset-1-touch{margin-left:8.33333%}.column.is-2-touch{flex:none;width:16.66667%}.column.is-offset-2-touch{margin-left:16.66667%}.column.is-3-touch{flex:none;width:25%}.column.is-offset-3-touch{margin-left:25%}.column.is-4-touch{flex:none;width:33.33333%}.column.is-offset-4-touch{margin-left:33.33333%}.column.is-5-touch{flex:none;width:41.66667%}.column.is-offset-5-touch{margin-left:41.66667%}.column.is-6-touch{flex:none;width:50%}.column.is-offset-6-touch{margin-left:50%}.column.is-7-touch{flex:none;width:58.33333%}.column.is-offset-7-touch{margin-left:58.33333%}.column.is-8-touch{flex:none;width:66.66667%}.column.is-offset-8-touch{margin-left:66.66667%}.column.is-9-touch{flex:none;width:75%}.column.is-offset-9-touch{margin-left:75%}.column.is-10-touch{flex:none;width:83.33333%}.column.is-offset-10-touch{margin-left:83.33333%}.column.is-11-touch{flex:none;width:91.66667%}.column.is-offset-11-touch{margin-left:91.66667%}.column.is-12-touch{flex:none;width:100%}.column.is-offset-12-touch{margin-left:100%}}@media screen and (min-width:1088px){.column.is-narrow-desktop{flex:none}.column.is-full-desktop{flex:none;width:100%}.column.is-three-quarters-desktop{flex:none;width:75%}.column.is-two-thirds-desktop{flex:none;width:66.6666%}.column.is-half-desktop{flex:none;width:50%}.column.is-one-third-desktop{flex:none;width:33.3333%}.column.is-one-quarter-desktop{flex:none;width:25%}.column.is-one-fifth-desktop{flex:none;width:20%}.column.is-two-fifths-desktop{flex:none;width:40%}.column.is-three-fifths-desktop{flex:none;width:60%}.column.is-four-fifths-desktop{flex:none;width:80%}.column.is-offset-three-quarters-desktop{margin-left:75%}.column.is-offset-two-thirds-desktop{margin-left:66.6666%}.column.is-offset-half-desktop{margin-left:50%}.column.is-offset-one-third-desktop{margin-left:33.3333%}.column.is-offset-one-quarter-desktop{margin-left:25%}.column.is-offset-one-fifth-desktop{margin-left:20%}.column.is-offset-two-fifths-desktop{margin-left:40%}.column.is-offset-three-fifths-desktop{margin-left:60%}.column.is-offset-four-fifths-desktop{margin-left:80%}.column.is-1-desktop{flex:none;width:8.33333%}.column.is-offset-1-desktop{margin-left:8.33333%}.column.is-2-desktop{flex:none;width:16.66667%}.column.is-offset-2-desktop{margin-left:16.66667%}.column.is-3-desktop{flex:none;width:25%}.column.is-offset-3-desktop{margin-left:25%}.column.is-4-desktop{flex:none;width:33.33333%}.column.is-offset-4-desktop{margin-left:33.33333%}.column.is-5-desktop{flex:none;width:41.66667%}.column.is-offset-5-desktop{margin-left:41.66667%}.column.is-6-desktop{flex:none;width:50%}.column.is-offset-6-desktop{margin-left:50%}.column.is-7-desktop{flex:none;width:58.33333%}.column.is-offset-7-desktop{margin-left:58.33333%}.column.is-8-desktop{flex:none;width:66.66667%}.column.is-offset-8-desktop{margin-left:66.66667%}.column.is-9-desktop{flex:none;width:75%}.column.is-offset-9-desktop{margin-left:75%}.column.is-10-desktop{flex:none;width:83.33333%}.column.is-offset-10-desktop{margin-left:83.33333%}.column.is-11-desktop{flex:none;width:91.66667%}.column.is-offset-11-desktop{margin-left:91.66667%}.column.is-12-desktop{flex:none;width:100%}.column.is-offset-12-desktop{margin-left:100%}}@media screen and (min-width:1280px){.column.is-narrow-widescreen{flex:none}.column.is-full-widescreen{flex:none;width:100%}.column.is-three-quarters-widescreen{flex:none;width:75%}.column.is-two-thirds-widescreen{flex:none;width:66.6666%}.column.is-half-widescreen{flex:none;width:50%}.column.is-one-third-widescreen{flex:none;width:33.3333%}.column.is-one-quarter-widescreen{flex:none;width:25%}.column.is-one-fifth-widescreen{flex:none;width:20%}.column.is-two-fifths-widescreen{flex:none;width:40%}.column.is-three-fifths-widescreen{flex:none;width:60%}.column.is-four-fifths-widescreen{flex:none;width:80%}.column.is-offset-three-quarters-widescreen{margin-left:75%}.column.is-offset-two-thirds-widescreen{margin-left:66.6666%}.column.is-offset-half-widescreen{margin-left:50%}.column.is-offset-one-third-widescreen{margin-left:33.3333%}.column.is-offset-one-quarter-widescreen{margin-left:25%}.column.is-offset-one-fifth-widescreen{margin-left:20%}.column.is-offset-two-fifths-widescreen{margin-left:40%}.column.is-offset-three-fifths-widescreen{margin-left:60%}.column.is-offset-four-fifths-widescreen{margin-left:80%}.column.is-1-widescreen{flex:none;width:8.33333%}.column.is-offset-1-widescreen{margin-left:8.33333%}.column.is-2-widescreen{flex:none;width:16.66667%}.column.is-offset-2-widescreen{margin-left:16.66667%}.column.is-3-widescreen{flex:none;width:25%}.column.is-offset-3-widescreen{margin-left:25%}.column.is-4-widescreen{flex:none;width:33.33333%}.column.is-offset-4-widescreen{margin-left:33.33333%}.column.is-5-widescreen{flex:none;width:41.66667%}.column.is-offset-5-widescreen{margin-left:41.66667%}.column.is-6-widescreen{flex:none;width:50%}.column.is-offset-6-widescreen{margin-left:50%}.column.is-7-widescreen{flex:none;width:58.33333%}.column.is-offset-7-widescreen{margin-left:58.33333%}.column.is-8-widescreen{flex:none;width:66.66667%}.column.is-offset-8-widescreen{margin-left:66.66667%}.column.is-9-widescreen{flex:none;width:75%}.column.is-offset-9-widescreen{margin-left:75%}.column.is-10-widescreen{flex:none;width:83.33333%}.column.is-offset-10-widescreen{margin-left:83.33333%}.column.is-11-widescreen{flex:none;width:91.66667%}.column.is-offset-11-widescreen{margin-left:91.66667%}.column.is-12-widescreen{flex:none;width:100%}.column.is-offset-12-widescreen{margin-left:100%}}@media screen and (min-width:1472px){.column.is-narrow-fullhd{flex:none}.column.is-full-fullhd{flex:none;width:100%}.column.is-three-quarters-fullhd{flex:none;width:75%}.column.is-two-thirds-fullhd{flex:none;width:66.6666%}.column.is-half-fullhd{flex:none;width:50%}.column.is-one-third-fullhd{flex:none;width:33.3333%}.column.is-one-quarter-fullhd{flex:none;width:25%}.column.is-one-fifth-fullhd{flex:none;width:20%}.column.is-two-fifths-fullhd{flex:none;width:40%}.column.is-three-fifths-fullhd{flex:none;width:60%}.column.is-four-fifths-fullhd{flex:none;width:80%}.column.is-offset-three-quarters-fullhd{margin-left:75%}.column.is-offset-two-thirds-fullhd{margin-left:66.6666%}.column.is-offset-half-fullhd{margin-left:50%}.column.is-offset-one-third-fullhd{margin-left:33.3333%}.column.is-offset-one-quarter-fullhd{margin-left:25%}.column.is-offset-one-fifth-fullhd{margin-left:20%}.column.is-offset-two-fifths-fullhd{margin-left:40%}.column.is-offset-three-fifths-fullhd{margin-left:60%}.column.is-offset-four-fifths-fullhd{margin-left:80%}.column.is-1-fullhd{flex:none;width:8.33333%}.column.is-offset-1-fullhd{margin-left:8.33333%}.column.is-2-fullhd{flex:none;width:16.66667%}.column.is-offset-2-fullhd{margin-left:16.66667%}.column.is-3-fullhd{flex:none;width:25%}.column.is-offset-3-fullhd{margin-left:25%}.column.is-4-fullhd{flex:none;width:33.33333%}.column.is-offset-4-fullhd{margin-left:33.33333%}.column.is-5-fullhd{flex:none;width:41.66667%}.column.is-offset-5-fullhd{margin-left:41.66667%}.column.is-6-fullhd{flex:none;width:50%}.column.is-offset-6-fullhd{margin-left:50%}.column.is-7-fullhd{flex:none;width:58.33333%}.column.is-offset-7-fullhd{margin-left:58.33333%}.column.is-8-fullhd{flex:none;width:66.66667%}.column.is-offset-8-fullhd{margin-left:66.66667%}.column.is-9-fullhd{flex:none;width:75%}.column.is-offset-9-fullhd{margin-left:75%}.column.is-10-fullhd{flex:none;width:83.33333%}.column.is-offset-10-fullhd{margin-left:83.33333%}.column.is-11-fullhd{flex:none;width:91.66667%}.column.is-offset-11-fullhd{margin-left:91.66667%}.column.is-12-fullhd{flex:none;width:100%}.column.is-offset-12-fullhd{margin-left:100%}}.columns{margin-left:-.75rem;margin-right:-.75rem;margin-top:-.75rem}.columns:last-child{margin-bottom:-.75rem}.columns:not(:last-child){margin-bottom:calc(1.5rem - .75rem)}.columns.is-centered{justify-content:center}.columns.is-gapless{margin-left:0;margin-right:0;margin-top:0}.columns.is-gapless>.column{margin:0;padding:0!important}.columns.is-gapless:not(:last-child){margin-bottom:1.5rem}.columns.is-gapless:last-child{margin-bottom:0}.columns.is-mobile{display:flex}.columns.is-multiline{flex-wrap:wrap}.columns.is-vcentered{align-items:center}@media screen and (min-width:769px),print{.columns:not(.is-desktop){display:flex}}@media screen and (min-width:1088px){.columns.is-desktop{display:flex}}.columns.is-variable{--columnGap:0.75rem;margin-left:calc(-1 * var(--columnGap));margin-right:calc(-1 * var(--columnGap))}.columns.is-variable .column{padding-left:var(--columnGap);padding-right:var(--columnGap)}.columns.is-variable.is-0{--columnGap:0rem}.columns.is-variable.is-1{--columnGap:0.25rem}.columns.is-variable.is-2{--columnGap:0.5rem}.columns.is-variable.is-3{--columnGap:0.75rem}.columns.is-variable.is-4{--columnGap:1rem}.columns.is-variable.is-5{--columnGap:1.25rem}.columns.is-variable.is-6{--columnGap:1.5rem}.columns.is-variable.is-7{--columnGap:1.75rem}.columns.is-variable.is-8{--columnGap:2rem}.tile{align-items:stretch;display:block;flex-basis:0;flex-grow:1;flex-shrink:1;min-height:-webkit-min-content;min-height:-moz-min-content;min-height:min-content}.tile.is-ancestor{margin-left:-.75rem;margin-right:-.75rem;margin-top:-.75rem}.tile.is-ancestor:last-child{margin-bottom:-.75rem}.tile.is-ancestor:not(:last-child){margin-bottom:.75rem}.tile.is-child{margin:0!important}.tile.is-parent{padding:.75rem}.tile.is-vertical{flex-direction:column}.tile.is-vertical>.tile.is-child:not(:last-child){margin-bottom:1.5rem!important}@media screen and (min-width:769px),print{.tile:not(.is-child){display:flex}.tile.is-1{flex:none;width:8.33333%}.tile.is-2{flex:none;width:16.66667%}.tile.is-3{flex:none;width:25%}.tile.is-4{flex:none;width:33.33333%}.tile.is-5{flex:none;width:41.66667%}.tile.is-6{flex:none;width:50%}.tile.is-7{flex:none;width:58.33333%}.tile.is-8{flex:none;width:66.66667%}.tile.is-9{flex:none;width:75%}.tile.is-10{flex:none;width:83.33333%}.tile.is-11{flex:none;width:91.66667%}.tile.is-12{flex:none;width:100%}}.hero{align-items:stretch;display:flex;flex-direction:column;justify-content:space-between}.hero .navbar{background:0 0}.hero .tabs ul{border-bottom:none}.hero.is-white{background-color:#fff;color:#0a0a0a}.hero.is-white a:not(.button):not(.dropdown-item):not(.tag),.hero.is-white strong{color:inherit}.hero.is-white .title{color:#0a0a0a}.hero.is-white .subtitle{color:rgba(10,10,10,.9)}.hero.is-white .subtitle a:not(.button),.hero.is-white .subtitle strong{color:#0a0a0a}@media screen and (max-width:1087px){.hero.is-white .navbar-menu{background-color:#fff}}.hero.is-white .navbar-item,.hero.is-white .navbar-link{color:rgba(10,10,10,.7)}.hero.is-white .navbar-link.is-active,.hero.is-white .navbar-link:hover,.hero.is-white a.navbar-item.is-active,.hero.is-white a.navbar-item:hover{background-color:#f2f2f2;color:#0a0a0a}.hero.is-white .tabs a{color:#0a0a0a;opacity:.9}.hero.is-white .tabs a:hover{opacity:1}.hero.is-white .tabs li.is-active a{opacity:1}.hero.is-white .tabs.is-boxed a,.hero.is-white .tabs.is-toggle a{color:#0a0a0a}.hero.is-white .tabs.is-boxed a:hover,.hero.is-white .tabs.is-toggle a:hover{background-color:rgba(10,10,10,.1)}.hero.is-white .tabs.is-boxed li.is-active a,.hero.is-white .tabs.is-boxed li.is-active a:hover,.hero.is-white .tabs.is-toggle li.is-active a,.hero.is-white .tabs.is-toggle li.is-active a:hover{background-color:#0a0a0a;border-color:#0a0a0a;color:#fff}.hero.is-white.is-bold{background-image:linear-gradient(141deg,#e6e6e6 0,#fff 71%,#fff 100%)}@media screen and (max-width:768px){.hero.is-white.is-bold .navbar-menu{background-image:linear-gradient(141deg,#e6e6e6 0,#fff 71%,#fff 100%)}}.hero.is-black{background-color:#0a0a0a;color:#fff}.hero.is-black a:not(.button):not(.dropdown-item):not(.tag),.hero.is-black strong{color:inherit}.hero.is-black .title{color:#fff}.hero.is-black .subtitle{color:rgba(255,255,255,.9)}.hero.is-black .subtitle a:not(.button),.hero.is-black .subtitle strong{color:#fff}@media screen and (max-width:1087px){.hero.is-black .navbar-menu{background-color:#0a0a0a}}.hero.is-black .navbar-item,.hero.is-black .navbar-link{color:rgba(255,255,255,.7)}.hero.is-black .navbar-link.is-active,.hero.is-black .navbar-link:hover,.hero.is-black a.navbar-item.is-active,.hero.is-black a.navbar-item:hover{background-color:#000;color:#fff}.hero.is-black .tabs a{color:#fff;opacity:.9}.hero.is-black .tabs a:hover{opacity:1}.hero.is-black .tabs li.is-active a{opacity:1}.hero.is-black .tabs.is-boxed a,.hero.is-black .tabs.is-toggle a{color:#fff}.hero.is-black .tabs.is-boxed a:hover,.hero.is-black .tabs.is-toggle a:hover{background-color:rgba(10,10,10,.1)}.hero.is-black .tabs.is-boxed li.is-active a,.hero.is-black .tabs.is-boxed li.is-active a:hover,.hero.is-black .tabs.is-toggle li.is-active a,.hero.is-black .tabs.is-toggle li.is-active a:hover{background-color:#fff;border-color:#fff;color:#0a0a0a}.hero.is-black.is-bold{background-image:linear-gradient(141deg,#000 0,#0a0a0a 71%,#181616 100%)}@media screen and (max-width:768px){.hero.is-black.is-bold .navbar-menu{background-image:linear-gradient(141deg,#000 0,#0a0a0a 71%,#181616 100%)}}.hero.is-light{background-color:#f5f5f5;color:#363636}.hero.is-light a:not(.button):not(.dropdown-item):not(.tag),.hero.is-light strong{color:inherit}.hero.is-light .title{color:#363636}.hero.is-light .subtitle{color:rgba(54,54,54,.9)}.hero.is-light .subtitle a:not(.button),.hero.is-light .subtitle strong{color:#363636}@media screen and (max-width:1087px){.hero.is-light .navbar-menu{background-color:#f5f5f5}}.hero.is-light .navbar-item,.hero.is-light .navbar-link{color:rgba(54,54,54,.7)}.hero.is-light .navbar-link.is-active,.hero.is-light .navbar-link:hover,.hero.is-light a.navbar-item.is-active,.hero.is-light a.navbar-item:hover{background-color:#e8e8e8;color:#363636}.hero.is-light .tabs a{color:#363636;opacity:.9}.hero.is-light .tabs a:hover{opacity:1}.hero.is-light .tabs li.is-active a{opacity:1}.hero.is-light .tabs.is-boxed a,.hero.is-light .tabs.is-toggle a{color:#363636}.hero.is-light .tabs.is-boxed a:hover,.hero.is-light .tabs.is-toggle a:hover{background-color:rgba(10,10,10,.1)}.hero.is-light .tabs.is-boxed li.is-active a,.hero.is-light .tabs.is-boxed li.is-active a:hover,.hero.is-light .tabs.is-toggle li.is-active a,.hero.is-light .tabs.is-toggle li.is-active a:hover{background-color:#363636;border-color:#363636;color:#f5f5f5}.hero.is-light.is-bold{background-image:linear-gradient(141deg,#dfd8d9 0,#f5f5f5 71%,#fff 100%)}@media screen and (max-width:768px){.hero.is-light.is-bold .navbar-menu{background-image:linear-gradient(141deg,#dfd8d9 0,#f5f5f5 71%,#fff 100%)}}.hero.is-dark{background-color:#363636;color:#f5f5f5}.hero.is-dark a:not(.button):not(.dropdown-item):not(.tag),.hero.is-dark strong{color:inherit}.hero.is-dark .title{color:#f5f5f5}.hero.is-dark .subtitle{color:rgba(245,245,245,.9)}.hero.is-dark .subtitle a:not(.button),.hero.is-dark .subtitle strong{color:#f5f5f5}@media screen and (max-width:1087px){.hero.is-dark .navbar-menu{background-color:#363636}}.hero.is-dark .navbar-item,.hero.is-dark .navbar-link{color:rgba(245,245,245,.7)}.hero.is-dark .navbar-link.is-active,.hero.is-dark .navbar-link:hover,.hero.is-dark a.navbar-item.is-active,.hero.is-dark a.navbar-item:hover{background-color:#292929;color:#f5f5f5}.hero.is-dark .tabs a{color:#f5f5f5;opacity:.9}.hero.is-dark .tabs a:hover{opacity:1}.hero.is-dark .tabs li.is-active a{opacity:1}.hero.is-dark .tabs.is-boxed a,.hero.is-dark .tabs.is-toggle a{color:#f5f5f5}.hero.is-dark .tabs.is-boxed a:hover,.hero.is-dark .tabs.is-toggle a:hover{background-color:rgba(10,10,10,.1)}.hero.is-dark .tabs.is-boxed li.is-active a,.hero.is-dark .tabs.is-boxed li.is-active a:hover,.hero.is-dark .tabs.is-toggle li.is-active a,.hero.is-dark .tabs.is-toggle li.is-active a:hover{background-color:#f5f5f5;border-color:#f5f5f5;color:#363636}.hero.is-dark.is-bold{background-image:linear-gradient(141deg,#1f191a 0,#363636 71%,#46403f 100%)}@media screen and (max-width:768px){.hero.is-dark.is-bold .navbar-menu{background-image:linear-gradient(141deg,#1f191a 0,#363636 71%,#46403f 100%)}}.hero.is-primary{background-color:#00d1b2;color:#fff}.hero.is-primary a:not(.button):not(.dropdown-item):not(.tag),.hero.is-primary strong{color:inherit}.hero.is-primary .title{color:#fff}.hero.is-primary .subtitle{color:rgba(255,255,255,.9)}.hero.is-primary .subtitle a:not(.button),.hero.is-primary .subtitle strong{color:#fff}@media screen and (max-width:1087px){.hero.is-primary .navbar-menu{background-color:#00d1b2}}.hero.is-primary .navbar-item,.hero.is-primary .navbar-link{color:rgba(255,255,255,.7)}.hero.is-primary .navbar-link.is-active,.hero.is-primary .navbar-link:hover,.hero.is-primary a.navbar-item.is-active,.hero.is-primary a.navbar-item:hover{background-color:#00b89c;color:#fff}.hero.is-primary .tabs a{color:#fff;opacity:.9}.hero.is-primary .tabs a:hover{opacity:1}.hero.is-primary .tabs li.is-active a{opacity:1}.hero.is-primary .tabs.is-boxed a,.hero.is-primary .tabs.is-toggle a{color:#fff}.hero.is-primary .tabs.is-boxed a:hover,.hero.is-primary .tabs.is-toggle a:hover{background-color:rgba(10,10,10,.1)}.hero.is-primary .tabs.is-boxed li.is-active a,.hero.is-primary .tabs.is-boxed li.is-active a:hover,.hero.is-primary .tabs.is-toggle li.is-active a,.hero.is-primary .tabs.is-toggle li.is-active a:hover{background-color:#fff;border-color:#fff;color:#00d1b2}.hero.is-primary.is-bold{background-image:linear-gradient(141deg,#009e6c 0,#00d1b2 71%,#00e7eb 100%)}@media screen and (max-width:768px){.hero.is-primary.is-bold .navbar-menu{background-image:linear-gradient(141deg,#009e6c 0,#00d1b2 71%,#00e7eb 100%)}}.hero.is-link{background-color:#3273dc;color:#fff}.hero.is-link a:not(.button):not(.dropdown-item):not(.tag),.hero.is-link strong{color:inherit}.hero.is-link .title{color:#fff}.hero.is-link .subtitle{color:rgba(255,255,255,.9)}.hero.is-link .subtitle a:not(.button),.hero.is-link .subtitle strong{color:#fff}@media screen and (max-width:1087px){.hero.is-link .navbar-menu{background-color:#3273dc}}.hero.is-link .navbar-item,.hero.is-link .navbar-link{color:rgba(255,255,255,.7)}.hero.is-link .navbar-link.is-active,.hero.is-link .navbar-link:hover,.hero.is-link a.navbar-item.is-active,.hero.is-link a.navbar-item:hover{background-color:#2366d1;color:#fff}.hero.is-link .tabs a{color:#fff;opacity:.9}.hero.is-link .tabs a:hover{opacity:1}.hero.is-link .tabs li.is-active a{opacity:1}.hero.is-link .tabs.is-boxed a,.hero.is-link .tabs.is-toggle a{color:#fff}.hero.is-link .tabs.is-boxed a:hover,.hero.is-link .tabs.is-toggle a:hover{background-color:rgba(10,10,10,.1)}.hero.is-link .tabs.is-boxed li.is-active a,.hero.is-link .tabs.is-boxed li.is-active a:hover,.hero.is-link .tabs.is-toggle li.is-active a,.hero.is-link .tabs.is-toggle li.is-active a:hover{background-color:#fff;border-color:#fff;color:#3273dc}.hero.is-link.is-bold{background-image:linear-gradient(141deg,#1577c6 0,#3273dc 71%,#4366e5 100%)}@media screen and (max-width:768px){.hero.is-link.is-bold .navbar-menu{background-image:linear-gradient(141deg,#1577c6 0,#3273dc 71%,#4366e5 100%)}}.hero.is-info{background-color:#209cee;color:#fff}.hero.is-info a:not(.button):not(.dropdown-item):not(.tag),.hero.is-info strong{color:inherit}.hero.is-info .title{color:#fff}.hero.is-info .subtitle{color:rgba(255,255,255,.9)}.hero.is-info .subtitle a:not(.button),.hero.is-info .subtitle strong{color:#fff}@media screen and (max-width:1087px){.hero.is-info .navbar-menu{background-color:#209cee}}.hero.is-info .navbar-item,.hero.is-info .navbar-link{color:rgba(255,255,255,.7)}.hero.is-info .navbar-link.is-active,.hero.is-info .navbar-link:hover,.hero.is-info a.navbar-item.is-active,.hero.is-info a.navbar-item:hover{background-color:#118fe4;color:#fff}.hero.is-info .tabs a{color:#fff;opacity:.9}.hero.is-info .tabs a:hover{opacity:1}.hero.is-info .tabs li.is-active a{opacity:1}.hero.is-info .tabs.is-boxed a,.hero.is-info .tabs.is-toggle a{color:#fff}.hero.is-info .tabs.is-boxed a:hover,.hero.is-info .tabs.is-toggle a:hover{background-color:rgba(10,10,10,.1)}.hero.is-info .tabs.is-boxed li.is-active a,.hero.is-info .tabs.is-boxed li.is-active a:hover,.hero.is-info .tabs.is-toggle li.is-active a,.hero.is-info .tabs.is-toggle li.is-active a:hover{background-color:#fff;border-color:#fff;color:#209cee}.hero.is-info.is-bold{background-image:linear-gradient(141deg,#04a6d7 0,#209cee 71%,#3287f5 100%)}@media screen and (max-width:768px){.hero.is-info.is-bold .navbar-menu{background-image:linear-gradient(141deg,#04a6d7 0,#209cee 71%,#3287f5 100%)}}.hero.is-success{background-color:#23d160;color:#fff}.hero.is-success a:not(.button):not(.dropdown-item):not(.tag),.hero.is-success strong{color:inherit}.hero.is-success .title{color:#fff}.hero.is-success .subtitle{color:rgba(255,255,255,.9)}.hero.is-success .subtitle a:not(.button),.hero.is-success .subtitle strong{color:#fff}@media screen and (max-width:1087px){.hero.is-success .navbar-menu{background-color:#23d160}}.hero.is-success .navbar-item,.hero.is-success .navbar-link{color:rgba(255,255,255,.7)}.hero.is-success .navbar-link.is-active,.hero.is-success .navbar-link:hover,.hero.is-success a.navbar-item.is-active,.hero.is-success a.navbar-item:hover{background-color:#20bc56;color:#fff}.hero.is-success .tabs a{color:#fff;opacity:.9}.hero.is-success .tabs a:hover{opacity:1}.hero.is-success .tabs li.is-active a{opacity:1}.hero.is-success .tabs.is-boxed a,.hero.is-success .tabs.is-toggle a{color:#fff}.hero.is-success .tabs.is-boxed a:hover,.hero.is-success .tabs.is-toggle a:hover{background-color:rgba(10,10,10,.1)}.hero.is-success .tabs.is-boxed li.is-active a,.hero.is-success .tabs.is-boxed li.is-active a:hover,.hero.is-success .tabs.is-toggle li.is-active a,.hero.is-success .tabs.is-toggle li.is-active a:hover{background-color:#fff;border-color:#fff;color:#23d160}.hero.is-success.is-bold{background-image:linear-gradient(141deg,#12af2f 0,#23d160 71%,#2ce28a 100%)}@media screen and (max-width:768px){.hero.is-success.is-bold .navbar-menu{background-image:linear-gradient(141deg,#12af2f 0,#23d160 71%,#2ce28a 100%)}}.hero.is-warning{background-color:#ffdd57;color:rgba(0,0,0,.7)}.hero.is-warning a:not(.button):not(.dropdown-item):not(.tag),.hero.is-warning strong{color:inherit}.hero.is-warning .title{color:rgba(0,0,0,.7)}.hero.is-warning .subtitle{color:rgba(0,0,0,.9)}.hero.is-warning .subtitle a:not(.button),.hero.is-warning .subtitle strong{color:rgba(0,0,0,.7)}@media screen and (max-width:1087px){.hero.is-warning .navbar-menu{background-color:#ffdd57}}.hero.is-warning .navbar-item,.hero.is-warning .navbar-link{color:rgba(0,0,0,.7)}.hero.is-warning .navbar-link.is-active,.hero.is-warning .navbar-link:hover,.hero.is-warning a.navbar-item.is-active,.hero.is-warning a.navbar-item:hover{background-color:#ffd83d;color:rgba(0,0,0,.7)}.hero.is-warning .tabs a{color:rgba(0,0,0,.7);opacity:.9}.hero.is-warning .tabs a:hover{opacity:1}.hero.is-warning .tabs li.is-active a{opacity:1}.hero.is-warning .tabs.is-boxed a,.hero.is-warning .tabs.is-toggle a{color:rgba(0,0,0,.7)}.hero.is-warning .tabs.is-boxed a:hover,.hero.is-warning .tabs.is-toggle a:hover{background-color:rgba(10,10,10,.1)}.hero.is-warning .tabs.is-boxed li.is-active a,.hero.is-warning .tabs.is-boxed li.is-active a:hover,.hero.is-warning .tabs.is-toggle li.is-active a,.hero.is-warning .tabs.is-toggle li.is-active a:hover{background-color:rgba(0,0,0,.7);border-color:rgba(0,0,0,.7);color:#ffdd57}.hero.is-warning.is-bold{background-image:linear-gradient(141deg,#ffaf24 0,#ffdd57 71%,#fffa70 100%)}@media screen and (max-width:768px){.hero.is-warning.is-bold .navbar-menu{background-image:linear-gradient(141deg,#ffaf24 0,#ffdd57 71%,#fffa70 100%)}}.hero.is-danger{background-color:#ff3860;color:#fff}.hero.is-danger a:not(.button):not(.dropdown-item):not(.tag),.hero.is-danger strong{color:inherit}.hero.is-danger .title{color:#fff}.hero.is-danger .subtitle{color:rgba(255,255,255,.9)}.hero.is-danger .subtitle a:not(.button),.hero.is-danger .subtitle strong{color:#fff}@media screen and (max-width:1087px){.hero.is-danger .navbar-menu{background-color:#ff3860}}.hero.is-danger .navbar-item,.hero.is-danger .navbar-link{color:rgba(255,255,255,.7)}.hero.is-danger .navbar-link.is-active,.hero.is-danger .navbar-link:hover,.hero.is-danger a.navbar-item.is-active,.hero.is-danger a.navbar-item:hover{background-color:#ff1f4b;color:#fff}.hero.is-danger .tabs a{color:#fff;opacity:.9}.hero.is-danger .tabs a:hover{opacity:1}.hero.is-danger .tabs li.is-active a{opacity:1}.hero.is-danger .tabs.is-boxed a,.hero.is-danger .tabs.is-toggle a{color:#fff}.hero.is-danger .tabs.is-boxed a:hover,.hero.is-danger .tabs.is-toggle a:hover{background-color:rgba(10,10,10,.1)}.hero.is-danger .tabs.is-boxed li.is-active a,.hero.is-danger .tabs.is-boxed li.is-active a:hover,.hero.is-danger .tabs.is-toggle li.is-active a,.hero.is-danger .tabs.is-toggle li.is-active a:hover{background-color:#fff;border-color:#fff;color:#ff3860}.hero.is-danger.is-bold{background-image:linear-gradient(141deg,#ff0561 0,#ff3860 71%,#ff5257 100%)}@media screen and (max-width:768px){.hero.is-danger.is-bold .navbar-menu{background-image:linear-gradient(141deg,#ff0561 0,#ff3860 71%,#ff5257 100%)}}.hero.is-small .hero-body{padding-bottom:1.5rem;padding-top:1.5rem}@media screen and (min-width:769px),print{.hero.is-medium .hero-body{padding-bottom:9rem;padding-top:9rem}}@media screen and (min-width:769px),print{.hero.is-large .hero-body{padding-bottom:18rem;padding-top:18rem}}.hero.is-fullheight .hero-body,.hero.is-halfheight .hero-body{align-items:center;display:flex}.hero.is-fullheight .hero-body>.container,.hero.is-halfheight .hero-body>.container{flex-grow:1;flex-shrink:1}.hero.is-halfheight{min-height:50vh}.hero.is-fullheight{min-height:100vh}.hero-video{overflow:hidden}.hero-video video{left:50%;min-height:100%;min-width:100%;position:absolute;top:50%;-webkit-transform:translate3d(-50%,-50%,0);transform:translate3d(-50%,-50%,0)}.hero-video.is-transparent{opacity:.3}@media screen and (max-width:768px){.hero-video{display:none}}.hero-buttons{margin-top:1.5rem}@media screen and (max-width:768px){.hero-buttons .button{display:flex}.hero-buttons .button:not(:last-child){margin-bottom:.75rem}}@media screen and (min-width:769px),print{.hero-buttons{display:flex;justify-content:center}.hero-buttons .button:not(:last-child){margin-right:1.5rem}}.hero-foot,.hero-head{flex-grow:0;flex-shrink:0}.hero-body{flex-grow:1;flex-shrink:0;padding:3rem 1.5rem}.section{padding:3rem 1.5rem}@media screen and (min-width:1088px){.section.is-medium{padding:9rem 1.5rem}.section.is-large{padding:18rem 1.5rem}}.footer{background-color:#fafafa;padding:3rem 1.5rem 6rem}[m
\ No newline at end of file[m
[1mdiff --git a/css/login.css b/css/login.css[m
[1mdeleted file mode 100644[m
[1mindex 354a06c..0000000[m
[1m--- a/css/login.css[m
[1m+++ /dev/null[m
[36m@@ -1,18 +0,0 @@[m
[31m-html,body {[m
[31m-  font-family: 'Open Sans', serif;[m
[31m-  font-size: 14px;[m
[31m-  font-weight: 300;[m
[31m-}[m
[31m-.hero.is-success {[m
[31m-  background: #f2f7fa;[m
[31m-}[m
[31m-.hero .nav, .hero.is-success .nav {[m
[31m-  -webkit-box-shadow: none;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-input {[m
[31m-  font-weight: 300;[m
[31m-}[m
[31m-p {[m
[31m-  font-weight: 700;[m
[31m-}[m
\ No newline at end of file[m
[1mdiff --git a/css/main.css b/css/main.css[m
[1mdeleted file mode 100644[m
[1mindex 4e099a4..0000000[m
[1m--- a/css/main.css[m
[1m+++ /dev/null[m
[36m@@ -1,207 +0,0 @@[m
[31m-body {[m
[31m-    font-family: 'Poppins', sans-serif !important;[m
[31m-    background-color: #1D1E28;[m
[31m-    color: #fff;[m
[31m-    -webkit-font-smoothing: antialiased;[m
[31m-    -moz-osx-font-smoothing: grayscale;[m
[31m-    text-rendering: optimizeLegibility;[m
[31m-    border-top: 6px #527aff solid !important;[m
[31m-    font-size: 16px;[m
[31m-}[m
[31m-[m
[31m-.nav-link {[m
[31m-     font-size: 14px !important;[m
[31m-     background: transparent !important;[m
[31m-     font-family: Lato, sans-serif !important;[m
[31m-     text-transform: capitalize !important;[m
[31m- }[m
[31m- .nav-link:hover {[m
[31m-     background: transparent !important;[m
[31m-     color: #AD91FF !important;[m
[31m-     font-weight: bold !important;[m
[31m- }[m
[31m-[m
[31m- .login-btn {[m
[31m-     border: 2px solid #AD91FF !important;[m
[31m-     font-size: 10px !important;[m
[31m- }[m
[31m- .login-btn:hover {[m
[31m-     background: #AD91FF !important;[m
[31m- }[m
[31m-.navbar {[m
[31m-    box-shadow: none !important[m
[31m-}[m
[31m-[m
[31m-.navbar-brand {[m
[31m-    font-size: 25px !important[m
[31m-}[m
[31m-[m
[31m-.navbar-toggler-icon {[m
[31m-    color: #fff !important[m
[31m-}[m
[31m-[m
[31m-.btn {[m
[31m-    border-radius: 10px !important;[m
[31m-    font-size: 16px !important;[m
[31m-    font-weight: 600 !important;[m
[31m-    text-transform: uppercase !important;[m
[31m-}[m
[31m-[m
[31m-.btn-primary {[m
[31m-    background-color: #AD91FF!important[m
[31m-}[m
[31m-.btn-secondary {[m
[31m-    background-color: #2C2F33 !important[m
[31m-}[m
[31m-.heading {[m
[31m-    padding: 160px 50px !important;[m
[31m-    color: #fff !important;[m
[31m-    background-image: url("../assets/wavy-purple-by-nouridio.svg") !important;[m
[31m-    background-position: bottom !important;[m
[31m-    background-size: 300% !important;[m
[31m-    background-repeat: no-repeat !important;[m
[31m-}[m
[31m-[m
[31m-.title {[m
[31m-    line-height: 90px !important;[m
[31m-    margin-bottom: -2px !important;[m
[31m-    font-size: 36px !important[m
[31m-}[m
[31m-[m
[31m-.subtitle {[m
[31m-    color: rgba(255, 255, 255, 0.685) !important;[m
[31m-    font-size: 16px !important;[m
[31m-    font-family: 'Lato', sans-serif;[m
[31m-}[m
[31m-[m
[31m-[m
[31m-.features {[m
[31m-    text-align: center !important;[m
[31m-    background: #AD91FF !important;[m
[31m-    padding: 60px 50px !important;[m
[31m-    background-image: url("../assets/wavy-dark-by-nouridio.svg") !important;[m
[31m-    background-position: bottom !important;[m
[31m-    background-size: 200% !important;[m
[31m-    background-repeat: no-repeat !important;[m
[31m-}[m
[31m-.features .title {[m
[31m-    font-size: 40px !important;[m
[31m-    color: #ffffff !important;[m
[31m-    line-height: 70px !important;[m
[31m-}[m
[31m-[m
[31m-.features .subtitle {[m
[31m-    font-size: 20px !important;[m
[31m-    color: #a2a8bd;[m
[31m-}[m
[31m-[m
[31m-.features .card-body {[m
[31m-    text-align: left !important;[m
[31m-}[m
[31m-[m
[31m-.features .card-title {[m
[31m-    margin: 0 0 -3px !important;[m
[31m-}[m
[31m-.cards {[m
[31m-    margin-top: 30px !important;[m
[31m-}[m
[31m-[m
[31m-.card {[m
[31m-    border-radius: 5px !important;[m
[31m-    box-shadow: none !important;[m
[31m-}[m
[31m-[m
[31m-.card-title {[m
[31m-    font-size: 28px !important;[m
[31m-    font-weight: 600 !important;[m
[31m-    color: #AD91FF !important;[m
[31m-}[m
[31m-[m
[31m-.statistics {[m
[31m-    text-align: center !important;[m
[31m-    padding-top: 300px !important;[m
[31m-}[m
[31m-[m
[31m-.statistics .card-body{[m
[31m-    padding: 0 !important;[m
[31m-    height: 280 !important;[m
[31m-    width: 332 !important;[m
[31m-    max-height: 280 !important;[m
[31m-    max-width: 332 !important;[m
[31m-}[m
[31m-[m
[31m-.statistics .title {[m
[31m-    font-size: 40px !important;[m
[31m-    color: #ffffff !important;[m
[31m-    line-height: 70px !important;[m
[31m-}[m
[31m-[m
[31m-.statistics .subtitle {[m
[31m-    font-size: 20px !important;[m
[31m-    color: #a2a8bd;[m
[31m-}[m
[31m-[m
[31m-.card.statistic {[m
[31m-    background: transparent !important;[m
[31m-    box-shadow: none !important;[m
[31m-    color: #f7f7f7 !important;[m
[31m-}[m
[31m-[m
[31m-[m
[31m-.page_end {[m
[31m-    background-image: url("../assets/wavy-light-by-nouridio.svg") !important;[m
[31m-    background-position: bottom !important;[m
[31m-    background-size: 200% !important;[m
[31m-    background-repeat: no-repeat !important;[m
[31m-}[m
[31m-.start {[m
[31m-    padding: 60px 50px !important[m
[31m-}[m
[31m-[m
[31m-.start .card {[m
[31m-    background: transparent !important;[m
[31m-    color: #f6f9ff !important;[m
[31m-}[m
[31m-[m
[31m-.features .card {[m
[31m-    background: #1D1E28;[m
[31m-    border-radius: 22px !important;[m
[31m-    border: 4px solid #AD91FF;[m
[31m-}[m
[31m-.features .card-text {[m
[31m-color: rgba(255, 255, 255, 0.46) !important[m
[31m-}[m
[31m-[m
[31m-.features .card-body {[m
[31m-    padding: 40px 40px 40px 30px !important;[m
[31m-}[m
[31m-[m
[31m-.navbar-toggler-icon {[m
[31m-    color: #fff !important[m
[31m-}[m
[31m-.footer {[m
[31m-    text-align: center !important;[m
[31m-    padding: 5px 6px !important;[m
[31m-    color: #ecf2ff;[m
[31m-    padding: 30px 30px !important[m
[31m-}[m
[31m-[m
[31m-.footer .nouridio {[m
[31m-    font-family: 'Montserrat' !important;[m
[31m-    font-style: normal !important;[m
[31m-    font-weight: 600 !important;[m
[31m-    font-size: 16px !important;[m
[31m-    line-height: 5px !important;[m
[31m-    letter-spacing: 0.15em !important;[m
[31m-    font-variant: small-caps !important;[m
[31m-}[m
[31m-[m
[31m-.footer .nouridio a {[m
[31m-    color: #AD91FF !important;[m
[31m-    text-decoration: none !important;[m
[31m-}[m
[31m-[m
[31m-.footer .bot-footer {[m
[31m-    text-align: center !important;[m
[31m-    color: #a2a8bd !important[m
[31m-}[m
\ No newline at end of file[m
[1mdiff --git a/css/now-ui-kit.css b/css/now-ui-kit.css[m
[1mdeleted file mode 100644[m
[1mindex e1048f8..0000000[m
[1m--- a/css/now-ui-kit.css[m
[1m+++ /dev/null[m
[36m@@ -1,7325 +0,0 @@[m
[31m-/*![m
[31m-[m
[31m- =========================================================[m
[31m- * Now UI Kit - v1.3.0[m
[31m- =========================================================[m
[31m-[m
[31m- * Product Page: https://www.creative-tim.com/product/now-ui-kit[m
[31m- * Copyright 2019 Creative Tim (http://www.creative-tim.com)[m
[31m-[m
[31m- * Designed by www.invisionapp.com Coded by www.creative-tim.com[m
[31m-[m
[31m- =========================================================[m
[31m-[m
[31m- * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.[m
[31m-[m
[31m- */[m
[31m-[m
[31m-/*     brand Colors              */[m
[31m-[m
[31m-/*      light colors         */[m
[31m-[m
[31m-/* ========================================================================[m
[31m- * bootstrap-switch - v3.3.2[m
[31m- * http://www.bootstrap-switch.org[m
[31m- * ========================================================================[m
[31m- * Copyright 2012-2013 Mattia Larentis[m
[31m- * http://www.apache.org/licenses/LICENSE-2.0[m
[31m- */[m
[31m-[m
[31m-.bootstrap-switch {[m
[31m-  display: inline-block;[m
[31m-  direction: ltr;[m
[31m-  cursor: pointer;[m
[31m-  border-radius: 30px;[m
[31m-  border: 0;[m
[31m-  position: relative;[m
[31m-  text-align: left;[m
[31m-  margin-bottom: 10px;[m
[31m-  line-height: 8px;[m
[31m-  width: 59px !important;[m
[31m-  height: 22px;[m
[31m-  outline: none;[m
[31m-  z-index: 0;[m
[31m-  -webkit-user-select: none;[m
[31m-  -moz-user-select: none;[m
[31m-  -ms-user-select: none;[m
[31m-  user-select: none;[m
[31m-  vertical-align: middle;[m
[31m-  -webkit-transition: border-color ease-in-out .15s, box-shadow ease-in-out .15s;[m
[31m-  transition: border-color ease-in-out .15s, box-shadow ease-in-out .15s;[m
[31m-  margin-right: 20px;[m
[31m-  background: rgba(44, 44, 44, 0.2);[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch .bootstrap-switch-container {[m
[31m-  display: inline-flex;[m
[31m-  top: 0;[m
[31m-  height: 22px;[m
[31m-  border-radius: 4px;[m
[31m-  -webkit-transform: translate3d(0, 0, 0);[m
[31m-  transform: translate3d(0, 0, 0);[m
[31m-  width: 100px !important;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch .bootstrap-switch-handle-on,[m
[31m-.bootstrap-switch .bootstrap-switch-handle-off,[m
[31m-.bootstrap-switch .bootstrap-switch-label {[m
[31m-  -webkit-box-sizing: border-box;[m
[31m-  -moz-box-sizing: border-box;[m
[31m-  box-sizing: border-box;[m
[31m-  cursor: pointer;[m
[31m-  display: inline-block !important;[m
[31m-  height: 100%;[m
[31m-  color: #fff;[m
[31m-  padding: 6px 12px;[m
[31m-  font-size: 11px;[m
[31m-  text-indent: -5px;[m
[31m-  line-height: 15px;[m
[31m-  -webkit-transition: 0.25s ease-out;[m
[31m-  transition: 0.25s ease-out;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch .bootstrap-switch-handle-on,[m
[31m-.bootstrap-switch .bootstrap-switch-handle-off {[m
[31m-  text-align: center;[m
[31m-  z-index: 1;[m
[31m-  float: left;[m
[31m-  line-height: 11px;[m
[31m-  width: 50% !important;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch .bootstrap-switch-handle-on.bootstrap-switch-brown,[m
[31m-.bootstrap-switch .bootstrap-switch-handle-off.bootstrap-switch-brown {[m
[31m-  color: #fff;[m
[31m-  background: #f96332;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch .bootstrap-switch-handle-on.bootstrap-switch-blue,[m
[31m-.bootstrap-switch .bootstrap-switch-handle-off.bootstrap-switch-blue {[m
[31m-  color: #fff;[m
[31m-  background: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch .bootstrap-switch-handle-on.bootstrap-switch-green,[m
[31m-.bootstrap-switch .bootstrap-switch-handle-off.bootstrap-switch-green {[m
[31m-  color: #fff;[m
[31m-  background: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch .bootstrap-switch-handle-on.bootstrap-switch-orange,[m
[31m-.bootstrap-switch .bootstrap-switch-handle-off.bootstrap-switch-orange {[m
[31m-  background: #FFB236;[m
[31m-  color: #fff;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch .bootstrap-switch-handle-on.bootstrap-switch-red,[m
[31m-.bootstrap-switch .bootstrap-switch-handle-off.bootstrap-switch-red {[m
[31m-  color: #fff;[m
[31m-  background: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch .bootstrap-switch-handle-on.bootstrap-switch-default,[m
[31m-.bootstrap-switch .bootstrap-switch-handle-off.bootstrap-switch-default {[m
[31m-  color: #fff;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch .bootstrap-switch-label {[m
[31m-  text-align: center;[m
[31m-  z-index: 100;[m
[31m-  color: #333333;[m
[31m-  background: #ffffff;[m
[31m-  width: 22px !important;[m
[31m-  height: 22px !important;[m
[31m-  margin: 0px -11px;[m
[31m-  border-radius: 20px;[m
[31m-  position: absolute;[m
[31m-  float: left;[m
[31m-  top: 0;[m
[31m-  left: 50%;[m
[31m-  padding: 0;[m
[31m-  box-shadow: 0 1px 11px rgba(0, 0, 0, 0.25);[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-off .bootstrap-switch-label {[m
[31m-  background-color: rgba(23, 23, 23, 0.4);[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-on:hover .bootstrap-switch-label {[m
[31m-  width: 27px !important;[m
[31m-  margin-left: -16px;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-off:hover .bootstrap-switch-label {[m
[31m-  width: 27px !important;[m
[31m-  margin-left: -11px;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch .bootstrap-switch-handle-on {[m
[31m-  border-bottom-left-radius: 3px;[m
[31m-  border-top-left-radius: 3px;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch .bootstrap-switch-handle-off {[m
[31m-  text-indent: 6px;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch input[type='radio'],[m
[31m-.bootstrap-switch input[type='checkbox'] {[m
[31m-  position: absolute !important;[m
[31m-  top: 0;[m
[31m-  left: 0;[m
[31m-  opacity: 0;[m
[31m-  filter: alpha(opacity=0);[m
[31m-  z-index: -1;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch input[type='radio'].form-control,[m
[31m-.bootstrap-switch input[type='checkbox'].form-control {[m
[31m-  height: auto;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-mini .bootstrap-switch-handle-on,[m
[31m-.bootstrap-switch.bootstrap-switch-mini .bootstrap-switch-handle-off,[m
[31m-.bootstrap-switch.bootstrap-switch-mini .bootstrap-switch-label {[m
[31m-  padding: 1px 5px;[m
[31m-  font-size: 12px;[m
[31m-  line-height: 1.5;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-small .bootstrap-switch-handle-on,[m
[31m-.bootstrap-switch.bootstrap-switch-small .bootstrap-switch-handle-off,[m
[31m-.bootstrap-switch.bootstrap-switch-small .bootstrap-switch-label {[m
[31m-  padding: 5px 10px;[m
[31m-  font-size: 12px;[m
[31m-  line-height: 1.5;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-large .bootstrap-switch-handle-on,[m
[31m-.bootstrap-switch.bootstrap-switch-large .bootstrap-switch-handle-off,[m
[31m-.bootstrap-switch.bootstrap-switch-large .bootstrap-switch-label {[m
[31m-  padding: 6px 16px;[m
[31m-  font-size: 18px;[m
[31m-  line-height: 1.33;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-disabled,[m
[31m-.bootstrap-switch.bootstrap-switch-readonly,[m
[31m-.bootstrap-switch.bootstrap-switch-indeterminate {[m
[31m-  cursor: default !important;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-disabled .bootstrap-switch-handle-on,[m
[31m-.bootstrap-switch.bootstrap-switch-readonly .bootstrap-switch-handle-on,[m
[31m-.bootstrap-switch.bootstrap-switch-indeterminate .bootstrap-switch-handle-on,[m
[31m-.bootstrap-switch.bootstrap-switch-disabled .bootstrap-switch-handle-off,[m
[31m-.bootstrap-switch.bootstrap-switch-readonly .bootstrap-switch-handle-off,[m
[31m-.bootstrap-switch.bootstrap-switch-indeterminate .bootstrap-switch-handle-off,[m
[31m-.bootstrap-switch.bootstrap-switch-disabled .bootstrap-switch-label,[m
[31m-.bootstrap-switch.bootstrap-switch-readonly .bootstrap-switch-label,[m
[31m-.bootstrap-switch.bootstrap-switch-indeterminate .bootstrap-switch-label {[m
[31m-  opacity: 0.5;[m
[31m-  filter: alpha(opacity=50);[m
[31m-  cursor: default !important;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-animate .bootstrap-switch-container {[m
[31m-  -webkit-transition: margin-left 0.5s;[m
[31m-  transition: margin-left 0.5s;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-inverse .bootstrap-switch-handle-on {[m
[31m-  border-bottom-left-radius: 0;[m
[31m-  border-top-left-radius: 0;[m
[31m-  border-bottom-right-radius: 3px;[m
[31m-  border-top-right-radius: 3px;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-inverse .bootstrap-switch-handle-off {[m
[31m-  border-bottom-right-radius: 0;[m
[31m-  border-top-right-radius: 0;[m
[31m-  border-bottom-left-radius: 3px;[m
[31m-  border-top-left-radius: 3px;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-on .bootstrap-switch-container {[m
[31m-  margin-left: -2px !important;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-off .bootstrap-switch-container {[m
[31m-  margin-left: -39px !important;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-on .bootstrap-switch-label:before {[m
[31m-  background-color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-on .bootstrap-switch-red~.bootstrap-switch-default {[m
[31m-  background-color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-on .bootstrap-switch-orange~.bootstrap-switch-default {[m
[31m-  background-color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-on .bootstrap-switch-green~.bootstrap-switch-default {[m
[31m-  background-color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-on .bootstrap-switch-brown~.bootstrap-switch-default {[m
[31m-  background-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-on .bootstrap-switch-blue~.bootstrap-switch-default {[m
[31m-  background-color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch.bootstrap-switch-off .bootstrap-switch-red,[m
[31m-.bootstrap-switch.bootstrap-switch-off .bootstrap-switch-brown,[m
[31m-.bootstrap-switch.bootstrap-switch-off .bootstrap-switch-blue,[m
[31m-.bootstrap-switch.bootstrap-switch-off .bootstrap-switch-orange,[m
[31m-.bootstrap-switch.bootstrap-switch-off .bootstrap-switch-green {[m
[31m-  background-color: #E3E3E3;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch-off .bootstrap-switch-handle-on {[m
[31m-  opacity: 0;[m
[31m-}[m
[31m-[m
[31m-.bootstrap-switch-on .bootstrap-switch-handle-off {[m
[31m-  opacity: 0;[m
[31m-}[m
[31m-[m
[31m-/*! nouislider - 13.1.4 */[m
[31m-[m
[31m-/* Functional styling;[m
[31m- * These styles are required for noUiSlider to function.[m
[31m- * You don't need to change these rules to apply your design.[m
[31m- */[m
[31m-[m
[31m-.noUi-target,[m
[31m-.noUi-target * {[m
[31m-  -webkit-touch-callout: none;[m
[31m-  -webkit-tap-highlight-color: rgba(0, 0, 0, 0);[m
[31m-  -webkit-user-select: none;[m
[31m-  -ms-touch-action: none;[m
[31m-  touch-action: none;[m
[31m-  -ms-user-select: none;[m
[31m-  -moz-user-select: none;[m
[31m-  user-select: none;[m
[31m-  -moz-box-sizing: border-box;[m
[31m-  box-sizing: border-box;[m
[31m-}[m
[31m-[m
[31m-.noUi-target {[m
[31m-  position: relative;[m
[31m-  direction: ltr;[m
[31m-}[m
[31m-[m
[31m-.noUi-base,[m
[31m-.noUi-connects {[m
[31m-  width: 100%;[m
[31m-  height: 100%;[m
[31m-  position: relative;[m
[31m-  z-index: 1;[m
[31m-}[m
[31m-[m
[31m-/* Wrapper for all connect elements.[m
[31m- */[m
[31m-[m
[31m-.noUi-connects {[m
[31m-  overflow: hidden;[m
[31m-  z-index: 0;[m
[31m-}[m
[31m-[m
[31m-.noUi-connect,[m
[31m-.noUi-origin {[m
[31m-  will-change: transform;[m
[31m-  position: absolute;[m
[31m-  z-index: 1;[m
[31m-  top: 0;[m
[31m-  left: 0;[m
[31m-  height: 100%;[m
[31m-  width: 100%;[m
[31m-  -ms-transform-origin: 0 0;[m
[31m-  -webkit-transform-origin: 0 0;[m
[31m-  transform-origin: 0 0;[m
[31m-}[m
[31m-[m
[31m-/* Offset direction[m
[31m- */[m
[31m-[m
[31m-html:not([dir="rtl"]) .noUi-horizontal .noUi-origin {[m
[31m-  left: auto;[m
[31m-  right: 0;[m
[31m-}[m
[31m-[m
[31m-/* Give origins 0 height/width so they don't interfere with clicking the[m
[31m- * connect elements.[m
[31m- */[m
[31m-[m
[31m-.noUi-vertical .noUi-origin {[m
[31m-  width: 0;[m
[31m-}[m
[31m-[m
[31m-.noUi-horizontal .noUi-origin {[m
[31m-  height: 0;[m
[31m-}[m
[31m-[m
[31m-.noUi-handle {[m
[31m-  position: absolute;[m
[31m-}[m
[31m-[m
[31m-.noUi-state-tap .noUi-connect,[m
[31m-.noUi-state-tap .noUi-origin {[m
[31m-  -webkit-transition: transform 0.3s;[m
[31m-  transition: transform 0.3s;[m
[31m-}[m
[31m-[m
[31m-.noUi-state-drag * {[m
[31m-  cursor: inherit !important;[m
[31m-}[m
[31m-[m
[31m-/* Slider size and handle placement;[m
[31m- */[m
[31m-[m
[31m-.noUi-horizontal {[m
[31m-  height: 1px;[m
[31m-}[m
[31m-[m
[31m-.noUi-horizontal .noUi-handle {[m
[31m-  border-radius: 50%;[m
[31m-  background-color: #FFFFFF;[m
[31m-  box-shadow: 0 1px 13px 0 rgba(0, 0, 0, 0.2);[m
[31m-  height: 15px;[m
[31m-  width: 15px;[m
[31m-  cursor: pointer;[m
[31m-  margin-top: -7px;[m
[31m-  outline: none;[m
[31m-}[m
[31m-[m
[31m-.noUi-vertical {[m
[31m-  width: 18px;[m
[31m-}[m
[31m-[m
[31m-.noUi-vertical .noUi-handle {[m
[31m-  width: 28px;[m
[31m-  height: 34px;[m
[31m-  left: -6px;[m
[31m-  top: -17px;[m
[31m-}[m
[31m-[m
[31m-html:not([dir="rtl"]) .noUi-horizontal .noUi-handle {[m
[31m-  right: -15px;[m
[31m-  left: auto;[m
[31m-}[m
[31m-[m
[31m-/* Styling;[m
[31m- * Giving the connect element a border radius causes issues with using transform: scale[m
[31m- */[m
[31m-[m
[31m-.noUi-target {[m
[31m-  background-color: rgba(182, 182, 182, 0.3);[m
[31m-  border-radius: 3px;[m
[31m-}[m
[31m-[m
[31m-.noUi-connects {[m
[31m-  border-radius: 3px;[m
[31m-}[m
[31m-[m
[31m-.noUi-connect {[m
[31m-  background: #888888;[m
[31m-  border-radius: 3px;[m
[31m-  -webkit-transition: background 450ms;[m
[31m-  transition: background 450ms;[m
[31m-}[m
[31m-[m
[31m-/* Handles and cursors;[m
[31m- */[m
[31m-[m
[31m-.noUi-draggable {[m
[31m-  cursor: ew-resize;[m
[31m-}[m
[31m-[m
[31m-.noUi-vertical .noUi-draggable {[m
[31m-  cursor: ns-resize;[m
[31m-}[m
[31m-[m
[31m-.noUi-handle {[m
[31m-  border-radius: 3px;[m
[31m-  background: #FFF;[m
[31m-  cursor: default;[m
[31m-  box-shadow: inset 0 0 1px #FFF, inset 0 1px 7px #EBEBEB, 0 3px 6px -3px #BBB;[m
[31m-  -webkit-transition: 300ms ease 0s;[m
[31m-  -moz-transition: 300ms ease 0s;[m
[31m-  -ms-transition: 300ms ease 0s;[m
[31m-  -o-transform: 300ms ease 0s;[m
[31m-  transition: 300ms ease 0s;[m
[31m-}[m
[31m-[m
[31m-.noUi-active {[m
[31m-  -webkit-transform: scale3d(1.5, 1.5, 1);[m
[31m-  -moz-transform: scale3d(1.5, 1.5, 1);[m
[31m-  -ms-transform: scale3d(1.5, 1.5, 1);[m
[31m-  -o-transform: scale3d(1.5, 1.5, 1);[m
[31m-  transform: scale3d(1.5, 1.5, 1);[m
[31m-}[m
[31m-[m
[31m-/* Handle stripes;[m
[31m- */[m
[31m-[m
[31m-.noUi-handle:before,[m
[31m-.noUi-handle:after {[m
[31m-  display: none;[m
[31m-}[m
[31m-[m
[31m-.noUi-handle:after {[m
[31m-  left: 17px;[m
[31m-}[m
[31m-[m
[31m-.noUi-vertical .noUi-handle:before,[m
[31m-.noUi-vertical .noUi-handle:after {[m
[31m-  width: 14px;[m
[31m-  height: 1px;[m
[31m-  left: 6px;[m
[31m-  top: 14px;[m
[31m-}[m
[31m-[m
[31m-.noUi-vertical .noUi-handle:after {[m
[31m-  top: 17px;[m
[31m-}[m
[31m-[m
[31m-/* Disabled state;[m
[31m- */[m
[31m-[m
[31m-[disabled] .noUi-connect {[m
[31m-  background: #B8B8B8;[m
[31m-}[m
[31m-[m
[31m-[disabled].noUi-target,[m
[31m-[disabled].noUi-handle,[m
[31m-[disabled] .noUi-handle {[m
[31m-  cursor: not-allowed;[m
[31m-}[m
[31m-[m
[31m-/* Base;[m
[31m- *[m
[31m- */[m
[31m-[m
[31m-.noUi-pips,[m
[31m-.noUi-pips * {[m
[31m-  -moz-box-sizing: border-box;[m
[31m-  box-sizing: border-box;[m
[31m-}[m
[31m-[m
[31m-.noUi-pips {[m
[31m-  position: absolute;[m
[31m-  color: #999;[m
[31m-}[m
[31m-[m
[31m-/* Values;[m
[31m- *[m
[31m- */[m
[31m-[m
[31m-.noUi-value {[m
[31m-  position: absolute;[m
[31m-  white-space: nowrap;[m
[31m-  text-align: center;[m
[31m-}[m
[31m-[m
[31m-.noUi-value-sub {[m
[31m-  color: #ccc;[m
[31m-  font-size: 10px;[m
[31m-}[m
[31m-[m
[31m-/* Markings;[m
[31m- *[m
[31m- */[m
[31m-[m
[31m-.noUi-marker {[m
[31m-  position: absolute;[m
[31m-  background: #CCC;[m
[31m-}[m
[31m-[m
[31m-.noUi-marker-sub {[m
[31m-  background: #AAA;[m
[31m-}[m
[31m-[m
[31m-.noUi-marker-large {[m
[31m-  background: #AAA;[m
[31m-}[m
[31m-[m
[31m-/* Horizontal layout;[m
[31m- *[m
[31m- */[m
[31m-[m
[31m-.noUi-pips-horizontal {[m
[31m-  padding: 10px 0;[m
[31m-  height: 80px;[m
[31m-  top: 100%;[m
[31m-  left: 0;[m
[31m-  width: 100%;[m
[31m-}[m
[31m-[m
[31m-.noUi-value-horizontal {[m
[31m-  -webkit-transform: translate(-50%, 50%);[m
[31m-  transform: translate(-50%, 50%);[m
[31m-}[m
[31m-[m
[31m-.noUi-rtl .noUi-value-horizontal {[m
[31m-  -webkit-transform: translate(50%, 50%);[m
[31m-  transform: translate(50%, 50%);[m
[31m-}[m
[31m-[m
[31m-.noUi-marker-horizontal.noUi-marker {[m
[31m-  margin-left: -1px;[m
[31m-  width: 2px;[m
[31m-  height: 5px;[m
[31m-}[m
[31m-[m
[31m-.noUi-marker-horizontal.noUi-marker-sub {[m
[31m-  height: 10px;[m
[31m-}[m
[31m-[m
[31m-.noUi-marker-horizontal.noUi-marker-large {[m
[31m-  height: 15px;[m
[31m-}[m
[31m-[m
[31m-/* Vertical layout;[m
[31m- *[m
[31m- */[m
[31m-[m
[31m-.noUi-pips-vertical {[m
[31m-  padding: 0 10px;[m
[31m-  height: 100%;[m
[31m-  top: 0;[m
[31m-  left: 100%;[m
[31m-}[m
[31m-[m
[31m-.noUi-value-vertical {[m
[31m-  -webkit-transform: translate(0, -50%);[m
[31m-  transform: translate(0, -50%, 0);[m
[31m-  padding-left: 25px;[m
[31m-}[m
[31m-[m
[31m-.noUi-rtl .noUi-value-vertical {[m
[31m-  -webkit-transform: translate(0, 50%);[m
[31m-  transform: translate(0, 50%);[m
[31m-}[m
[31m-[m
[31m-.noUi-marker-vertical.noUi-marker {[m
[31m-  width: 5px;[m
[31m-  height: 2px;[m
[31m-  margin-top: -1px;[m
[31m-}[m
[31m-[m
[31m-.noUi-marker-vertical.noUi-marker-sub {[m
[31m-  width: 10px;[m
[31m-}[m
[31m-[m
[31m-.noUi-marker-vertical.noUi-marker-large {[m
[31m-  width: 15px;[m
[31m-}[m
[31m-[m
[31m-.noUi-tooltip {[m
[31m-  display: block;[m
[31m-  position: absolute;[m
[31m-  border: 1px solid #D9D9D9;[m
[31m-  border-radius: 3px;[m
[31m-  background: #fff;[m
[31m-  color: #000;[m
[31m-  padding: 5px;[m
[31m-  text-align: center;[m
[31m-  white-space: nowrap;[m
[31m-}[m
[31m-[m
[31m-.noUi-horizontal .noUi-tooltip {[m
[31m-  -webkit-transform: translate(-50%, 0);[m
[31m-  transform: translate(-50%, 0);[m
[31m-  left: 50%;[m
[31m-  bottom: 120%;[m
[31m-}[m
[31m-[m
[31m-.noUi-vertical .noUi-tooltip {[m
[31m-  -webkit-transform: translate(0, -50%);[m
[31m-  transform: translate(0, -50%);[m
[31m-  top: 50%;[m
[31m-  right: 120%;[m
[31m-}[m
[31m-[m
[31m-.slider.slider-neutral .noUi-connect,[m
[31m-.slider.slider-neutral.noUi-connect {[m
[31m-  background-color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.slider.slider-neutral.noUi-target {[m
[31m-  background-color: rgba(255, 255, 255, 0.3);[m
[31m-}[m
[31m-[m
[31m-.slider.slider-neutral .noUi-handle {[m
[31m-  background-color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.slider.slider-primary .noUi-connect,[m
[31m-.slider.slider-primary.noUi-connect {[m
[31m-  background-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.slider.slider-primary.noUi-target {[m
[31m-  background-color: rgba(249, 99, 50, 0.3);[m
[31m-}[m
[31m-[m
[31m-.slider.slider-primary .noUi-handle {[m
[31m-  background-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.slider.slider-info .noUi-connect,[m
[31m-.slider.slider-info.noUi-connect {[m
[31m-  background-color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.slider.slider-info.noUi-target {[m
[31m-  background-color: rgba(44, 168, 255, 0.3);[m
[31m-}[m
[31m-[m
[31m-.slider.slider-info .noUi-handle {[m
[31m-  background-color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.slider.slider-success .noUi-connect,[m
[31m-.slider.slider-success.noUi-connect {[m
[31m-  background-color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.slider.slider-success.noUi-target {[m
[31m-  background-color: rgba(24, 206, 15, 0.3);[m
[31m-}[m
[31m-[m
[31m-.slider.slider-success .noUi-handle {[m
[31m-  background-color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.slider.slider-warning .noUi-connect,[m
[31m-.slider.slider-warning.noUi-connect {[m
[31m-  background-color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.slider.slider-warning.noUi-target {[m
[31m-  background-color: rgba(255, 178, 54, 0.3);[m
[31m-}[m
[31m-[m
[31m-.slider.slider-warning .noUi-handle {[m
[31m-  background-color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.slider.slider-danger .noUi-connect,[m
[31m-.slider.slider-danger.noUi-connect {[m
[31m-  background-color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.slider.slider-danger.noUi-target {[m
[31m-  background-color: rgba(255, 54, 54, 0.3);[m
[31m-}[m
[31m-[m
[31m-.slider.slider-danger .noUi-handle {[m
[31m-  background-color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-/*![m
[31m- * Datepicker for Bootstrap v1.7.0-dev (https://github.com/uxsolutions/bootstrap-datepicker)[m
[31m- *[m
[31m- * Licensed under the Apache License v2.0 (http://www.apache.org/licenses/LICENSE-2.0)[m
[31m- */[m
[31m-[m
[31m-.datepicker {[m
[31m-  padding: 8px 6px;[m
[31m-  -webkit-border-radius: 4px;[m
[31m-  -moz-border-radius: 4px;[m
[31m-  border-radius: 4px;[m
[31m-  direction: ltr;[m
[31m-  -webkit-transform: translate3d(0, -40px, 0);[m
[31m-  -moz-transform: translate3d(0, -40px, 0);[m
[31m-  -o-transform: translate3d(0, -40px, 0);[m
[31m-  -ms-transform: translate3d(0, -40px, 0);[m
[31m-  transform: translate3d(0, -40px, 0);[m
[31m-  transition: all 0.3s cubic-bezier(0.215, 0.61, 0.355, 1) 0s, opacity 0.3s ease 0s, height 0s linear 0.35s;[m
[31m-  opacity: 0;[m
[31m-  filter: alpha(opacity=0);[m
[31m-  visibility: hidden;[m
[31m-  display: block;[m
[31m-  width: 254px;[m
[31m-  max-width: 254px;[m
[31m-}[m
[31m-[m
[31m-.datepicker.dropdown-menu:before {[m
[31m-  display: none;[m
[31m-}[m
[31m-[m
[31m-.datepicker.datepicker-primary {[m
[31m-  background-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.datepicker.datepicker-primary th,[m
[31m-.datepicker.datepicker-primary .day div,[m
[31m-.datepicker.datepicker-primary table tr td span {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.datepicker.datepicker-primary:after {[m
[31m-  border-bottom-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.datepicker.datepicker-primary.datepicker-orient-top:after {[m
[31m-  border-top-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.datepicker.datepicker-primary .dow {[m
[31m-  color: rgba(255, 255, 255, 0.8);[m
[31m-}[m
[31m-[m
[31m-.datepicker.datepicker-primary table tr td.old div,[m
[31m-.datepicker.datepicker-primary table tr td.new div,[m
[31m-.datepicker.datepicker-primary table tr td span.old,[m
[31m-.datepicker.datepicker-primary table tr td span.new {[m
[31m-  color: rgba(255, 255, 255, 0.4);[m
[31m-}[m
[31m-[m
[31m-.datepicker.datepicker-primary table tr td span:hover,[m
[31m-.datepicker.datepicker-primary table tr td span.focused {[m
[31m-  background: rgba(255, 255, 255, 0.1);[m
[31m-}[m
[31m-[m
[31m-.datepicker.datepicker-primary .datepicker-switch:hover,[m
[31m-.datepicker.datepicker-primary .prev:hover,[m
[31m-.datepicker.datepicker-primary .next:hover,[m
[31m-.datepicker.datepicker-primary tfoot tr th:hover {[m
[31m-  background: rgba(255, 255, 255, 0.2);[m
[31m-}[m
[31m-[m
[31m-.datepicker.datepicker-primary table tr td.active div,[m
[31m-.datepicker.datepicker-primary table tr td.active:hover div,[m
[31m-.datepicker.datepicker-primary table tr td.active.disabled div,[m
[31m-.datepicker.datepicker-primary table tr td.active.disabled:hover div {[m
[31m-  background-color: #FFFFFF;[m
[31m-  color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.datepicker.datepicker-primary table tr td.day:hover div,[m
[31m-.datepicker.datepicker-primary table tr td.day.focused div {[m
[31m-  background: rgba(255, 255, 255, 0.2);[m
[31m-}[m
[31m-[m
[31m-.datepicker.datepicker-primary table tr td.active:hover div,[m
[31m-.datepicker.datepicker-primary table tr td.active:hover:hover div,[m
[31m-.datepicker.datepicker-primary table tr td.active.disabled:hover div,[m
[31m-.datepicker.datepicker-primary table tr td.active.disabled:hover:hover div,[m
[31m-.datepicker.datepicker-primary table tr td.active:active div,[m
[31m-.datepicker.datepicker-primary table tr td.active:hover:active div,[m
[31m-.datepicker.datepicker-primary table tr td.active.disabled:active div,[m
[31m-.datepicker.datepicker-primary table tr td.active.disabled:hover:active div,[m
[31m-.datepicker.datepicker-primary table tr td.active.active div,[m
[31m-.datepicker.datepicker-primary table tr td.active:hover.active div,[m
[31m-.datepicker.datepicker-primary table tr td.active.disabled.active div,[m
[31m-.datepicker.datepicker-primary table tr td.active.disabled:hover.active div,[m
[31m-.datepicker.datepicker-primary table tr td.active.disabled div,[m
[31m-.datepicker.datepicker-primary table tr td.active:hover.disabled div,[m
[31m-.datepicker.datepicker-primary table tr td.active.disabled.disabled div,[m
[31m-.datepicker.datepicker-primary table tr td.active.disabled:hover.disabled div,[m
[31m-.datepicker.datepicker-primary table tr td.active[disabled] div,[m
[31m-.datepicker.datepicker-primary table tr td.active:hover[disabled] div,[m
[31m-.datepicker.datepicker-primary table tr td.active.disabled[disabled] div,[m
[31m-.datepicker.datepicker-primary table tr td.active.disabled:hover[disabled] div,[m
[31m-.datepicker.datepicker-primary table tr td span.active:hover,[m
[31m-.datepicker.datepicker-primary table tr td span.active:hover:hover,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled:hover,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled:hover:hover,[m
[31m-.datepicker.datepicker-primary table tr td span.active:active,[m
[31m-.datepicker.datepicker-primary table tr td span.active:hover:active,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled:active,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled:hover:active,[m
[31m-.datepicker.datepicker-primary table tr td span.active.active,[m
[31m-.datepicker.datepicker-primary table tr td span.active:hover.active,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled.active,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled:hover.active,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled,[m
[31m-.datepicker.datepicker-primary table tr td span.active:hover.disabled,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled.disabled,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled:hover.disabled,[m
[31m-.datepicker.datepicker-primary table tr td span.active[disabled],[m
[31m-.datepicker.datepicker-primary table tr td span.active:hover[disabled],[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled[disabled],[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled:hover[disabled] {[m
[31m-  background-color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.datepicker.datepicker-primary table tr td span.active:hover,[m
[31m-.datepicker.datepicker-primary table tr td span.active:hover:hover,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled:hover,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled:hover:hover,[m
[31m-.datepicker.datepicker-primary table tr td span.active:active,[m
[31m-.datepicker.datepicker-primary table tr td span.active:hover:active,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled:active,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled:hover:active,[m
[31m-.datepicker.datepicker-primary table tr td span.active.active,[m
[31m-.datepicker.datepicker-primary table tr td span.active:hover.active,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled.active,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled:hover.active,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled,[m
[31m-.datepicker.datepicker-primary table tr td span.active:hover.disabled,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled.disabled,[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled:hover.disabled,[m
[31m-.datepicker.datepicker-primary table tr td span.active[disabled],[m
[31m-.datepicker.datepicker-primary table tr td span.active:hover[disabled],[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled[disabled],[m
[31m-.datepicker.datepicker-primary table tr td span.active.disabled:hover[disabled] {[m
[31m-  color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.datepicker-inline {[m
[31m-  width: 220px;[m
[31m-}[m
[31m-[m
[31m-.datepicker.datepicker-rtl {[m
[31m-  direction: rtl;[m
[31m-}[m
[31m-[m
[31m-.datepicker.datepicker-rtl.dropdown-menu {[m
[31m-  left: auto;[m
[31m-}[m
[31m-[m
[31m-.datepicker.datepicker-rtl table tr td span {[m
[31m-  float: right;[m
[31m-}[m
[31m-[m
[31m-.datepicker-dropdown {[m
[31m-  top: 0;[m
[31m-  left: 0;[m
[31m-}[m
[31m-[m
[31m-.datepicker-dropdown:before {[m
[31m-  content: '';[m
[31m-  display: inline-block;[m
[31m-  border-left: 7px solid transparent;[m
[31m-  border-right: 7px solid transparent;[m
[31m-  border-bottom: 7px solid transparent;[m
[31m-  border-top: 0;[m
[31m-  border-bottom-color: rgba(0, 0, 0, 0.2);[m
[31m-  position: absolute;[m
[31m-}[m
[31m-[m
[31m-.datepicker-dropdown:after {[m
[31m-  content: '';[m
[31m-  display: inline-block;[m
[31m-  border-left: 6px solid transparent;[m
[31m-  border-right: 6px solid transparent;[m
[31m-  border-bottom: 6px solid #fff;[m
[31m-  border-top: 0;[m
[31m-  position: absolute;[m
[31m-}[m
[31m-[m
[31m-.datepicker-dropdown.datepicker-orient-left:before {[m
[31m-  left: 6px;[m
[31m-}[m
[31m-[m
[31m-.datepicker-dropdown.datepicker-orient-left:after {[m
[31m-  left: 7px;[m
[31m-}[m
[31m-[m
[31m-.datepicker-dropdown.datepicker-orient-right:before {[m
[31m-  right: 6px;[m
[31m-}[m
[31m-[m
[31m-.datepicker-dropdown.datepicker-orient-right:after {[m
[31m-  right: 7px;[m
[31m-}[m
[31m-[m
[31m-.datepicker-dropdown.datepicker-orient-bottom:before {[m
[31m-  top: -7px;[m
[31m-}[m
[31m-[m
[31m-.datepicker-dropdown.datepicker-orient-bottom:after {[m
[31m-  top: -6px;[m
[31m-}[m
[31m-[m
[31m-.datepicker-dropdown.datepicker-orient-top:before {[m
[31m-  bottom: -7px;[m
[31m-  border-bottom: 0;[m
[31m-  border-top: 7px solid transparent;[m
[31m-}[m
[31m-[m
[31m-.datepicker-dropdown.datepicker-orient-top:after {[m
[31m-  bottom: -6px;[m
[31m-  border-bottom: 0;[m
[31m-  border-top: 6px solid #fff;[m
[31m-}[m
[31m-[m
[31m-.datepicker table {[m
[31m-  margin: 0;[m
[31m-  -webkit-touch-callout: none;[m
[31m-  -webkit-user-select: none;[m
[31m-  -khtml-user-select: none;[m
[31m-  -moz-user-select: none;[m
[31m-  -ms-user-select: none;[m
[31m-  user-select: none;[m
[31m-  width: 241px;[m
[31m-  max-width: 241px;[m
[31m-}[m
[31m-[m
[31m-.datepicker .day div,[m
[31m-.datepicker th {[m
[31m-  -webkit-transition: all 300ms ease 0s;[m
[31m-  -moz-transition: all 300ms ease 0s;[m
[31m-  -o-transition: all 300ms ease 0s;[m
[31m-  -ms-transition: all 300ms ease 0s;[m
[31m-  transition: all 300ms ease 0s;[m
[31m-  text-align: center;[m
[31m-  width: 30px;[m
[31m-  height: 30px;[m
[31m-  line-height: 2.2;[m
[31m-  -webkit-border-radius: 4px;[m
[31m-  -moz-border-radius: 4px;[m
[31m-  border-radius: 50%;[m
[31m-  font-weight: 300;[m
[31m-  font-size: 14px;[m
[31m-  border: none;[m
[31m-  z-index: 1;[m
[31m-  position: relative;[m
[31m-  cursor: pointer;[m
[31m-}[m
[31m-[m
[31m-.datepicker th {[m
[31m-  color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.table-condensed>tbody>tr>td,[m
[31m-.table-condensed>tbody>tr>th,[m
[31m-.table-condensed>tfoot>tr>td,[m
[31m-.table-condensed>tfoot>tr>th,[m
[31m-.table-condensed>thead>tr>td,[m
[31m-.table-condensed>thead>tr>th {[m
[31m-  padding: 2px;[m
[31m-  text-align: center;[m
[31m-  cursor: pointer;[m
[31m-}[m
[31m-[m
[31m-.table-striped .datepicker table tr td,[m
[31m-.table-striped .datepicker table tr th {[m
[31m-  background-color: transparent;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.day:hover div,[m
[31m-.datepicker table tr td.day.focused div {[m
[31m-  background: #eee;[m
[31m-  cursor: pointer;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.old,[m
[31m-.datepicker table tr td.new {[m
[31m-  color: #888888;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.disabled,[m
[31m-.datepicker table tr td.disabled:hover {[m
[31m-  background: none;[m
[31m-  color: #888888;[m
[31m-  cursor: default;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.highlighted {[m
[31m-  background: #d9edf7;[m
[31m-  border-radius: 0;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.today,[m
[31m-.datepicker table tr td.today:hover,[m
[31m-.datepicker table tr td.today.disabled,[m
[31m-.datepicker table tr td.today.disabled:hover {[m
[31m-  background-color: #fde19a;[m
[31m-  background-image: -moz-linear-gradient(to bottom, #fdd49a, #fdf59a);[m
[31m-  background-image: -ms-linear-gradient(to bottom, #fdd49a, #fdf59a);[m
[31m-  background-image: -webkit-gradient(linear, 0 0, 0 100%, from(#fdd49a), to(#fdf59a));[m
[31m-  background-image: -webkit-linear-gradient(to bottom, #fdd49a, #fdf59a);[m
[31m-  background-image: -o-linear-gradient(to bottom, #fdd49a, #fdf59a);[m
[31m-  background-image: linear-gradient(to bottom, #fdd49a, #fdf59a);[m
[31m-  background-repeat: repeat-x;[m
[31m-  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#fdd49a', endColorstr='#fdf59a', GradientType=0);[m
[31m-  border-color: #fdf59a #fdf59a #fbed50;[m
[31m-  border-color: rgba(0, 0, 0, 0.1) rgba(0, 0, 0, 0.1) rgba(0, 0, 0, 0.25);[m
[31m-  filter: progid:DXImageTransform.Microsoft.gradient(enabled=false);[m
[31m-  color: #000;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.today:hover,[m
[31m-.datepicker table tr td.today:hover:hover,[m
[31m-.datepicker table tr td.today.disabled:hover,[m
[31m-.datepicker table tr td.today.disabled:hover:hover,[m
[31m-.datepicker table tr td.today:active,[m
[31m-.datepicker table tr td.today:hover:active,[m
[31m-.datepicker table tr td.today.disabled:active,[m
[31m-.datepicker table tr td.today.disabled:hover:active,[m
[31m-.datepicker table tr td.today.active,[m
[31m-.datepicker table tr td.today:hover.active,[m
[31m-.datepicker table tr td.today.disabled.active,[m
[31m-.datepicker table tr td.today.disabled:hover.active,[m
[31m-.datepicker table tr td.today.disabled,[m
[31m-.datepicker table tr td.today:hover.disabled,[m
[31m-.datepicker table tr td.today.disabled.disabled,[m
[31m-.datepicker table tr td.today.disabled:hover.disabled,[m
[31m-.datepicker table tr td.today[disabled],[m
[31m-.datepicker table tr td.today:hover[disabled],[m
[31m-.datepicker table tr td.today.disabled[disabled],[m
[31m-.datepicker table tr td.today.disabled:hover[disabled] {[m
[31m-  background-color: #fdf59a;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.today:active,[m
[31m-.datepicker table tr td.today:hover:active,[m
[31m-.datepicker table tr td.today.disabled:active,[m
[31m-.datepicker table tr td.today.disabled:hover:active,[m
[31m-.datepicker table tr td.today.active,[m
[31m-.datepicker table tr td.today:hover.active,[m
[31m-.datepicker table tr td.today.disabled.active,[m
[31m-.datepicker table tr td.today.disabled:hover.active {[m
[31m-  background-color: #fbf069 \9;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.today:hover:hover {[m
[31m-  color: #000;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.today.active:hover {[m
[31m-  color: #fff;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.range,[m
[31m-.datepicker table tr td.range:hover,[m
[31m-.datepicker table tr td.range.disabled,[m
[31m-.datepicker table tr td.range.disabled:hover {[m
[31m-  background: #eee;[m
[31m-  -webkit-border-radius: 0;[m
[31m-  -moz-border-radius: 0;[m
[31m-  border-radius: 0;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.range.today,[m
[31m-.datepicker table tr td.range.today:hover,[m
[31m-.datepicker table tr td.range.today.disabled,[m
[31m-.datepicker table tr td.range.today.disabled:hover {[m
[31m-  background-color: #f3d17a;[m
[31m-  background-image: -moz-linear-gradient(to bottom, #f3c17a, #f3e97a);[m
[31m-  background-image: -ms-linear-gradient(to bottom, #f3c17a, #f3e97a);[m
[31m-  background-image: -webkit-gradient(linear, 0 0, 0 100%, from(#f3c17a), to(#f3e97a));[m
[31m-  background-image: -webkit-linear-gradient(to bottom, #f3c17a, #f3e97a);[m
[31m-  background-image: -o-linear-gradient(to bottom, #f3c17a, #f3e97a);[m
[31m-  background-image: linear-gradient(to bottom, #f3c17a, #f3e97a);[m
[31m-  background-repeat: repeat-x;[m
[31m-  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#f3c17a', endColorstr='#f3e97a', GradientType=0);[m
[31m-  border-color: #f3e97a #f3e97a #edde34;[m
[31m-  border-color: rgba(0, 0, 0, 0.1) rgba(0, 0, 0, 0.1) rgba(0, 0, 0, 0.25);[m
[31m-  filter: progid:DXImageTransform.Microsoft.gradient(enabled=false);[m
[31m-  -webkit-border-radius: 0;[m
[31m-  -moz-border-radius: 0;[m
[31m-  border-radius: 0;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.range.today:hover,[m
[31m-.datepicker table tr td.range.today:hover:hover,[m
[31m-.datepicker table tr td.range.today.disabled:hover,[m
[31m-.datepicker table tr td.range.today.disabled:hover:hover,[m
[31m-.datepicker table tr td.range.today:active,[m
[31m-.datepicker table tr td.range.today:hover:active,[m
[31m-.datepicker table tr td.range.today.disabled:active,[m
[31m-.datepicker table tr td.range.today.disabled:hover:active,[m
[31m-.datepicker table tr td.range.today.active,[m
[31m-.datepicker table tr td.range.today:hover.active,[m
[31m-.datepicker table tr td.range.today.disabled.active,[m
[31m-.datepicker table tr td.range.today.disabled:hover.active,[m
[31m-.datepicker table tr td.range.today.disabled,[m
[31m-.datepicker table tr td.range.today:hover.disabled,[m
[31m-.datepicker table tr td.range.today.disabled.disabled,[m
[31m-.datepicker table tr td.range.today.disabled:hover.disabled,[m
[31m-.datepicker table tr td.range.today[disabled],[m
[31m-.datepicker table tr td.range.today:hover[disabled],[m
[31m-.datepicker table tr td.range.today.disabled[disabled],[m
[31m-.datepicker table tr td.range.today.disabled:hover[disabled] {[m
[31m-  background-color: #f3e97a;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.range.today:active,[m
[31m-.datepicker table tr td.range.today:hover:active,[m
[31m-.datepicker table tr td.range.today.disabled:active,[m
[31m-.datepicker table tr td.range.today.disabled:hover:active,[m
[31m-.datepicker table tr td.range.today.active,[m
[31m-.datepicker table tr td.range.today:hover.active,[m
[31m-.datepicker table tr td.range.today.disabled.active,[m
[31m-.datepicker table tr td.range.today.disabled:hover.active {[m
[31m-  background-color: #efe24b \9;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.selected,[m
[31m-.datepicker table tr td.selected:hover,[m
[31m-.datepicker table tr td.selected.disabled,[m
[31m-.datepicker table tr td.selected.disabled:hover {[m
[31m-  background-color: #9e9e9e;[m
[31m-  background-image: -moz-linear-gradient(to bottom, #b3b3b3, #808080);[m
[31m-  background-image: -ms-linear-gradient(to bottom, #b3b3b3, #808080);[m
[31m-  background-image: -webkit-gradient(linear, 0 0, 0 100%, from(#b3b3b3), to(#808080));[m
[31m-  background-image: -webkit-linear-gradient(to bottom, #b3b3b3, #808080);[m
[31m-  background-image: -o-linear-gradient(to bottom, #b3b3b3, #808080);[m
[31m-  background-image: linear-gradient(to bottom, #b3b3b3, #808080);[m
[31m-  background-repeat: repeat-x;[m
[31m-  filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#b3b3b3', endColorstr='#808080', GradientType=0);[m
[31m-  border-color: #808080 #808080 #595959;[m
[31m-  border-color: rgba(0, 0, 0, 0.1) rgba(0, 0, 0, 0.1) rgba(0, 0, 0, 0.25);[m
[31m-  filter: progid:DXImageTransform.Microsoft.gradient(enabled=false);[m
[31m-  color: #fff;[m
[31m-  text-shadow: 0 -1px 0 rgba(0, 0, 0, 0.25);[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.selected:hover,[m
[31m-.datepicker table tr td.selected:hover:hover,[m
[31m-.datepicker table tr td.selected.disabled:hover,[m
[31m-.datepicker table tr td.selected.disabled:hover:hover,[m
[31m-.datepicker table tr td.selected:active,[m
[31m-.datepicker table tr td.selected:hover:active,[m
[31m-.datepicker table tr td.selected.disabled:active,[m
[31m-.datepicker table tr td.selected.disabled:hover:active,[m
[31m-.datepicker table tr td.selected.active,[m
[31m-.datepicker table tr td.selected:hover.active,[m
[31m-.datepicker table tr td.selected.disabled.active,[m
[31m-.datepicker table tr td.selected.disabled:hover.active,[m
[31m-.datepicker table tr td.selected.disabled,[m
[31m-.datepicker table tr td.selected:hover.disabled,[m
[31m-.datepicker table tr td.selected.disabled.disabled,[m
[31m-.datepicker table tr td.selected.disabled:hover.disabled,[m
[31m-.datepicker table tr td.selected[disabled],[m
[31m-.datepicker table tr td.selected:hover[disabled],[m
[31m-.datepicker table tr td.selected.disabled[disabled],[m
[31m-.datepicker table tr td.selected.disabled:hover[disabled] {[m
[31m-  background-color: #808080;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.selected:active,[m
[31m-.datepicker table tr td.selected:hover:active,[m
[31m-.datepicker table tr td.selected.disabled:active,[m
[31m-.datepicker table tr td.selected.disabled:hover:active,[m
[31m-.datepicker table tr td.selected.active,[m
[31m-.datepicker table tr td.selected:hover.active,[m
[31m-.datepicker table tr td.selected.disabled.active,[m
[31m-.datepicker table tr td.selected.disabled:hover.active {[m
[31m-  background-color: #666666 \9;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.active div,[m
[31m-.datepicker table tr td.active:hover div,[m
[31m-.datepicker table tr td.active.disabled div,[m
[31m-.datepicker table tr td.active.disabled:hover div {[m
[31m-  background-color: #f96332;[m
[31m-  color: #FFFFFF;[m
[31m-  box-shadow: 0px 1px 10px 0px rgba(0, 0, 0, 0.2);[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.active:hover div,[m
[31m-.datepicker table tr td.active:hover:hover div,[m
[31m-.datepicker table tr td.active.disabled:hover div,[m
[31m-.datepicker table tr td.active.disabled:hover:hover div,[m
[31m-.datepicker table tr td.active:active div,[m
[31m-.datepicker table tr td.active:hover:active div,[m
[31m-.datepicker table tr td.active.disabled:active div,[m
[31m-.datepicker table tr td.active.disabled:hover:active div,[m
[31m-.datepicker table tr td.active.active div,[m
[31m-.datepicker table tr td.active:hover.active div,[m
[31m-.datepicker table tr td.active.disabled.active div,[m
[31m-.datepicker table tr td.active.disabled:hover.active div,[m
[31m-.datepicker table tr td.active.disabled div,[m
[31m-.datepicker table tr td.active:hover.disabled div,[m
[31m-.datepicker table tr td.active.disabled.disabled div,[m
[31m-.datepicker table tr td.active.disabled:hover.disabled div,[m
[31m-.datepicker table tr td.active[disabled] div,[m
[31m-.datepicker table tr td.active:hover[disabled] div,[m
[31m-.datepicker table tr td.active.disabled[disabled] div,[m
[31m-.datepicker table tr td.active.disabled:hover[disabled] div {[m
[31m-  background-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td.active:active,[m
[31m-.datepicker table tr td.active:hover:active,[m
[31m-.datepicker table tr td.active.disabled:active,[m
[31m-.datepicker table tr td.active.disabled:hover:active,[m
[31m-.datepicker table tr td.active.active,[m
[31m-.datepicker table tr td.active:hover.active,[m
[31m-.datepicker table tr td.active.disabled.active,[m
[31m-.datepicker table tr td.active.disabled:hover.active {[m
[31m-  background-color: #003399 \9;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td span {[m
[31m-  display: block;[m
[31m-  width: 41px;[m
[31m-  height: 41px;[m
[31m-  line-height: 41px;[m
[31m-  float: left;[m
[31m-  margin: 1%;[m
[31m-  font-size: 14px;[m
[31m-  cursor: pointer;[m
[31m-  -webkit-border-radius: 50%;[m
[31m-  -moz-border-radius: 50%;[m
[31m-  border-radius: 50%;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td span:hover,[m
[31m-.datepicker table tr td span.focused {[m
[31m-  background: #eee;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td span.disabled,[m
[31m-.datepicker table tr td span.disabled:hover {[m
[31m-  background: none;[m
[31m-  color: #888888;[m
[31m-  cursor: default;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td span.active,[m
[31m-.datepicker table tr td span.active:hover,[m
[31m-.datepicker table tr td span.active.disabled,[m
[31m-.datepicker table tr td span.active.disabled:hover {[m
[31m-  color: #fff;[m
[31m-  background-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td span.active:hover,[m
[31m-.datepicker table tr td span.active:hover:hover,[m
[31m-.datepicker table tr td span.active.disabled:hover,[m
[31m-.datepicker table tr td span.active.disabled:hover:hover,[m
[31m-.datepicker table tr td span.active:active,[m
[31m-.datepicker table tr td span.active:hover:active,[m
[31m-.datepicker table tr td span.active.disabled:active,[m
[31m-.datepicker table tr td span.active.disabled:hover:active,[m
[31m-.datepicker table tr td span.active.active,[m
[31m-.datepicker table tr td span.active:hover.active,[m
[31m-.datepicker table tr td span.active.disabled.active,[m
[31m-.datepicker table tr td span.active.disabled:hover.active,[m
[31m-.datepicker table tr td span.active.disabled,[m
[31m-.datepicker table tr td span.active:hover.disabled,[m
[31m-.datepicker table tr td span.active.disabled.disabled,[m
[31m-.datepicker table tr td span.active.disabled:hover.disabled,[m
[31m-.datepicker table tr td span.active[disabled],[m
[31m-.datepicker table tr td span.active:hover[disabled],[m
[31m-.datepicker table tr td span.active.disabled[disabled],[m
[31m-.datepicker table tr td span.active.disabled:hover[disabled] {[m
[31m-  background-color: #f96332;[m
[31m-  box-shadow: 0px 1px 10px 0px rgba(0, 0, 0, 0.2);[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td span.active:active,[m
[31m-.datepicker table tr td span.active:hover:active,[m
[31m-.datepicker table tr td span.active.disabled:active,[m
[31m-.datepicker table tr td span.active.disabled:hover:active,[m
[31m-.datepicker table tr td span.active.active,[m
[31m-.datepicker table tr td span.active:hover.active,[m
[31m-.datepicker table tr td span.active.disabled.active,[m
[31m-.datepicker table tr td span.active.disabled:hover.active {[m
[31m-  background-color: #003399 \9;[m
[31m-}[m
[31m-[m
[31m-.datepicker table tr td span.old,[m
[31m-.datepicker table tr td span.new {[m
[31m-  color: #888888;[m
[31m-}[m
[31m-[m
[31m-.datepicker .datepicker-switch {[m
[31m-  width: auto;[m
[31m-  border-radius: 0.1875rem;[m
[31m-}[m
[31m-[m
[31m-.datepicker .datepicker-switch,[m
[31m-.datepicker .prev,[m
[31m-.datepicker .next,[m
[31m-.datepicker tfoot tr th {[m
[31m-  cursor: pointer;[m
[31m-}[m
[31m-[m
[31m-.datepicker .prev,[m
[31m-.datepicker .next {[m
[31m-  width: 35px;[m
[31m-  height: 35px;[m
[31m-}[m
[31m-[m
[31m-.datepicker i {[m
[31m-  position: relative;[m
[31m-  top: 2px;[m
[31m-}[m
[31m-[m
[31m-.datepicker .prev i {[m
[31m-  left: -1px;[m
[31m-}[m
[31m-[m
[31m-.datepicker .next i {[m
[31m-  right: -1px;[m
[31m-}[m
[31m-[m
[31m-.datepicker .datepicker-switch:hover,[m
[31m-.datepicker .prev:hover,[m
[31m-.datepicker .next:hover,[m
[31m-.datepicker tfoot tr th:hover {[m
[31m-  background: #eee;[m
[31m-}[m
[31m-[m
[31m-.datepicker .prev.disabled,[m
[31m-.datepicker .next.disabled {[m
[31m-  visibility: hidden;[m
[31m-}[m
[31m-[m
[31m-.datepicker .cw {[m
[31m-  font-size: 10px;[m
[31m-  width: 12px;[m
[31m-  padding: 0 2px 0 5px;[m
[31m-  vertical-align: middle;[m
[31m-}[m
[31m-[m
[31m-.input-append.date .add-on,[m
[31m-.input-prepend.date .add-on {[m
[31m-  cursor: pointer;[m
[31m-}[m
[31m-[m
[31m-.input-append.date .add-on i,[m
[31m-.input-prepend.date .add-on i {[m
[31m-  margin-top: 3px;[m
[31m-}[m
[31m-[m
[31m-.input-daterange input {[m
[31m-  text-align: center;[m
[31m-}[m
[31m-[m
[31m-.input-daterange input:first-child {[m
[31m-  -webkit-border-radius: 3px 0 0 3px;[m
[31m-  -moz-border-radius: 3px 0 0 3px;[m
[31m-  border-radius: 3px 0 0 3px;[m
[31m-}[m
[31m-[m
[31m-.input-daterange input:last-child {[m
[31m-  -webkit-border-radius: 0 3px 3px 0;[m
[31m-  -moz-border-radius: 0 3px 3px 0;[m
[31m-  border-radius: 0 3px 3px 0;[m
[31m-}[m
[31m-[m
[31m-.input-daterange .add-on {[m
[31m-  display: inline-block;[m
[31m-  width: auto;[m
[31m-  min-width: 16px;[m
[31m-  height: 18px;[m
[31m-  padding: 4px 5px;[m
[31m-  font-weight: normal;[m
[31m-  line-height: 18px;[m
[31m-  text-align: center;[m
[31m-  text-shadow: 0 1px 0 #fff;[m
[31m-  vertical-align: middle;[m
[31m-  background-color: #eee;[m
[31m-  border: 1px solid #ccc;[m
[31m-  margin-left: -5px;[m
[31m-  margin-right: -5px;[m
[31m-}[m
[31m-[m
[31m-.table-condensed>tbody>tr>td,[m
[31m-.table-condensed>tbody>tr>th,[m
[31m-.table-condensed>tfoot>tr>td,[m
[31m-.table-condensed>tfoot>tr>th,[m
[31m-.table-condensed>thead>tr>td,[m
[31m-.table-condensed>thead>tr>th {[m
[31m-  position: relative;[m
[31m-  z-index: -1;[m
[31m-}[m
[31m-[m
[31m-.btn,[m
[31m-.navbar .navbar-nav>a.btn {[m
[31m-  border-width: 2px;[m
[31m-  font-weight: 400;[m
[31m-  font-size: 0.8571em;[m
[31m-  line-height: 1.35em;[m
[31m-  margin: 10px 1px;[m
[31m-  border: none;[m
[31m-  border-radius: 0.1875rem;[m
[31m-  padding: 11px 22px;[m
[31m-  cursor: pointer;[m
[31m-  background-color: #888888;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.btn:hover,[m
[31m-.btn:focus,[m
[31m-.btn:not(:disabled):not(.disabled):active,[m
[31m-.btn:not(:disabled):not(.disabled).active,[m
[31m-.btn:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn:active:hover,[m
[31m-.btn.active:hover,[m
[31m-.show>.btn.dropdown-toggle,[m
[31m-.show>.btn.dropdown-toggle:focus,[m
[31m-.show>.btn.dropdown-toggle:hover,[m
[31m-.navbar .navbar-nav>a.btn:hover,[m
[31m-.navbar .navbar-nav>a.btn:focus,[m
[31m-.navbar .navbar-nav>a.btn:not(:disabled):not(.disabled):active,[m
[31m-.navbar .navbar-nav>a.btn:not(:disabled):not(.disabled).active,[m
[31m-.navbar .navbar-nav>a.btn:not(:disabled):not(.disabled):active:focus,[m
[31m-.navbar .navbar-nav>a.btn:not(:disabled):not(.disabled).active:focus,[m
[31m-.navbar .navbar-nav>a.btn:active:hover,[m
[31m-.navbar .navbar-nav>a.btn.active:hover,[m
[31m-.show>.navbar .navbar-nav>a.btn.dropdown-toggle,[m
[31m-.show>.navbar .navbar-nav>a.btn.dropdown-toggle:focus,[m
[31m-.show>.navbar .navbar-nav>a.btn.dropdown-toggle:hover {[m
[31m-  background-color: #979797;[m
[31m-  color: #FFFFFF;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn:hover,[m
[31m-.navbar .navbar-nav>a.btn:hover {[m
[31m-  box-shadow: 0 3px 8px 0 rgba(0, 0, 0, 0.17);[m
[31m-}[m
[31m-[m
[31m-.btn.disabled,[m
[31m-.btn.disabled:hover,[m
[31m-.btn.disabled:focus,[m
[31m-.btn.disabled.focus,[m
[31m-.btn.disabled:active,[m
[31m-.btn.disabled.active,[m
[31m-.btn:disabled,[m
[31m-.btn:disabled:hover,[m
[31m-.btn:disabled:focus,[m
[31m-.btn:disabled.focus,[m
[31m-.btn:disabled:active,[m
[31m-.btn:disabled.active,[m
[31m-.btn[disabled],[m
[31m-.btn[disabled]:hover,[m
[31m-.btn[disabled]:focus,[m
[31m-.btn[disabled].focus,[m
[31m-.btn[disabled]:active,[m
[31m-.btn[disabled].active,[m
[31m-fieldset[disabled] .btn,[m
[31m-fieldset[disabled] .btn:hover,[m
[31m-fieldset[disabled] .btn:focus,[m
[31m-fieldset[disabled] .btn.focus,[m
[31m-fieldset[disabled] .btn:active,[m
[31m-fieldset[disabled] .btn.active,[m
[31m-.navbar .navbar-nav>a.btn.disabled,[m
[31m-.navbar .navbar-nav>a.btn.disabled:hover,[m
[31m-.navbar .navbar-nav>a.btn.disabled:focus,[m
[31m-.navbar .navbar-nav>a.btn.disabled.focus,[m
[31m-.navbar .navbar-nav>a.btn.disabled:active,[m
[31m-.navbar .navbar-nav>a.btn.disabled.active,[m
[31m-.navbar .navbar-nav>a.btn:disabled,[m
[31m-.navbar .navbar-nav>a.btn:disabled:hover,[m
[31m-.navbar .navbar-nav>a.btn:disabled:focus,[m
[31m-.navbar .navbar-nav>a.btn:disabled.focus,[m
[31m-.navbar .navbar-nav>a.btn:disabled:active,[m
[31m-.navbar .navbar-nav>a.btn:disabled.active,[m
[31m-.navbar .navbar-nav>a.btn[disabled],[m
[31m-.navbar .navbar-nav>a.btn[disabled]:hover,[m
[31m-.navbar .navbar-nav>a.btn[disabled]:focus,[m
[31m-.navbar .navbar-nav>a.btn[disabled].focus,[m
[31m-.navbar .navbar-nav>a.btn[disabled]:active,[m
[31m-.navbar .navbar-nav>a.btn[disabled].active,[m
[31m-fieldset[disabled] .navbar .navbar-nav>a.btn,[m
[31m-fieldset[disabled] .navbar .navbar-nav>a.btn:hover,[m
[31m-fieldset[disabled] .navbar .navbar-nav>a.btn:focus,[m
[31m-fieldset[disabled] .navbar .navbar-nav>a.btn.focus,[m
[31m-fieldset[disabled] .navbar .navbar-nav>a.btn:active,[m
[31m-fieldset[disabled] .navbar .navbar-nav>a.btn.active {[m
[31m-  background-color: #888888;[m
[31m-  border-color: #888888;[m
[31m-}[m
[31m-[m
[31m-.btn.btn-simple,[m
[31m-.navbar .navbar-nav>a.btn.btn-simple {[m
[31m-  color: #888888;[m
[31m-  border-color: #888888;[m
[31m-}[m
[31m-[m
[31m-.btn.btn-simple:hover,[m
[31m-.btn.btn-simple:focus,[m
[31m-.btn.btn-simple:not(:disabled):not(.disabled):active,[m
[31m-.btn.btn-simple:not(:disabled):not(.disabled).active,[m
[31m-.btn.btn-simple:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn.btn-simple:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn.btn-simple:active:hover,[m
[31m-.btn.btn-simple.active:hover,[m
[31m-.show>.btn.btn-simple.dropdown-toggle,[m
[31m-.show>.btn.btn-simple.dropdown-toggle:focus,[m
[31m-.show>.btn.btn-simple.dropdown-toggle:hover,[m
[31m-.navbar .navbar-nav>a.btn.btn-simple:hover,[m
[31m-.navbar .navbar-nav>a.btn.btn-simple:focus,[m
[31m-.navbar .navbar-nav>a.btn.btn-simple:not(:disabled):not(.disabled):active,[m
[31m-.navbar .navbar-nav>a.btn.btn-simple:not(:disabled):not(.disabled).active,[m
[31m-.navbar .navbar-nav>a.btn.btn-simple:not(:disabled):not(.disabled):active:focus,[m
[31m-.navbar .navbar-nav>a.btn.btn-simple:not(:disabled):not(.disabled).active:focus,[m
[31m-.navbar .navbar-nav>a.btn.btn-simple:active:hover,[m
[31m-.navbar .navbar-nav>a.btn.btn-simple.active:hover,[m
[31m-.show>.navbar .navbar-nav>a.btn.btn-simple.dropdown-toggle,[m
[31m-.show>.navbar .navbar-nav>a.btn.btn-simple.dropdown-toggle:focus,[m
[31m-.show>.navbar .navbar-nav>a.btn.btn-simple.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #979797;[m
[31m-  border-color: #979797;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn.btn-link,[m
[31m-.navbar .navbar-nav>a.btn.btn-link {[m
[31m-  color: #888888;[m
[31m-}[m
[31m-[m
[31m-.btn.btn-link:hover,[m
[31m-.btn.btn-link:focus,[m
[31m-.btn.btn-link:not(:disabled):not(.disabled):active,[m
[31m-.btn.btn-link:not(:disabled):not(.disabled).active,[m
[31m-.btn.btn-link:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn.btn-link:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn.btn-link:active:hover,[m
[31m-.btn.btn-link.active:hover,[m
[31m-.show>.btn.btn-link.dropdown-toggle,[m
[31m-.show>.btn.btn-link.dropdown-toggle:focus,[m
[31m-.show>.btn.btn-link.dropdown-toggle:hover,[m
[31m-.navbar .navbar-nav>a.btn.btn-link:hover,[m
[31m-.navbar .navbar-nav>a.btn.btn-link:focus,[m
[31m-.navbar .navbar-nav>a.btn.btn-link:not(:disabled):not(.disabled):active,[m
[31m-.navbar .navbar-nav>a.btn.btn-link:not(:disabled):not(.disabled).active,[m
[31m-.navbar .navbar-nav>a.btn.btn-link:not(:disabled):not(.disabled):active:focus,[m
[31m-.navbar .navbar-nav>a.btn.btn-link:not(:disabled):not(.disabled).active:focus,[m
[31m-.navbar .navbar-nav>a.btn.btn-link:active:hover,[m
[31m-.navbar .navbar-nav>a.btn.btn-link.active:hover,[m
[31m-.show>.navbar .navbar-nav>a.btn.btn-link.dropdown-toggle,[m
[31m-.show>.navbar .navbar-nav>a.btn.btn-link.dropdown-toggle:focus,[m
[31m-.show>.navbar .navbar-nav>a.btn.btn-link.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #979797;[m
[31m-  text-decoration: none;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn:hover,[m
[31m-.btn:focus,[m
[31m-.navbar .navbar-nav>a.btn:hover,[m
[31m-.navbar .navbar-nav>a.btn:focus {[m
[31m-  opacity: 1;[m
[31m-  filter: alpha(opacity=100);[m
[31m-  outline: 0 !important;[m
[31m-}[m
[31m-[m
[31m-.btn:active,[m
[31m-.btn.active,[m
[31m-.open>.btn.dropdown-toggle,[m
[31m-.navbar .navbar-nav>a.btn:active,[m
[31m-.navbar .navbar-nav>a.btn.active,[m
[31m-.open>.navbar .navbar-nav>a.btn.dropdown-toggle {[m
[31m-  -webkit-box-shadow: none;[m
[31m-  box-shadow: none;[m
[31m-  outline: 0 !important;[m
[31m-}[m
[31m-[m
[31m-.btn.btn-icon,[m
[31m-.navbar .navbar-nav>a.btn.btn-icon {[m
[31m-  height: 2.375rem;[m
[31m-  min-width: 2.375rem;[m
[31m-  width: 2.375rem;[m
[31m-  padding: 0;[m
[31m-  font-size: 0.9375rem;[m
[31m-  overflow: hidden;[m
[31m-  position: relative;[m
[31m-  line-height: normal;[m
[31m-}[m
[31m-[m
[31m-.btn.btn-icon[class*="btn-outline-"],[m
[31m-.navbar .navbar-nav>a.btn.btn-icon[class*="btn-outline-"] {[m
[31m-  padding: 0;[m
[31m-}[m
[31m-[m
[31m-.btn.btn-icon.btn-sm,[m
[31m-.navbar .navbar-nav>a.btn.btn-icon.btn-sm {[m
[31m-  height: 1.875rem;[m
[31m-  min-width: 1.875rem;[m
[31m-  width: 1.875rem;[m
[31m-}[m
[31m-[m
[31m-.btn.btn-icon.btn-sm i.fab,[m
[31m-.btn.btn-icon.btn-sm i.now-ui-icons,[m
[31m-.navbar .navbar-nav>a.btn.btn-icon.btn-sm i.fab,[m
[31m-.navbar .navbar-nav>a.btn.btn-icon.btn-sm i.now-ui-icons {[m
[31m-  font-size: 0.6875rem;[m
[31m-}[m
[31m-[m
[31m-.btn.btn-icon.btn-lg,[m
[31m-.navbar .navbar-nav>a.btn.btn-icon.btn-lg {[m
[31m-  height: 3.6rem;[m
[31m-  min-width: 3.6rem;[m
[31m-  width: 3.6rem;[m
[31m-}[m
[31m-[m
[31m-.btn.btn-icon.btn-lg i.now-ui-icons,[m
[31m-.btn.btn-icon.btn-lg i.fab,[m
[31m-.navbar .navbar-nav>a.btn.btn-icon.btn-lg i.now-ui-icons,[m
[31m-.navbar .navbar-nav>a.btn.btn-icon.btn-lg i.fab {[m
[31m-  font-size: 1.325rem;[m
[31m-}[m
[31m-[m
[31m-.btn.btn-icon:not(.btn-footer) i.now-ui-icons,[m
[31m-.btn.btn-icon:not(.btn-footer) i.fab,[m
[31m-.navbar .navbar-nav>a.btn.btn-icon:not(.btn-footer) i.now-ui-icons,[m
[31m-.navbar .navbar-nav>a.btn.btn-icon:not(.btn-footer) i.fab {[m
[31m-  position: absolute;[m
[31m-  top: 50%;[m
[31m-  left: 50%;[m
[31m-  transform: translate(-12px, -12px);[m
[31m-  line-height: 1.5626rem;[m
[31m-  width: 23px;[m
[31m-}[m
[31m-[m
[31m-.btn:not(.btn-icon) .now-ui-icons,[m
[31m-.navbar .navbar-nav>a.btn:not(.btn-icon) .now-ui-icons {[m
[31m-  position: relative;[m
[31m-  top: 1px;[m
[31m-}[m
[31m-[m
[31m-.btn-primary {[m
[31m-  background-color: #f96332;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.btn-primary:hover,[m
[31m-.btn-primary:focus,[m
[31m-.btn-primary:not(:disabled):not(.disabled):active,[m
[31m-.btn-primary:not(:disabled):not(.disabled).active,[m
[31m-.btn-primary:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-primary:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-primary:active:hover,[m
[31m-.btn-primary.active:hover,[m
[31m-.show>.btn-primary.dropdown-toggle,[m
[31m-.show>.btn-primary.dropdown-toggle:focus,[m
[31m-.show>.btn-primary.dropdown-toggle:hover {[m
[31m-  background-color: #fa7a50;[m
[31m-  color: #FFFFFF;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-primary:hover {[m
[31m-  box-shadow: 0 3px 8px 0 rgba(0, 0, 0, 0.17);[m
[31m-}[m
[31m-[m
[31m-.btn-primary.disabled,[m
[31m-.btn-primary.disabled:hover,[m
[31m-.btn-primary.disabled:focus,[m
[31m-.btn-primary.disabled.focus,[m
[31m-.btn-primary.disabled:active,[m
[31m-.btn-primary.disabled.active,[m
[31m-.btn-primary:disabled,[m
[31m-.btn-primary:disabled:hover,[m
[31m-.btn-primary:disabled:focus,[m
[31m-.btn-primary:disabled.focus,[m
[31m-.btn-primary:disabled:active,[m
[31m-.btn-primary:disabled.active,[m
[31m-.btn-primary[disabled],[m
[31m-.btn-primary[disabled]:hover,[m
[31m-.btn-primary[disabled]:focus,[m
[31m-.btn-primary[disabled].focus,[m
[31m-.btn-primary[disabled]:active,[m
[31m-.btn-primary[disabled].active,[m
[31m-fieldset[disabled] .btn-primary,[m
[31m-fieldset[disabled] .btn-primary:hover,[m
[31m-fieldset[disabled] .btn-primary:focus,[m
[31m-fieldset[disabled] .btn-primary.focus,[m
[31m-fieldset[disabled] .btn-primary:active,[m
[31m-fieldset[disabled] .btn-primary.active {[m
[31m-  background-color: #f96332;[m
[31m-  border-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.btn-primary.btn-simple {[m
[31m-  color: #f96332;[m
[31m-  border-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.btn-primary.btn-simple:hover,[m
[31m-.btn-primary.btn-simple:focus,[m
[31m-.btn-primary.btn-simple:not(:disabled):not(.disabled):active,[m
[31m-.btn-primary.btn-simple:not(:disabled):not(.disabled).active,[m
[31m-.btn-primary.btn-simple:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-primary.btn-simple:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-primary.btn-simple:active:hover,[m
[31m-.btn-primary.btn-simple.active:hover,[m
[31m-.show>.btn-primary.btn-simple.dropdown-toggle,[m
[31m-.show>.btn-primary.btn-simple.dropdown-toggle:focus,[m
[31m-.show>.btn-primary.btn-simple.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #fa7a50;[m
[31m-  border-color: #fa7a50;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-primary.btn-link {[m
[31m-  color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.btn-primary.btn-link:hover,[m
[31m-.btn-primary.btn-link:focus,[m
[31m-.btn-primary.btn-link:not(:disabled):not(.disabled):active,[m
[31m-.btn-primary.btn-link:not(:disabled):not(.disabled).active,[m
[31m-.btn-primary.btn-link:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-primary.btn-link:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-primary.btn-link:active:hover,[m
[31m-.btn-primary.btn-link.active:hover,[m
[31m-.show>.btn-primary.btn-link.dropdown-toggle,[m
[31m-.show>.btn-primary.btn-link.dropdown-toggle:focus,[m
[31m-.show>.btn-primary.btn-link.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #fa7a50;[m
[31m-  text-decoration: none;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-success {[m
[31m-  background-color: #18ce0f;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.btn-success:hover,[m
[31m-.btn-success:focus,[m
[31m-.btn-success:not(:disabled):not(.disabled):active,[m
[31m-.btn-success:not(:disabled):not(.disabled).active,[m
[31m-.btn-success:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-success:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-success:active:hover,[m
[31m-.btn-success.active:hover,[m
[31m-.show>.btn-success.dropdown-toggle,[m
[31m-.show>.btn-success.dropdown-toggle:focus,[m
[31m-.show>.btn-success.dropdown-toggle:hover {[m
[31m-  background-color: #1beb11;[m
[31m-  color: #FFFFFF;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-success:hover {[m
[31m-  box-shadow: 0 3px 8px 0 rgba(0, 0, 0, 0.17);[m
[31m-}[m
[31m-[m
[31m-.btn-success.disabled,[m
[31m-.btn-success.disabled:hover,[m
[31m-.btn-success.disabled:focus,[m
[31m-.btn-success.disabled.focus,[m
[31m-.btn-success.disabled:active,[m
[31m-.btn-success.disabled.active,[m
[31m-.btn-success:disabled,[m
[31m-.btn-success:disabled:hover,[m
[31m-.btn-success:disabled:focus,[m
[31m-.btn-success:disabled.focus,[m
[31m-.btn-success:disabled:active,[m
[31m-.btn-success:disabled.active,[m
[31m-.btn-success[disabled],[m
[31m-.btn-success[disabled]:hover,[m
[31m-.btn-success[disabled]:focus,[m
[31m-.btn-success[disabled].focus,[m
[31m-.btn-success[disabled]:active,[m
[31m-.btn-success[disabled].active,[m
[31m-fieldset[disabled] .btn-success,[m
[31m-fieldset[disabled] .btn-success:hover,[m
[31m-fieldset[disabled] .btn-success:focus,[m
[31m-fieldset[disabled] .btn-success.focus,[m
[31m-fieldset[disabled] .btn-success:active,[m
[31m-fieldset[disabled] .btn-success.active {[m
[31m-  background-color: #18ce0f;[m
[31m-  border-color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.btn-success.btn-simple {[m
[31m-  color: #18ce0f;[m
[31m-  border-color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.btn-success.btn-simple:hover,[m
[31m-.btn-success.btn-simple:focus,[m
[31m-.btn-success.btn-simple:not(:disabled):not(.disabled):active,[m
[31m-.btn-success.btn-simple:not(:disabled):not(.disabled).active,[m
[31m-.btn-success.btn-simple:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-success.btn-simple:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-success.btn-simple:active:hover,[m
[31m-.btn-success.btn-simple.active:hover,[m
[31m-.show>.btn-success.btn-simple.dropdown-toggle,[m
[31m-.show>.btn-success.btn-simple.dropdown-toggle:focus,[m
[31m-.show>.btn-success.btn-simple.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #1beb11;[m
[31m-  border-color: #1beb11;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-success.btn-link {[m
[31m-  color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.btn-success.btn-link:hover,[m
[31m-.btn-success.btn-link:focus,[m
[31m-.btn-success.btn-link:not(:disabled):not(.disabled):active,[m
[31m-.btn-success.btn-link:not(:disabled):not(.disabled).active,[m
[31m-.btn-success.btn-link:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-success.btn-link:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-success.btn-link:active:hover,[m
[31m-.btn-success.btn-link.active:hover,[m
[31m-.show>.btn-success.btn-link.dropdown-toggle,[m
[31m-.show>.btn-success.btn-link.dropdown-toggle:focus,[m
[31m-.show>.btn-success.btn-link.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #1beb11;[m
[31m-  text-decoration: none;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-info {[m
[31m-  background-color: #2CA8FF;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.btn-info:hover,[m
[31m-.btn-info:focus,[m
[31m-.btn-info:not(:disabled):not(.disabled):active,[m
[31m-.btn-info:not(:disabled):not(.disabled).active,[m
[31m-.btn-info:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-info:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-info:active:hover,[m
[31m-.btn-info.active:hover,[m
[31m-.show>.btn-info.dropdown-toggle,[m
[31m-.show>.btn-info.dropdown-toggle:focus,[m
[31m-.show>.btn-info.dropdown-toggle:hover {[m
[31m-  background-color: #4bb5ff;[m
[31m-  color: #FFFFFF;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-info:hover {[m
[31m-  box-shadow: 0 3px 8px 0 rgba(0, 0, 0, 0.17);[m
[31m-}[m
[31m-[m
[31m-.btn-info.disabled,[m
[31m-.btn-info.disabled:hover,[m
[31m-.btn-info.disabled:focus,[m
[31m-.btn-info.disabled.focus,[m
[31m-.btn-info.disabled:active,[m
[31m-.btn-info.disabled.active,[m
[31m-.btn-info:disabled,[m
[31m-.btn-info:disabled:hover,[m
[31m-.btn-info:disabled:focus,[m
[31m-.btn-info:disabled.focus,[m
[31m-.btn-info:disabled:active,[m
[31m-.btn-info:disabled.active,[m
[31m-.btn-info[disabled],[m
[31m-.btn-info[disabled]:hover,[m
[31m-.btn-info[disabled]:focus,[m
[31m-.btn-info[disabled].focus,[m
[31m-.btn-info[disabled]:active,[m
[31m-.btn-info[disabled].active,[m
[31m-fieldset[disabled] .btn-info,[m
[31m-fieldset[disabled] .btn-info:hover,[m
[31m-fieldset[disabled] .btn-info:focus,[m
[31m-fieldset[disabled] .btn-info.focus,[m
[31m-fieldset[disabled] .btn-info:active,[m
[31m-fieldset[disabled] .btn-info.active {[m
[31m-  background-color: #2CA8FF;[m
[31m-  border-color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.btn-info.btn-simple {[m
[31m-  color: #2CA8FF;[m
[31m-  border-color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.btn-info.btn-simple:hover,[m
[31m-.btn-info.btn-simple:focus,[m
[31m-.btn-info.btn-simple:not(:disabled):not(.disabled):active,[m
[31m-.btn-info.btn-simple:not(:disabled):not(.disabled).active,[m
[31m-.btn-info.btn-simple:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-info.btn-simple:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-info.btn-simple:active:hover,[m
[31m-.btn-info.btn-simple.active:hover,[m
[31m-.show>.btn-info.btn-simple.dropdown-toggle,[m
[31m-.show>.btn-info.btn-simple.dropdown-toggle:focus,[m
[31m-.show>.btn-info.btn-simple.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #4bb5ff;[m
[31m-  border-color: #4bb5ff;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-info.btn-link {[m
[31m-  color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.btn-info.btn-link:hover,[m
[31m-.btn-info.btn-link:focus,[m
[31m-.btn-info.btn-link:not(:disabled):not(.disabled):active,[m
[31m-.btn-info.btn-link:not(:disabled):not(.disabled).active,[m
[31m-.btn-info.btn-link:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-info.btn-link:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-info.btn-link:active:hover,[m
[31m-.btn-info.btn-link.active:hover,[m
[31m-.show>.btn-info.btn-link.dropdown-toggle,[m
[31m-.show>.btn-info.btn-link.dropdown-toggle:focus,[m
[31m-.show>.btn-info.btn-link.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #4bb5ff;[m
[31m-  text-decoration: none;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-warning {[m
[31m-  background-color: #FFB236;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.btn-warning:hover,[m
[31m-.btn-warning:focus,[m
[31m-.btn-warning:not(:disabled):not(.disabled):active,[m
[31m-.btn-warning:not(:disabled):not(.disabled).active,[m
[31m-.btn-warning:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-warning:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-warning:active:hover,[m
[31m-.btn-warning.active:hover,[m
[31m-.show>.btn-warning.dropdown-toggle,[m
[31m-.show>.btn-warning.dropdown-toggle:focus,[m
[31m-.show>.btn-warning.dropdown-toggle:hover {[m
[31m-  background-color: #ffbe55;[m
[31m-  color: #FFFFFF;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-warning:hover {[m
[31m-  box-shadow: 0 3px 8px 0 rgba(0, 0, 0, 0.17);[m
[31m-}[m
[31m-[m
[31m-.btn-warning.disabled,[m
[31m-.btn-warning.disabled:hover,[m
[31m-.btn-warning.disabled:focus,[m
[31m-.btn-warning.disabled.focus,[m
[31m-.btn-warning.disabled:active,[m
[31m-.btn-warning.disabled.active,[m
[31m-.btn-warning:disabled,[m
[31m-.btn-warning:disabled:hover,[m
[31m-.btn-warning:disabled:focus,[m
[31m-.btn-warning:disabled.focus,[m
[31m-.btn-warning:disabled:active,[m
[31m-.btn-warning:disabled.active,[m
[31m-.btn-warning[disabled],[m
[31m-.btn-warning[disabled]:hover,[m
[31m-.btn-warning[disabled]:focus,[m
[31m-.btn-warning[disabled].focus,[m
[31m-.btn-warning[disabled]:active,[m
[31m-.btn-warning[disabled].active,[m
[31m-fieldset[disabled] .btn-warning,[m
[31m-fieldset[disabled] .btn-warning:hover,[m
[31m-fieldset[disabled] .btn-warning:focus,[m
[31m-fieldset[disabled] .btn-warning.focus,[m
[31m-fieldset[disabled] .btn-warning:active,[m
[31m-fieldset[disabled] .btn-warning.active {[m
[31m-  background-color: #FFB236;[m
[31m-  border-color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.btn-warning.btn-simple {[m
[31m-  color: #FFB236;[m
[31m-  border-color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.btn-warning.btn-simple:hover,[m
[31m-.btn-warning.btn-simple:focus,[m
[31m-.btn-warning.btn-simple:not(:disabled):not(.disabled):active,[m
[31m-.btn-warning.btn-simple:not(:disabled):not(.disabled).active,[m
[31m-.btn-warning.btn-simple:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-warning.btn-simple:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-warning.btn-simple:active:hover,[m
[31m-.btn-warning.btn-simple.active:hover,[m
[31m-.show>.btn-warning.btn-simple.dropdown-toggle,[m
[31m-.show>.btn-warning.btn-simple.dropdown-toggle:focus,[m
[31m-.show>.btn-warning.btn-simple.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #ffbe55;[m
[31m-  border-color: #ffbe55;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-warning.btn-link {[m
[31m-  color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.btn-warning.btn-link:hover,[m
[31m-.btn-warning.btn-link:focus,[m
[31m-.btn-warning.btn-link:not(:disabled):not(.disabled):active,[m
[31m-.btn-warning.btn-link:not(:disabled):not(.disabled).active,[m
[31m-.btn-warning.btn-link:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-warning.btn-link:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-warning.btn-link:active:hover,[m
[31m-.btn-warning.btn-link.active:hover,[m
[31m-.show>.btn-warning.btn-link.dropdown-toggle,[m
[31m-.show>.btn-warning.btn-link.dropdown-toggle:focus,[m
[31m-.show>.btn-warning.btn-link.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #ffbe55;[m
[31m-  text-decoration: none;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-danger {[m
[31m-  background-color: #FF3636;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.btn-danger:hover,[m
[31m-.btn-danger:focus,[m
[31m-.btn-danger:not(:disabled):not(.disabled):active,[m
[31m-.btn-danger:not(:disabled):not(.disabled).active,[m
[31m-.btn-danger:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-danger:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-danger:active:hover,[m
[31m-.btn-danger.active:hover,[m
[31m-.show>.btn-danger.dropdown-toggle,[m
[31m-.show>.btn-danger.dropdown-toggle:focus,[m
[31m-.show>.btn-danger.dropdown-toggle:hover {[m
[31m-  background-color: #ff5555;[m
[31m-  color: #FFFFFF;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-danger:hover {[m
[31m-  box-shadow: 0 3px 8px 0 rgba(0, 0, 0, 0.17);[m
[31m-}[m
[31m-[m
[31m-.btn-danger.disabled,[m
[31m-.btn-danger.disabled:hover,[m
[31m-.btn-danger.disabled:focus,[m
[31m-.btn-danger.disabled.focus,[m
[31m-.btn-danger.disabled:active,[m
[31m-.btn-danger.disabled.active,[m
[31m-.btn-danger:disabled,[m
[31m-.btn-danger:disabled:hover,[m
[31m-.btn-danger:disabled:focus,[m
[31m-.btn-danger:disabled.focus,[m
[31m-.btn-danger:disabled:active,[m
[31m-.btn-danger:disabled.active,[m
[31m-.btn-danger[disabled],[m
[31m-.btn-danger[disabled]:hover,[m
[31m-.btn-danger[disabled]:focus,[m
[31m-.btn-danger[disabled].focus,[m
[31m-.btn-danger[disabled]:active,[m
[31m-.btn-danger[disabled].active,[m
[31m-fieldset[disabled] .btn-danger,[m
[31m-fieldset[disabled] .btn-danger:hover,[m
[31m-fieldset[disabled] .btn-danger:focus,[m
[31m-fieldset[disabled] .btn-danger.focus,[m
[31m-fieldset[disabled] .btn-danger:active,[m
[31m-fieldset[disabled] .btn-danger.active {[m
[31m-  background-color: #FF3636;[m
[31m-  border-color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.btn-danger.btn-simple {[m
[31m-  color: #FF3636;[m
[31m-  border-color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.btn-danger.btn-simple:hover,[m
[31m-.btn-danger.btn-simple:focus,[m
[31m-.btn-danger.btn-simple:not(:disabled):not(.disabled):active,[m
[31m-.btn-danger.btn-simple:not(:disabled):not(.disabled).active,[m
[31m-.btn-danger.btn-simple:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-danger.btn-simple:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-danger.btn-simple:active:hover,[m
[31m-.btn-danger.btn-simple.active:hover,[m
[31m-.show>.btn-danger.btn-simple.dropdown-toggle,[m
[31m-.show>.btn-danger.btn-simple.dropdown-toggle:focus,[m
[31m-.show>.btn-danger.btn-simple.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #ff5555;[m
[31m-  border-color: #ff5555;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-danger.btn-link {[m
[31m-  color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.btn-danger.btn-link:hover,[m
[31m-.btn-danger.btn-link:focus,[m
[31m-.btn-danger.btn-link:not(:disabled):not(.disabled):active,[m
[31m-.btn-danger.btn-link:not(:disabled):not(.disabled).active,[m
[31m-.btn-danger.btn-link:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-danger.btn-link:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-danger.btn-link:active:hover,[m
[31m-.btn-danger.btn-link.active:hover,[m
[31m-.show>.btn-danger.btn-link.dropdown-toggle,[m
[31m-.show>.btn-danger.btn-link.dropdown-toggle:focus,[m
[31m-.show>.btn-danger.btn-link.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #ff5555;[m
[31m-  text-decoration: none;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral {[m
[31m-  background-color: #FFFFFF;[m
[31m-  color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral:hover,[m
[31m-.btn-neutral:focus,[m
[31m-.btn-neutral:not(:disabled):not(.disabled):active,[m
[31m-.btn-neutral:not(:disabled):not(.disabled).active,[m
[31m-.btn-neutral:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-neutral:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-neutral:active:hover,[m
[31m-.btn-neutral.active:hover,[m
[31m-.show>.btn-neutral.dropdown-toggle,[m
[31m-.show>.btn-neutral.dropdown-toggle:focus,[m
[31m-.show>.btn-neutral.dropdown-toggle:hover {[m
[31m-  background-color: #FFFFFF;[m
[31m-  color: #FFFFFF;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral:hover {[m
[31m-  box-shadow: 0 3px 8px 0 rgba(0, 0, 0, 0.17);[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.disabled,[m
[31m-.btn-neutral.disabled:hover,[m
[31m-.btn-neutral.disabled:focus,[m
[31m-.btn-neutral.disabled.focus,[m
[31m-.btn-neutral.disabled:active,[m
[31m-.btn-neutral.disabled.active,[m
[31m-.btn-neutral:disabled,[m
[31m-.btn-neutral:disabled:hover,[m
[31m-.btn-neutral:disabled:focus,[m
[31m-.btn-neutral:disabled.focus,[m
[31m-.btn-neutral:disabled:active,[m
[31m-.btn-neutral:disabled.active,[m
[31m-.btn-neutral[disabled],[m
[31m-.btn-neutral[disabled]:hover,[m
[31m-.btn-neutral[disabled]:focus,[m
[31m-.btn-neutral[disabled].focus,[m
[31m-.btn-neutral[disabled]:active,[m
[31m-.btn-neutral[disabled].active,[m
[31m-fieldset[disabled] .btn-neutral,[m
[31m-fieldset[disabled] .btn-neutral:hover,[m
[31m-fieldset[disabled] .btn-neutral:focus,[m
[31m-fieldset[disabled] .btn-neutral.focus,[m
[31m-fieldset[disabled] .btn-neutral:active,[m
[31m-fieldset[disabled] .btn-neutral.active {[m
[31m-  background-color: #FFFFFF;[m
[31m-  border-color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.btn-danger {[m
[31m-  color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.btn-danger:hover,[m
[31m-.btn-neutral.btn-danger:focus,[m
[31m-.btn-neutral.btn-danger:active {[m
[31m-  color: #ff5555 !important;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.btn-primary {[m
[31m-  color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.btn-primary:hover,[m
[31m-.btn-neutral.btn-primary:focus,[m
[31m-.btn-neutral.btn-primary:active {[m
[31m-  color: #fa7a50 !important;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.btn-info {[m
[31m-  color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.btn-info:hover,[m
[31m-.btn-neutral.btn-info:focus,[m
[31m-.btn-neutral.btn-info:active {[m
[31m-  color: #4bb5ff !important;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.btn-warning {[m
[31m-  color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.btn-warning:hover,[m
[31m-.btn-neutral.btn-warning:focus,[m
[31m-.btn-neutral.btn-warning:active {[m
[31m-  color: #ffbe55 !important;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.btn-success {[m
[31m-  color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.btn-success:hover,[m
[31m-.btn-neutral.btn-success:focus,[m
[31m-.btn-neutral.btn-success:active {[m
[31m-  color: #1beb11 !important;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.btn-default {[m
[31m-  color: #888888;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.btn-default:hover,[m
[31m-.btn-neutral.btn-default:focus,[m
[31m-.btn-neutral.btn-default:active {[m
[31m-  color: #979797 !important;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral:hover,[m
[31m-.btn-neutral:focus,[m
[31m-.btn-neutral:not(:disabled):not(.disabled):active,[m
[31m-.btn-neutral:not(:disabled):not(.disabled).active,[m
[31m-.btn-neutral:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-neutral:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-neutral:active:hover,[m
[31m-.btn-neutral.active:hover,[m
[31m-.show>.btn-neutral.dropdown-toggle,[m
[31m-.show>.btn-neutral.dropdown-toggle:focus,[m
[31m-.show>.btn-neutral.dropdown-toggle:hover {[m
[31m-  background-color: #FFFFFF;[m
[31m-  color: #fa7a50;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral:hover,[m
[31m-.btn-neutral:focus {[m
[31m-  color: #fa7a50 !important;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral:hover:not(.nav-link),[m
[31m-.btn-neutral:focus:not(.nav-link) {[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.btn-simple {[m
[31m-  color: #FFFFFF;[m
[31m-  border-color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.btn-simple:hover,[m
[31m-.btn-neutral.btn-simple:focus,[m
[31m-.btn-neutral.btn-simple:not(:disabled):not(.disabled):active,[m
[31m-.btn-neutral.btn-simple:not(:disabled):not(.disabled).active,[m
[31m-.btn-neutral.btn-simple:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-neutral.btn-simple:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-neutral.btn-simple:active:hover,[m
[31m-.btn-neutral.btn-simple.active:hover,[m
[31m-.show>.btn-neutral.btn-simple.dropdown-toggle,[m
[31m-.show>.btn-neutral.btn-simple.dropdown-toggle:focus,[m
[31m-.show>.btn-neutral.btn-simple.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #FFFFFF;[m
[31m-  border-color: #FFFFFF;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.btn-link {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.btn-neutral.btn-link:hover,[m
[31m-.btn-neutral.btn-link:focus,[m
[31m-.btn-neutral.btn-link:not(:disabled):not(.disabled):active,[m
[31m-.btn-neutral.btn-link:not(:disabled):not(.disabled).active,[m
[31m-.btn-neutral.btn-link:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-neutral.btn-link:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-neutral.btn-link:active:hover,[m
[31m-.btn-neutral.btn-link.active:hover,[m
[31m-.show>.btn-neutral.btn-link.dropdown-toggle,[m
[31m-.show>.btn-neutral.btn-link.dropdown-toggle:focus,[m
[31m-.show>.btn-neutral.btn-link.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #FFFFFF;[m
[31m-  text-decoration: none;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-outline-primary {[m
[31m-  color: #f96332;[m
[31m-  border-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.btn-outline-primary:hover,[m
[31m-.btn-outline-primary:focus,[m
[31m-.btn-outline-primary:not(:disabled):not(.disabled):active,[m
[31m-.btn-outline-primary:not(:disabled):not(.disabled).active,[m
[31m-.btn-outline-primary:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-outline-primary:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-outline-primary:active:hover,[m
[31m-.btn-outline-primary.active:hover,[m
[31m-.show>.btn-outline-primary.dropdown-toggle,[m
[31m-.show>.btn-outline-primary.dropdown-toggle:focus,[m
[31m-.show>.btn-outline-primary.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #fa7a50;[m
[31m-  border-color: #fa7a50;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-outline-success {[m
[31m-  color: #18ce0f;[m
[31m-  border-color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.btn-outline-success:hover,[m
[31m-.btn-outline-success:focus,[m
[31m-.btn-outline-success:not(:disabled):not(.disabled):active,[m
[31m-.btn-outline-success:not(:disabled):not(.disabled).active,[m
[31m-.btn-outline-success:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-outline-success:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-outline-success:active:hover,[m
[31m-.btn-outline-success.active:hover,[m
[31m-.show>.btn-outline-success.dropdown-toggle,[m
[31m-.show>.btn-outline-success.dropdown-toggle:focus,[m
[31m-.show>.btn-outline-success.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #1beb11;[m
[31m-  border-color: #1beb11;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-outline-info {[m
[31m-  color: #2CA8FF;[m
[31m-  border-color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.btn-outline-info:hover,[m
[31m-.btn-outline-info:focus,[m
[31m-.btn-outline-info:not(:disabled):not(.disabled):active,[m
[31m-.btn-outline-info:not(:disabled):not(.disabled).active,[m
[31m-.btn-outline-info:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-outline-info:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-outline-info:active:hover,[m
[31m-.btn-outline-info.active:hover,[m
[31m-.show>.btn-outline-info.dropdown-toggle,[m
[31m-.show>.btn-outline-info.dropdown-toggle:focus,[m
[31m-.show>.btn-outline-info.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #4bb5ff;[m
[31m-  border-color: #4bb5ff;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-outline-warning {[m
[31m-  color: #FFB236;[m
[31m-  border-color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.btn-outline-warning:hover,[m
[31m-.btn-outline-warning:focus,[m
[31m-.btn-outline-warning:not(:disabled):not(.disabled):active,[m
[31m-.btn-outline-warning:not(:disabled):not(.disabled).active,[m
[31m-.btn-outline-warning:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-outline-warning:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-outline-warning:active:hover,[m
[31m-.btn-outline-warning.active:hover,[m
[31m-.show>.btn-outline-warning.dropdown-toggle,[m
[31m-.show>.btn-outline-warning.dropdown-toggle:focus,[m
[31m-.show>.btn-outline-warning.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #ffbe55;[m
[31m-  border-color: #ffbe55;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-outline-danger {[m
[31m-  color: #FF3636;[m
[31m-  border-color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.btn-outline-danger:hover,[m
[31m-.btn-outline-danger:focus,[m
[31m-.btn-outline-danger:not(:disabled):not(.disabled):active,[m
[31m-.btn-outline-danger:not(:disabled):not(.disabled).active,[m
[31m-.btn-outline-danger:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-outline-danger:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-outline-danger:active:hover,[m
[31m-.btn-outline-danger.active:hover,[m
[31m-.show>.btn-outline-danger.dropdown-toggle,[m
[31m-.show>.btn-outline-danger.dropdown-toggle:focus,[m
[31m-.show>.btn-outline-danger.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #ff5555;[m
[31m-  border-color: #ff5555;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-outline-default {[m
[31m-  color: #888888;[m
[31m-  border-color: #888888;[m
[31m-}[m
[31m-[m
[31m-.btn-outline-default:hover,[m
[31m-.btn-outline-default:focus,[m
[31m-.btn-outline-default:not(:disabled):not(.disabled):active,[m
[31m-.btn-outline-default:not(:disabled):not(.disabled).active,[m
[31m-.btn-outline-default:not(:disabled):not(.disabled):active:focus,[m
[31m-.btn-outline-default:not(:disabled):not(.disabled).active:focus,[m
[31m-.btn-outline-default:active:hover,[m
[31m-.btn-outline-default.active:hover,[m
[31m-.show>.btn-outline-default.dropdown-toggle,[m
[31m-.show>.btn-outline-default.dropdown-toggle:focus,[m
[31m-.show>.btn-outline-default.dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  color: #979797;[m
[31m-  border-color: #979797;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.btn-round {[m
[31m-  border-width: 1px;[m
[31m-  border-radius: 30px !important;[m
[31m-  padding: 11px 23px;[m
[31m-}[m
[31m-[m
[31m-.btn-round[class*="btn-outline-"] {[m
[31m-  padding: 10px 22px;[m
[31m-}[m
[31m-[m
[31m-[class*="btn-outline-"] {[m
[31m-  border: 1px solid;[m
[31m-  padding: 10px 22px;[m
[31m-  background-color: transparent;[m
[31m-}[m
[31m-[m
[31m-[class*="btn-outline-"].disabled,[m
[31m-[class*="btn-outline-"].disabled:hover,[m
[31m-[class*="btn-outline-"].disabled:focus,[m
[31m-[class*="btn-outline-"].disabled.focus,[m
[31m-[class*="btn-outline-"].disabled:active,[m
[31m-[class*="btn-outline-"].disabled.active,[m
[31m-[class*="btn-outline-"]:disabled,[m
[31m-[class*="btn-outline-"]:disabled:hover,[m
[31m-[class*="btn-outline-"]:disabled:focus,[m
[31m-[class*="btn-outline-"]:disabled.focus,[m
[31m-[class*="btn-outline-"]:disabled:active,[m
[31m-[class*="btn-outline-"]:disabled.active,[m
[31m-[class*="btn-outline-"][disabled],[m
[31m-[class*="btn-outline-"][disabled]:hover,[m
[31m-[class*="btn-outline-"][disabled]:focus,[m
[31m-[class*="btn-outline-"][disabled].focus,[m
[31m-[class*="btn-outline-"][disabled]:active,[m
[31m-[class*="btn-outline-"][disabled].active,[m
[31m-fieldset[disabled] [class*="btn-outline-"],[m
[31m-fieldset[disabled] [class*="btn-outline-"]:hover,[m
[31m-fieldset[disabled] [class*="btn-outline-"]:focus,[m
[31m-fieldset[disabled] [class*="btn-outline-"].focus,[m
[31m-fieldset[disabled] [class*="btn-outline-"]:active,[m
[31m-fieldset[disabled] [class*="btn-outline-"].active,[m
[31m-.btn-link.disabled,[m
[31m-.btn-link.disabled:hover,[m
[31m-.btn-link.disabled:focus,[m
[31m-.btn-link.disabled.focus,[m
[31m-.btn-link.disabled:active,[m
[31m-.btn-link.disabled.active,[m
[31m-.btn-link:disabled,[m
[31m-.btn-link:disabled:hover,[m
[31m-.btn-link:disabled:focus,[m
[31m-.btn-link:disabled.focus,[m
[31m-.btn-link:disabled:active,[m
[31m-.btn-link:disabled.active,[m
[31m-.btn-link[disabled],[m
[31m-.btn-link[disabled]:hover,[m
[31m-.btn-link[disabled]:focus,[m
[31m-.btn-link[disabled].focus,[m
[31m-.btn-link[disabled]:active,[m
[31m-.btn-link[disabled].active,[m
[31m-fieldset[disabled] .btn-link,[m
[31m-fieldset[disabled] .btn-link:hover,[m
[31m-fieldset[disabled] .btn-link:focus,[m
[31m-fieldset[disabled] .btn-link.focus,[m
[31m-fieldset[disabled] .btn-link:active,[m
[31m-fieldset[disabled] .btn-link.active {[m
[31m-  background-color: transparent;[m
[31m-}[m
[31m-[m
[31m-.btn-lg {[m
[31m-  font-size: 1em;[m
[31m-  border-radius: 0.25rem;[m
[31m-  padding: 15px 48px;[m
[31m-}[m
[31m-[m
[31m-.btn-lg[class*="btn-outline-"] {[m
[31m-  padding: 14px 47px;[m
[31m-}[m
[31m-[m
[31m-.btn-sm {[m
[31m-  font-size: 14px;[m
[31m-  border-radius: 0.1875rem;[m
[31m-  padding: 5px 15px;[m
[31m-}[m
[31m-[m
[31m-.btn-sm[class*="btn-outline-"] {[m
[31m-  padding: 4px 14px;[m
[31m-}[m
[31m-[m
[31m-.btn-link {[m
[31m-  border: 0;[m
[31m-  padding: 0.5rem 0.7rem;[m
[31m-  background-color: transparent;[m
[31m-}[m
[31m-[m
[31m-.btn-wd {[m
[31m-  min-width: 140px;[m
[31m-}[m
[31m-[m
[31m-.btn-group.select {[m
[31m-  width: 100%;[m
[31m-}[m
[31m-[m
[31m-.btn-group.select .btn {[m
[31m-  text-align: left;[m
[31m-}[m
[31m-[m
[31m-.btn-group.select .caret {[m
[31m-  position: absolute;[m
[31m-  top: 50%;[m
[31m-  margin-top: -1px;[m
[31m-  right: 8px;[m
[31m-}[m
[31m-[m
[31m-.btn-facebook,[m
[31m-.btn-facebook:hover,[m
[31m-.btn-facebookfocus,[m
[31m-.btn-facebook:active,[m
[31m-.btn-facebook:active:focus {[m
[31m-  color: #3b5998 !important;[m
[31m-}[m
[31m-[m
[31m-.btn-twitter,[m
[31m-.btn-twitter:hover,[m
[31m-.btn-twitterfocus,[m
[31m-.btn-twitter:active,[m
[31m-.btn-twitter:active:focus {[m
[31m-  color: #55acee !important;[m
[31m-}[m
[31m-[m
[31m-.btn-google,[m
[31m-.btn-google:hover,[m
[31m-.btn-googlefocus,[m
[31m-.btn-google:active,[m
[31m-.btn-google:active:focus {[m
[31m-  color: #dd4b39 !important;[m
[31m-}[m
[31m-[m
[31m-.btn-github,[m
[31m-.btn-github:hover,[m
[31m-.btn-githubfocus,[m
[31m-.btn-github:active,[m
[31m-.btn-github:active:focus {[m
[31m-  color: #333333 !important;[m
[31m-}[m
[31m-[m
[31m-.btn-linkedin,[m
[31m-.btn-linkedin:hover,[m
[31m-.btn-linkedinfocus,[m
[31m-.btn-linkedin:active,[m
[31m-.btn-linkedin:active:focus {[m
[31m-  color: #0077B5 !important;[m
[31m-}[m
[31m-[m
[31m-.form-control::-moz-placeholder {[m
[31m-  color: #888888;[m
[31m-  opacity: 0.8;[m
[31m-  filter: alpha(opacity=80);[m
[31m-}[m
[31m-[m
[31m-.form-control:-moz-placeholder {[m
[31m-  color: #888888;[m
[31m-  opacity: 0.8;[m
[31m-  filter: alpha(opacity=80);[m
[31m-}[m
[31m-[m
[31m-.form-control::-webkit-input-placeholder {[m
[31m-  color: #888888;[m
[31m-  opacity: 0.8;[m
[31m-  filter: alpha(opacity=80);[m
[31m-}[m
[31m-[m
[31m-.form-control:-ms-input-placeholder {[m
[31m-  color: #888888;[m
[31m-  opacity: 0.8;[m
[31m-  filter: alpha(opacity=80);[m
[31m-}[m
[31m-[m
[31m-.form-control {[m
[31m-  background-color: transparent;[m
[31m-  border: 1px solid #E3E3E3;[m
[31m-  border-radius: 30px;[m
[31m-  color: #2c2c2c;[m
[31m-  height: auto;[m
[31m-  line-height: normal;[m
[31m-  font-size: 0.8571em;[m
[31m-  -webkit-transition: color 0.3s ease-in-out, border-color 0.3s ease-in-out, background-color 0.3s ease-in-out;[m
[31m-  -moz-transition: color 0.3s ease-in-out, border-color 0.3s ease-in-out, background-color 0.3s ease-in-out;[m
[31m-  -o-transition: color 0.3s ease-in-out, border-color 0.3s ease-in-out, background-color 0.3s ease-in-out;[m
[31m-  -ms-transition: color 0.3s ease-in-out, border-color 0.3s ease-in-out, background-color 0.3s ease-in-out;[m
[31m-  transition: color 0.3s ease-in-out, border-color 0.3s ease-in-out, background-color 0.3s ease-in-out;[m
[31m-  -webkit-box-shadow: none;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.has-success .form-control {[m
[31m-  border-color: #E3E3E3;[m
[31m-}[m
[31m-[m
[31m-.form-control:focus {[m
[31m-  border: 1px solid #f96332;[m
[31m-  -webkit-box-shadow: none;[m
[31m-  box-shadow: none;[m
[31m-  outline: 0 !important;[m
[31m-  color: #2c2c2c;[m
[31m-}[m
[31m-[m
[31m-.form-control:focus+.input-group-text,[m
[31m-.form-control:focus~.input-group-text {[m
[31m-  border: 1px solid #f96332;[m
[31m-  border-left: none;[m
[31m-  background-color: transparent;[m
[31m-}[m
[31m-[m
[31m-.has-success .form-control,[m
[31m-.has-error .form-control,[m
[31m-.has-success .form-control:focus,[m
[31m-.has-error .form-control:focus {[m
[31m-  -webkit-box-shadow: none;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.has-success .form-control:focus {[m
[31m-  border-color: #1be611;[m
[31m-}[m
[31m-[m
[31m-.has-danger .form-control.form-control-success,[m
[31m-.has-danger .form-control.form-control-danger,[m
[31m-.has-success .form-control.form-control-success,[m
[31m-.has-success .form-control.form-control-danger {[m
[31m-  background-image: none;[m
[31m-}[m
[31m-[m
[31m-.has-danger .form-control {[m
[31m-  border-color: #ffcfcf;[m
[31m-  color: #FF3636;[m
[31m-  background-color: rgba(222, 222, 222, 0.1);[m
[31m-}[m
[31m-[m
[31m-.has-danger .form-control:focus {[m
[31m-  background-color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.form-control+.form-control-feedback {[m
[31m-  border-radius: 0.25rem;[m
[31m-  font-size: 14px;[m
[31m-  margin-top: -7px;[m
[31m-  position: absolute;[m
[31m-  right: 10px;[m
[31m-  top: 50%;[m
[31m-  vertical-align: middle;[m
[31m-}[m
[31m-[m
[31m-.open .form-control {[m
[31m-  border-radius: 0.25rem 0.25rem 0 0;[m
[31m-  border-bottom-color: transparent;[m
[31m-}[m
[31m-[m
[31m-.has-success:after,[m
[31m-.has-danger:after {[m
[31m-  font-family: 'Nucleo Outline';[m
[31m-  content: "\ea22";[m
[31m-  display: inline-block;[m
[31m-  position: absolute;[m
[31m-  right: 20px;[m
[31m-  top: 12px;[m
[31m-  color: #18ce0f;[m
[31m-  font-size: 11px;[m
[31m-}[m
[31m-[m
[31m-.has-success.input-lg:after,[m
[31m-.has-danger.input-lg:after {[m
[31m-  font-size: 13px;[m
[31m-  top: 13px;[m
[31m-}[m
[31m-[m
[31m-.has-danger:after {[m
[31m-  content: "\ea53";[m
[31m-  color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.form-group.no-border.input-lg .input-group-text,[m
[31m-.input-group.no-border.input-lg .input-group-text {[m
[31m-  padding: 15px 0 15px 19px;[m
[31m-}[m
[31m-[m
[31m-.form-group.no-border.input-lg .form-control,[m
[31m-.input-group.no-border.input-lg .form-control {[m
[31m-  padding: 15px 19px;[m
[31m-}[m
[31m-[m
[31m-.form-group.no-border.input-lg .form-control+.input-group-text,[m
[31m-.input-group.no-border.input-lg .form-control+.input-group-text {[m
[31m-  padding: 15px 19px 15px 0;[m
[31m-}[m
[31m-[m
[31m-.form-group.input-lg .form-control,[m
[31m-.input-group.input-lg .form-control {[m
[31m-  padding: 14px 18px;[m
[31m-}[m
[31m-[m
[31m-.form-group.input-lg .form-control+.input-group-text,[m
[31m-.input-group.input-lg .form-control+.input-group-text {[m
[31m-  padding: 14px 18px 14px 0;[m
[31m-}[m
[31m-[m
[31m-.form-group.input-lg .input-group-text,[m
[31m-.input-group.input-lg .input-group-text {[m
[31m-  padding: 14px 0 15px 18px;[m
[31m-}[m
[31m-[m
[31m-.form-group.input-lg .input-group-text+.form-control,[m
[31m-.input-group.input-lg .input-group-text+.form-control {[m
[31m-  padding: 15px 18px 15px 16px;[m
[31m-}[m
[31m-[m
[31m-.form-group.no-border .form-control,[m
[31m-.input-group.no-border .form-control {[m
[31m-  padding: 11px 19px;[m
[31m-}[m
[31m-[m
[31m-.form-group.no-border .form-control+.input-group-text,[m
[31m-.input-group.no-border .form-control+.input-group-text {[m
[31m-  padding: 11px 19px 11px 0;[m
[31m-}[m
[31m-[m
[31m-.form-group.no-border .input-group-text,[m
[31m-.input-group.no-border .input-group-text {[m
[31m-  padding: 11px 0 11px 19px;[m
[31m-}[m
[31m-[m
[31m-.form-group .form-control,[m
[31m-.input-group .form-control {[m
[31m-  padding: 10px 18px 10px 18px;[m
[31m-}[m
[31m-[m
[31m-.form-group .form-control+.input-group-text,[m
[31m-.input-group .form-control+.input-group-text {[m
[31m-  padding: 10px 18px 10px 0;[m
[31m-}[m
[31m-[m
[31m-.form-group .input-group-text,[m
[31m-.input-group .input-group-text {[m
[31m-  padding: 10px 0 10px 18px;[m
[31m-}[m
[31m-[m
[31m-.form-group .input-group-text+.form-control,[m
[31m-.form-group .input-group-text~.form-control,[m
[31m-.input-group .input-group-text+.form-control,[m
[31m-.input-group .input-group-text~.form-control {[m
[31m-  padding: 10px 19px 11px 16px;[m
[31m-}[m
[31m-[m
[31m-.form-group.no-border .form-control,[m
[31m-.form-group.no-border .form-control+.input-group-text,[m
[31m-.input-group.no-border .form-control,[m
[31m-.input-group.no-border .form-control+.input-group-text {[m
[31m-  background-color: rgba(222, 222, 222, 0.3);[m
[31m-  border: medium none;[m
[31m-}[m
[31m-[m
[31m-.form-group.no-border .form-control:focus,[m
[31m-.form-group.no-border .form-control:active,[m
[31m-.form-group.no-border .form-control:active,[m
[31m-.form-group.no-border .form-control+.input-group-text:focus,[m
[31m-.form-group.no-border .form-control+.input-group-text:active,[m
[31m-.form-group.no-border .form-control+.input-group-text:active,[m
[31m-.input-group.no-border .form-control:focus,[m
[31m-.input-group.no-border .form-control:active,[m
[31m-.input-group.no-border .form-control:active,[m
[31m-.input-group.no-border .form-control+.input-group-text:focus,[m
[31m-.input-group.no-border .form-control+.input-group-text:active,[m
[31m-.input-group.no-border .form-control+.input-group-text:active {[m
[31m-  border: medium none;[m
[31m-  background-color: rgba(222, 222, 222, 0.5);[m
[31m-}[m
[31m-[m
[31m-.form-group.no-border .form-control:focus+.input-group-text,[m
[31m-.input-group.no-border .form-control:focus+.input-group-text {[m
[31m-  background-color: rgba(222, 222, 222, 0.5);[m
[31m-}[m
[31m-[m
[31m-.form-group.no-border .input-group-prepend .input-group-text,[m
[31m-.input-group.no-border .input-group-prepend .input-group-text {[m
[31m-  background-color: rgba(222, 222, 222, 0.3);[m
[31m-  border: none;[m
[31m-  border-left: transparent !important;[m
[31m-}[m
[31m-[m
[31m-.form-group.no-border.input-group-focus.no-border .input-group-text,[m
[31m-.input-group.no-border.input-group-focus.no-border .input-group-text {[m
[31m-  background-color: rgba(222, 222, 222, 0.5);[m
[31m-}[m
[31m-[m
[31m-.has-error .form-control-feedback,[m
[31m-.has-error .control-label {[m
[31m-  color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.has-success .form-control-feedback,[m
[31m-.has-success .control-label {[m
[31m-  color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.input-group-text {[m
[31m-  background-color: #FFFFFF;[m
[31m-  border: 1px solid #E3E3E3;[m
[31m-  border-radius: 30px;[m
[31m-  color: #555555;[m
[31m-  -webkit-transition: color 0.3s ease-in-out, border-color 0.3s ease-in-out, background-color 0.3s ease-in-out;[m
[31m-  -moz-transition: color 0.3s ease-in-out, border-color 0.3s ease-in-out, background-color 0.3s ease-in-out;[m
[31m-  -o-transition: color 0.3s ease-in-out, border-color 0.3s ease-in-out, background-color 0.3s ease-in-out;[m
[31m-  -ms-transition: color 0.3s ease-in-out, border-color 0.3s ease-in-out, background-color 0.3s ease-in-out;[m
[31m-  transition: color 0.3s ease-in-out, border-color 0.3s ease-in-out, background-color 0.3s ease-in-out;[m
[31m-}[m
[31m-[m
[31m-.input-group-focus .input-group-text {[m
[31m-  background-color: #FFFFFF;[m
[31m-  border-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.has-success .input-group-text,[m
[31m-.has-danger .input-group-text {[m
[31m-  background-color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.has-danger .form-control:focus+.input-group-text {[m
[31m-  color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.has-success .form-control:focus+.input-group-text {[m
[31m-  color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.input-group-text+.form-control,[m
[31m-.input-group-text~.form-control {[m
[31m-  padding: -0.5rem 0.7rem;[m
[31m-  padding-left: 18px;[m
[31m-}[m
[31m-[m
[31m-.input-group-text i {[m
[31m-  width: 17px;[m
[31m-}[m
[31m-[m
[31m-.input-group,[m
[31m-.form-group {[m
[31m-  margin-bottom: 10px;[m
[31m-  position: relative;[m
[31m-}[m
[31m-[m
[31m-.input-group[disabled] .input-group-text {[m
[31m-  background-color: #E3E3E3;[m
[31m-}[m
[31m-[m
[31m-.input-group .input-group-prepend,[m
[31m-.form-group .input-group-prepend {[m
[31m-  margin-right: 0;[m
[31m-}[m
[31m-[m
[31m-.input-group .input-group-prepend .input-group-text,[m
[31m-.form-group .input-group-prepend .input-group-text {[m
[31m-  border-left: 1px solid #E3E3E3;[m
[31m-}[m
[31m-[m
[31m-.input-group .input-group-append .input-group-text,[m
[31m-.form-group .input-group-append .input-group-text {[m
[31m-  border-right: 1px solid #E3E3E3;[m
[31m-  padding: 10px 18px 10px 0;[m
[31m-}[m
[31m-[m
[31m-.input-group.input-group-focus .input-group-prepend .input-group-text,[m
[31m-.form-group.input-group-focus .input-group-prepend .input-group-text {[m
[31m-  border-left: 1px solid #f96332;[m
[31m-}[m
[31m-[m
[31m-.input-group.input-group-focus .input-group-append .input-group-text,[m
[31m-.form-group.input-group-focus .input-group-append .input-group-text {[m
[31m-  border-right: 1px solid #f96332;[m
[31m-}[m
[31m-[m
[31m-.input-group.input-group-focus.no-border .input-group-prepend .input-group-text,[m
[31m-.form-group.input-group-focus.no-border .input-group-prepend .input-group-text {[m
[31m-  border-left: transparent;[m
[31m-}[m
[31m-[m
[31m-.input-group .form-control:first-child,[m
[31m-.input-group-text:first-child,[m
[31m-.input-group-btn:first-child>.dropdown-toggle,[m
[31m-.input-group-btn:last-child>.btn:not(:last-child):not(.dropdown-toggle) {[m
[31m-  border-right: 0 none;[m
[31m-}[m
[31m-[m
[31m-.input-group .form-control:last-child,[m
[31m-.input-group-text:last-child,[m
[31m-.input-group-btn:last-child>.dropdown-toggle,[m
[31m-.input-group-btn:first-child>.btn:not(:first-child) {[m
[31m-  border-left: 0 none;[m
[31m-}[m
[31m-[m
[31m-.form-control[disabled],[m
[31m-.form-control[readonly],[m
[31m-fieldset[disabled] .form-control {[m
[31m-  background-color: #E3E3E3;[m
[31m-  color: #888888;[m
[31m-  cursor: not-allowed;[m
[31m-}[m
[31m-[m
[31m-.input-group-btn .btn {[m
[31m-  border-width: 1px;[m
[31m-  padding: 11px 0.7rem;[m
[31m-}[m
[31m-[m
[31m-.input-group-btn .btn-default:not(.btn-fill) {[m
[31m-  border-color: #DDDDDD;[m
[31m-}[m
[31m-[m
[31m-.input-group-btn:last-child>.btn {[m
[31m-  margin-left: 0;[m
[31m-}[m
[31m-[m
[31m-textarea.form-control {[m
[31m-  max-width: 100%;[m
[31m-  max-height: 80px;[m
[31m-  padding: 10px 10px 0 0;[m
[31m-  resize: none;[m
[31m-  border: none;[m
[31m-  border-bottom: 1px solid #E3E3E3;[m
[31m-  border-radius: 0;[m
[31m-  line-height: 2;[m
[31m-}[m
[31m-[m
[31m-textarea.form-control:focus,[m
[31m-textarea.form-control:active {[m
[31m-  border-left: none;[m
[31m-  border-top: none;[m
[31m-  border-right: none;[m
[31m-}[m
[31m-[m
[31m-.has-success.form-group .form-control,[m
[31m-.has-success.form-group.no-border .form-control,[m
[31m-.has-danger.form-group .form-control,[m
[31m-.has-danger.form-group.no-border .form-control {[m
[31m-  padding-right: 40px;[m
[31m-}[m
[31m-[m
[31m-.form.form-newsletter .form-group {[m
[31m-  float: left;[m
[31m-  width: 78%;[m
[31m-  margin-right: 2%;[m
[31m-  margin-top: 9px;[m
[31m-}[m
[31m-[m
[31m-.input-group .input-group-btn {[m
[31m-  padding: 0 12px;[m
[31m-}[m
[31m-[m
[31m-.form-group input[type=file] {[m
[31m-  opacity: 0;[m
[31m-  position: absolute;[m
[31m-  top: 0;[m
[31m-  right: 0;[m
[31m-  bottom: 0;[m
[31m-  left: 0;[m
[31m-  width: 100%;[m
[31m-  height: 100%;[m
[31m-  z-index: 100;[m
[31m-}[m
[31m-[m
[31m-.form-check {[m
[31m-  margin-top: .65rem;[m
[31m-  padding-left: 0;[m
[31m-}[m
[31m-[m
[31m-.form-check .form-check-label {[m
[31m-  display: inline-block;[m
[31m-  position: relative;[m
[31m-  cursor: pointer;[m
[31m-  padding-left: 35px;[m
[31m-  line-height: 26px;[m
[31m-  margin-bottom: 0;[m
[31m-  -webkit-transition: color 0.3s linear;[m
[31m-  -moz-transition: color 0.3s linear;[m
[31m-  -o-transition: color 0.3s linear;[m
[31m-  -ms-transition: color 0.3s linear;[m
[31m-  transition: color 0.3s linear;[m
[31m-}[m
[31m-[m
[31m-.radio .form-check-sign {[m
[31m-  padding-left: 28px;[m
[31m-}[m
[31m-[m
[31m-.form-check .form-check-sign::before,[m
[31m-.form-check .form-check-sign::after {[m
[31m-  content: " ";[m
[31m-  display: inline-block;[m
[31m-  position: absolute;[m
[31m-  width: 26px;[m
[31m-  height: 26px;[m
[31m-  left: 0;[m
[31m-  cursor: pointer;[m
[31m-  border-radius: 3px;[m
[31m-  top: 0;[m
[31m-  background-color: transparent;[m
[31m-  border: 1px solid #E3E3E3;[m
[31m-  -webkit-transition: opacity 0.3s linear;[m
[31m-  -moz-transition: opacity 0.3s linear;[m
[31m-  -o-transition: opacity 0.3s linear;[m
[31m-  -ms-transition: opacity 0.3s linear;[m
[31m-  transition: opacity 0.3s linear;[m
[31m-}[m
[31m-[m
[31m-.form-check .form-check-sign::after {[m
[31m-  font-family: 'Nucleo Outline';[m
[31m-  content: "\ea22";[m
[31m-  top: 0px;[m
[31m-  text-align: center;[m
[31m-  font-size: 14px;[m
[31m-  opacity: 0;[m
[31m-  color: #555555;[m
[31m-  border: 0;[m
[31m-  background-color: inherit;[m
[31m-}[m
[31m-[m
[31m-.form-check.disabled .form-check-label,[m
[31m-.form-check.disabled .form-check-label {[m
[31m-  color: #9A9A9A;[m
[31m-  opacity: .5;[m
[31m-  cursor: not-allowed;[m
[31m-}[m
[31m-[m
[31m-.form-check input[type="checkbox"],[m
[31m-.radio input[type="radio"] {[m
[31m-  opacity: 0;[m
[31m-  position: absolute;[m
[31m-  visibility: hidden;[m
[31m-}[m
[31m-[m
[31m-.form-check input[type="checkbox"]:checked+.form-check-sign::after {[m
[31m-  opacity: 1;[m
[31m-}[m
[31m-[m
[31m-.form-control input[type="checkbox"]:disabled+.form-check-sign::before,[m
[31m-.checkbox input[type="checkbox"]:disabled+.form-check-sign::after {[m
[31m-  cursor: not-allowed;[m
[31m-}[m
[31m-[m
[31m-.form-check input[type="checkbox"]:disabled+.form-check-sign,[m
[31m-.form-check input[type="radio"]:disabled+.form-check-sign {[m
[31m-  pointer-events: none;[m
[31m-}[m
[31m-[m
[31m-.form-check-radio .form-check-sign::before,[m
[31m-.form-check-radio .form-check-sign::after {[m
[31m-  content: " ";[m
[31m-  width: 20px;[m
[31m-  height: 20px;[m
[31m-  border-radius: 50%;[m
[31m-  border: 1px solid #E3E3E3;[m
[31m-  display: inline-block;[m
[31m-  position: absolute;[m
[31m-  left: 3px;[m
[31m-  top: 3px;[m
[31m-  padding: 1px;[m
[31m-  -webkit-transition: opacity 0.3s linear;[m
[31m-  -moz-transition: opacity 0.3s linear;[m
[31m-  -o-transition: opacity 0.3s linear;[m
[31m-  -ms-transition: opacity 0.3s linear;[m
[31m-  transition: opacity 0.3s linear;[m
[31m-}[m
[31m-[m
[31m-.form-check-radio input[type="radio"]+.form-check-sign:after,[m
[31m-.form-check-radio input[type="radio"] {[m
[31m-  opacity: 0;[m
[31m-}[m
[31m-[m
[31m-.form-check-radio input[type="radio"]:checked+.form-check-sign::after {[m
[31m-  width: 4px;[m
[31m-  height: 4px;[m
[31m-  background-color: #555555;[m
[31m-  border-color: #555555;[m
[31m-  top: 11px;[m
[31m-  left: 11px;[m
[31m-  opacity: 1;[m
[31m-}[m
[31m-[m
[31m-.form-check-radio input[type="radio"]:checked+.form-check-sign::after {[m
[31m-  opacity: 1;[m
[31m-}[m
[31m-[m
[31m-.form-check-radio input[type="radio"]:disabled+.form-check-sign {[m
[31m-  color: #9A9A9A;[m
[31m-}[m
[31m-[m
[31m-.form-check-radio input[type="radio"]:disabled+.form-check-sign::before,[m
[31m-.form-check-radio input[type="radio"]:disabled+.form-check-sign::after {[m
[31m-  color: #9A9A9A;[m
[31m-}[m
[31m-[m
[31m-.progress-container {[m
[31m-  position: relative;[m
[31m-}[m
[31m-[m
[31m-.progress-container+.progress-container,[m
[31m-.progress-container~.progress-container {[m
[31m-  margin-top: 15px;[m
[31m-}[m
[31m-[m
[31m-.progress-container .progress-badge {[m
[31m-  color: #888888;[m
[31m-  font-size: 0.8571em;[m
[31m-  text-transform: uppercase;[m
[31m-}[m
[31m-[m
[31m-.progress-container .progress {[m
[31m-  height: 1px;[m
[31m-  border-radius: 0;[m
[31m-  box-shadow: none;[m
[31m-  background: rgba(222, 222, 222, 0.8);[m
[31m-  margin-top: 14px;[m
[31m-}[m
[31m-[m
[31m-.progress-container .progress .progress-bar {[m
[31m-  box-shadow: none;[m
[31m-  background-color: #888888;[m
[31m-}[m
[31m-[m
[31m-.progress-container .progress .progress-value {[m
[31m-  position: absolute;[m
[31m-  top: 2px;[m
[31m-  right: 0;[m
[31m-  color: #888888;[m
[31m-  font-size: 0.8571em;[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-neutral .progress {[m
[31m-  background: rgba(255, 255, 255, 0.3);[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-neutral .progress-bar {[m
[31m-  background: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-neutral .progress-value,[m
[31m-.progress-container.progress-neutral .progress-badge {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-primary .progress {[m
[31m-  background: rgba(249, 99, 50, 0.3);[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-primary .progress-bar {[m
[31m-  background: #f96332;[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-primary .progress-value,[m
[31m-.progress-container.progress-primary .progress-badge {[m
[31m-  color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-info .progress {[m
[31m-  background: rgba(44, 168, 255, 0.3);[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-info .progress-bar {[m
[31m-  background: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-info .progress-value,[m
[31m-.progress-container.progress-info .progress-badge {[m
[31m-  color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-success .progress {[m
[31m-  background: rgba(24, 206, 15, 0.3);[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-success .progress-bar {[m
[31m-  background: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-success .progress-value,[m
[31m-.progress-container.progress-success .progress-badge {[m
[31m-  color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-warning .progress {[m
[31m-  background: rgba(255, 178, 54, 0.3);[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-warning .progress-bar {[m
[31m-  background: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-warning .progress-value,[m
[31m-.progress-container.progress-warning .progress-badge {[m
[31m-  color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-danger .progress {[m
[31m-  background: rgba(255, 54, 54, 0.3);[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-danger .progress-bar {[m
[31m-  background: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.progress-container.progress-danger .progress-value,[m
[31m-.progress-container.progress-danger .progress-badge {[m
[31m-  color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-/*           badges             */[m
[31m-[m
[31m-.badge {[m
[31m-  border-radius: 8px;[m
[31m-  padding: 4px 8px;[m
[31m-  text-transform: uppercase;[m
[31m-  font-size: 0.7142em;[m
[31m-  line-height: 12px;[m
[31m-  background-color: transparent;[m
[31m-  border: 1px solid;[m
[31m-  margin-bottom: 5px;[m
[31m-  color: #FFFFFF;[m
[31m-  border-radius: 0.875rem;[m
[31m-}[m
[31m-[m
[31m-.badge:hover,[m
[31m-.badge:focus {[m
[31m-  text-decoration: none;[m
[31m-}[m
[31m-[m
[31m-.badge-icon {[m
[31m-  padding: 0.4em 0.55em;[m
[31m-}[m
[31m-[m
[31m-.badge-icon i {[m
[31m-  font-size: 0.8em;[m
[31m-}[m
[31m-[m
[31m-.badge-default,[m
[31m-.badge-default[href]:focus,[m
[31m-.badge-default[href]:hover {[m
[31m-  border-color: #888888;[m
[31m-  background-color: #888888;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.badge-primary,[m
[31m-.badge-primary[href]:focus,[m
[31m-.badge-primary[href]:hover {[m
[31m-  border-color: #f96332;[m
[31m-  background-color: #f96332;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.badge-info,[m
[31m-.badge-info[href]:focus,[m
[31m-.badge-info[href]:hover {[m
[31m-  border-color: #2CA8FF;[m
[31m-  background-color: #2CA8FF;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.badge-success,[m
[31m-.badge-success[href]:focus,[m
[31m-.badge-success[href]:hover {[m
[31m-  border-color: #18ce0f;[m
[31m-  background-color: #18ce0f;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.badge-warning,[m
[31m-.badge-warning[href]:focus,[m
[31m-.badge-warning[href]:hover {[m
[31m-  border-color: #FFB236;[m
[31m-  background-color: #FFB236;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.badge-danger,[m
[31m-.badge-danger[href]:focus,[m
[31m-.badge-danger[href]:hover {[m
[31m-  border-color: #FF3636;[m
[31m-  background-color: #FF3636;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.badge-neutral {[m
[31m-  color: inherit !important;[m
[31m-}[m
[31m-[m
[31m-.badge-neutral,[m
[31m-.badge-neutral[href]:focus,[m
[31m-.badge-neutral[href]:hover {[m
[31m-  border-color: #FFFFFF;[m
[31m-  background-color: #FFFFFF;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.pagination .page-item .page-link {[m
[31m-  border: 0;[m
[31m-  border-radius: 30px !important;[m
[31m-  transition: all .3s;[m
[31m-  padding: 0px 11px;[m
[31m-  margin: 0 3px;[m
[31m-  min-width: 30px;[m
[31m-  text-align: center;[m
[31m-  box-shadow: none;[m
[31m-  height: 30px;[m
[31m-  line-height: 30px;[m
[31m-  color: #2c2c2c;[m
[31m-  cursor: pointer;[m
[31m-  font-size: 14px;[m
[31m-  text-transform: uppercase;[m
[31m-  background: transparent;[m
[31m-}[m
[31m-[m
[31m-.pagination .page-item .page-link:hover,[m
[31m-.pagination .page-item .page-link:focus {[m
[31m-  color: #2c2c2c;[m
[31m-  background-color: rgba(222, 222, 222, 0.3);[m
[31m-  border: none;[m
[31m-}[m
[31m-[m
[31m-.pagination .arrow-margin-left,[m
[31m-.pagination .arrow-margin-right {[m
[31m-  position: absolute;[m
[31m-}[m
[31m-[m
[31m-.pagination .arrow-margin-right {[m
[31m-  right: 0;[m
[31m-}[m
[31m-[m
[31m-.pagination .arrow-margin-left {[m
[31m-  left: 0;[m
[31m-}[m
[31m-[m
[31m-.pagination .page-item.active>.page-link {[m
[31m-  color: #E3E3E3;[m
[31m-  box-shadow: 0px 5px 25px 0px rgba(0, 0, 0, 0.2);[m
[31m-}[m
[31m-[m
[31m-.pagination .page-item.active>.page-link,[m
[31m-.pagination .page-item.active>.page-link:focus,[m
[31m-.pagination .page-item.active>.page-link:hover {[m
[31m-  background-color: #888888;[m
[31m-  border-color: #888888;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.pagination .page-item.disabled>.page-link {[m
[31m-  opacity: .5;[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.pagination.pagination-info .page-item.active>.page-link,[m
[31m-.pagination.pagination-info .page-item.active>.page-link:focus,[m
[31m-.pagination.pagination-info .page-item.active>.page-link:hover {[m
[31m-  background-color: #2CA8FF;[m
[31m-  border-color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.pagination.pagination-success .page-item.active>.page-link,[m
[31m-.pagination.pagination-success .page-item.active>.page-link:focus,[m
[31m-.pagination.pagination-success .page-item.active>.page-link:hover {[m
[31m-  background-color: #18ce0f;[m
[31m-  border-color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.pagination.pagination-primary .page-item.active>.page-link,[m
[31m-.pagination.pagination-primary .page-item.active>.page-link:focus,[m
[31m-.pagination.pagination-primary .page-item.active>.page-link:hover {[m
[31m-  background-color: #f96332;[m
[31m-  border-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.pagination.pagination-warning .page-item.active>.page-link,[m
[31m-.pagination.pagination-warning .page-item.active>.page-link:focus,[m
[31m-.pagination.pagination-warning .page-item.active>.page-link:hover {[m
[31m-  background-color: #FFB236;[m
[31m-  border-color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.pagination.pagination-danger .page-item.active>.page-link,[m
[31m-.pagination.pagination-danger .page-item.active>.page-link:focus,[m
[31m-.pagination.pagination-danger .page-item.active>.page-link:hover {[m
[31m-  background-color: #FF3636;[m
[31m-  border-color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.pagination.pagination-neutral .page-item>.page-link {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.pagination.pagination-neutral .page-item>.page-link:focus,[m
[31m-.pagination.pagination-neutral .page-item>.page-link:hover {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.pagination.pagination-neutral .page-item.active>.page-link,[m
[31m-.pagination.pagination-neutral .page-item.active>.page-link:focus,[m
[31m-.pagination.pagination-neutral .page-item.active>.page-link:hover {[m
[31m-  background-color: #FFFFFF;[m
[31m-  border-color: #FFFFFF;[m
[31m-  color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.pagination-container {[m
[31m-  display: flex;[m
[31m-  align-items: center;[m
[31m-}[m
[31m-[m
[31m-button,[m
[31m-input,[m
[31m-optgroup,[m
[31m-select,[m
[31m-textarea {[m
[31m-  font-family: "Montserrat", "Helvetica Neue", Arial, sans-serif;[m
[31m-}[m
[31m-[m
[31m-h1,[m
[31m-h2,[m
[31m-h3,[m
[31m-h4,[m
[31m-h5,[m
[31m-h6 {[m
[31m-  font-weight: 400;[m
[31m-}[m
[31m-[m
[31m-small {[m
[31m-  font-size: 60%;[m
[31m-}[m
[31m-[m
[31m-a {[m
[31m-  color: #f96332;[m
[31m-}[m
[31m-[m
[31m-a:hover,[m
[31m-a:focus {[m
[31m-  color: #f96332;[m
[31m-}[m
[31m-[m
[31m-h1,[m
[31m-.h1 {[m
[31m-  font-size: 3.5em;[m
[31m-  line-height: 1.15;[m
[31m-  margin-bottom: 30px;[m
[31m-}[m
[31m-[m
[31m-h1 small,[m
[31m-.h1 small {[m
[31m-  font-weight: 700;[m
[31m-  text-transform: uppercase;[m
[31m-  opacity: .8;[m
[31m-}[m
[31m-[m
[31m-h2,[m
[31m-.h2 {[m
[31m-  font-size: 2.5em;[m
[31m-  margin-bottom: 30px;[m
[31m-}[m
[31m-[m
[31m-h3,[m
[31m-.h3 {[m
[31m-  font-size: 1.825em;[m
[31m-  margin-bottom: 30px;[m
[31m-  line-height: 1.4em;[m
[31m-}[m
[31m-[m
[31m-h4,[m
[31m-.h4 {[m
[31m-  font-size: 1.5em;[m
[31m-  line-height: 1.45em;[m
[31m-  margin-top: 30px;[m
[31m-  margin-bottom: 15px;[m
[31m-}[m
[31m-[m
[31m-h4+.category,[m
[31m-h4.title+.category,[m
[31m-.h4+.category,[m
[31m-.h4.title+.category {[m
[31m-  margin-top: -5px;[m
[31m-}[m
[31m-[m
[31m-h5,[m
[31m-.h5 {[m
[31m-  font-size: 1.3em;[m
[31m-  line-height: 1.4em;[m
[31m-  margin-bottom: 15px;[m
[31m-}[m
[31m-[m
[31m-h5.category,[m
[31m-.h5.category {[m
[31m-  font-weight: 400;[m
[31m-}[m
[31m-[m
[31m-h6,[m
[31m-.h6 {[m
[31m-  font-size: 0.9em;[m
[31m-  font-weight: 700;[m
[31m-  text-transform: uppercase;[m
[31m-}[m
[31m-[m
[31m-p {[m
[31m-  line-height: 1.61em;[m
[31m-  font-weight: 300;[m
[31m-  font-size: 1.2em;[m
[31m-}[m
[31m-[m
[31m-.title {[m
[31m-  font-weight: 700;[m
[31m-  padding-top: 30px;[m
[31m-}[m
[31m-[m
[31m-.title.title-up {[m
[31m-  text-transform: uppercase;[m
[31m-}[m
[31m-[m
[31m-.title.title-up a {[m
[31m-  color: #2c2c2c;[m
[31m-  text-decoration: none;[m
[31m-}[m
[31m-[m
[31m-.title+.category {[m
[31m-  margin-top: -25px;[m
[31m-}[m
[31m-[m
[31m-.description,[m
[31m-.card-description,[m
[31m-.footer-big p {[m
[31m-  color: #9A9A9A;[m
[31m-  font-weight: 300;[m
[31m-}[m
[31m-[m
[31m-.category {[m
[31m-  text-transform: capitalize;[m
[31m-  font-weight: 700;[m
[31m-  color: #9A9A9A;[m
[31m-}[m
[31m-[m
[31m-.text-primary {[m
[31m-  color: #f96332 !important;[m
[31m-}[m
[31m-[m
[31m-.text-info {[m
[31m-  color: #2CA8FF !important;[m
[31m-}[m
[31m-[m
[31m-.text-success {[m
[31m-  color: #18ce0f !important;[m
[31m-}[m
[31m-[m
[31m-.text-warning {[m
[31m-  color: #FFB236 !important;[m
[31m-}[m
[31m-[m
[31m-.text-danger {[m
[31m-  color: #FF3636 !important;[m
[31m-}[m
[31m-[m
[31m-.text-black {[m
[31m-  color: #444;[m
[31m-}[m
[31m-[m
[31m-.blockquote {[m
[31m-  border-left: none;[m
[31m-  border: 1px solid #888888;[m
[31m-  padding: 20px;[m
[31m-  font-size: 1.1em;[m
[31m-  line-height: 1.8;[m
[31m-}[m
[31m-[m
[31m-.blockquote small {[m
[31m-  color: #888888;[m
[31m-  font-size: 0.8571em;[m
[31m-  text-transform: uppercase;[m
[31m-}[m
[31m-[m
[31m-.blockquote.blockquote-primary {[m
[31m-  border-color: #f96332;[m
[31m-  color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.blockquote.blockquote-primary small {[m
[31m-  color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.blockquote.blockquote-danger {[m
[31m-  border-color: #FF3636;[m
[31m-  color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.blockquote.blockquote-danger small {[m
[31m-  color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.blockquote.blockquote-white {[m
[31m-  border-color: rgba(255, 255, 255, 0.8);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.blockquote.blockquote-white small {[m
[31m-  color: rgba(255, 255, 255, 0.8);[m
[31m-}[m
[31m-[m
[31m-body {[m
[31m-  color: #2c2c2c;[m
[31m-  font-size: 14px;[m
[31m-  font-family: "Montserrat", "Helvetica Neue", Arial, sans-serif;[m
[31m-  overflow-x: hidden;[m
[31m-  -moz-osx-font-smoothing: grayscale;[m
[31m-  -webkit-font-smoothing: antialiased;[m
[31m-}[m
[31m-[m
[31m-.main {[m
[31m-  position: relative;[m
[31m-  background: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-/* Animations */[m
[31m-[m
[31m-.nav-pills .nav-link,[m
[31m-.nav-item .nav-link,[m
[31m-.navbar,[m
[31m-.nav-tabs .nav-link,[m
[31m-.tag,[m
[31m-.tag [data-role="remove"] {[m
[31m-  -webkit-transition: all 300ms ease 0s;[m
[31m-  -moz-transition: all 300ms ease 0s;[m
[31m-  -o-transition: all 300ms ease 0s;[m
[31m-  -ms-transition: all 300ms ease 0s;[m
[31m-  transition: all 300ms ease 0s;[m
[31m-}[m
[31m-[m
[31m-.card a,[m
[31m-.bootstrap-switch-label:before {[m
[31m-  -webkit-transition: all 150ms ease 0s;[m
[31m-  -moz-transition: all 150ms ease 0s;[m
[31m-  -o-transition: all 150ms ease 0s;[m
[31m-  -ms-transition: all 150ms ease 0s;[m
[31m-  transition: all 150ms ease 0s;[m
[31m-}[m
[31m-[m
[31m-.dropdown-toggle:after,[m
[31m-[data-toggle="collapse"][data-parent="#accordion"] i {[m
[31m-  -webkit-transition: transform 150ms ease 0s;[m
[31m-  -moz-transition: transform 150ms ease 0s;[m
[31m-  -o-transition: transform 150ms ease 0s;[m
[31m-  -ms-transition: all 150ms ease 0s;[m
[31m-  transition: transform 150ms ease 0s;[m
[31m-}[m
[31m-[m
[31m-.dropdown-toggle[aria-expanded="true"]:after,[m
[31m-[data-toggle="collapse"][data-parent="#accordion"][aria-expanded="true"] i {[m
[31m-  filter: progid:DXImageTransform.Microsoft.BasicImage(rotation=2);[m
[31m-  -webkit-transform: rotate(180deg);[m
[31m-  -ms-transform: rotate(180deg);[m
[31m-  transform: rotate(180deg);[m
[31m-}[m
[31m-[m
[31m-.button-bar {[m
[31m-  display: block;[m
[31m-  position: relative;[m
[31m-  width: 22px;[m
[31m-  height: 1px;[m
[31m-  border-radius: 1px;[m
[31m-  background: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.button-bar+.button-bar {[m
[31m-  margin-top: 7px;[m
[31m-}[m
[31m-[m
[31m-.button-bar:nth-child(2) {[m
[31m-  width: 17px;[m
[31m-}[m
[31m-[m
[31m-.separator-line {[m
[31m-  height: 2px;[m
[31m-  width: 44px;[m
[31m-  background-color: #888888;[m
[31m-  margin: 20px auto;[m
[31m-}[m
[31m-[m
[31m-.separator-line.separator-primary {[m
[31m-  background-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.section-space {[m
[31m-  height: 62px;[m
[31m-  display: block;[m
[31m-}[m
[31m-[m
[31m-.pull-left {[m
[31m-  float: left;[m
[31m-}[m
[31m-[m
[31m-.pull-right {[m
[31m-  float: right;[m
[31m-}[m
[31m-[m
[31m-.title-up {[m
[31m-  text-transform: uppercase;[m
[31m-}[m
[31m-[m
[31m-.nav-pills.nav-pills-just-icons .nav-item .nav-link {[m
[31m-  text-align: center;[m
[31m-  border-radius: 50%;[m
[31m-  height: 80px;[m
[31m-  width: 80px;[m
[31m-  padding: 0;[m
[31m-  max-width: 80px;[m
[31m-  min-width: auto;[m
[31m-  margin-bottom: 4px;[m
[31m-}[m
[31m-[m
[31m-.nav-pills.nav-pills-just-icons .nav-item .nav-link i {[m
[31m-  line-height: 80px;[m
[31m-}[m
[31m-[m
[31m-.nav-pills:not(.flex-column) .nav-item:not(:last-child) .nav-link {[m
[31m-  margin-right: 19px;[m
[31m-}[m
[31m-[m
[31m-.nav-pills .nav-item .nav-link {[m
[31m-  padding: 10px 23px;[m
[31m-  background-color: rgba(222, 222, 222, 0.3);[m
[31m-  min-width: 100px;[m
[31m-  font-weight: 400;[m
[31m-  text-align: center;[m
[31m-  color: #444;[m
[31m-}[m
[31m-[m
[31m-.nav-pills .nav-item .nav-link:hover {[m
[31m-  background-color: rgba(222, 222, 222, 0.3);[m
[31m-}[m
[31m-[m
[31m-.nav-pills .nav-item .nav-link.active,[m
[31m-.nav-pills .nav-item .nav-link.active:focus,[m
[31m-.nav-pills .nav-item .nav-link.active:hover {[m
[31m-  background-color: #9A9A9A;[m
[31m-  color: #FFFFFF;[m
[31m-  box-shadow: 0px 5px 35px 0px rgba(0, 0, 0, 0.3);[m
[31m-}[m
[31m-[m
[31m-.nav-pills .nav-item .nav-link.disabled,[m
[31m-.nav-pills .nav-item .nav-link:disabled,[m
[31m-.nav-pills .nav-item .nav-link[disabled] {[m
[31m-  opacity: .5;[m
[31m-}[m
[31m-[m
[31m-.nav-pills .nav-item i {[m
[31m-  display: block;[m
[31m-  line-height: 60px;[m
[31m-  font-size: 24px;[m
[31m-}[m
[31m-[m
[31m-.nav-pills.nav-pills-neutral .nav-item .nav-link {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.nav-pills.nav-pills-neutral .nav-item .nav-link.active,[m
[31m-.nav-pills.nav-pills-neutral .nav-item .nav-link.active:focus,[m
[31m-.nav-pills.nav-pills-neutral .nav-item .nav-link.active:hover {[m
[31m-  background-color: #FFFFFF;[m
[31m-  color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.nav-pills.nav-pills-primary .nav-item .nav-link.active,[m
[31m-.nav-pills.nav-pills-primary .nav-item .nav-link.active:focus,[m
[31m-.nav-pills.nav-pills-primary .nav-item .nav-link.active:hover {[m
[31m-  background-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.nav-pills.nav-pills-info .nav-item .nav-link.active,[m
[31m-.nav-pills.nav-pills-info .nav-item .nav-link.active:focus,[m
[31m-.nav-pills.nav-pills-info .nav-item .nav-link.active:hover {[m
[31m-  background-color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.nav-pills.nav-pills-success .nav-item .nav-link.active,[m
[31m-.nav-pills.nav-pills-success .nav-item .nav-link.active:focus,[m
[31m-.nav-pills.nav-pills-success .nav-item .nav-link.active:hover {[m
[31m-  background-color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.nav-pills.nav-pills-warning .nav-item .nav-link.active,[m
[31m-.nav-pills.nav-pills-warning .nav-item .nav-link.active:focus,[m
[31m-.nav-pills.nav-pills-warning .nav-item .nav-link.active:hover {[m
[31m-  background-color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.nav-pills.nav-pills-danger .nav-item .nav-link.active,[m
[31m-.nav-pills.nav-pills-danger .nav-item .nav-link.active:focus,[m
[31m-.nav-pills.nav-pills-danger .nav-item .nav-link.active:hover {[m
[31m-  background-color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.tab-space {[m
[31m-  padding: 20px 0 50px 0px;[m
[31m-}[m
[31m-[m
[31m-.nav-align-center {[m
[31m-  text-align: center;[m
[31m-}[m
[31m-[m
[31m-.nav-align-center .nav-pills {[m
[31m-  display: inline-flex;[m
[31m-}[m
[31m-[m
[31m-/* --------------------------------[m
[31m-[m
[31m-Nucleo Outline Web Font - nucleoapp.com/[m
[31m-License - nucleoapp.com/license/[m
[31m-Created using IcoMoon - icomoon.io[m
[31m-[m
[31m--------------------------------- */[m
[31m-[m
[31m-@font-face {[m
[31m-  font-family: 'Nucleo Outline';[m
[31m-  src: url("../fonts/nucleo-outline.eot");[m
[31m-  src: url("../fonts/nucleo-outline.eot") format("embedded-opentype"), url("../fonts/nucleo-outline.woff2") format("woff2"), url("../fonts/nucleo-outline.woff") format("woff"), url("../fonts/nucleo-outline.ttf") format("truetype");[m
[31m-  font-weight: normal;[m
[31m-  font-style: normal;[m
[31m-}[m
[31m-[m
[31m-/*------------------------[m
[31m-	base class definition[m
[31m--------------------------*/[m
[31m-[m
[31m-.now-ui-icons {[m
[31m-  display: inline-block;[m
[31m-  font: normal normal normal 14px/1 'Nucleo Outline';[m
[31m-  font-size: inherit;[m
[31m-  speak: none;[m
[31m-  text-transform: none;[m
[31m-  /* Better Font Rendering */[m
[31m-  -webkit-font-smoothing: antialiased;[m
[31m-  -moz-osx-font-smoothing: grayscale;[m
[31m-}[m
[31m-[m
[31m-/*------------------------[m
[31m-  change icon size[m
[31m--------------------------*/[m
[31m-[m
[31m-/*----------------------------------[m
[31m-  add a square/circle background[m
[31m------------------------------------*/[m
[31m-[m
[31m-.now-ui-icons.circle {[m
[31m-  padding: 0.33333333em;[m
[31m-  vertical-align: -16%;[m
[31m-  background-color: #eee;[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.circle {[m
[31m-  border-radius: 50%;[m
[31m-}[m
[31m-[m
[31m-/*------------------------[m
[31m-  list icons[m
[31m--------------------------*/[m
[31m-[m
[31m-.nc-icon-ul {[m
[31m-  padding-left: 0;[m
[31m-  margin-left: 2.14285714em;[m
[31m-  list-style-type: none;[m
[31m-}[m
[31m-[m
[31m-.nc-icon-ul>li {[m
[31m-  position: relative;[m
[31m-}[m
[31m-[m
[31m-.nc-icon-ul>li>.now-ui-icons {[m
[31m-  position: absolute;[m
[31m-  left: -1.57142857em;[m
[31m-  top: 0.14285714em;[m
[31m-  text-align: center;[m
[31m-}[m
[31m-[m
[31m-.nc-icon-ul>li>.now-ui-icons.circle {[m
[31m-  top: -0.19047619em;[m
[31m-  left: -1.9047619em;[m
[31m-}[m
[31m-[m
[31m-/*------------------------[m
[31m-  spinning icons[m
[31m--------------------------*/[m
[31m-[m
[31m-.now-ui-icons.spin {[m
[31m-  -webkit-animation: nc-icon-spin 2s infinite linear;[m
[31m-  -moz-animation: nc-icon-spin 2s infinite linear;[m
[31m-  animation: nc-icon-spin 2s infinite linear;[m
[31m-}[m
[31m-[m
[31m-@-webkit-keyframes nc-icon-spin {[m
[31m-  0% {[m
[31m-    -webkit-transform: rotate(0deg);[m
[31m-  }[m
[31m-  100% {[m
[31m-    -webkit-transform: rotate(360deg);[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@-moz-keyframes nc-icon-spin {[m
[31m-  0% {[m
[31m-    -moz-transform: rotate(0deg);[m
[31m-  }[m
[31m-  100% {[m
[31m-    -moz-transform: rotate(360deg);[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@keyframes nc-icon-spin {[m
[31m-  0% {[m
[31m-    -webkit-transform: rotate(0deg);[m
[31m-    -moz-transform: rotate(0deg);[m
[31m-    -ms-transform: rotate(0deg);[m
[31m-    -o-transform: rotate(0deg);[m
[31m-    transform: rotate(0deg);[m
[31m-  }[m
[31m-  100% {[m
[31m-    -webkit-transform: rotate(360deg);[m
[31m-    -moz-transform: rotate(360deg);[m
[31m-    -ms-transform: rotate(360deg);[m
[31m-    -o-transform: rotate(360deg);[m
[31m-    transform: rotate(360deg);[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-/*------------------------[m
[31m-  rotated/flipped icons[m
[31m--------------------------*/[m
[31m-[m
[31m-/*------------------------[m
[31m-	font icons[m
[31m--------------------------*/[m
[31m-[m
[31m-.now-ui-icons.ui-1_check:before {[m
[31m-  content: "\ea22";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.ui-1_email-85:before {[m
[31m-  content: "\ea2a";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.arrows-1_cloud-download-93:before {[m
[31m-  content: "\ea21";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.arrows-1_cloud-upload-94:before {[m
[31m-  content: "\ea24";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.arrows-1_minimal-down:before {[m
[31m-  content: "\ea39";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.arrows-1_minimal-left:before {[m
[31m-  content: "\ea3a";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.arrows-1_minimal-right:before {[m
[31m-  content: "\ea3b";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.arrows-1_minimal-up:before {[m
[31m-  content: "\ea3c";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.arrows-1_refresh-69:before {[m
[31m-  content: "\ea44";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.arrows-1_share-66:before {[m
[31m-  content: "\ea4c";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.business_badge:before {[m
[31m-  content: "\ea09";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.business_bank:before {[m
[31m-  content: "\ea0a";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.business_briefcase-24:before {[m
[31m-  content: "\ea13";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.business_bulb-63:before {[m
[31m-  content: "\ea15";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.business_chart-bar-32:before {[m
[31m-  content: "\ea1e";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.business_chart-pie-36:before {[m
[31m-  content: "\ea1f";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.business_globe:before {[m
[31m-  content: "\ea2f";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.business_money-coins:before {[m
[31m-  content: "\ea40";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.clothes_tie-bow:before {[m
[31m-  content: "\ea5b";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.design_vector:before {[m
[31m-  content: "\ea61";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.design_app:before {[m
[31m-  content: "\ea08";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.design_bullet-list-67:before {[m
[31m-  content: "\ea14";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.design_image:before {[m
[31m-  content: "\ea33";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.design_palette:before {[m
[31m-  content: "\ea41";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.design_scissors:before {[m
[31m-  content: "\ea4a";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.design-2_html5:before {[m
[31m-  content: "\ea32";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.design-2_ruler-pencil:before {[m
[31m-  content: "\ea48";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.emoticons_satisfied:before {[m
[31m-  content: "\ea49";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.files_box:before {[m
[31m-  content: "\ea12";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.files_paper:before {[m
[31m-  content: "\ea43";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.files_single-copy-04:before {[m
[31m-  content: "\ea52";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.health_ambulance:before {[m
[31m-  content: "\ea07";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.loader_gear:before {[m
[31m-  content: "\ea4e";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.loader_refresh:before {[m
[31m-  content: "\ea44";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.location_bookmark:before {[m
[31m-  content: "\ea10";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.location_compass-05:before {[m
[31m-  content: "\ea25";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.location_map-big:before {[m
[31m-  content: "\ea3d";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.location_pin:before {[m
[31m-  content: "\ea47";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.location_world:before {[m
[31m-  content: "\ea63";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.media-1_album:before {[m
[31m-  content: "\ea02";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.media-1_button-pause:before {[m
[31m-  content: "\ea16";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.media-1_button-play:before {[m
[31m-  content: "\ea18";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.media-1_button-power:before {[m
[31m-  content: "\ea19";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.media-1_camera-compact:before {[m
[31m-  content: "\ea1c";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.media-2_note-03:before {[m
[31m-  content: "\ea3f";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.media-2_sound-wave:before {[m
[31m-  content: "\ea57";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.objects_diamond:before {[m
[31m-  content: "\ea29";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.objects_globe:before {[m
[31m-  content: "\ea2f";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.objects_key-25:before {[m
[31m-  content: "\ea38";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.objects_planet:before {[m
[31m-  content: "\ea46";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.objects_spaceship:before {[m
[31m-  content: "\ea55";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.objects_support-17:before {[m
[31m-  content: "\ea56";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.objects_umbrella-13:before {[m
[31m-  content: "\ea5f";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.education_agenda-bookmark:before {[m
[31m-  content: "\ea01";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.education_atom:before {[m
[31m-  content: "\ea0c";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.education_glasses:before {[m
[31m-  content: "\ea2d";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.education_hat:before {[m
[31m-  content: "\ea30";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.education_paper:before {[m
[31m-  content: "\ea42";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.shopping_bag-16:before {[m
[31m-  content: "\ea0d";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.shopping_basket:before {[m
[31m-  content: "\ea0b";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.shopping_box:before {[m
[31m-  content: "\ea11";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.shopping_cart-simple:before {[m
[31m-  content: "\ea1d";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.shopping_credit-card:before {[m
[31m-  content: "\ea28";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.shopping_delivery-fast:before {[m
[31m-  content: "\ea27";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.shopping_shop:before {[m
[31m-  content: "\ea50";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.shopping_tag-content:before {[m
[31m-  content: "\ea59";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.sport_trophy:before {[m
[31m-  content: "\ea5d";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.sport_user-run:before {[m
[31m-  content: "\ea60";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.tech_controller-modern:before {[m
[31m-  content: "\ea26";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.tech_headphones:before {[m
[31m-  content: "\ea31";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.tech_laptop:before {[m
[31m-  content: "\ea36";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.tech_mobile:before {[m
[31m-  content: "\ea3e";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.tech_tablet:before {[m
[31m-  content: "\ea58";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.tech_tv:before {[m
[31m-  content: "\ea5e";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.tech_watch-time:before {[m
[31m-  content: "\ea62";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.text_align-center:before {[m
[31m-  content: "\ea05";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.text_align-left:before {[m
[31m-  content: "\ea06";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.text_bold:before {[m
[31m-  content: "\ea0e";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.text_caps-small:before {[m
[31m-  content: "\ea1b";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.gestures_tap-01:before {[m
[31m-  content: "\ea5a";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.transportation_air-baloon:before {[m
[31m-  content: "\ea03";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.transportation_bus-front-12:before {[m
[31m-  content: "\ea17";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.travel_info:before {[m
[31m-  content: "\ea04";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.travel_istanbul:before {[m
[31m-  content: "\ea34";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.ui-1_bell-53:before {[m
[31m-  content: "\ea0f";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.ui-1_calendar-60:before {[m
[31m-  content: "\ea1a";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.ui-1_lock-circle-open:before {[m
[31m-  content: "\ea35";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.ui-1_send:before {[m
[31m-  content: "\ea4d";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.ui-1_settings-gear-63:before {[m
[31m-  content: "\ea4e";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.ui-1_simple-add:before {[m
[31m-  content: "\ea4f";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.ui-1_simple-delete:before {[m
[31m-  content: "\ea54";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.ui-1_simple-remove:before {[m
[31m-  content: "\ea53";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.ui-1_zoom-bold:before {[m
[31m-  content: "\ea64";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.ui-2_chat-round:before {[m
[31m-  content: "\ea20";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.ui-2_favourite-28:before {[m
[31m-  content: "\ea2b";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.ui-2_like:before {[m
[31m-  content: "\ea37";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.ui-2_settings-90:before {[m
[31m-  content: "\ea4b";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.ui-2_time-alarm:before {[m
[31m-  content: "\ea5c";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.users_circle-08:before {[m
[31m-  content: "\ea23";[m
[31m-}[m
[31m-[m
[31m-.now-ui-icons.users_single-02:before {[m
[31m-  content: "\ea51";[m
[31m-}[m
[31m-[m
[31m-.all-icons .font-icon-detail {[m
[31m-  text-align: center;[m
[31m-  padding: 45px 0px 30px;[m
[31m-  border: 1px solid #e5e5e5;[m
[31m-  border-radius: 0.1875rem;[m
[31m-  margin: 15px 0;[m
[31m-  min-height: 168px;[m
[31m-}[m
[31m-[m
[31m-.all-icons [class*="now-ui-icons"] {[m
[31m-  font-size: 32px;[m
[31m-}[m
[31m-[m
[31m-.all-icons .font-icon-detail p {[m
[31m-  margin: 25px auto 0;[m
[31m-  width: 100%;[m
[31m-  text-align: center;[m
[31m-  display: block;[m
[31m-  color: #B8B8B8;[m
[31m-  padding: 0 10px;[m
[31m-  font-size: 0.7142em;[m
[31m-}[m
[31m-[m
[31m-.nav-tabs {[m
[31m-  border: 0;[m
[31m-  padding: 15px 0.7rem;[m
[31m-}[m
[31m-[m
[31m-.nav-tabs:not(.nav-tabs-neutral)>.nav-item>.nav-link.active {[m
[31m-  box-shadow: 0px 5px 35px 0px rgba(0, 0, 0, 0.3);[m
[31m-}[m
[31m-[m
[31m-.card .nav-tabs {[m
[31m-  border-top-right-radius: 0.1875rem;[m
[31m-  border-top-left-radius: 0.1875rem;[m
[31m-}[m
[31m-[m
[31m-.nav-tabs>.nav-item>.nav-link {[m
[31m-  color: #888888;[m
[31m-  margin: 0;[m
[31m-  margin-right: 5px;[m
[31m-  background-color: transparent;[m
[31m-  border: 1px solid transparent;[m
[31m-  border-radius: 30px;[m
[31m-  font-size: 14px;[m
[31m-  padding: 11px 23px;[m
[31m-  line-height: 1.5;[m
[31m-}[m
[31m-[m
[31m-.nav-tabs>.nav-item>.nav-link:hover {[m
[31m-  background-color: transparent;[m
[31m-}[m
[31m-[m
[31m-.nav-tabs>.nav-item>.nav-link.active {[m
[31m-  background-color: #444;[m
[31m-  border-radius: 30px;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.nav-tabs>.nav-item>.nav-link i.now-ui-icons {[m
[31m-  font-size: 14px;[m
[31m-  position: relative;[m
[31m-  top: 1px;[m
[31m-  margin-right: 3px;[m
[31m-}[m
[31m-[m
[31m-.nav-tabs>.nav-item.disabled>.nav-link,[m
[31m-.nav-tabs>.nav-item.disabled>.nav-link:hover {[m
[31m-  color: rgba(255, 255, 255, 0.5);[m
[31m-}[m
[31m-[m
[31m-.nav-tabs.nav-tabs-neutral>.nav-item>.nav-link {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.nav-tabs.nav-tabs-neutral>.nav-item>.nav-link.active {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.nav-tabs.nav-tabs-primary>.nav-item>.nav-link.active {[m
[31m-  background-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.nav-tabs.nav-tabs-info>.nav-item>.nav-link.active {[m
[31m-  background-color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.nav-tabs.nav-tabs-danger>.nav-item>.nav-link.active {[m
[31m-  background-color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.nav-tabs.nav-tabs-warning>.nav-item>.nav-link.active {[m
[31m-  background-color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.nav-tabs.nav-tabs-success>.nav-item>.nav-link.active {[m
[31m-  background-color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.navbar {[m
[31m-  padding-top: 0.625rem;[m
[31m-  padding-bottom: 0.625rem;[m
[31m-  min-height: 53px;[m
[31m-  margin-bottom: 20px;[m
[31m-  box-shadow: 0px 0px 20px 0px rgba(0, 0, 0, 0.15);[m
[31m-}[m
[31m-[m
[31m-.navbar a {[m
[31m-  vertical-align: middle;[m
[31m-}[m
[31m-[m
[31m-.navbar a:not(.btn):not(.dropdown-item) {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.navbar p {[m
[31m-  display: inline-block;[m
[31m-  margin: 0;[m
[31m-  line-height: 21px;[m
[31m-  font-weight: inherit;[m
[31m-  font-size: inherit;[m
[31m-}[m
[31m-[m
[31m-.navbar .navbar-nav.navbar-logo {[m
[31m-  position: absolute;[m
[31m-  left: 0;[m
[31m-  right: 0;[m
[31m-  margin: 0 auto;[m
[31m-  width: 49px;[m
[31m-  top: -4px;[m
[31m-}[m
[31m-[m
[31m-.navbar .navbar-nav .nav-link.btn {[m
[31m-  padding: 11px 22px;[m
[31m-}[m
[31m-[m
[31m-.navbar .navbar-nav .nav-link.btn.btn-lg {[m
[31m-  padding: 15px 48px;[m
[31m-}[m
[31m-[m
[31m-.navbar .navbar-nav .nav-link.btn.btn-sm {[m
[31m-  padding: 5px 15px;[m
[31m-}[m
[31m-[m
[31m-.navbar .navbar-nav .nav-link:not(.btn) {[m
[31m-  text-transform: uppercase;[m
[31m-  font-size: 0.7142em;[m
[31m-  padding: 0.5rem 0.7rem;[m
[31m-  line-height: 1.625rem;[m
[31m-}[m
[31m-[m
[31m-.navbar .navbar-nav .nav-link:not(.btn) i.fab+p,[m
[31m-.navbar .navbar-nav .nav-link:not(.btn) i.now-ui-icons+p {[m
[31m-  margin-left: 3px;[m
[31m-}[m
[31m-[m
[31m-.navbar .navbar-nav .nav-link:not(.btn) i.fab,[m
[31m-.navbar .navbar-nav .nav-link:not(.btn) i.now-ui-icons {[m
[31m-  font-size: 18px;[m
[31m-  position: relative;[m
[31m-  top: 3px;[m
[31m-  text-align: center;[m
[31m-  width: 21px;[m
[31m-}[m
[31m-[m
[31m-.navbar .navbar-nav .nav-link:not(.btn) i.now-ui-icons {[m
[31m-  top: 4px;[m
[31m-  font-size: 16px;[m
[31m-}[m
[31m-[m
[31m-.navbar .navbar-nav .nav-link:not(.btn).profile-photo .profile-photo-small {[m
[31m-  width: 27px;[m
[31m-  height: 27px;[m
[31m-}[m
[31m-[m
[31m-.navbar .navbar-nav .nav-link:not(.btn).disabled {[m
[31m-  opacity: .5;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.navbar .navbar-nav .nav-item.active .nav-link:not(.btn),[m
[31m-.navbar .navbar-nav .nav-item .nav-link:not(.btn):focus,[m
[31m-.navbar .navbar-nav .nav-item .nav-link:not(.btn):hover,[m
[31m-.navbar .navbar-nav .nav-item .nav-link:not(.btn):active {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-  border-radius: 0.1875rem;[m
[31m-}[m
[31m-[m
[31m-.navbar .logo-container {[m
[31m-  width: 27px;[m
[31m-  height: 27px;[m
[31m-  overflow: hidden;[m
[31m-  margin: 0 auto;[m
[31m-  border-radius: 50%;[m
[31m-  border: 1px solid transparent;[m
[31m-}[m
[31m-[m
[31m-.navbar .navbar-brand {[m
[31m-  text-transform: uppercase;[m
[31m-  font-size: 0.8571em;[m
[31m-  padding-top: 0.5rem;[m
[31m-  padding-bottom: 0.5rem;[m
[31m-  line-height: 1.625rem;[m
[31m-}[m
[31m-[m
[31m-.navbar .navbar-toggler {[m
[31m-  width: 37px;[m
[31m-  height: 27px;[m
[31m-  outline: 0;[m
[31m-  cursor: pointer;[m
[31m-}[m
[31m-[m
[31m-.navbar .navbar-toggler.navbar-toggler-left {[m
[31m-  position: relative;[m
[31m-  left: 0;[m
[31m-  padding-left: 0;[m
[31m-}[m
[31m-[m
[31m-.navbar .navbar-toggler .navbar-toggler-bar.middle-bar {[m
[31m-  width: 17px;[m
[31m-  transition: width .2s linear;[m
[31m-}[m
[31m-[m
[31m-.navbar .navbar-toggler:hover .navbar-toggler-bar.middle-bar {[m
[31m-  width: 22px;[m
[31m-}[m
[31m-[m
[31m-.navbar .button-dropdown .navbar-toggler-bar:nth-child(2) {[m
[31m-  width: 17px;[m
[31m-}[m
[31m-[m
[31m-.navbar.navbar-transparent {[m
[31m-  background-color: transparent !important;[m
[31m-  box-shadow: none;[m
[31m-  color: #FFFFFF;[m
[31m-  padding-top: 20px !important;[m
[31m-}[m
[31m-[m
[31m-.navbar.bg-white:not(.navbar-transparent) a:not(.dropdown-item):not(.btn) {[m
[31m-  color: #888888;[m
[31m-}[m
[31m-[m
[31m-.navbar.bg-white:not(.navbar-transparent) a:not(.dropdown-item):not(.btn).disabled {[m
[31m-  opacity: .5;[m
[31m-  color: #888888;[m
[31m-}[m
[31m-[m
[31m-.navbar.bg-white:not(.navbar-transparent) .button-bar {[m
[31m-  background: #888888;[m
[31m-}[m
[31m-[m
[31m-.navbar.bg-white:not(.navbar-transparent) .nav-item.active .nav-link:not(.btn),[m
[31m-.navbar.bg-white:not(.navbar-transparent) .nav-item .nav-link:not(.btn):focus,[m
[31m-.navbar.bg-white:not(.navbar-transparent) .nav-item .nav-link:not(.btn):hover,[m
[31m-.navbar.bg-white:not(.navbar-transparent) .nav-item .nav-link:not(.btn):active {[m
[31m-  background-color: rgba(222, 222, 222, 0.3);[m
[31m-}[m
[31m-[m
[31m-.navbar.bg-white:not(.navbar-transparent) .logo-container {[m
[31m-  border: 1px solid #888888;[m
[31m-}[m
[31m-[m
[31m-.bg-default {[m
[31m-  background-color: #888888 !important;[m
[31m-}[m
[31m-[m
[31m-.bg-primary {[m
[31m-  background-color: #f96332 !important;[m
[31m-}[m
[31m-[m
[31m-.bg-info {[m
[31m-  background-color: #2CA8FF !important;[m
[31m-}[m
[31m-[m
[31m-.bg-success {[m
[31m-  background-color: #18ce0f !important;[m
[31m-}[m
[31m-[m
[31m-.bg-danger {[m
[31m-  background-color: #FF3636 !important;[m
[31m-}[m
[31m-[m
[31m-.bg-warning {[m
[31m-  background-color: #FFB236 !important;[m
[31m-}[m
[31m-[m
[31m-.bg-white {[m
[31m-  background-color: #FFFFFF !important;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu {[m
[31m-  border: 0;[m
[31m-  box-shadow: 0px 10px 50px 0px rgba(0, 0, 0, 0.2);[m
[31m-  border-radius: 0.125rem;[m
[31m-  -webkit-transition: all 150ms linear;[m
[31m-  -moz-transition: all 150ms linear;[m
[31m-  -o-transition: all 150ms linear;[m
[31m-  -ms-transition: all 150ms linear;[m
[31m-  transition: all 150ms linear;[m
[31m-  font-size: 14px;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-menu-right:before {[m
[31m-  left: auto;[m
[31m-  right: 10px;[m
[31m-}[m
[31m-[m
[31m-.dropdown .dropdown-menu {[m
[31m-  -webkit-transform: translate3d(0, -25px, 0) !important;[m
[31m-  -moz-transform: translate3d(0, -25px, 0) !important;[m
[31m-  -o-transform: translate3d(0, -25px, 0) !important;[m
[31m-  -ms-transform: translate3d(0, -25px, 0) !important;[m
[31m-  transform: translate3d(0, -25px, 0) !important;[m
[31m-  visibility: hidden;[m
[31m-  display: block;[m
[31m-  opacity: 0;[m
[31m-  filter: alpha(opacity=0);[m
[31m-  top: 100% !important;[m
[31m-}[m
[31m-[m
[31m-.dropdown.show .dropdown-menu,[m
[31m-.dropdown-menu.open {[m
[31m-  opacity: 1;[m
[31m-  filter: alpha(opacity=100);[m
[31m-  visibility: visible;[m
[31m-  -webkit-transform: translate3d(0, 0px, 0) !important;[m
[31m-  -moz-transform: translate3d(0, 0px, 0) !important;[m
[31m-  -o-transform: translate3d(0, 0px, 0) !important;[m
[31m-  -ms-transform: translate3d(0, 0px, 0) !important;[m
[31m-  transform: translate3d(0, 0px, 0) !important;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu .dropdown-item,[m
[31m-.bootstrap-select .dropdown-menu.inner li a {[m
[31m-  font-size: 0.8571em;[m
[31m-  padding-top: .6rem;[m
[31m-  padding-bottom: .6rem;[m
[31m-  margin-top: 5px;[m
[31m-  -webkit-transition: all 150ms linear;[m
[31m-  -moz-transition: all 150ms linear;[m
[31m-  -o-transition: all 150ms linear;[m
[31m-  -ms-transition: all 150ms linear;[m
[31m-  transition: all 150ms linear;[m
[31m-  outline: none;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu .dropdown-item:hover,[m
[31m-.dropdown-menu .dropdown-item:focus,[m
[31m-.bootstrap-select .dropdown-menu.inner li a:hover,[m
[31m-.bootstrap-select .dropdown-menu.inner li a:focus {[m
[31m-  background-color: rgba(222, 222, 222, 0.3);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu .dropdown-item.disabled,[m
[31m-.dropdown-menu .dropdown-item:disabled,[m
[31m-.bootstrap-select .dropdown-menu.inner li a.disabled,[m
[31m-.bootstrap-select .dropdown-menu.inner li a:disabled {[m
[31m-  color: rgba(182, 182, 182, 0.6);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu .dropdown-item.disabled:hover,[m
[31m-.dropdown-menu .dropdown-item.disabled:focus,[m
[31m-.dropdown-menu .dropdown-item:disabled:hover,[m
[31m-.dropdown-menu .dropdown-item:disabled:focus,[m
[31m-.bootstrap-select .dropdown-menu.inner li a.disabled:hover,[m
[31m-.bootstrap-select .dropdown-menu.inner li a.disabled:focus,[m
[31m-.bootstrap-select .dropdown-menu.inner li a:disabled:hover,[m
[31m-.bootstrap-select .dropdown-menu.inner li a:disabled:focus {[m
[31m-  background-color: transparent;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu:before {[m
[31m-  display: inline-block;[m
[31m-  position: absolute;[m
[31m-  width: 0;[m
[31m-  height: 0;[m
[31m-  vertical-align: middle;[m
[31m-  content: "";[m
[31m-  top: -5px;[m
[31m-  left: 10px;[m
[31m-  right: auto;[m
[31m-  color: #FFFFFF;[m
[31m-  border-bottom: .4em solid;[m
[31m-  border-right: .4em solid transparent;[m
[31m-  border-left: .4em solid transparent;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu .dropdown-divider {[m
[31m-  background-color: rgba(222, 222, 222, 0.5);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu .dropdown-header:not([href]):not([tabindex]) {[m
[31m-  color: rgba(182, 182, 182, 0.6);[m
[31m-  font-size: 0.7142em;[m
[31m-  text-transform: uppercase;[m
[31m-  font-weight: 700;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-primary {[m
[31m-  background-color: #f95823;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-primary:before {[m
[31m-  color: #f95823;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-primary .dropdown-header:not([href]):not([tabindex]) {[m
[31m-  color: rgba(255, 255, 255, 0.8);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-primary .dropdown-item {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-primary .dropdown-item:hover,[m
[31m-.dropdown-menu.dropdown-primary .dropdown-item:focus {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-primary .dropdown-divider {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-info {[m
[31m-  background-color: #1da2ff;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-info:before {[m
[31m-  color: #1da2ff;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-info .dropdown-header:not([href]):not([tabindex]) {[m
[31m-  color: rgba(255, 255, 255, 0.8);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-info .dropdown-item {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-info .dropdown-item:hover,[m
[31m-.dropdown-menu.dropdown-info .dropdown-item:focus {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-info .dropdown-divider {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-danger {[m
[31m-  background-color: #ff2727;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-danger:before {[m
[31m-  color: #ff2727;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-danger .dropdown-header:not([href]):not([tabindex]) {[m
[31m-  color: rgba(255, 255, 255, 0.8);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-danger .dropdown-item {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-danger .dropdown-item:hover,[m
[31m-.dropdown-menu.dropdown-danger .dropdown-item:focus {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-danger .dropdown-divider {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-success {[m
[31m-  background-color: #16c00e;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-success:before {[m
[31m-  color: #16c00e;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-success .dropdown-header:not([href]):not([tabindex]) {[m
[31m-  color: rgba(255, 255, 255, 0.8);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-success .dropdown-item {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-success .dropdown-item:hover,[m
[31m-.dropdown-menu.dropdown-success .dropdown-item:focus {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-success .dropdown-divider {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-warning {[m
[31m-  background-color: #ffac27;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-warning:before {[m
[31m-  color: #ffac27;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-warning .dropdown-header:not([href]):not([tabindex]) {[m
[31m-  color: rgba(255, 255, 255, 0.8);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-warning .dropdown-item {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-warning .dropdown-item:hover,[m
[31m-.dropdown-menu.dropdown-warning .dropdown-item:focus {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-}[m
[31m-[m
[31m-.dropdown-menu.dropdown-warning .dropdown-divider {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-}[m
[31m-[m
[31m-.button-dropdown {[m
[31m-  padding-right: 0.7rem;[m
[31m-  cursor: pointer;[m
[31m-}[m
[31m-[m
[31m-.button-dropdown .dropdown-toggle {[m
[31m-  padding-top: 0.5rem;[m
[31m-  padding-bottom: 0.5rem;[m
[31m-  display: block;[m
[31m-}[m
[31m-[m
[31m-.button-dropdown .dropdown-toggle:after {[m
[31m-  display: none;[m
[31m-}[m
[31m-[m
[31m-.alert {[m
[31m-  border: 0;[m
[31m-  border-radius: 0;[m
[31m-  color: #FFFFFF;[m
[31m-  padding-top: .9rem;[m
[31m-  padding-bottom: .9rem;[m
[31m-}[m
[31m-[m
[31m-.alert .alert-link {[m
[31m-  color: #FFFFFF;[m
[31m-  opacity: .8;[m
[31m-}[m
[31m-[m
[31m-.alert.alert-success {[m
[31m-  background-color: rgba(24, 206, 15, 0.8);[m
[31m-}[m
[31m-[m
[31m-.alert.alert-danger {[m
[31m-  background-color: rgba(255, 54, 54, 0.8);[m
[31m-}[m
[31m-[m
[31m-.alert.alert-warning {[m
[31m-  background-color: rgba(255, 178, 54, 0.8);[m
[31m-}[m
[31m-[m
[31m-.alert.alert-info {[m
[31m-  background-color: rgba(44, 168, 255, 0.8);[m
[31m-}[m
[31m-[m
[31m-.alert.alert-primary {[m
[31m-  background-color: rgba(249, 99, 50, 0.8);[m
[31m-}[m
[31m-[m
[31m-.alert .alert-icon {[m
[31m-  display: block;[m
[31m-  float: left;[m
[31m-  margin-right: 15px;[m
[31m-  margin-top: -1px;[m
[31m-}[m
[31m-[m
[31m-.alert strong {[m
[31m-  text-transform: uppercase;[m
[31m-  font-size: 12px;[m
[31m-}[m
[31m-[m
[31m-.alert i.fa,[m
[31m-.alert i.now-ui-icons {[m
[31m-  font-size: 20px;[m
[31m-}[m
[31m-[m
[31m-.alert .close {[m
[31m-  color: #FFFFFF;[m
[31m-  opacity: .9;[m
[31m-  text-shadow: none;[m
[31m-  line-height: 0;[m
[31m-  outline: 0;[m
[31m-  display: inline-block;[m
[31m-  cursor: pointer;[m
[31m-}[m
[31m-[m
[31m-img {[m
[31m-  max-width: 100%;[m
[31m-  border-radius: 1px;[m
[31m-}[m
[31m-[m
[31m-.img-raised {[m
[31m-  box-shadow: 0px 10px 25px 0px rgba(0, 0, 0, 0.3);[m
[31m-}[m
[31m-[m
[31m-.popover {[m
[31m-  font-size: 14px;[m
[31m-  box-shadow: 0px 10px 50px 0px rgba(0, 0, 0, 0.2);[m
[31m-  border: none;[m
[31m-  line-height: 1.7;[m
[31m-  max-width: 240px;[m
[31m-}[m
[31m-[m
[31m-.popover.bs-popover-top .arrow:before,[m
[31m-.popover.bs-popover-left .arrow:before,[m
[31m-.popover.bs-popover-right .arrow:before,[m
[31m-.popover.bs-popover-bottom .arrow:before {[m
[31m-  border-top-color: transparent;[m
[31m-  border-left-color: transparent;[m
[31m-  border-right-color: transparent;[m
[31m-  border-bottom-color: transparent;[m
[31m-}[m
[31m-[m
[31m-.popover .popover-header {[m
[31m-  color: rgba(182, 182, 182, 0.6);[m
[31m-  font-size: 14px;[m
[31m-  text-transform: capitalize;[m
[31m-  font-weight: 600;[m
[31m-  margin: 0;[m
[31m-  margin-top: 5px;[m
[31m-  border: none;[m
[31m-  background-color: transparent;[m
[31m-}[m
[31m-[m
[31m-.popover:before {[m
[31m-  display: none;[m
[31m-}[m
[31m-[m
[31m-.popover.bs-tether-element-attached-top:after {[m
[31m-  border-bottom-color: #FFFFFF;[m
[31m-  top: -9px;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-primary {[m
[31m-  background-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-primary .popover-body {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-primary.bs-popover-right .arrow:after {[m
[31m-  border-right-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-primary.bs-popover-top .arrow:after {[m
[31m-  border-top-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-primary.bs-popover-bottom .arrow:after {[m
[31m-  border-bottom-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-primary.bs-popover-left .arrow:after {[m
[31m-  border-left-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-primary .popover-header {[m
[31m-  color: #FFFFFF;[m
[31m-  opacity: .6;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-info {[m
[31m-  background-color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-info .popover-body {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-info.bs-popover-right .arrow:after {[m
[31m-  border-right-color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-info.bs-popover-top .arrow:after {[m
[31m-  border-top-color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-info.bs-popover-bottom .arrow:after {[m
[31m-  border-bottom-color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-info.bs-popover-left .arrow:after {[m
[31m-  border-left-color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-info .popover-header {[m
[31m-  color: #FFFFFF;[m
[31m-  opacity: .6;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-warning {[m
[31m-  background-color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-warning .popover-body {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-warning.bs-popover-right .arrow:after {[m
[31m-  border-right-color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-warning.bs-popover-top .arrow:after {[m
[31m-  border-top-color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-warning.bs-popover-bottom .arrow:after {[m
[31m-  border-bottom-color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-warning.bs-popover-left .arrow:after {[m
[31m-  border-left-color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-warning .popover-header {[m
[31m-  color: #FFFFFF;[m
[31m-  opacity: .6;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-danger {[m
[31m-  background-color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-danger .popover-body {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-danger.bs-popover-right .arrow:after {[m
[31m-  border-right-color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-danger.bs-popover-top .arrow:after {[m
[31m-  border-top-color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-danger.bs-popover-bottom .arrow:after {[m
[31m-  border-bottom-color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-danger.bs-popover-left .arrow:after {[m
[31m-  border-left-color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-danger .popover-header {[m
[31m-  color: #FFFFFF;[m
[31m-  opacity: .6;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-success {[m
[31m-  background-color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-success .popover-body {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-success.bs-popover-right .arrow:after {[m
[31m-  border-right-color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-success.bs-popover-top .arrow:after {[m
[31m-  border-top-color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-success.bs-popover-bottom .arrow:after {[m
[31m-  border-bottom-color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-success.bs-popover-left .arrow:after {[m
[31m-  border-left-color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.popover.popover-success .popover-header {[m
[31m-  color: #FFFFFF;[m
[31m-  opacity: .6;[m
[31m-}[m
[31m-[m
[31m-.tooltip.bs-tooltip-right .arrow:before {[m
[31m-  border-right-color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.tooltip.bs-tooltip-top .arrow:before {[m
[31m-  border-top-color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.tooltip.bs-tooltip-bottom .arrow:before {[m
[31m-  border-bottom-color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.tooltip.bs-tooltip-left .arrow:before {[m
[31m-  border-left-color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.tooltip-inner {[m
[31m-  padding: 0.5rem 0.7rem;[m
[31m-  min-width: 130px;[m
[31m-  background-color: #FFFFFF;[m
[31m-  font-size: 14px;[m
[31m-  color: inherit;[m
[31m-  box-shadow: 0px 5px 25px 0px rgba(0, 0, 0, 0.2);[m
[31m-}[m
[31m-[m
[31m-.modal-content {[m
[31m-  border-radius: 0.1875rem;[m
[31m-  border: none;[m
[31m-  box-shadow: 0px 10px 50px 0px rgba(0, 0, 0, 0.5);[m
[31m-}[m
[31m-[m
[31m-.modal-content .modal-header {[m
[31m-  border-bottom: none;[m
[31m-  padding-top: 24px;[m
[31m-  padding-right: 24px;[m
[31m-  padding-bottom: 0;[m
[31m-  padding-left: 24px;[m
[31m-}[m
[31m-[m
[31m-.modal-content .modal-header button {[m
[31m-  position: absolute;[m
[31m-  right: 27px;[m
[31m-  top: 30px;[m
[31m-  outline: 0;[m
[31m-}[m
[31m-[m
[31m-.modal-content .modal-header .title {[m
[31m-  margin-top: 5px;[m
[31m-  margin-bottom: 0;[m
[31m-}[m
[31m-[m
[31m-.modal-content .modal-body {[m
[31m-  padding-top: 24px;[m
[31m-  padding-right: 24px;[m
[31m-  padding-bottom: 16px;[m
[31m-  padding-left: 24px;[m
[31m-  line-height: 1.9;[m
[31m-}[m
[31m-[m
[31m-.modal-content .modal-footer {[m
[31m-  border-top: none;[m
[31m-  padding-right: 24px;[m
[31m-  padding-bottom: 16px;[m
[31m-  padding-left: 24px;[m
[31m-  -webkit-justify-content: space-between;[m
[31m-  /* Safari 6.1+ */[m
[31m-  justify-content: space-between;[m
[31m-}[m
[31m-[m
[31m-.modal-content .modal-footer button {[m
[31m-  margin: 0;[m
[31m-  padding-left: 16px;[m
[31m-  padding-right: 16px;[m
[31m-  width: auto;[m
[31m-}[m
[31m-[m
[31m-.modal-content .modal-footer button.pull-left {[m
[31m-  padding-left: 5px;[m
[31m-  padding-right: 5px;[m
[31m-  position: relative;[m
[31m-  left: -5px;[m
[31m-}[m
[31m-[m
[31m-.modal-content .modal-body+.modal-footer {[m
[31m-  padding-top: 0;[m
[31m-}[m
[31m-[m
[31m-.modal-backdrop {[m
[31m-  background: rgba(0, 0, 0, 0.3);[m
[31m-}[m
[31m-[m
[31m-.modal.modal-mini p {[m
[31m-  text-align: center;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-mini .modal-dialog {[m
[31m-  max-width: 255px;[m
[31m-  margin: 0 auto;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-mini .modal-profile {[m
[31m-  width: 70px;[m
[31m-  height: 70px;[m
[31m-  background-color: #FFFFFF;[m
[31m-  border-radius: 50%;[m
[31m-  text-align: center;[m
[31m-  line-height: 5.7;[m
[31m-  box-shadow: 0px 5px 50px 0px rgba(0, 0, 0, 0.3);[m
[31m-}[m
[31m-[m
[31m-.modal.modal-mini .modal-profile i {[m
[31m-  color: #f96332;[m
[31m-  font-size: 21px;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-mini .modal-profile[class*="modal-profile-"] i {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-mini .modal-profile.modal-profile-primary {[m
[31m-  background-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-mini .modal-profile.modal-profile-danger {[m
[31m-  background-color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-mini .modal-profile.modal-profile-warning {[m
[31m-  background-color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-mini .modal-profile.modal-profile-success {[m
[31m-  background-color: #18ce0f;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-mini .modal-profile.modal-profile-info {[m
[31m-  background-color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-mini .modal-footer button {[m
[31m-  text-transform: uppercase;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-mini .modal-footer button:first-child {[m
[31m-  opacity: .5;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-default .modal-content {[m
[31m-  background-color: #FFFFFF;[m
[31m-  color: #2c2c2c;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-default .modal-header .close {[m
[31m-  color: #2c2c2c;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-primary .modal-content {[m
[31m-  background-color: #f96332;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-primary .modal-header .close {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-danger .modal-content {[m
[31m-  background-color: #FF3636;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-danger .modal-header .close {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-warning .modal-content {[m
[31m-  background-color: #FFB236;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-warning .modal-header .close {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-success .modal-content {[m
[31m-  background-color: #18ce0f;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-success .modal-header .close {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-info .modal-content {[m
[31m-  background-color: #2CA8FF;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.modal.modal-info .modal-header .close {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.modal.show.modal-mini .modal-dialog {[m
[31m-  -webkit-transform: translate(0, 30%);[m
[31m-  -o-transform: translate(0, 30%);[m
[31m-  transform: translate(0, 30%);[m
[31m-}[m
[31m-[m
[31m-.modal .modal-header .close {[m
[31m-  color: #FF3636;[m
[31m-  text-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.modal .modal-header .close:hover,[m
[31m-.modal .modal-header .close:focus {[m
[31m-  opacity: 1;[m
[31m-}[m
[31m-[m
[31m-.carousel-item-next,[m
[31m-.carousel-item-prev,[m
[31m-.carousel-item.active {[m
[31m-  display: block;[m
[31m-}[m
[31m-[m
[31m-.carousel .carousel-inner {[m
[31m-  box-shadow: 0px 10px 25px 0px rgba(0, 0, 0, 0.3);[m
[31m-  border-radius: 0.1875rem;[m
[31m-}[m
[31m-[m
[31m-.carousel .card {[m
[31m-  max-width: 650px;[m
[31m-  margin: 60px auto;[m
[31m-  display: block;[m
[31m-}[m
[31m-[m
[31m-.footer {[m
[31m-  padding: 24px 0;[m
[31m-}[m
[31m-[m
[31m-.footer.footer-default {[m
[31m-  background-color: #f2f2f2;[m
[31m-}[m
[31m-[m
[31m-.footer nav {[m
[31m-  display: inline-block;[m
[31m-  float: left;[m
[31m-}[m
[31m-[m
[31m-.footer ul {[m
[31m-  margin-bottom: 0;[m
[31m-  padding: 0;[m
[31m-  list-style: none;[m
[31m-}[m
[31m-[m
[31m-.footer ul li {[m
[31m-  display: inline-block;[m
[31m-}[m
[31m-[m
[31m-.footer ul li a {[m
[31m-  color: inherit;[m
[31m-  padding: 0.5rem;[m
[31m-  font-size: 0.8571em;[m
[31m-  text-transform: uppercase;[m
[31m-  text-decoration: none;[m
[31m-}[m
[31m-[m
[31m-.footer ul li a:hover {[m
[31m-  text-decoration: none;[m
[31m-}[m
[31m-[m
[31m-.footer .copyright {[m
[31m-  font-size: 0.8571em;[m
[31m-}[m
[31m-[m
[31m-.footer:after {[m
[31m-  display: table;[m
[31m-  clear: both;[m
[31m-  content: " ";[m
[31m-}[m
[31m-[m
[31m-.card {[m
[31m-  border: 0;[m
[31m-  border-radius: 0.1875rem;[m
[31m-  display: inline-block;[m
[31m-  position: relative;[m
[31m-  width: 100%;[m
[31m-  margin-bottom: 30px;[m
[31m-  box-shadow: 0px 5px 25px 0px rgba(0, 0, 0, 0.2);[m
[31m-}[m
[31m-[m
[31m-.card .card-header {[m
[31m-  background-color: transparent;[m
[31m-  border-bottom: 0;[m
[31m-  background-color: transparent;[m
[31m-  border-radius: 0;[m
[31m-  padding: 0;[m
[31m-}[m
[31m-[m
[31m-.card .card-footer {[m
[31m-  padding: 0;[m
[31m-  margin-top: 15px;[m
[31m-  background-color: transparent;[m
[31m-  border: 0;[m
[31m-}[m
[31m-[m
[31m-.card[data-background-color="orange"] {[m
[31m-  background-color: #f96332;[m
[31m-}[m
[31m-[m
[31m-.card[data-background-color="red"] {[m
[31m-  background-color: #FF3636;[m
[31m-}[m
[31m-[m
[31m-.card[data-background-color="yellow"] {[m
[31m-  background-color: #FFB236;[m
[31m-}[m
[31m-[m
[31m-.card[data-background-color="blue"] {[m
[31m-  background-color: #2CA8FF;[m
[31m-}[m
[31m-[m
[31m-.card[data-background-color="green"] {[m
[31m-  background-color: #15b60d;[m
[31m-}[m
[31m-[m
[31m-.card-plain {[m
[31m-  background: transparent;[m
[31m-  box-shadow: none;[m
[31m-}[m
[31m-[m
[31m-.card-plain .card-body,[m
[31m-.card-plain .card-header {[m
[31m-  padding-left: 5px;[m
[31m-  padding-right: 5px;[m
[31m-}[m
[31m-[m
[31m-.card-plain .card-header:after {[m
[31m-  width: 100%;[m
[31m-  left: 0;[m
[31m-}[m
[31m-[m
[31m-.card-signup {[m
[31m-  max-width: 350px;[m
[31m-  margin: 0 auto;[m
[31m-}[m
[31m-[m
[31m-.card-signup .card-header {[m
[31m-  margin: 0 20px;[m
[31m-  padding: 30px 0;[m
[31m-}[m
[31m-[m
[31m-.card-signup .card-title {[m
[31m-  margin-top: 15px;[m
[31m-  margin-bottom: 15px;[m
[31m-}[m
[31m-[m
[31m-.card-signup .card-footer {[m
[31m-  margin-bottom: 10px;[m
[31m-  margin-top: 24px;[m
[31m-  padding: 24px 0;[m
[31m-}[m
[31m-[m
[31m-.card-signup .card-body {[m
[31m-  padding-top: 0px;[m
[31m-  padding-bottom: 0px;[m
[31m-  min-height: auto;[m
[31m-}[m
[31m-[m
[31m-.card-signup .form-check,[m
[31m-.card-signup .form-check.form-check-radio {[m
[31m-  margin-top: 20px;[m
[31m-}[m
[31m-[m
[31m-.card-signup .form-check label,[m
[31m-.card-signup .form-check.form-check-radio label {[m
[31m-  margin-left: 11px;[m
[31m-  color: initial;[m
[31m-  padding-left: 40px;[m
[31m-}[m
[31m-[m
[31m-.card-signup .card-description {[m
[31m-  margin-top: 15px;[m
[31m-  margin-bottom: 20px;[m
[31m-}[m
[31m-[m
[31m-.card-signup .social-line {[m
[31m-  margin-top: 20px;[m
[31m-  text-align: center;[m
[31m-}[m
[31m-[m
[31m-.card-signup .social-line .btn.btn-icon,[m
[31m-.card-signup .social-line .btn.btn-icon .btn-icon {[m
[31m-  margin-left: 5px;[m
[31m-  margin-right: 5px;[m
[31m-  margin-top: 0;[m
[31m-  margin-bottom: 0;[m
[31m-  box-shadow: 0px 5px 50px 0px rgba(0, 0, 0, 0.2);[m
[31m-}[m
[31m-[m
[31m-.index-page .page-header {[m
[31m-  height: 125vh;[m
[31m-}[m
[31m-[m
[31m-.index-page .page-header .container>.content-center {[m
[31m-  top: 37%;[m
[31m-}[m
[31m-[m
[31m-.index-page .page-header .category-absolute {[m
[31m-  position: absolute;[m
[31m-  top: 100vh;[m
[31m-  margin-top: -60px;[m
[31m-  padding: 0 15px;[m
[31m-  width: 100%;[m
[31m-  color: rgba(255, 255, 255, 0.5);[m
[31m-}[m
[31m-[m
[31m-.landing-page .header {[m
[31m-  height: 100vh;[m
[31m-  position: relative;[m
[31m-}[m
[31m-[m
[31m-.landing-page .header .container {[m
[31m-  padding-top: 26vh;[m
[31m-  color: #FFFFFF;[m
[31m-  z-index: 2;[m
[31m-  position: relative;[m
[31m-}[m
[31m-[m
[31m-.landing-page .header .share {[m
[31m-  margin-top: 150px;[m
[31m-}[m
[31m-[m
[31m-.landing-page .header h1 {[m
[31m-  font-weight: 600;[m
[31m-}[m
[31m-[m
[31m-.landing-page .header .title {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.landing-page .section-team .team .team-player img {[m
[31m-  max-width: 100px;[m
[31m-}[m
[31m-[m
[31m-.landing-page .section-team .team-player {[m
[31m-  margin-bottom: 15px;[m
[31m-}[m
[31m-[m
[31m-.landing-page .section-contact-us .title {[m
[31m-  margin-bottom: 15px;[m
[31m-}[m
[31m-[m
[31m-.landing-page .section-contact-us .description {[m
[31m-  margin-bottom: 30px;[m
[31m-}[m
[31m-[m
[31m-.landing-page .section-contact-us .input-group,[m
[31m-.landing-page .section-contact-us .send-button,[m
[31m-.landing-page .section-contact-us .textarea-container {[m
[31m-  padding: 0 40px;[m
[31m-}[m
[31m-[m
[31m-.landing-page .section-contact-us .textarea-container {[m
[31m-  margin: 40px 0;[m
[31m-}[m
[31m-[m
[31m-.landing-page .section-contact-us a.btn {[m
[31m-  margin-top: 35px;[m
[31m-}[m
[31m-[m
[31m-.profile-page .page-header {[m
[31m-  min-height: 550px;[m
[31m-}[m
[31m-[m
[31m-.profile-page .profile-container {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.profile-page .photo-container {[m
[31m-  width: 123px;[m
[31m-  height: 123px;[m
[31m-  border-radius: 50%;[m
[31m-  overflow: hidden;[m
[31m-  margin: 0 auto;[m
[31m-  box-shadow: 0px 10px 25px 0px rgba(0, 0, 0, 0.3);[m
[31m-}[m
[31m-[m
[31m-.profile-page .title {[m
[31m-  text-align: center;[m
[31m-  margin-top: 30px;[m
[31m-}[m
[31m-[m
[31m-.profile-page .description,[m
[31m-.profile-page .category {[m
[31m-  text-align: center;[m
[31m-}[m
[31m-[m
[31m-.profile-page h5.description {[m
[31m-  max-width: 700px;[m
[31m-  margin: 20px auto 75px;[m
[31m-}[m
[31m-[m
[31m-.profile-page .nav-align-center {[m
[31m-  margin-top: 30px;[m
[31m-}[m
[31m-[m
[31m-.profile-page .content {[m
[31m-  max-width: 450px;[m
[31m-  margin: 0 auto;[m
[31m-}[m
[31m-[m
[31m-.profile-page .content .social-description {[m
[31m-  display: inline-block;[m
[31m-  max-width: 150px;[m
[31m-  width: 145px;[m
[31m-  text-align: center;[m
[31m-  margin: 15px 0 0px;[m
[31m-}[m
[31m-[m
[31m-.profile-page .content .social-description h2 {[m
[31m-  margin-bottom: 15px;[m
[31m-}[m
[31m-[m
[31m-.profile-page .button-container {[m
[31m-  text-align: center;[m
[31m-  margin-top: -106px;[m
[31m-}[m
[31m-[m
[31m-.profile-page .collections img {[m
[31m-  margin-bottom: 30px;[m
[31m-}[m
[31m-[m
[31m-.profile-page .gallery {[m
[31m-  margin-top: 45px;[m
[31m-  padding-bottom: 50px;[m
[31m-}[m
[31m-[m
[31m-.section-full-page:after,[m
[31m-.section-full-page:before {[m
[31m-  display: block;[m
[31m-  content: "";[m
[31m-  position: absolute;[m
[31m-  width: 100%;[m
[31m-  height: 100%;[m
[31m-  top: 0;[m
[31m-  left: 0;[m
[31m-  z-index: 2;[m
[31m-}[m
[31m-[m
[31m-.section-full-page:before {[m
[31m-  background-color: rgba(0, 0, 0, 0.5);[m
[31m-}[m
[31m-[m
[31m-.section-full-page[filter-color="purple"]:after,[m
[31m-.section-full-page[filter-color="primary"]:after {[m
[31m-  background: rgba(227, 227, 227, 0.26);[m
[31m-  /* For browsers that do not support gradients */[m
[31m-  background: -webkit-linear-gradient(90deg, rgba(227, 227, 227, 0.26), rgba(249, 99, 50, 0.95));[m
[31m-  /* For Safari 5.1 to 6.0 */[m
[31m-  background: -o-linear-gradient(90deg, rgba(227, 227, 227, 0.26), rgba(249, 99, 50, 0.95));[m
[31m-  /* For Opera 11.1 to 12.0 */[m
[31m-  background: -moz-linear-gradient(90deg, rgba(227, 227, 227, 0.26), rgba(249, 99, 50, 0.95));[m
[31m-  /* For Firefox 3.6 to 15 */[m
[31m-  background: linear-gradient(0deg, rgba(227, 227, 227, 0.26), rgba(249, 99, 50, 0.95));[m
[31m-  /* Standard syntax */[m
[31m-}[m
[31m-[m
[31m-.section-full-page[data-image]:after {[m
[31m-  opacity: .5;[m
[31m-}[m
[31m-[m
[31m-.section-full-page>.content,[m
[31m-.section-full-page>.footer {[m
[31m-  position: relative;[m
[31m-  z-index: 4;[m
[31m-}[m
[31m-[m
[31m-.section-full-page>.content {[m
[31m-  min-height: calc(100vh - 80px);[m
[31m-}[m
[31m-[m
[31m-.section-full-page .full-page-background {[m
[31m-  position: absolute;[m
[31m-  z-index: 1;[m
[31m-  height: 100%;[m
[31m-  width: 100%;[m
[31m-  display: block;[m
[31m-  top: 0;[m
[31m-  left: 0;[m
[31m-  background-size: cover;[m
[31m-  background-position: center center;[m
[31m-}[m
[31m-[m
[31m-.section-full-page .footer nav>ul a:not(.btn),[m
[31m-.section-full-page .footer,[m
[31m-.section-full-page .footer .copyright a {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.login-page .page-header:before,[m
[31m-.profile-page .page-header:before {[m
[31m-  position: absolute;[m
[31m-  z-index: 0;[m
[31m-  width: 100%;[m
[31m-  height: 100%;[m
[31m-  display: block;[m
[31m-  left: 0;[m
[31m-  top: 0;[m
[31m-  content: "";[m
[31m-  background-color: rgba(0, 0, 0, 0.5);[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login {[m
[31m-  border-radius: 0.25rem;[m
[31m-  padding-bottom: 0.7rem;[m
[31m-  max-width: 320px;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login .btn-wd {[m
[31m-  min-width: 180px;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login .logo-container {[m
[31m-  width: 65px;[m
[31m-  margin: 0 auto;[m
[31m-  margin-bottom: 55px;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login .logo-container img {[m
[31m-  width: 100%;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login .input-group:last-child {[m
[31m-  margin-bottom: 40px;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .form-control::-moz-placeholder {[m
[31m-  color: #ebebeb;[m
[31m-  opacity: 1;[m
[31m-  filter: alpha(opacity=100);[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .form-control:-moz-placeholder {[m
[31m-  color: #ebebeb;[m
[31m-  opacity: 1;[m
[31m-  filter: alpha(opacity=100);[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .form-control::-webkit-input-placeholder {[m
[31m-  color: #ebebeb;[m
[31m-  opacity: 1;[m
[31m-  filter: alpha(opacity=100);[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .form-control:-ms-input-placeholder {[m
[31m-  color: #ebebeb;[m
[31m-  opacity: 1;[m
[31m-  filter: alpha(opacity=100);[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .form-control {[m
[31m-  border-color: rgba(255, 255, 255, 0.5);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .form-control:focus {[m
[31m-  border-color: #FFFFFF;[m
[31m-  background-color: transparent;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .has-success:after,[m
[31m-.login-page .card-login.card-plain .has-danger:after {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .has-danger .form-control {[m
[31m-  background-color: transparent;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .input-group-text {[m
[31m-  background-color: transparent;[m
[31m-  border-color: rgba(255, 255, 255, 0.5);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .input-group-focus .input-group-text {[m
[31m-  background-color: transparent;[m
[31m-  border-color: #FFFFFF;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .form-group.no-border .form-control,[m
[31m-.login-page .card-login.card-plain .input-group.no-border .form-control {[m
[31m-  background-color: rgba(255, 255, 255, 0.1);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .form-group.no-border .form-control:focus,[m
[31m-.login-page .card-login.card-plain .form-group.no-border .form-control:active,[m
[31m-.login-page .card-login.card-plain .form-group.no-border .form-control:active,[m
[31m-.login-page .card-login.card-plain .input-group.no-border .form-control:focus,[m
[31m-.login-page .card-login.card-plain .input-group.no-border .form-control:active,[m
[31m-.login-page .card-login.card-plain .input-group.no-border .form-control:active {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .form-group.no-border .form-control+.input-group-text,[m
[31m-.login-page .card-login.card-plain .input-group.no-border .form-control+.input-group-text {[m
[31m-  background-color: rgba(255, 255, 255, 0.1);[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .form-group.no-border .form-control+.input-group-text:focus,[m
[31m-.login-page .card-login.card-plain .form-group.no-border .form-control+.input-group-text:active,[m
[31m-.login-page .card-login.card-plain .form-group.no-border .form-control+.input-group-text:active,[m
[31m-.login-page .card-login.card-plain .input-group.no-border .form-control+.input-group-text:focus,[m
[31m-.login-page .card-login.card-plain .input-group.no-border .form-control+.input-group-text:active,[m
[31m-.login-page .card-login.card-plain .input-group.no-border .form-control+.input-group-text:active {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .form-group.no-border .form-control:focus+.input-group-text,[m
[31m-.login-page .card-login.card-plain .input-group.no-border .form-control:focus+.input-group-text {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .form-group.no-border .input-group-text,[m
[31m-.login-page .card-login.card-plain .input-group.no-border .input-group-text {[m
[31m-  background-color: rgba(255, 255, 255, 0.1);[m
[31m-  border: none;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .form-group.no-border.input-group-focus .input-group-text,[m
[31m-.login-page .card-login.card-plain .input-group.no-border.input-group-focus .input-group-text {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.login-page .card-login.card-plain .input-group-text,[m
[31m-.login-page .card-login.card-plain .form-group.no-border .input-group-text,[m
[31m-.login-page .card-login.card-plain .input-group.no-border .input-group-text {[m
[31m-  color: rgba(255, 255, 255, 0.8);[m
[31m-}[m
[31m-[m
[31m-.login-page .link {[m
[31m-  font-size: 10px;[m
[31m-  color: #FFFFFF;[m
[31m-  text-decoration: none;[m
[31m-}[m
[31m-[m
[31m-.section {[m
[31m-  padding: 70px 0;[m
[31m-  position: relative;[m
[31m-  background: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-.section .row+.category {[m
[31m-  margin-top: 15px;[m
[31m-}[m
[31m-[m
[31m-.section-navbars {[m
[31m-  padding-bottom: 0;[m
[31m-}[m
[31m-[m
[31m-.section-full-screen {[m
[31m-  height: 100vh;[m
[31m-}[m
[31m-[m
[31m-.section-signup {[m
[31m-  padding-top: 20vh;[m
[31m-}[m
[31m-[m
[31m-.page-header {[m
[31m-  min-height: 100vh;[m
[31m-  max-height: 999px;[m
[31m-  padding: 0;[m
[31m-  color: #FFFFFF;[m
[31m-  position: relative;[m
[31m-  overflow: hidden;[m
[31m-}[m
[31m-[m
[31m-.page-header>.content {[m
[31m-  margin-top: 12%;[m
[31m-  text-align: center;[m
[31m-  margin-bottom: 50px;[m
[31m-}[m
[31m-[m
[31m-.page-header.page-header-small {[m
[31m-  min-height: 60vh;[m
[31m-  max-height: 440px;[m
[31m-}[m
[31m-[m
[31m-.page-header:before {[m
[31m-  background-color: rgba(0, 0, 0, 0.3);[m
[31m-}[m
[31m-[m
[31m-.page-header>.container {[m
[31m-  z-index: 2;[m
[31m-  padding-top: 12vh;[m
[31m-  padding-bottom: 40px;[m
[31m-}[m
[31m-[m
[31m-.page-header .page-header-image {[m
[31m-  position: absolute;[m
[31m-  background-size: cover;[m
[31m-  background-position: center center;[m
[31m-  width: 100%;[m
[31m-  height: 100%;[m
[31m-  z-index: -1;[m
[31m-}[m
[31m-[m
[31m-.page-header .content-center {[m
[31m-  position: absolute;[m
[31m-  top: 50%;[m
[31m-  left: 50%;[m
[31m-  z-index: 2;[m
[31m-  -ms-transform: translate(-50%, -50%);[m
[31m-  -webkit-transform: translate(-50%, -50%);[m
[31m-  transform: translate(-50%, -50%);[m
[31m-  text-align: center;[m
[31m-  color: #FFFFFF;[m
[31m-  padding: 0 15px;[m
[31m-  width: 100%;[m
[31m-  max-width: 880px;[m
[31m-}[m
[31m-[m
[31m-.page-header footer {[m
[31m-  position: absolute;[m
[31m-  bottom: 0;[m
[31m-  width: 100%;[m
[31m-}[m
[31m-[m
[31m-.page-header .container {[m
[31m-  height: 100%;[m
[31m-  z-index: 1;[m
[31m-  text-align: center;[m
[31m-  position: relative;[m
[31m-}[m
[31m-[m
[31m-.page-header .category,[m
[31m-.page-header .description {[m
[31m-  color: rgba(255, 255, 255, 0.8);[m
[31m-}[m
[31m-[m
[31m-.page-header:after,[m
[31m-.page-header:before {[m
[31m-  position: absolute;[m
[31m-  z-index: 0;[m
[31m-  width: 100%;[m
[31m-  height: 100%;[m
[31m-  display: block;[m
[31m-  left: 0;[m
[31m-  top: 0;[m
[31m-  content: "";[m
[31m-}[m
[31m-[m
[31m-.clear-filter:after,[m
[31m-.clear-filter:before {[m
[31m-  display: none;[m
[31m-}[m
[31m-[m
[31m-.clear-filter[filter-color="orange"] {[m
[31m-  background: rgba(44, 44, 44, 0.2);[m
[31m-  /* For browsers that do not support gradients */[m
[31m-  background: -webkit-linear-gradient(90deg, rgba(44, 44, 44, 0.2), rgba(224, 23, 3, 0.6));[m
[31m-  /* For Safari 5.1 to 6.0 */[m
[31m-  background: -o-linear-gradient(90deg, rgba(44, 44, 44, 0.2), rgba(224, 23, 3, 0.6));[m
[31m-  /* For Opera 11.1 to 12.0 */[m
[31m-  background: -moz-linear-gradient(90deg, rgba(44, 44, 44, 0.2), rgba(224, 23, 3, 0.6));[m
[31m-  /* For Firefox 3.6 to 15 */[m
[31m-  background: linear-gradient(0deg, rgba(44, 44, 44, 0.2), rgba(224, 23, 3, 0.6));[m
[31m-  /* Standard syntax */[m
[31m-}[m
[31m-[m
[31m-.section-story-overview {[m
[31m-  padding: 50px 0;[m
[31m-}[m
[31m-[m
[31m-.section-story-overview .image-container {[m
[31m-  height: 335px;[m
[31m-  position: relative;[m
[31m-  background-position: center center;[m
[31m-  background-size: cover;[m
[31m-  box-shadow: 0px 10px 25px 0px rgba(0, 0, 0, 0.3);[m
[31m-  border-radius: .25rem;[m
[31m-}[m
[31m-[m
[31m-.section-story-overview .image-container+.category {[m
[31m-  padding-top: 15px;[m
[31m-}[m
[31m-[m
[31m-.section-story-overview .image-container.image-right {[m
[31m-  z-index: 2;[m
[31m-}[m
[31m-[m
[31m-.section-story-overview .image-container.image-right+h3.title {[m
[31m-  margin-top: 120px;[m
[31m-}[m
[31m-[m
[31m-.section-story-overview .image-container.image-left {[m
[31m-  z-index: 1;[m
[31m-}[m
[31m-[m
[31m-.section-story-overview .image-container:nth-child(2) {[m
[31m-  margin-top: 420px;[m
[31m-  margin-left: -105px;[m
[31m-}[m
[31m-[m
[31m-.section-story-overview p.blockquote {[m
[31m-  width: 220px;[m
[31m-  min-height: 180px;[m
[31m-  text-align: left;[m
[31m-  position: absolute;[m
[31m-  top: 376px;[m
[31m-  right: 155px;[m
[31m-  z-index: 0;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .nucleo-container img {[m
[31m-  width: auto;[m
[31m-  left: 0;[m
[31m-  top: 0;[m
[31m-  height: 100%;[m
[31m-  position: absolute;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .nucleo-container {[m
[31m-  height: 335px;[m
[31m-  position: relative;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons h5 {[m
[31m-  margin-bottom: 35px;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container {[m
[31m-  position: relative;[m
[31m-  max-width: 450px;[m
[31m-  height: 300px;[m
[31m-  max-height: 300px;[m
[31m-  margin: 0 auto;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container i {[m
[31m-  font-size: 34px;[m
[31m-  position: absolute;[m
[31m-  left: 0;[m
[31m-  top: 0;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container i:nth-child(1) {[m
[31m-  top: 5%;[m
[31m-  left: 7%;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container i:nth-child(2) {[m
[31m-  top: 28%;[m
[31m-  left: 24%;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container i:nth-child(3) {[m
[31m-  top: 40%;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container i:nth-child(4) {[m
[31m-  top: 18%;[m
[31m-  left: 62%;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container i:nth-child(5) {[m
[31m-  top: 74%;[m
[31m-  left: 3%;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container i:nth-child(6) {[m
[31m-  top: 36%;[m
[31m-  left: 44%;[m
[31m-  font-size: 65px;[m
[31m-  color: #f96332;[m
[31m-  padding: 1px;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container i:nth-child(7) {[m
[31m-  top: 59%;[m
[31m-  left: 26%;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container i:nth-child(8) {[m
[31m-  top: 60%;[m
[31m-  left: 69%;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container i:nth-child(9) {[m
[31m-  top: 72%;[m
[31m-  left: 47%;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container i:nth-child(10) {[m
[31m-  top: 88%;[m
[31m-  left: 27%;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container i:nth-child(11) {[m
[31m-  top: 31%;[m
[31m-  left: 80%;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container i:nth-child(12) {[m
[31m-  top: 88%;[m
[31m-  left: 68%;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container i:nth-child(13) {[m
[31m-  top: 5%;[m
[31m-  left: 81%;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container i:nth-child(14) {[m
[31m-  top: 58%;[m
[31m-  left: 90%;[m
[31m-}[m
[31m-[m
[31m-.section-nucleo-icons .icons-container i:nth-child(15) {[m
[31m-  top: 6%;[m
[31m-  left: 40%;[m
[31m-}[m
[31m-[m
[31m-.section-images {[m
[31m-  max-height: 670px;[m
[31m-  height: 670px;[m
[31m-}[m
[31m-[m
[31m-.section-images .hero-images-container,[m
[31m-.section-images .hero-images-container-1,[m
[31m-.section-images .hero-images-container-2 {[m
[31m-  margin-top: -38vh;[m
[31m-}[m
[31m-[m
[31m-.section-images .hero-images-container {[m
[31m-  max-width: 670px;[m
[31m-}[m
[31m-[m
[31m-.section-images .hero-images-container-1 {[m
[31m-  max-width: 390px;[m
[31m-  position: absolute;[m
[31m-  top: 55%;[m
[31m-  right: 18%;[m
[31m-}[m
[31m-[m
[31m-.section-images .hero-images-container-2 {[m
[31m-  max-width: 225px;[m
[31m-  position: absolute;[m
[31m-  top: 68%;[m
[31m-  right: 12%;[m
[31m-}[m
[31m-[m
[31m-[data-background-color="orange"] {[m
[31m-  background-color: #e95e38;[m
[31m-}[m
[31m-[m
[31m-[data-background-color="black"] {[m
[31m-  background-color: #2c2c2c;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .title,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .social-description h2,[m
[31m-[data-background-color]:not([data-background-color="gray"]) p,[m
[31m-[data-background-color]:not([data-background-color="gray"]) p.blockquote,[m
[31m-[data-background-color]:not([data-background-color="gray"]) p.blockquote small {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .separator {[m
[31m-  background-color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .navbar.bg-white p {[m
[31m-  color: #888888;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) h1,[m
[31m-[data-background-color]:not([data-background-color="gray"]) h2,[m
[31m-[data-background-color]:not([data-background-color="gray"]) h3,[m
[31m-[data-background-color]:not([data-background-color="gray"]) h4,[m
[31m-[data-background-color]:not([data-background-color="gray"]) h5,[m
[31m-[data-background-color]:not([data-background-color="gray"]) h6,[m
[31m-[data-background-color]:not([data-background-color="gray"]) a:not(.btn):not(.dropdown-item),[m
[31m-[data-background-color]:not([data-background-color="gray"]) .icons-container {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .input-group-text,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-group.no-border .input-group-text,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .input-group.no-border .input-group-text {[m
[31m-  color: rgba(255, 255, 255, 0.8);[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .description,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .social-description p {[m
[31m-  color: rgba(255, 255, 255, 0.8);[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) p.blockquote {[m
[31m-  border-color: rgba(255, 255, 255, 0.2);[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .checkbox label::before,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .checkbox label::after,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .radio label::before,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .radio label::after {[m
[31m-  border-color: rgba(255, 255, 255, 0.2);[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .checkbox label::after,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .checkbox label,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .radio label {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .checkbox input[type="checkbox"]:disabled+label,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .radio input[type="radio"]:disabled+label {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .radio input[type="radio"]:not(:disabled):hover+label::after,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .radio input[type="radio"]:checked+label::after {[m
[31m-  background-color: #FFFFFF;[m
[31m-  border-color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-control::-moz-placeholder {[m
[31m-  color: #ebebeb;[m
[31m-  opacity: 1;[m
[31m-  filter: alpha(opacity=100);[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-control:-moz-placeholder {[m
[31m-  color: #ebebeb;[m
[31m-  opacity: 1;[m
[31m-  filter: alpha(opacity=100);[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-control::-webkit-input-placeholder {[m
[31m-  color: #ebebeb;[m
[31m-  opacity: 1;[m
[31m-  filter: alpha(opacity=100);[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-control:-ms-input-placeholder {[m
[31m-  color: #ebebeb;[m
[31m-  opacity: 1;[m
[31m-  filter: alpha(opacity=100);[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-control {[m
[31m-  border-color: rgba(255, 255, 255, 0.5);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-control:focus {[m
[31m-  border-color: #FFFFFF;[m
[31m-  background-color: transparent;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .has-success:after,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .has-danger:after {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .has-danger .form-control {[m
[31m-  background-color: transparent;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .input-group-text {[m
[31m-  background-color: transparent;[m
[31m-  border-color: rgba(255, 255, 255, 0.5);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .input-group-focus .input-group-text {[m
[31m-  background-color: transparent;[m
[31m-  border-color: #FFFFFF;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-group.no-border .form-control,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .input-group.no-border .form-control {[m
[31m-  background-color: rgba(255, 255, 255, 0.1);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-group.no-border .form-control:focus,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-group.no-border .form-control:active,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-group.no-border .form-control:active,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .input-group.no-border .form-control:focus,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .input-group.no-border .form-control:active,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .input-group.no-border .form-control:active {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-group.no-border .form-control+.input-group-text,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .input-group.no-border .form-control+.input-group-text {[m
[31m-  background-color: rgba(255, 255, 255, 0.1);[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-group.no-border .form-control+.input-group-text:focus,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-group.no-border .form-control+.input-group-text:active,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-group.no-border .form-control+.input-group-text:active,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .input-group.no-border .form-control+.input-group-text:focus,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .input-group.no-border .form-control+.input-group-text:active,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .input-group.no-border .form-control+.input-group-text:active {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-group.no-border .form-control:focus+.input-group-text,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .input-group.no-border .form-control:focus+.input-group-text {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-group.no-border .input-group-text,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .input-group.no-border .input-group-text {[m
[31m-  background-color: rgba(255, 255, 255, 0.1);[m
[31m-  border: none;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .form-group.no-border.input-group-focus .input-group-text,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .input-group.no-border.input-group-focus .input-group-text {[m
[31m-  background-color: rgba(255, 255, 255, 0.2);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .btn[class*="btn-outline-"] {[m
[31m-  background-color: transparent;[m
[31m-  border-color: rgba(255, 255, 255, 0.5);[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .btn[class*="btn-outline-"]:hover,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .btn[class*="btn-outline-"]:focus,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .btn[class*="btn-outline-"]:not(:disabled):not(.disabled):active,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .btn[class*="btn-outline-"]:not(:disabled):not(.disabled).active,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .btn[class*="btn-outline-"]:not(:disabled):not(.disabled):active:focus,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .btn[class*="btn-outline-"]:not(:disabled):not(.disabled).active:focus,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .btn[class*="btn-outline-"]:active:hover,[m
[31m-[data-background-color]:not([data-background-color="gray"]) .btn[class*="btn-outline-"].active:hover,[m
[31m-.show>[data-background-color]:not([data-background-color="gray"]) .btn[class*="btn-outline-"].dropdown-toggle,[m
[31m-.show>[data-background-color]:not([data-background-color="gray"]) .btn[class*="btn-outline-"].dropdown-toggle:focus,[m
[31m-.show>[data-background-color]:not([data-background-color="gray"]) .btn[class*="btn-outline-"].dropdown-toggle:hover {[m
[31m-  background-color: transparent;[m
[31m-  border-color: #FFFFFF;[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]) .nav-tabs>.nav-item>.nav-link i.now-ui-icons {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-[data-background-color]:not([data-background-color="gray"]).section-nucleo-icons .icons-container i:nth-child(6) {[m
[31m-  color: #FFFFFF;[m
[31m-}[m
[31m-[m
[31m-@media screen and (max-width: 991px) {[m
[31m-  .sidebar-collapse .navbar-collapse {[m
[31m-    position: fixed;[m
[31m-    display: block;[m
[31m-    top: 0;[m
[31m-    height: 100% !important;[m
[31m-    width: 300px;[m
[31m-    right: 0;[m
[31m-    z-index: 1032;[m
[31m-    visibility: visible;[m
[31m-    background-color: #999;[m
[31m-    overflow-y: visible;[m
[31m-    border-top: none;[m
[31m-    text-align: left;[m
[31m-    max-height: none !important;[m
[31m-    -webkit-transform: translate3d(300px, 0, 0);[m
[31m-    -moz-transform: translate3d(300px, 0, 0);[m
[31m-    -o-transform: translate3d(300px, 0, 0);[m
[31m-    -ms-transform: translate3d(300px, 0, 0);[m
[31m-    transform: translate3d(300px, 0, 0);[m
[31m-    -webkit-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -moz-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -o-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -ms-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar-collapse:before {[m
[31m-    background: #f96332;[m
[31m-    /* For browsers that do not support gradients */[m
[31m-    background: -webkit-linear-gradient(#f96332 0%, #000 80%);[m
[31m-    /* For Safari 5.1 to 6.0 */[m
[31m-    background: -o-linear-gradient(#f96332 0%, #000 80%);[m
[31m-    /* For Opera 11.1 to 12.0 */[m
[31m-    background: -moz-linear-gradient(#f96332 0%, #000 80%);[m
[31m-    /* For Firefox 3.6 to 15 */[m
[31m-    background: linear-gradient(#f96332 0%, #000 80%);[m
[31m-    /* Standard syntax (must be last) */[m
[31m-    opacity: 0.76;[m
[31m-    filter: alpha(opacity=76);[m
[31m-    display: block;[m
[31m-    content: "";[m
[31m-    position: absolute;[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[31m-    top: 0;[m
[31m-    left: 0;[m
[31m-    z-index: -1;[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar-collapse .navbar-nav:not(.navbar-logo) .nav-link {[m
[31m-    margin: 0 1rem;[m
[31m-    margin-top: 0.3125rem;[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar-collapse .navbar-nav:not(.navbar-logo) .nav-link:not(.btn) {[m
[31m-    color: #FFFFFF !important;[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar-collapse .dropdown-menu .dropdown-item {[m
[31m-    color: #FFFFFF;[m
[31m-  }[m
[31m-  .sidebar-collapse.menu-on-left .navbar-translate {[m
[31m-    flex-direction: row-reverse;[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar .navbar-nav {[m
[31m-    margin-top: 53px;[m
[31m-    position: relative;[m
[31m-    max-height: calc(100vh - 75px);[m
[31m-    min-height: 100%;[m
[31m-    overflow: auto;[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar .navbar-nav.navbar-logo {[m
[31m-    top: 0;[m
[31m-    height: 53px;[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar .dropdown.show .dropdown-menu,[m
[31m-  .sidebar-collapse .navbar .dropdown .dropdown-menu {[m
[31m-    background-color: transparent;[m
[31m-    border: 0;[m
[31m-    transition: none;[m
[31m-    -webkit-box-shadow: none;[m
[31m-    box-shadow: none;[m
[31m-    width: auto;[m
[31m-    margin: 0 1rem;[m
[31m-    margin-bottom: 15px;[m
[31m-    padding-top: 0;[m
[31m-    height: 125px;[m
[31m-    overflow-y: scroll;[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar .dropdown.show .dropdown-menu:before,[m
[31m-  .sidebar-collapse .navbar .dropdown .dropdown-menu:before {[m
[31m-    display: none;[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar .dropdown .dropdown-item {[m
[31m-    padding-left: 2.5rem;[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar .dropdown .dropdown-menu {[m
[31m-    display: none;[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar .dropdown.show .dropdown-menu {[m
[31m-    display: block;[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar .dropdown-menu .dropdown-item:focus,[m
[31m-  .sidebar-collapse .navbar .dropdown-menu .dropdown-item:hover {[m
[31m-    color: #FFFFFF;[m
[31m-    border-radius: 0.1875rem;[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar .navbar-translate {[m
[31m-    width: 100%;[m
[31m-    position: relative;[m
[31m-    display: flex;[m
[31m-    -ms-flex-pack: justify !important;[m
[31m-    justify-content: space-between !important;[m
[31m-    -ms-flex-align: center;[m
[31m-    align-items: center;[m
[31m-    -webkit-transform: translate3d(0px, 0, 0);[m
[31m-    -moz-transform: translate3d(0px, 0, 0);[m
[31m-    -o-transform: translate3d(0px, 0, 0);[m
[31m-    -ms-transform: translate3d(0px, 0, 0);[m
[31m-    transform: translate3d(0px, 0, 0);[m
[31m-    -webkit-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -moz-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -o-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -ms-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar .navbar-toggler-bar {[m
[31m-    display: block;[m
[31m-    position: relative;[m
[31m-    width: 22px;[m
[31m-    height: 1px;[m
[31m-    border-radius: 1px;[m
[31m-    background: #FFFFFF;[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar .navbar-toggler-bar+.navbar-toggler-bar {[m
[31m-    margin-top: 7px;[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar .navbar-toggler-bar.bar2 {[m
[31m-    width: 17px;[m
[31m-    transition: width .2s linear;[m
[31m-  }[m
[31m-  .sidebar-collapse .navbar.bg-white:not(.navbar-transparent) .navbar-toggler-bar {[m
[31m-    background: #888888;[m
[31m-  }[m
[31m-  .sidebar-collapse .top-bar {[m
[31m-    transform: rotate(0);[m
[31m-  }[m
[31m-  .sidebar-collapse .middle-bar {[m
[31m-    opacity: 1;[m
[31m-  }[m
[31m-  .sidebar-collapse .bottom-bar {[m
[31m-    transform: rotate(0);[m
[31m-  }[m
[31m-  .sidebar-collapse .top-bar,[m
[31m-  .sidebar-collapse .middle-bar,[m
[31m-  .sidebar-collapse .bottom-bar {[m
[31m-    transition: all 0.2s;[m
[31m-  }[m
[31m-  .sidebar-collapse .toggled .top-bar {[m
[31m-    transform: rotate(45deg);[m
[31m-    transform-origin: 0%;[m
[31m-  }[m
[31m-  .sidebar-collapse .toggled .bottom-bar {[m
[31m-    transform: rotate(-45deg);[m
[31m-    transform-origin: 0%;[m
[31m-  }[m
[31m-  .sidebar-collapse .toggled .middle-bar {[m
[31m-    opacity: 0;[m
[31m-  }[m
[31m-  .sidebar-collapse [class*="navbar-expand-"] .navbar-collapse {[m
[31m-    width: 300px;[m
[31m-  }[m
[31m-  .sidebar-collapse .wrapper {[m
[31m-    -webkit-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -moz-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -o-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -ms-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-  }[m
[31m-  .sidebar-collapse #bodyClick {[m
[31m-    height: 100%;[m
[31m-    width: 100%;[m
[31m-    position: fixed;[m
[31m-    opacity: 1;[m
[31m-    top: 0;[m
[31m-    left: auto;[m
[31m-    right: 300px;[m
[31m-    content: "";[m
[31m-    z-index: 9999;[m
[31m-    overflow-x: hidden;[m
[31m-    background-color: transparent;[m
[31m-    -webkit-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -moz-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -o-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -ms-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-  }[m
[31m-  .sidebar-collapse.menu-on-left .navbar-collapse {[m
[31m-    right: auto;[m
[31m-    left: 0;[m
[31m-    -webkit-transform: translate3d(-300px, 0, 0);[m
[31m-    -moz-transform: translate3d(-300px, 0, 0);[m
[31m-    -o-transform: translate3d(-300px, 0, 0);[m
[31m-    -ms-transform: translate3d(-300px, 0, 0);[m
[31m-    transform: translate3d(-300px, 0, 0);[m
[31m-  }[m
[31m-  .nav-open .sidebar-collapse .navbar-collapse {[m
[31m-    -webkit-transform: translate3d(0px, 0, 0);[m
[31m-    -moz-transform: translate3d(0px, 0, 0);[m
[31m-    -o-transform: translate3d(0px, 0, 0);[m
[31m-    -ms-transform: translate3d(0px, 0, 0);[m
[31m-    transform: translate3d(0px, 0, 0);[m
[31m-  }[m
[31m-  .nav-open .sidebar-collapse .wrapper {[m
[31m-    -webkit-transform: translate3d(-150px, 0, 0);[m
[31m-    -moz-transform: translate3d(-150px, 0, 0);[m
[31m-    -o-transform: translate3d(-150px, 0, 0);[m
[31m-    -ms-transform: translate3d(-150px, 0, 0);[m
[31m-    transform: translate3d(-150px, 0, 0);[m
[31m-  }[m
[31m-  .nav-open .sidebar-collapse .navbar-translate {[m
[31m-    -webkit-transform: translate3d(-300px, 0, 0);[m
[31m-    -moz-transform: translate3d(-300px, 0, 0);[m
[31m-    -o-transform: translate3d(-300px, 0, 0);[m
[31m-    -ms-transform: translate3d(-300px, 0, 0);[m
[31m-    transform: translate3d(-300px, 0, 0);[m
[31m-  }[m
[31m-  .nav-open .sidebar-collapse.menu-on-left .navbar-collapse {[m
[31m-    -webkit-transform: translate3d(0px, 0, 0);[m
[31m-    -moz-transform: translate3d(0px, 0, 0);[m
[31m-    -o-transform: translate3d(0px, 0, 0);[m
[31m-    -ms-transform: translate3d(0px, 0, 0);[m
[31m-    transform: translate3d(0px, 0, 0);[m
[31m-  }[m
[31m-  .nav-open .sidebar-collapse.menu-on-left .navbar-translate {[m
[31m-    -webkit-transform: translate3d(300px, 0, 0);[m
[31m-    -moz-transform: translate3d(300px, 0, 0);[m
[31m-    -o-transform: translate3d(300px, 0, 0);[m
[31m-    -ms-transform: translate3d(300px, 0, 0);[m
[31m-    transform: translate3d(300px, 0, 0);[m
[31m-  }[m
[31m-  .nav-open .sidebar-collapse.menu-on-left .wrapper {[m
[31m-    -webkit-transform: translate3d(150px, 0, 0);[m
[31m-    -moz-transform: translate3d(150px, 0, 0);[m
[31m-    -o-transform: translate3d(150px, 0, 0);[m
[31m-    -ms-transform: translate3d(150px, 0, 0);[m
[31m-    transform: translate3d(150px, 0, 0);[m
[31m-  }[m
[31m-  .nav-open .sidebar-collapse.menu-on-left #bodyClick {[m
[31m-    right: auto;[m
[31m-    left: 300px;[m
[31m-  }[m
[31m-  .navbar-nav .nav-link i.fab,[m
[31m-  .navbar-nav .nav-link i.now-ui-icons {[m
[31m-    opacity: .5;[m
[31m-  }[m
[31m-  .bootstrap-collapse .navbar .navbar-collapse {[m
[31m-    background: none !important;[m
[31m-  }[m
[31m-  .bootstrap-collapse.menu-on-left .navbar-translate {[m
[31m-    flex-direction: row-reverse;[m
[31m-  }[m
[31m-  .bootstrap-collapse .navbar .navbar-nav {[m
[31m-    margin-top: 53px;[m
[31m-    position: relative;[m
[31m-    max-height: calc(100vh - 75px);[m
[31m-    min-height: 100%;[m
[31m-    overflow: auto;[m
[31m-  }[m
[31m-  .bootstrap-collapse .navbar .navbar-nav.navbar-logo {[m
[31m-    top: 0;[m
[31m-    height: 53px;[m
[31m-  }[m
[31m-  .bootstrap-collapse .navbar .dropdown.show .dropdown-menu,[m
[31m-  .bootstrap-collapse .navbar .dropdown .dropdown-menu {[m
[31m-    background-color: transparent;[m
[31m-    border: 0;[m
[31m-    transition: none;[m
[31m-    -webkit-box-shadow: none;[m
[31m-    box-shadow: none;[m
[31m-    width: auto;[m
[31m-    margin: 0 1rem;[m
[31m-    margin-bottom: 15px;[m
[31m-    padding-top: 0;[m
[31m-    height: 125px;[m
[31m-    overflow-y: scroll;[m
[31m-  }[m
[31m-  .bootstrap-collapse .navbar .dropdown.show .dropdown-menu:before,[m
[31m-  .bootstrap-collapse .navbar .dropdown .dropdown-menu:before {[m
[31m-    display: none;[m
[31m-  }[m
[31m-  .bootstrap-collapse .navbar .dropdown .dropdown-item {[m
[31m-    padding-left: 2.5rem;[m
[31m-  }[m
[31m-  .bootstrap-collapse .navbar .dropdown .dropdown-menu {[m
[31m-    display: none;[m
[31m-  }[m
[31m-  .bootstrap-collapse .navbar .dropdown.show .dropdown-menu {[m
[31m-    display: block;[m
[31m-  }[m
[31m-  .bootstrap-collapse .navbar .dropdown-menu .dropdown-item:focus,[m
[31m-  .bootstrap-collapse .navbar .dropdown-menu .dropdown-item:hover {[m
[31m-    color: #FFFFFF;[m
[31m-    border-radius: 0.1875rem;[m
[31m-  }[m
[31m-  .bootstrap-collapse .navbar .navbar-translate {[m
[31m-    width: 100%;[m
[31m-    position: relative;[m
[31m-    display: flex;[m
[31m-    -ms-flex-pack: justify !important;[m
[31m-    justify-content: space-between !important;[m
[31m-    -ms-flex-align: center;[m
[31m-    align-items: center;[m
[31m-    -webkit-transform: translate3d(0px, 0, 0);[m
[31m-    -moz-transform: translate3d(0px, 0, 0);[m
[31m-    -o-transform: translate3d(0px, 0, 0);[m
[31m-    -ms-transform: translate3d(0px, 0, 0);[m
[31m-    transform: translate3d(0px, 0, 0);[m
[31m-    -webkit-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -moz-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -o-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -ms-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-  }[m
[31m-  .bootstrap-collapse .navbar .navbar-toggler-bar {[m
[31m-    display: block;[m
[31m-    position: relative;[m
[31m-    width: 22px;[m
[31m-    height: 1px;[m
[31m-    border-radius: 1px;[m
[31m-    background: #FFFFFF;[m
[31m-  }[m
[31m-  .bootstrap-collapse .navbar .navbar-toggler-bar+.navbar-toggler-bar {[m
[31m-    margin-top: 7px;[m
[31m-  }[m
[31m-  .bootstrap-collapse .navbar .navbar-toggler-bar.bar2 {[m
[31m-    width: 17px;[m
[31m-    transition: width .2s linear;[m
[31m-  }[m
[31m-  .bootstrap-collapse .navbar.bg-white:not(.navbar-transparent) .navbar-toggler-bar {[m
[31m-    background: #888888;[m
[31m-  }[m
[31m-  .bootstrap-collapse .top-bar {[m
[31m-    transform: rotate(0);[m
[31m-  }[m
[31m-  .bootstrap-collapse .middle-bar {[m
[31m-    opacity: 1;[m
[31m-  }[m
[31m-  .bootstrap-collapse .bottom-bar {[m
[31m-    transform: rotate(0);[m
[31m-  }[m
[31m-  .bootstrap-collapse .top-bar,[m
[31m-  .bootstrap-collapse .middle-bar,[m
[31m-  .bootstrap-collapse .bottom-bar {[m
[31m-    transition: all 0.2s;[m
[31m-  }[m
[31m-  .bootstrap-collapse .toggled .top-bar {[m
[31m-    transform: rotate(45deg);[m
[31m-    transform-origin: 0%;[m
[31m-  }[m
[31m-  .bootstrap-collapse .toggled .bottom-bar {[m
[31m-    transform: rotate(-45deg);[m
[31m-    transform-origin: 0%;[m
[31m-  }[m
[31m-  .bootstrap-collapse .toggled .middle-bar {[m
[31m-    opacity: 0;[m
[31m-  }[m
[31m-  .profile-photo .profile-photo-small {[m
[31m-    margin-left: -2px;[m
[31m-  }[m
[31m-  .button-dropdown {[m
[31m-    display: none;[m
[31m-  }[m
[31m-  .section-nucleo-icons .container .row>[class*="col-"]:first-child {[m
[31m-    text-align: center;[m
[31m-  }[m
[31m-  .footer .copyright {[m
[31m-    text-align: right;[m
[31m-  }[m
[31m-  .section-nucleo-icons .icons-container {[m
[31m-    margin-top: 65px;[m
[31m-  }[m
[31m-  .navbar-nav .nav-link i.fa,[m
[31m-  .navbar-nav .nav-link i.now-ui-icons {[m
[31m-    opacity: .5;[m
[31m-  }[m
[31m-  .section-images {[m
[31m-    height: 500px;[m
[31m-    max-height: 500px;[m
[31m-  }[m
[31m-  .section-images .hero-images-container {[m
[31m-    max-width: 500px;[m
[31m-  }[m
[31m-  .section-images .hero-images-container-1 {[m
[31m-    right: 10%;[m
[31m-    top: 68%;[m
[31m-    max-width: 269px;[m
[31m-  }[m
[31m-  .section-images .hero-images-container-2 {[m
[31m-    right: 5%;[m
[31m-    max-width: 135px;[m
[31m-    top: 93%;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media screen and (min-width: 992px) {[m
[31m-  .navbar-collapse:not(.has-image) {[m
[31m-    background: transparent !important;[m
[31m-  }[m
[31m-  .burger-menu .navbar-collapse {[m
[31m-    position: fixed;[m
[31m-    display: block;[m
[31m-    top: 0;[m
[31m-    height: 100% !important;[m
[31m-    width: 300px;[m
[31m-    right: 0;[m
[31m-    z-index: 1032;[m
[31m-    visibility: visible;[m
[31m-    background-color: #999;[m
[31m-    overflow-y: visible;[m
[31m-    border-top: none;[m
[31m-    text-align: left;[m
[31m-    max-height: none !important;[m
[31m-    -webkit-transform: translate3d(300px, 0, 0);[m
[31m-    -moz-transform: translate3d(300px, 0, 0);[m
[31m-    -o-transform: translate3d(300px, 0, 0);[m
[31m-    -ms-transform: translate3d(300px, 0, 0);[m
[31m-    transform: translate3d(300px, 0, 0);[m
[31m-    -webkit-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -moz-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -o-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -ms-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-  }[m
[31m-  .burger-menu .navbar-collapse:before {[m
[31m-    background: #f96332;[m
[31m-    /* For browsers that do not support gradients */[m
[31m-    background: -webkit-linear-gradient(#f96332 0%, #000 80%);[m
[31m-    /* For Safari 5.1 to 6.0 */[m
[31m-    background: -o-linear-gradient(#f96332 0%, #000 80%);[m
[31m-    /* For Opera 11.1 to 12.0 */[m
[31m-    background: -moz-linear-gradient(#f96332 0%, #000 80%);[m
[31m-    /* For Firefox 3.6 to 15 */[m
[31m-    background: linear-gradient(#f96332 0%, #000 80%);[m
[31m-    /* Standard syntax (must be last) */[m
[31m-    opacity: 0.76;[m
[31m-    filter: alpha(opacity=76);[m
[31m-    display: block;[m
[31m-    content: "";[m
[31m-    position: absolute;[m
[31m-    width: 100%;[m
[31m-    height: 100%;[m
[31m-    top: 0;[m
[31m-    left: 0;[m
[31m-    z-index: -1;[m
[31m-  }[m
[31m-  .burger-menu .navbar-collapse .navbar-nav:not(.navbar-logo) .nav-link {[m
[31m-    margin: 0 1rem;[m
[31m-    margin-top: 0.3125rem;[m
[31m-  }[m
[31m-  .burger-menu .navbar-collapse .navbar-nav:not(.navbar-logo) .nav-link:not(.btn) {[m
[31m-    color: #FFFFFF !important;[m
[31m-  }[m
[31m-  .burger-menu .navbar-collapse .dropdown-menu .dropdown-item {[m
[31m-    color: #FFFFFF;[m
[31m-  }[m
[31m-  .burger-menu.menu-on-left .navbar-translate {[m
[31m-    flex-direction: row-reverse;[m
[31m-  }[m
[31m-  .burger-menu .navbar .navbar-nav {[m
[31m-    margin-top: 53px;[m
[31m-    position: relative;[m
[31m-    max-height: calc(100vh - 75px);[m
[31m-    min-height: 100%;[m
[31m-    overflow: auto;[m
[31m-  }[m
[31m-  .burger-menu .navbar .navbar-nav.navbar-logo {[m
[31m-    top: 0;[m
[31m-    height: 53px;[m
[31m-  }[m
[31m-  .burger-menu .navbar .dropdown.show .dropdown-menu,[m
[31m-  .burger-menu .navbar .dropdown .dropdown-menu {[m
[31m-    background-color: transparent;[m
[31m-    border: 0;[m
[31m-    transition: none;[m
[31m-    -webkit-box-shadow: none;[m
[31m-    box-shadow: none;[m
[31m-    width: auto;[m
[31m-    margin: 0 1rem;[m
[31m-    margin-bottom: 15px;[m
[31m-    padding-top: 0;[m
[31m-    height: 125px;[m
[31m-    overflow-y: scroll;[m
[31m-  }[m
[31m-  .burger-menu .navbar .dropdown.show .dropdown-menu:before,[m
[31m-  .burger-menu .navbar .dropdown .dropdown-menu:before {[m
[31m-    display: none;[m
[31m-  }[m
[31m-  .burger-menu .navbar .dropdown .dropdown-item {[m
[31m-    padding-left: 2.5rem;[m
[31m-  }[m
[31m-  .burger-menu .navbar .dropdown .dropdown-menu {[m
[31m-    display: none;[m
[31m-  }[m
[31m-  .burger-menu .navbar .dropdown.show .dropdown-menu {[m
[31m-    display: block;[m
[31m-  }[m
[31m-  .burger-menu .navbar .dropdown-menu .dropdown-item:focus,[m
[31m-  .burger-menu .navbar .dropdown-menu .dropdown-item:hover {[m
[31m-    color: #FFFFFF;[m
[31m-    border-radius: 0.1875rem;[m
[31m-  }[m
[31m-  .burger-menu .navbar .navbar-translate {[m
[31m-    width: 100%;[m
[31m-    position: relative;[m
[31m-    display: flex;[m
[31m-    -ms-flex-pack: justify !important;[m
[31m-    justify-content: space-between !important;[m
[31m-    -ms-flex-align: center;[m
[31m-    align-items: center;[m
[31m-    -webkit-transform: translate3d(0px, 0, 0);[m
[31m-    -moz-transform: translate3d(0px, 0, 0);[m
[31m-    -o-transform: translate3d(0px, 0, 0);[m
[31m-    -ms-transform: translate3d(0px, 0, 0);[m
[31m-    transform: translate3d(0px, 0, 0);[m
[31m-    -webkit-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -moz-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -o-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -ms-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-  }[m
[31m-  .burger-menu .navbar .navbar-toggler-bar {[m
[31m-    display: block;[m
[31m-    position: relative;[m
[31m-    width: 22px;[m
[31m-    height: 1px;[m
[31m-    border-radius: 1px;[m
[31m-    background: #FFFFFF;[m
[31m-  }[m
[31m-  .burger-menu .navbar .navbar-toggler-bar+.navbar-toggler-bar {[m
[31m-    margin-top: 7px;[m
[31m-  }[m
[31m-  .burger-menu .navbar .navbar-toggler-bar.bar2 {[m
[31m-    width: 17px;[m
[31m-    transition: width .2s linear;[m
[31m-  }[m
[31m-  .burger-menu .navbar.bg-white:not(.navbar-transparent) .navbar-toggler-bar {[m
[31m-    background: #888888;[m
[31m-  }[m
[31m-  .burger-menu .top-bar {[m
[31m-    transform: rotate(0);[m
[31m-  }[m
[31m-  .burger-menu .middle-bar {[m
[31m-    opacity: 1;[m
[31m-  }[m
[31m-  .burger-menu .bottom-bar {[m
[31m-    transform: rotate(0);[m
[31m-  }[m
[31m-  .burger-menu .top-bar,[m
[31m-  .burger-menu .middle-bar,[m
[31m-  .burger-menu .bottom-bar {[m
[31m-    transition: all 0.2s;[m
[31m-  }[m
[31m-  .burger-menu .toggled .top-bar {[m
[31m-    transform: rotate(45deg);[m
[31m-    transform-origin: 0%;[m
[31m-  }[m
[31m-  .burger-menu .toggled .bottom-bar {[m
[31m-    transform: rotate(-45deg);[m
[31m-    transform-origin: 0%;[m
[31m-  }[m
[31m-  .burger-menu .toggled .middle-bar {[m
[31m-    opacity: 0;[m
[31m-  }[m
[31m-  .burger-menu [class*="navbar-expand-"] .navbar-collapse {[m
[31m-    width: 300px;[m
[31m-  }[m
[31m-  .burger-menu .wrapper {[m
[31m-    -webkit-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -moz-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -o-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -ms-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-  }[m
[31m-  .burger-menu #bodyClick {[m
[31m-    height: 100%;[m
[31m-    width: 100%;[m
[31m-    position: fixed;[m
[31m-    opacity: 1;[m
[31m-    top: 0;[m
[31m-    left: auto;[m
[31m-    right: 300px;[m
[31m-    content: "";[m
[31m-    z-index: 9999;[m
[31m-    overflow-x: hidden;[m
[31m-    background-color: transparent;[m
[31m-    -webkit-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -moz-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -o-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    -ms-transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-    transition: all 0.5s cubic-bezier(0.685, 0.0473, 0.346, 1);[m
[31m-  }[m
[31m-  .nav-open .burger-menu .navbar-collapse {[m
[31m-    -webkit-transform: translate3d(0px, 0, 0);[m
[31m-    -moz-transform: translate3d(0px, 0, 0);[m
[31m-    -o-transform: translate3d(0px, 0, 0);[m
[31m-    -ms-transform: translate3d(0px, 0, 0);[m
[31m-    transform: translate3d(0px, 0, 0);[m
[31m-  }[m
[31m-  .burger-menu .navbar-collapse {[m
[31m-    display: block !important;[m
[31m-  }[m
[31m-  .burger-menu .navbar-collapse .navbar-nav {[m
[31m-    margin-top: 53px;[m
[31m-    height: 100%;[m
[31m-    z-index: 2;[m
[31m-    position: relative;[m
[31m-    display: -webkit-box;[m
[31m-    display: -webkit-flex;[m
[31m-    display: -ms-flexbox;[m
[31m-    display: flex;[m
[31m-    -webkit-box-orient: vertical;[m
[31m-    -webkit-box-direction: normal;[m
[31m-    -webkit-flex-direction: column;[m
[31m-    -ms-flex-direction: column;[m
[31m-    flex-direction: column;[m
[31m-  }[m
[31m-  .burger-menu .navbar-collapse .navbar-nav .nav-item {[m
[31m-    margin: 0;[m
[31m-  }[m
[31m-  .burger-menu.menu-on-left .navbar-collapse {[m
[31m-    right: auto;[m
[31m-    left: 0;[m
[31m-    -webkit-transform: translate3d(-300px, 0, 0);[m
[31m-    -moz-transform: translate3d(-300px, 0, 0);[m
[31m-    -o-transform: translate3d(-300px, 0, 0);[m
[31m-    -ms-transform: translate3d(-300px, 0, 0);[m
[31m-    transform: translate3d(-300px, 0, 0);[m
[31m-  }[m
[31m-  .burger-menu [class*="navbar-expand-"] .navbar-nav .dropdown-menu {[m
[31m-    position: static;[m
[31m-    float: none;[m
[31m-  }[m
[31m-  .burger-menu [class*="navbar-expand-"] .navbar-toggler {[m
[31m-    display: inline-block;[m
[31m-  }[m
[31m-  .burger-menu .section-navbars .navbar-collapse {[m
[31m-    display: none !important;[m
[31m-  }[m
[31m-  .nav-open .burger-menu.menu-on-left .navbar .navbar-translate {[m
[31m-    -webkit-transform: translate3d(300px, 0, 0);[m
[31m-    -moz-transform: translate3d(300px, 0, 0);[m
[31m-    -o-transform: translate3d(300px, 0, 0);[m
[31m-    -ms-transform: translate3d(300px, 0, 0);[m
[31m-    transform: translate3d(300px, 0, 0);[m
[31m-  }[m
[31m-  .nav-open .burger-menu .navbar .navbar-translate {[m
[31m-    -webkit-transform: translate3d(-300px, 0, 0);[m
[31m-    -moz-transform: translate3d(-300px, 0, 0);[m
[31m-    -o-transform: translate3d(-300px, 0, 0);[m
[31m-    -ms-transform: translate3d(-300px, 0, 0);[m
[31m-    transform: translate3d(-300px, 0, 0);[m
[31m-  }[m
[31m-  .nav-open .burger-menu.menu-on-left .navbar-collapse {[m
[31m-    -webkit-transform: translate3d(0px, 0, 0);[m
[31m-    -moz-transform: translate3d(0px, 0, 0);[m
[31m-    -o-transform: translate3d(0px, 0, 0);[m
[31m-    -ms-transform: translate3d(0px, 0, 0);[m
[31m-    transform: translate3d(0px, 0, 0);[m
[31m-  }[m
[31m-  .nav-open .burger-menu.menu-on-left #bodyClick {[m
[31m-    right: auto;[m
[31m-    left: 300px;[m
[31m-  }[m
[31m-  .burger-menu.menu-on-left .navbar-brand {[m
[31m-    float: right;[m
[31m-    margin-right: 0;[m
[31m-    margin-left: 1rem;[m
[31m-  }[m
[31m-  .navbar-nav .nav-link.profile-photo {[m
[31m-    padding: 0;[m
[31m-    margin: 7px 0.7rem;[m
[31m-  }[m
[31m-  .navbar-nav .nav-link.btn:not(.btn-sm) {[m
[31m-    margin: 0;[m
[31m-  }[m
[31m-  .navbar-nav .nav-item:not(:last-child) {[m
[31m-    margin-right: 5px;[m
[31m-  }[m
[31m-  .section-nucleo-icons .icons-container {[m
[31m-    margin: 0 0 0 auto;[m
[31m-  }[m
[31m-  .dropdown-menu .dropdown-item {[m
[31m-    color: inherit;[m
[31m-    display: flex;[m
[31m-    align-items: center;[m
[31m-  }[m
[31m-  .dropdown-menu .dropdown-item i {[m
[31m-    margin-right: 5px;[m
[31m-    position: relative;[m
[31m-    top: 1px;[m
[31m-  }[m
[31m-  .footer .copyright {[m
[31m-    float: right;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media screen and (min-width: 768px) {[m
[31m-  .image-container.image-right {[m
[31m-    top: 80px;[m
[31m-    margin-left: -100px;[m
[31m-    margin-bottom: 130px;[m
[31m-  }[m
[31m-  .image-container.image-left {[m
[31m-    margin-right: -100px;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media screen and (max-width: 768px) {[m
[31m-  .image-container.image-left {[m
[31m-    margin-bottom: 220px;[m
[31m-  }[m
[31m-  .image-container.image-left p.blockquote {[m
[31m-    margin: 0 auto;[m
[31m-    position: relative;[m
[31m-    right: 0;[m
[31m-  }[m
[31m-  .nav-tabs {[m
[31m-    display: inline-block;[m
[31m-    width: 100%;[m
[31m-    padding-left: 100px;[m
[31m-    padding-right: 100px;[m
[31m-    text-align: center;[m
[31m-  }[m
[31m-  .nav-tabs .nav-item>.nav-link {[m
[31m-    margin-bottom: 5px;[m
[31m-  }[m
[31m-  .landing-page .section-story-overview .image-container:nth-child(2) {[m
[31m-    margin-left: 0;[m
[31m-    margin-bottom: 30px;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media screen and (max-width: 576px) {[m
[31m-  .navbar[class*='navbar-expand-'] .container {[m
[31m-    margin-left: 0;[m
[31m-    margin-right: 0;[m
[31m-  }[m
[31m-  .footer .copyright {[m
[31m-    text-align: center;[m
[31m-  }[m
[31m-  .section-nucleo-icons .icons-container i {[m
[31m-    font-size: 30px;[m
[31m-  }[m
[31m-  .section-nucleo-icons .icons-container i:nth-child(6) {[m
[31m-    font-size: 48px;[m
[31m-  }[m
[31m-  .page-header .container h6.category-absolute {[m
[31m-    width: 90%;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media screen and (min-width: 991px) and (max-width: 1200px) {[m
[31m-  .section-images .hero-images-container-1 {[m
[31m-    right: 9%;[m
[31m-    max-width: 370px;[m
[31m-  }[m
[31m-  .section-images .hero-images-container-2 {[m
[31m-    right: 2%;[m
[31m-    max-width: 216px;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media screen and (max-width: 768px) {[m
[31m-  .section-images {[m
[31m-    height: 300px;[m
[31m-    max-height: 300px;[m
[31m-  }[m
[31m-  .section-images .hero-images-container {[m
[31m-    max-width: 380px;[m
[31m-  }[m
[31m-  .section-images .hero-images-container-1 {[m
[31m-    right: 7%;[m
[31m-    top: 87%;[m
[31m-    max-width: 210px;[m
[31m-  }[m
[31m-  .section-images .hero-images-container-2 {[m
[31m-    right: 1%;[m
[31m-    max-width: 133px;[m
[31m-    top: 99%;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media screen and (max-width: 517px) {[m
[31m-  .alert .alert-icon {[m
[31m-    margin-top: 10px;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media screen and (min-width: 1200px) {[m
[31m-  .section-images .hero-images-container-1 {[m
[31m-    top: 51%;[m
[31m-    right: 21%;[m
[31m-  }[m
[31m-  .section-images .hero-images-container-2 {[m
[31m-    top: 66%;[m
[31m-    right: 14%;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media only screen and (min-device-width: 768px) and (max-device-width: 1024px) and (orientation: portrait) {[m
[31m-  .section-images .hero-images-container,[m
[31m-  .section-images .hero-images-container-1,[m
[31m-  .section-images .hero-images-container-2 {[m
[31m-    margin-top: -15vh;[m
[31m-    margin-left: 80px;[m
[31m-  }[m
[31m-  .section-images .hero-images-container {[m
[31m-    max-width: 300px;[m
[31m-  }[m
[31m-  .section-images .hero-images-container-1 {[m
[31m-    right: 28%;[m
[31m-    top: 40%;[m
[31m-  }[m
[31m-  .section-images .hero-images-container-2 {[m
[31m-    right: 21%;[m
[31m-    top: 55%;[m
[31m-  }[m
[31m-  .index-page .category-absolute {[m
[31m-    top: 90vh;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media screen and (max-width: 580px) {[m
[31m-  .alert button.close {[m
[31m-    position: absolute;[m
[31m-    right: 11px;[m
[31m-    top: 50%;[m
[31m-    transform: translateY(-50%);[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-@media only screen and (min-height: 950px) {[m
[31m-  .index-page .page-header .category-absolute {[m
[31m-    margin-top: -330px;[m
[31m-  }[m
[31m-}[m
[31m-[m
[31m-/*# sourceMappingURL=kit-free.css.map */[m
[1mdiff --git a/css/testando.css b/css/testando.css[m
[1mdeleted file mode 100644[m
[1mindex 85c7787..0000000[m
[1m--- a/css/testando.css[m
[1m+++ /dev/null[m
[36m@@ -1,214 +0,0 @@[m
[31m-body {[m
[31m-    font-family: 'Poppins', sans-serif !important;[m
[31m-    background-color: #1D1E28;[m
[31m-    color: #fff;[m
[31m-    -webkit-font-smoothing: antialiased;[m
[31m-    -moz-osx-font-smoothing: grayscale;[m
[31m-    text-rendering: optimizeLegibility;[m
[31m-    border-top: 6px #ff5252 solid !important;[m
[31m-    font-size: 16px;[m
[31m-}[m
[31m-[m
[31m-.nav-link {[m
[31m-     font-size: 14px !important;[m
[31m-     background: transparent !important;[m
[31m-     font-family: Lato, sans-serif !important;[m
[31m-     text-transform: capitalize !important;[m
[31m- }[m
[31m- .nav-link:hover {[m
[31m-     background: transparent !important;[m
[31m-     color: #AD91FF !important;[m
[31m-     font-weight: bold !important;[m
[31m- }[m
[31m-[m
[31m- .login-btn {[m
[31m-     border: 2px solid #AD91FF !important;[m
[31m-     font-size: 10px !important;[m
[31m- }[m
[31m- .login-btn:hover {[m
[31m-     background: #AD91FF !important;[m
[31m- }[m
[31m-.navbar {[m
[31m-    box-shadow: none !important[m
[31m-}[m
[31m-[m
[31m-.navbar-brand {[m
[31m-    font-size: 25px !important[m
[31m-}[m
[31m-[m
[31m-.navbar-toggler-icon {[m
[31m-    color: #fff !important[m
[31m-}[m
[31m-[m
[31m-.btn {[m
[31m-    border-radius: 10px !important;[m
[31m-    font-size: 16px !important;[m
[31m-    font-weight: 600 !important;[m
[31m-    text-transform: uppercase !important;[m
[31m-}[m
[31m-[m
[31m-.btn-primary {[m
[31m-    background-color: #AD91FF!important[m
[31m-}[m
[31m-.btn-secondary {[m
[31m-    background-color: #2C2F33 !important[m
[31m-}[m
[31m-.heading {[m
[31m-    padding: 160px 50px !important;[m
[31m-    color: #fff !important;[m
[31m-    background-image: url("../assets/wavy-purple-by-nouridio.svg") !important;[m
[31m-    background-position: bottom !important;[m
[31m-    background-size: 300% !important;[m
[31m-    background-repeat: no-repeat !important;[m
[31m-}[m
[31m-[m
[31m-.title {[m
[31m-    line-height: 90px !important;[m
[31m-    margin-bottom: -2px !important;[m
[31m-    font-size: 36px !important[m
[31m-}[m
[31m-[m
[31m-.subtitle {[m
[31m-    color: rgba(255, 255, 255, 0.685) !important;[m
[31m-    font-size: 16px !important;[m
[31m-    font-family: 'Lato', sans-serif;[m
[31m-}[m
[31m-[m
[31m-[m
[31m-.features {[m
[31m-    text-align: center !important;[m
[31m-    background: #AD91FF !important;[m
[31m-    padding: 60px 50px !important;[m
[31m-    background-image: url("../assets/wavy-dark-by-nouridio.svg") !important;[m
[31m-    background-position: bottom !important;[m
[31m-    background-size: 200% !important;[m
[31m-    background-repeat: no-repeat !important;[m
[31m-}[m
[31m-.features .title {[m
[31m-    font-size: 40px !important;[m
[31m-    color: #ffffff !important;[m
[31m-    line-height: 70px !important;[m
[31m-}[m
[31m-[m
[31m-.features .subtitle {[m
[31m-    font-size: 20px !important;[m
[31m-    color: #a2a8bd;[m
[31m-}[m
[31m-[m
[31m-.features .card-body {[m
[31m-    text-align: left !important;[m
[31m-}[m
[31m-[m
[31m-.features .card-title {[m
[31m-    margin: 0 0 -3px !important;[m
[31m-}[m
[31m-.cards {[m
[31m-    margin-top: 30px !important;[m
[31m-}[m
[31m-[m
[31m-.card {[m
[31m-    border-radius: 5px !important;[m
[31m-    box-shadow: none !important;[m
[31m-}[m
[31m-[m
[31m-.card-title {[m
[31m-    font-size: 28px !important;[m
[31m-    font-weight: 600 !important;[m
[31m-    color: #AD91FF !important;[m
[31m-}[m
[31m-[m
[31m-.statistics {[m
[31m-    text-align: center !important;[m
[31m-    padding-top: 300px !important;[m
[31m-}[m
[31m-[m
[31m-.statistics .card-body{[m
[31m-    padding: 0 !important;[m
[31m-    height: 280 !important;[m
[31m-    width: 332 !important;[m
[31m-    max-height: 280 !important;[m
[31m-    max-width: 332 !important;[m
[31m-}[m
[31m-[m
[31m-.statistics .title {[m
[31m-    font-size: 40px !important;[m
[31m-    color: #ffffff !important;[m
[31m-    line-height: 70px !important;[m
[31m-}[m
[31m-[m
[31m-.statistics .subtitle {[m
[31m-    font-size: 20px !important;[m
[31m-    color: #a2a8bd;[m
[31m-}[m
[31m-[m
[31m-.card.statistic {[m
[31m-    background: transparent !important;[m
[31m-    box-shadow: none !important;[m
[31m-    color: #f7f7f7 !important;[m
[31m-}[m
[31m-[m
[31m-[m
[31m-.page_end {[m
[31m-    background-image: url("../assets/wavy-light-by-nouridio.svg") !important;[m
[31m-    background-position: bottom !important;[m
[31m-    background-size: 200% !important;[m
[31m-    background-repeat: no-repeat !important;[m
[31m-}[m
[31m-.start {[m
[31m-    padding: 60px 50px !important[m
[31m-}[m
[31m-[m
[31m-.start .card {[m
[31m-    background: transparent !important;[m
[31m-    color: #f6f9ff !important;[m
[31m-}[m
[31m-[m
[31m-.features .card {[m
[31m-    background: #1D1E28;[m
[31m-    border-radius: 22px !important;[m
[31m-    border: 4px solid #AD91FF;[m
[31m-}[m
[31m-.features .card-text {[m
[31m-color: rgba(255, 255, 255, 0.46) !important[m
[31m-}[m
[31m-[m
[31m-.features .card-body {[m
[31m-    padding: 40px 40px 40px 30px !important;[m
[31m-}[m
[31m-[m
[31m-.navbar-toggler-icon {[m
[31m-    color: #fff !important[m
[31m-}[m
[31m-.footer {[m
[31m-    text-align: center !important;[m
[31m-    padding: 5px 6px !important;[m
[31m-    color: #ecf2ff;[m
[31m-    padding: 30px 30px !important[m
[31m-}[m
[31m-[m
[31m-.footer .nouridio {[m
[31m-    font-family: 'Montserrat' !important;[m
[31m-    font-style: normal !important;[m
[31m-    font-weight: 600 !important;[m
[31m-    font-size: 16px !important;[m
[31m-    line-height: 5px !important;[m
[31m-    letter-spacing: 0.15em !important;[m
[31m-    font-variant: small-caps !important;[m
[31m-}[m
[31m-[m
[31m-.footer .nouridio a {[m
[31m-    color: #AD91FF !important;[m
[31m-    text-decoration: none !important;[m
[31m-}[m
[31m-[m
[31m-.footer .bot-footer {[m
[31m-    text-align: center !important;[m
[31m-    color: #a2a8bd !important[m
[31m-}[m
[31m-.Img {[m
[31m-    width: 64PX;[m
[31m-    font-size: 20px !important;[m
[31m-    color: #ffffff !important;[m
[31m-    line-height: 70px !important;[m
[31m-    padding: 10px;[m
[31m-}[m
\ No newline at end of file[m
[1mdiff --git a/gamedev.html b/gamedev.html[m
[1mdeleted file mode 100644[m
[1mindex 940d52c..0000000[m
[1m--- a/gamedev.html[m
[1m+++ /dev/null[m
[36m@@ -1,15 +0,0 @@[m
[31m-<!DOCTYPE html>[m
[31m-<html lang="en">[m
[31m-<head>[m
[31m-    <meta charset="UTF-8">[m
[31m-    <title>GameDev</title>[m
[31m-    <link rel="stylesheet" href="css/GameDev.css" content="width=device-width,initial-scale=1.0">[m
[31m-[m
[31m-[m
[31m-</head>[m
[31m-<body>[m
[31m-    <div>[m
[31m-        <p>Hi</p>[m
[31m-    </div>[m
[31m-</body>[m
[31m-</html>[m
\ No newline at end of file[m
[1mdiff --git a/img/Icon.png b/img/Icon.png[m
[1mdeleted file mode 100644[m
[1mindex acb36c6..0000000[m
Binary files a/img/Icon.png and /dev/null differ
[1mdiff --git a/img/discord.png b/img/discord.png[m
[1mdeleted file mode 100644[m
[1mindex 5b62c91..0000000[m
Binary files a/img/discord.png and /dev/null differ
[1mdiff --git a/img/menu.png b/img/menu.png[m
[1mdeleted file mode 100644[m
[1mindex 0895f9a..0000000[m
Binary files a/img/menu.png and /dev/null differ
[1mdiff --git a/index.html b/index.html[m
[1mdeleted file mode 100644[m
[1mindex c3f3df3..0000000[m
[1m--- a/index.html[m
[1m+++ /dev/null[m
[36m@@ -1,65 +0,0 @@[m
[31m-<!DOCTYPE html>[m
[31m-<html lang="en">[m
[31m-<head>[m
[31m-      <meta charset="UTF-8">[m
[31m-      <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">[m
[31m-      <link rel="stylesheet" href="css/bootstrap.min.css">[m
[31m-      <link rel="stylesheet" href="css/main.css">[m
[31m-      <link rel="stylesheet" href="css/now-ui-kit.css">[m
[31m-      <link href="https://fonts.googleapis.com/css?family=Poppins:300,400,600,700,800,900&display=swap" rel="stylesheet">[m
[31m-      <link href="https://fonts.googleapis.com/css?family=Montserrat:400,600,700,800,900&display=swap" rel="stylesheet">[m
[31m-      <link href="https://fonts.googleapis.com/css?family=Lato:300,400,600,700,800,900&display=swap" rel="stylesheet">[m
[31m-      <script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>[m
[31m-      <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script>[m
[31m-      <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>[m
[31m-      <script src="js/now-ui-kit.min.js"></script>[m
[31m-      <title class="tittle">TwT - SadDocinho</title>[m
[31m-</head>[m
[31m-<body>[m
[31m-<nav class="navbar navbar-expand-lg bg-transparent">[m
[31m-    <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">[m
[31m-          <img src="../assets/menuIcon.svg" width="20px" height="20px" style="max-width: none !important;">[m
[31m-      </button>[m
[31m-      <img src="assets/BotLogo.png" width="50" height="50">[m
[31m-      <div class="collapse navbar-collapse" id="navbarSupportedContent" style="margin-left: 20px !important">[m
[31m-          <ul class="navbar-nav mr-auto">[m
[31m-              <li class="nav-item active">[m
[31m-                  <a class="nav-link" href="index.html">Home <span class="sr-only">(current)</span></a>[m
[31m-              </li>[m
[31m-              <li class="nav-item">[m
[31m-                  <a class="nav-link" href="Page/Discord.html">discord</a>[m
[31m-              </li>[m
[31m-              <li class="nav-item">[m
[31m-                  <a class="nav-link" href="Page/Testando.html">TestArea</a>[m
[31m-              </li>[m
[31m-              <li>[m
[31m-                <a class="nav-link" href="gamedev.html">GameDev</a>[m
[31m-              </li>[m
[31m-              <!--<li class="nav-item">[m
[31m-                  <a class="nav-link" href="Page/Bot.html">TwT_Page</a>[m
[31m-              </li>-->[m
[31m-          </ul>[m
[31m-          <div class="nav-item dropdown">[m
[31m-              <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">[m
[31m-                  Rede social[m
[31m-              </a>[m
[31m-              <div class="dropdown-menu" aria-labelledby="navbarDropdown">[m
[31m-                  <a class="dropdown-item" href="https://www.instagram.com/littlesadfelipe.m/?hl=pt-br">Instagram</a>[m
[31m-                  <a class="dropdown-item" href="#">Discord</a>[m
[31m-                  <div class="dropdown-divider"></div>[m
[31m-                  <a class="dropdown-item" href="https://www.youtube.com/channel/UCBzptjjkWSxLDZQ8ih5Npdw">Youtube</a>[m
[31m-              </div>[m
[31m-          </div>[m
[31m-          <div class="nav-item">[m
[31m-              <a class="nav-link" href="#">About</a>[m
[31m-          </div>[m
[31m-       <button class="btn login-btn btn-outline-accent my-2 my-sm-0" style="font-size: 10px !important;font-family: poppins !important;">LOGIN</button>[m
[31m-   </div>[m
[31m-</nav>[m
[31m-<div>[m
[31m-   <p class="subtitle">What sup</p>[m
[31m-</div>[m
[31m-[m
[31m-</body>[m
[31m-[m
[31m-</html>[m
[1mdiff --git a/js/animes.js b/js/animes.js[m
[1mdeleted file mode 100644[m
[1mindex e69de29..0000000[m
[1mdiff --git a/js/discord.js b/js/discord.js[m
[1mdeleted file mode 100644[m
[1mindex e69de29..0000000[m
[1mdiff --git a/js/now-ui-kit.min.js b/js/now-ui-kit.min.js[m
[1mdeleted file mode 100644[m
[1mindex 005d910..0000000[m
[1m--- a/js/now-ui-kit.min.js[m
[1m+++ /dev/null[m
[36m@@ -1,2 +0,0 @@[m
[31m-var big_image,navbar_initialized,nowuiKit,$navbar,scroll_distance,oVal,transparent=!0,transparentDemo=!0,fixedTop=!1,backgroundOrange=!1,toggle_initialized=!1;function debounce(n,e,t){var r;return function(){var a=this,o=arguments;clearTimeout(r),r=setTimeout(function(){r=null,t||n.apply(a,o)},e),t&&!r&&n.apply(a,o)}}function debounce(n,e,t){var r;return function(){var a=this,o=arguments;clearTimeout(r),r=setTimeout(function(){r=null,t||n.apply(a,o)},e),t&&!r&&n.apply(a,o)}}$(document).ready(function(){$('[data-toggle="tooltip"], [rel="tooltip"]').tooltip(),$('[data-toggle="popover"]').each(function(){color_class=$(this).data("color"),$(this).popover({template:'<div class="popover popover-'+color_class+'" role="tooltip"><div class="arrow"></div><h3 class="popover-header"></h3><div class="popover-body"></div></div>'})}),nowuiKit.initNavbarImage(),$navbar=$(".navbar[color-on-scroll]"),scroll_distance=$navbar.attr("color-on-scroll")||500,0!=$(".navbar[color-on-scroll]").length&&(nowuiKit.checkScrollForTransparentNavbar(),$(window).on("scroll",nowuiKit.checkScrollForTransparentNavbar)),$(".form-control").on("focus",function(){$(this).parent(".input-group").addClass("input-group-focus")}).on("blur",function(){$(this).parent(".input-group").removeClass("input-group-focus")}),$(".bootstrap-switch").each(function(){$this=$(this),data_on_label=$this.data("on-label")||"",data_off_label=$this.data("off-label")||"",$this.bootstrapSwitch({onText:data_on_label,offText:data_off_label})}),992<=$(window).width()&&(big_image=$('.page-header-image[data-parallax="true"]'),$(window).on("scroll",nowuiKitDemo.checkScrollForParallax)),$(".carousel").carousel({interval:4e3}),$(".date-picker").each(function(){$(this).datepicker({templates:{leftArrow:'<i class="now-ui-icons arrows-1_minimal-left"></i>',rightArrow:'<i class="now-ui-icons arrows-1_minimal-right"></i>'}}).on("show",function(){$(".datepicker").addClass("open"),datepicker_color=$(this).data("datepicker-color"),0!=datepicker_color.length&&$(".datepicker").addClass("datepicker-"+datepicker_color)}).on("hide",function(){$(".datepicker").removeClass("open")})})}),nowuiKitDemo={checkScrollForParallax:debounce(function(){$(this).scrollTop();oVal=$(window).scrollTop()/3,big_image.css({transform:"translate3d(0,"+oVal+"px,0)","-webkit-transform":"translate3d(0,"+oVal+"px,0)","-ms-transform":"translate3d(0,"+oVal+"px,0)","-o-transform":"translate3d(0,"+oVal+"px,0)"})},6)},$(window).on("resize",function(){nowuiKit.initNavbarImage()}),$(document).on("click",".navbar-toggler",function(){$toggle=$(this),1==nowuiKit.misc.navbar_menu_visible?($("html").removeClass("nav-open"),nowuiKit.misc.navbar_menu_visible=0,$("#bodyClick").remove(),setTimeout(function(){$toggle.removeClass("toggled")},550)):(setTimeout(function(){$toggle.addClass("toggled")},580),div='<div id="bodyClick"></div>',$(div).appendTo("body").click(function(){$("html").removeClass("nav-open"),nowuiKit.misc.navbar_menu_visible=0,setTimeout(function(){$toggle.removeClass("toggled"),$("#bodyClick").remove()},550)}),$("html").addClass("nav-open"),nowuiKit.misc.navbar_menu_visible=1)}),nowuiKit={misc:{navbar_menu_visible:0},checkScrollForTransparentNavbar:debounce(function(){$(document).scrollTop()>scroll_distance?transparent&&(transparent=!1,$(".navbar[color-on-scroll]").removeClass("navbar-transparent")):transparent||(transparent=!0,$(".navbar[color-on-scroll]").addClass("navbar-transparent"))},17),initNavbarImage:function(){var a=$(".navbar").find(".navbar-translate").siblings(".navbar-collapse"),o=a.data("nav-image");null!=o&&($(window).width()<991||$("body").hasClass("burger-menu")?a.css("background","url('"+o+"')").removeAttr("data-nav-image").css("background-size","cover").addClass("has-image"):a.css("background","").attr("data-nav-image",""+o).css("background-size","").removeClass("has-image"))},initSliders:function(){var a=document.getElementById("sliderRegular");noUiSlider.create(a,{start:40,connect:[!0,!1],range:{min:0,max:100}});var o=document.getElementById("sliderDouble");noUiSlider.create(o,{start:[20,60],connect:!0,range:{min:0,max:100}})}},nowuiKitDemo={checkScrollForParallax:debounce(function(){$(this).scrollTop();oVal=$(window).scrollTop()/3,big_image.css({transform:"translate3d(0,"+oVal+"px,0)","-webkit-transform":"translate3d(0,"+oVal+"px,0)","-ms-transform":"translate3d(0,"+oVal+"px,0)","-o-transform":"translate3d(0,"+oVal+"px,0)"})},6)};[m
[31m-//# sourceMappingURL=_site_kit_free/assets/js/kit-free.js.map[m
[1mdiff --git a/package.json b/package.json[m
[1mdeleted file mode 100644[m
[1mindex 4f73a64..0000000[m
[1m--- a/package.json[m
[1m+++ /dev/null[m
[36m@@ -1,26 +0,0 @@[m
[31m-{[m
[31m-  "name": "site",[m
[31m-  "version": "1.0.0",[m
[31m-  "description": "",[m
[31m-  "main": "app.js",[m
[31m-  "dependencies": {[m
[31m-    "bootstrap-icons": "^1.8.1",[m
[31m-    "express": "^4.17.3"[m
[31m-  },[m
[31m-  "devDependencies": {[m
[31m-    "electron-nightly": "^19.0.0-nightly.20220209"[m
[31m-  },[m
[31m-  "scripts": {[m
[31m-    "test": "echo \"Error: no test specified\" && exit 1"[m
[31m-  },[m
[31m-  "repository": {[m
[31m-    "type": "git",[m
[31m-    "url": "git+https://github.com/SadDocinho/Site.git"[m
[31m-  },[m
[31m-  "author": "",[m
[31m-  "license": "ISC",[m
[31m-  "bugs": {[m
[31m-    "url": "https://github.com/SadDocinho/Site/issues"[m
[31m-  },[m
[31m-  "homepage": "https://github.com/SadDocinho/Site#readme"[m
[31m-}[m
[1mdiff --git a/play/01.mp4 b/play/01.mp4[m
[1mdeleted file mode 100644[m
[1mindex 66cb10c..0000000[m
Binary files a/play/01.mp4 and /dev/null differ
