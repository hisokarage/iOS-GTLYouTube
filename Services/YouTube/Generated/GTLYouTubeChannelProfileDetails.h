/* Copyright (c) 2016 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLYouTubeChannelProfileDetails.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Description:
//   Programmatic access to YouTube features.
// Documentation:
//   https://developers.google.com/youtube/v3
// Classes:
//   GTLYouTubeChannelProfileDetails (0 custom class methods, 4 custom properties)

#import "GTLObject.h"

// ----------------------------------------------------------------------------
//
//   GTLYouTubeChannelProfileDetails
//

@interface GTLYouTubeChannelProfileDetails : GTLObject

// The YouTube channel ID.
@property (nonatomic, copy) NSString *channelId;

// The channel's URL.
@property (nonatomic, copy) NSString *channelUrl;

// The channel's display name.
@property (nonatomic, copy) NSString *displayName;

// The channels's avatar URL.
@property (nonatomic, copy) NSString *profileImageUrl;

@end
