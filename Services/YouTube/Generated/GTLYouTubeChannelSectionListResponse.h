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
//  GTLYouTubeChannelSectionListResponse.h
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
//   GTLYouTubeChannelSectionListResponse (0 custom class methods, 5 custom properties)

#import "GTLObject.h"

@class GTLYouTubeChannelSection;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeChannelSectionListResponse
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLYouTubeChannelSectionListResponse : GTLCollectionObject

// Etag of this resource.
@property (nonatomic, copy) NSString *ETag;

// Serialized EventId of the request which produced this response.
@property (nonatomic, copy) NSString *eventId;

// A list of ChannelSections that match the request criteria.
@property (nonatomic, retain) NSArray *items;  // of GTLYouTubeChannelSection

// Identifies what kind of resource this is. Value: the fixed string
// "youtube#channelSectionListResponse".
@property (nonatomic, copy) NSString *kind;

// The visitorId identifies the visitor.
@property (nonatomic, copy) NSString *visitorId;

@end
