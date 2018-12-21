//
// Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License").
// You may not use this file except in compliance with the License.
// A copy of the License is located at
//
// http://aws.amazon.com/apache2.0
//
// or in the "license" file accompanying this file. This file is distributed
// on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing
// permissions and limitations under the License.
//

#import <Foundation/Foundation.h>

/*!
 Project version number for the AWSKinesisVideo framework.

 @warning This value is deprecated and will be removed in an upcoming minor
 version of the SDK. It conflicts with the umbrella header generated by
 CocoaPods, and is not implemented at all in cases where this SDK is imported
 as a CocoaPod static library. As this numeric value does not support
 patch-level versioning, you should use AWSKinesisVideoSDKVersion instead.
 @deprecated Use AWSKinesisVideoSDKVersion instead.
 */
FOUNDATION_EXPORT double AWSKinesisVideoVersionNumber DEPRECATED_MSG_ATTRIBUTE("Use AWSKinesisVideoSDKVersion instead.");

/*!
 Project version string for the AWSKinesisVideo framework.

 @warning This value is deprecated and will be removed in an upcoming minor
 version of the SDK. It conflicts with the umbrella header generated by
 CocoaPods, and is not implemented at all in cases where this SDK is imported
 as a CocoaPod static library.
 @deprecated Use AWSKinesisVideoSDKVersion instead.
 */
FOUNDATION_EXPORT const unsigned char AWSKinesisVideoVersionString[] DEPRECATED_MSG_ATTRIBUTE("Use AWSKinesisVideoSDKVersion instead.");

#import <AWSCore/AWSCore.h>
#import "AWSKinesisVideoService.h"
