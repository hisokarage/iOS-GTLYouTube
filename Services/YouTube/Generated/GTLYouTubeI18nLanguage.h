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
//  GTLYouTubeI18nLanguage.h
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
//   GTLYouTubeI18nLanguage (0 custom class methods, 4 custom properties)

#import "GTLObject.h"

@class GTLYouTubeI18nLanguageSnippet;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeI18nLanguage
//

// An i18nLanguage resource identifies a UI language currently supported by
// YouTube.

@interface GTLYouTubeI18nLanguage : GTLObject

// Etag of this resource.
@property (nonatomic, copy) NSString *ETag;

// The ID that YouTube uses to uniquely identify the i18n language.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Identifies what kind of resource this is. Value: the fixed string
// "youtube#i18nLanguage".
@property (nonatomic, copy) NSString *kind;

// The snippet object contains basic details about the i18n language, such as
// language code and human-readable name.
@property (nonatomic, retain) GTLYouTubeI18nLanguageSnippet *snippet;

@end
