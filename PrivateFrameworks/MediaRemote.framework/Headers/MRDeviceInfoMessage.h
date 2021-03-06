//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRSupportedProtocolMessages, _MRDeviceInfoMessageProtobuf;

@interface MRDeviceInfoMessage : MRProtocolMessage
{
    MRSupportedProtocolMessages *_supportedProtocolMessages;
}

// - (void).cxx_destruct;
- (NSUInteger)_lastSupportedMessageTypeBeforeSupportedMessagesWereAddedToDeviceInfo;
- (NSUInteger)_lastSupportedMessageType;
- (NSUInteger)type;
- (NSUInteger)encryptionType;
@property(readonly, nonatomic) MRSupportedProtocolMessages *supportedProtocolMessages;
@property(readonly, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo;
- (id)initWithDeviceInfo:(id)arg1;

@end

