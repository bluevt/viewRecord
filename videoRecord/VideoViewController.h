//
//  VideoViewController.h
//  videoRecord
//
//  Created by 田立彬 on 13-2-22.
//  Copyright (c) 2013年 田立彬. All rights reserved.
//


//
// 使用AVCaptureSession录制
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>


@interface VideoViewController : UIViewController<AVCaptureVideoDataOutputSampleBufferDelegate>
//{
//    dispatch_semaphore_t frameRenderingSemaphore;
//
//}

@property (nonatomic, assign) BOOL started;
@property (nonatomic, assign) CMTime frameDuration;
@property (nonatomic, assign) CMTime nextPTS;

@property (nonatomic, retain) AVCaptureSession* captureSession;
@property (nonatomic, retain) AVAssetWriter *assetWriter;
@property (nonatomic, retain) AVAssetWriterInput *assetWriterInput;
@property (nonatomic, retain) AVCaptureVideoDataOutput* videoOutput;
@property (nonatomic, retain) NSURL *outputMovURL;
@property (nonatomic, retain) NSURL* outputMp4URL;

@property (nonatomic, retain) UIView *previewView;
@property (nonatomic, retain) UIProgressView* progressBar;
@end
