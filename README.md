Views MediaTable
==============


-- INTRODUCTION --

Views MediaTable integrate the functionality of MediaTable into the Views module, allowing the creation of dynamic views tables where users of your site can choose to show or hide certain columns. This module also allows certain table column to behave responsively, hiding the less relevant data in smaller screen sizes.



-- REQUIREMENTS --

Module Dependencies:
- Views
- Libraries API

Library Dependencies:
- MediaTable



-- INSTALLATION --

1. Views MediaTable depends on the Views and Libraries modules. They can be downloaded from:
http://drupal.org/project/views
http://drupal.org/project/libraries

2. Download and place the MediaTable library into your libraries directory ( e.g. /sites/all/libraries ). The MediaTable library from here: http://consulenza-web.com/jquery/MediaTable/

3. Once the dependencies are in place and installed. Copy the entirety of the views_mediatable directory into your modules directoy ( e.g. /sites/all/modules ) and active the Views MediaTable module.


-- USAGE --

Once the module is properly installed. A new views format "Views MediaTable Table" will be usable. This format has a settings "MediaTable Display Options" for each of its columns. This new setting has 3 options:
1. Always shown
	- A column with this option will always be displayed despite the screen size and users will not have the option to hide the column.

2. Shown with option to hide
	- A column with this setting will be shown by default and is unaffected by the screen size. However, the user will have the option to hide column.

3. Hide in smaller resolution unless overridden
	- A column with this setting will show by default in wider screen sizes (1024px or higher) and will hide automatically for all screen sizes under 1024px. However, the user have the option to show the column even in smaller screen sizes.

