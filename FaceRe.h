//
//  FaceRe.h
//  FaceRe
//
//  Created by ningcol on 2019/4/26.
//  Copyright © 2019年 ningcol. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <opencv2/opencv.hpp>

@protocol FaceReDelegte <NSObject>
//得到关键点和图片
- (void)processImageMarks:(NSMutableArray *)landmarks matImage:(cv::Mat &)image;
@end

@interface FaceRe : NSObject
@property(nonatomic ,weak)id<FaceReDelegte> delegate;
//处理图片
- (void)processImage:(cv::Mat &)image;
@end
