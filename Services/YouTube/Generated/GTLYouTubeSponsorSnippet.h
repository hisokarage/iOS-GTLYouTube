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
//  GTLYouTubeSponsorSnippet.h
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
//   GTLYouTubeSponsorSnippet (0 custom class methods, 3 custom properties)

#import "GTLObject.h"

@class GTLYouTubeChannelProfileDetails;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeSponsorSnippet
//

@interface GTLYouTubeSponsorSnippet : GTLObject

// The id of the channel being sponsored.
@property (nonatomic, copy) NSString *channelId;

// Details about the sponsor.
@property (nonatomic, retain) GTLYouTubeChannelProfileDetails *sponsorDetails;

// The date and time when the user became a sponsor. The value is specified in
// ISO 8601 (YYYY-MM-DDThh:mm:ss.sZ) format.
@property (nonatomic, retain) GTLDateTime *sponsorSince;

@end
