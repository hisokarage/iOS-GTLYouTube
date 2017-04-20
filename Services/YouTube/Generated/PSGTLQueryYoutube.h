//
//  PSGTLQueryYoutube.h
//  PlaySightMultiSport
//
//  Created by Andrey on 19.04.17.
//  Copyright © 2017 M.I.F. Projects. All rights reserved.
//

#import "GTLQueryYouTube.h"

@class GTLYouTubeLiveBroadcast;
@class GTLYouTubeLiveStream;

@interface PSGTLQueryYoutube : GTLQueryYouTube

@property (nonatomic, copy) NSString *streamId;
@property (nonatomic, copy) NSString *broadcastStatus;

+ (instancetype)queryForLiveBroadcastsInsertWithObject:(GTLYouTubeLiveBroadcast *)object
                                                  part:(NSString *)part;

+ (instancetype)queryForLiveStreamsInsertWithObject:(GTLYouTubeLiveStream *)object
                                               part:(NSString *)part;

+ (instancetype)queryForLiveBroadcastsBindWithIdentifier:(NSString *)identifier
                                                    part:(NSString *)part;

+ (instancetype)queryForLiveBroadcastsTransitionWithBroadcastStatus:(NSString *)broadcastStatus
                                                         identifier:(NSString *)identifier
                                                               part:(NSString *)part;

+ (instancetype)queryForLiveBroadcastsDeleteWithIdentifier:(NSString *)identifier;

@end
