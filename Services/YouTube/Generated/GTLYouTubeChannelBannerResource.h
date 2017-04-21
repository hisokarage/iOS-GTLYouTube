/* Copyright (c) 2015 Google Inc.
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
//  GTLYouTubeChannelBannerResource.h
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
//   GTLYouTubeChannelBannerResource (0 custom class methods, 3 custom properties)

#import "GTLObject.h"

// ----------------------------------------------------------------------------
//
//   GTLYouTubeChannelBannerResource
//

// A channel banner returned as the response to a channel_banner.insert call.

@interface GTLYouTubeChannelBannerResource : GTLObject

// Etag of this resource.
@property (nonatomic, copy) NSString *ETag;

// Identifies what kind of resource this is. Value: the fixed string
// "youtube#channelBannerResource".
@property (nonatomic, copy) NSString *kind;

// The URL of this banner image.
@property (nonatomic, copy) NSString *url;

@end
