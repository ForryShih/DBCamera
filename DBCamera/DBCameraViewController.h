//
//  DBCameraViewController.h
//  DBCamera
//
//  Created by iBo on 31/01/14.
//  Copyright (c) 2014 PSSD - Daniele Bogo. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol DBCameraViewControllerDelegate;
@interface DBCameraViewController : UIViewController
@property (nonatomic, weak) id <DBCameraViewControllerDelegate> delegate;

+ (DBCameraViewController *) initWithDelegate:(id<DBCameraViewControllerDelegate>)delegate;
+ (DBCameraViewController *) init;

- (id) initWithDelegate:(id<DBCameraViewControllerDelegate>)delegate cameraView:(id)camera;

@end

@protocol DBCameraViewControllerDelegate <NSObject>
@optional
- (void) captureImageDidFinish:(UIImage *)image;
@end