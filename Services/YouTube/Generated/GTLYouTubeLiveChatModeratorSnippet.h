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
//  GTLYouTubeLiveChatModeratorSnippet.h
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
//   GTLYouTubeLiveChatModeratorSnippet (0 custom class methods, 2 custom properties)

#import "GTLObject.h"

@class GTLYouTubeChannelProfileDetails;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeLiveChatModeratorSnippet
//

@interface GTLYouTubeLiveChatModeratorSnippet : GTLObject

// The ID of the live chat this moderator can act on.
@property (nonatomic, copy) NSString *liveChatId;

// Details about the moderator.
@property (nonatomic, retain) GTLYouTubeChannelProfileDetails *moderatorDetails;

@end
