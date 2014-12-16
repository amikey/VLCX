//
//  VXPlaybackController.h
//  VLCX
//
//  Created by Guilherme Rambo on 16/12/14.
//  Copyright (c) 2014 Guilherme Rambo. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@import VLCKit;

@interface VXPlaybackController : NSViewController <VLCMediaDelegate, VLCMediaPlayerDelegate>

- (void)volumeUp;
- (void)volumeDown;

@end