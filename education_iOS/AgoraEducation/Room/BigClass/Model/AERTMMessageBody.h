//
//  EEBCRoomDataManager.h
//  AgoraEducation
//
//  Created by yangmoumou on 2019/10/31.
//  Copyright © 2019 yangmoumou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AEStudentModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface AERTMMessageBody : NSObject
+ (NSString *)studentApplyLink;
+ (NSString *)studentCancelLink;

+ (NSString *)setChannelAttrsWithValue:(AEStudentModel *)model;

+ (NSString *)MD5WithString:(NSString *)str;
+ (BOOL)judgeClassRoomText:(NSString *)text;
+ (void)addShadowWithView:(UIView *)view alpha:(CGFloat)alpha;
+ (NSString *)muteVideoStream:(BOOL)stream;
+ (NSString *)muteAudioStream:(BOOL)stream;
+ (NSString *)muteChatContent:(BOOL)isMute;
+ (NSString *)getUserID;
+ (NSString *)sendP2PMessageWithName:(NSString *)name content:(NSString *)content;
@end

NS_ASSUME_NONNULL_END
