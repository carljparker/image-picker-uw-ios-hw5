//
//  GetImageViewController.h
//  
//
//  Created by Parker, Carl (HBO) on 5/18/15.
//
//

#import <UIKit/UIKit.h>
#import "MobileCoreServices/MobileCoreServices.h"

@interface GetImageViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *displayPickedImageView;

@end
