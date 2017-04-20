//
//  PSGTLQueryYoutube.m
//  PlaySightMultiSport
//
//  Created by Andrey on 19.04.17.
//  Copyright © 2017 M.I.F. Projects. All rights reserved.
//

#import "PSGTLQueryYoutube.h"

#import "GTLYouTubeLiveStream.h"
#import "GTLYouTubeLiveBroadcast.h"

@implementation PSGTLQueryYoutube

+ (instancetype)queryForLiveBroadcastsInsertWithObject:(GTLYouTubeLiveBroadcast *)object
                                                  part:(NSString *)part {
    if (object == nil) {
        GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
        return nil;
    }
    NSString *methodName = @"youtube.liveBroadcasts.insert";
    PSGTLQueryYoutube *query = [self queryWithMethodName:methodName];
    query.bodyObject = object;
    query.part = part;
    query.expectedObjectClass = [GTLYouTubeLiveBroadcast class];
    return query;
}

+ (instancetype)queryForLiveStreamsInsertWithObject:(GTLYouTubeLiveStream *)object
                                               part:(NSString *)part {
    if (object == nil) {
        GTL_DEBUG_ASSERT(object != nil, @"%@ got a nil object", NSStringFromSelector(_cmd));
        return nil;
    }
    NSString *methodName = @"youtube.liveStreams.insert";
    PSGTLQueryYoutube *query = [self queryWithMethodName:methodName];
    query.bodyObject = object;
    query.part = part;
    query.expectedObjectClass = [GTLYouTubeLiveStream class];
    return query;
}

+ (instancetype)queryForLiveBroadcastsBindWithIdentifier:(NSString *)identifier
                                                    part:(NSString *)part {
    NSString *methodName = @"youtube.liveBroadcasts.bind";
    PSGTLQueryYoutube *query = [self queryWithMethodName:methodName];
    query.identifier = identifier;
    query.part = part;
    query.expectedObjectClass = [GTLYouTubeLiveBroadcast class];
    return query;
}

+ (instancetype)queryForLiveBroadcastsTransitionWithBroadcastStatus:(NSString *)broadcastStatus
                                                         identifier:(NSString *)identifier
                                                               part:(NSString *)part {
    NSString *methodName = @"youtube.liveBroadcasts.transition";
    PSGTLQueryYoutube *query = [self queryWithMethodName:methodName];
    query.broadcastStatus = broadcastStatus;
    query.identifier = identifier;
    query.part = part;
    query.expectedObjectClass = [GTLYouTubeLiveBroadcast class];
    return query;
}

+ (instancetype)queryForLiveBroadcastsDeleteWithIdentifier:(NSString *)identifier {
    NSString *methodName = @"youtube.liveBroadcasts.delete";
    PSGTLQueryYoutube *query = [self queryWithMethodName:methodName];
    query.identifier = identifier;
    return query;
}

@end
