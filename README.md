# terminal-pixel-art-renderer
And it works surprisingly well!

## Usage
### Requirements
<ul>
  <li>If using windows, then windows 10 or later</li>
  <li>Unix should work for (pretty much) all versions</li>
  <li><strong><em>A TERMINAL THAT SUPPORTS COLOUR</em></strong></li>
  <li>A c++ compiler</li>
</ul>

### Pre-Compilation
First you need an image to actually render. You have to make it in <a href="https://www.piskelapp.com/">Piskel</a>. It's free, a website, and great!. The reason you can only make it in this software is because everyone has likes to be complicated and have different formats.
Once you are done making pixel art, follow what the gif does:
<img src="./Screen recording 2025-07-01 3.46.45 PM.gif" title="instructions" alt="instructions gif">
Then you have to open that C file you just downloaded and colors.cpp in whatever text editor of your choice. In the downloaded C file, you will see that there is an array. COPY JUST THE ARRAY, and then put it anywhere above the main function in colors.cpp. The gif on this part didn't work, sorry!

### Compilation
Just compile it regularly with any compiler that you have, for example:

```zsh
clang++ colors.cpp -o colors && ./colors
```

Sorry that this project is a little particular, and your terminal might render it weird.

## Code License
This code should be under the MIT License, meaning that you do whatever you want with the code.
