# Homework 5 :: CP 125 iOS App Dev, Spring 2015 #

The files for this homework are also available at the following
repository on GitHub:

>  <https://github.com/carljparker/image-picker-uw-ios-hw5>

The app for this homework displays a table of images. The user can add
images to the table by selecting them from the photo library on the
device or by capturing new images using the camera on the device.

The UX of my app is different than that displayed in the homework
assignment. Actually, I did not realize this until I had completed my
app(!). Instead of displaying the camera button on the same screen as
the image-list table, I display a plus-sign button that takes the user
to another screen where they can select or capture new images for the
table.

Although it wasn't specified in the homework assignment, the table
displays the date that the image was selected or captured in addition to
the image itself.


## Layout ##

The layout of the UI was done in `wAny hAny`. I made some updates to the
layout for in `wCompact hRegular` so that the app rendered better on my
personal iPhone 5s.

I tested the app with the iPhone 5s, iPhone 6+, and iPad Retina in the
iOS simulator. I also tested the app by downloading it to my personal
iPhone 5s. All of these _displayed_ the app usably. However, see **Known
Issues** below regarding the app crashing on iPad Retina. 


## Known Issues ##

The app crashes on the iPad Retina in the simulator when the code tries
to display the action sheet which enables the user to select direct
image capture with the camera or selecting an image from the photo
library. I did not debug this issue, but the HW mentions that, for iPad,
I should ensure that the alert controller is presented as a _popover_
from the camera bar button item, so perhaps that is the source of the
issue.

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

