# E3 Demo
Demo for e3 PSD
by Frances Naty Go
May 17, 2017

#### Steps To Create and Install Project
1. Setup git repo at Github or Bitbucket
2. Add .gitignore and README file
3. Git clone the repo
4. Add Default Drupal installation
5. Add Necessary Modules
6. Setup Local Host Using MAMP
7. Add Theme - using Bootstrap and a sub theme of it using the CDN
8. Add Gulp, package.json with SASS capabilities
9. Run `npm install`
10. Add all the files so far to Github initial commit


#### To Setup Drupal
1. Inside the /sites directory, add default directory with settings.php. 
    Usually do not include this inside the Git repo because it changes 
    depending on the server.
2. Setup with MySQL and database info.
3. Add .htaccess to project directory since we don't include that in the 
  repository because it might change from local to live site
4. Choose E3Demo Theme with Flatly Bootstrap Theme
5. Enable E3Demo Events Custom Feature


#### To Update Theme
1. Inside the E3 Demo theme directory, type
`gulp watch`
2. Made changes necessary to scss files
3. The slant blue design in top part is difficult to do without using an SVG image, 
  and I'm not sure how to create SVG files because I tend ask the Graphics
  Designer to do that for me.

