# Homework 5 :: CP 125 iOS App Dev, Spring 2015 #

The files for this homework are also available at the following
repository on GitHub:

>  <https://github.com/carljparker/image-picker-uw-ios-hw5>

The app for this homework displays a table of images. The user can add
images to the table by selecting them from the photo library on the
device or by capturing new images using the camera on the device.

Although it wasn't specified in the homework assignment, the table
displays the date that the image was selected or captured in addition to
the image itself.


## Layout ##

The layout of the UI was done in `wAny hAny`. I made some updates to the
layout for in `wCompact hRegular` so that the app rendered better on my
personal iPhone 5s.

I tested the app with the iPhone 5s, iPhone 6+, and iPad Retina in the
iOS simulator. I also tested the app by downloading it to my personal
iPhone 5s. All of these displayed the app usably. However, see **Known
Issues** below regarding the app crashing on iPad Retina. 


## Known Issues ##

The app crashes on the iPad Retina in the simulator when the code tries
to display the Action Sheet which enables the user to select direct
image capture with the camera or selecting an image from the photo
library. I did not debug this issue.

When displayed in the table, the image seems to take up the entire
height of the table cell. This occurs even if I specify the height of
the table cell to be significantly greater than the ImageView in which
the image is displayed. (140 for the table cell vs 116 for the
ImageView.)

In terms of usability, it would be nice to extend the app so that the
user could do something with the images once they are in the table.
Right now, the table is like the **Roach Motel**; images check in, but
they don't check out.

*** END ***

