/* Copyright (c) 2012 Google Inc.
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
//  GTLCivicInfoPollingLocation.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Civic Information API (civicinfo/us_v1)
// Description:
//   An API for accessing civic information.
// Documentation:
//   https://developers.google.com/civic-information
// Classes:
//   GTLCivicInfoPollingLocation (0 custom class methods, 8 custom properties)

#import "GTLCivicInfoPollingLocation.h"

#import "GTLCivicInfoSimpleAddressType.h"
#import "GTLCivicInfoSource.h"

// ----------------------------------------------------------------------------
//
//   GTLCivicInfoPollingLocation
//

@implementation GTLCivicInfoPollingLocation
@dynamic address, endDate, name, notes, pollingHours, sources, startDate,
         voterServices;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLCivicInfoSource class]
                                forKey:@"sources"];
  return map;
}

@end
