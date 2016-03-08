//
//  RNPDFView.h
//  App
//
//  Created by Sibelius Seraphini on 3/1/16.
//  Copyright © 2016 Facebook. All rights reserved.
//

#import "RCTEventDispatcher.h"

@class RCTEventDispatcher;

@interface RNPDFView : UIView

@property (nonatomic, strong) NSString *src;
@property (nonatomic, strong) NSNumber *pageNumber;

@end