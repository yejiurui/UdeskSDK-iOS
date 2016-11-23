//
//  UdeskGeneral.h
//  UdeskSDK
//
//  Created by xuchen on 15/12/21.
//  Copyright © 2015年 xuchen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UdeskStringSizeUtil : NSObject

+ (CGSize)textSize:(NSString *)text withFont:(UIFont *)font withSize:(CGSize)size;

+ (CGFloat)getHeightForAttributedText:(NSAttributedString *)attributedText
                            textWidth:(CGFloat)textWidth;

+ (CGSize)getSizeForAttributedText:(NSAttributedString *)attributedText
                         textWidth:(CGFloat)textWidth;


@end