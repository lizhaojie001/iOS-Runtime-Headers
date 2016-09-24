/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSActivityEvent : NSObject {
    unsigned int  _activityID;
    NSString * _eventMessage;
    unsigned int  _eventType;
    unsigned int  _machTimestamp;
    unsigned int  _parentActivityID;
    BOOL  _persisted;
    int  _processID;
    NSString * _processImagePath;
    NSUUID * _processImageUUID;
    unsigned int  _processUniqueID;
    NSString * _senderImagePath;
    NSUUID * _senderImageUUID;
    unsigned int  _threadID;
    struct timeval { 
        int tv_sec; 
        int tv_usec; 
    }  _timeGMT;
    NSDate * _timestamp;
    NSTimeZone * _timezone;
    NSString * _timezoneName;
    unsigned int  _traceID;
    struct timezone { 
        int tz_minuteswest; 
        int tz_dsttime; 
    }  _tz;
}

@property (readonly) unsigned int activityID;
@property (copy) NSString *eventMessage;
@property (readonly) unsigned int eventType;
@property (readonly) unsigned int machTimestamp;
@property (readonly) unsigned int parentActivityID;
@property (readonly) BOOL persisted;
@property (readonly, copy) NSString *process;
@property (readonly) int processID;
@property (readonly, copy) NSString *processImagePath;
@property (readonly, copy) NSUUID *processImageUUID;
@property (readonly) unsigned int processUniqueID;
@property (readonly, copy) NSString *sender;
@property (readonly, copy) NSString *senderImagePath;
@property (readonly, copy) NSUUID *senderImageUUID;
@property (readonly) unsigned int threadID;
@property (readonly) struct timeval { int x1; int x2; } timeGMT;
@property (readonly, copy) NSDate *timestamp;
@property (readonly, copy) NSTimeZone *timezone;
@property (retain) NSString *timezoneName;
@property (readonly) unsigned int traceID;
@property (readonly) struct timezone { int x1; int x2; } tz;

+ (id)activityEventFromStreamEntry:(struct os_activity_stream_entry_s { unsigned int x1; int x2; unsigned int x3; char *x4; char *x5; unsigned int x6; unsigned int x7; union { struct os_activity_stream_common_s { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; char *x_1_2_4; char *x_1_2_5; struct timeval { int x_6_3_1; int x_6_3_2; } x_1_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_1_2_7; unsigned int x_1_2_8; } x_8_1_1; struct os_activity_create_s { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; char *x_2_2_4; char *x_2_2_5; struct timeval { int x_6_3_1; int x_6_3_2; } x_2_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_2_2_7; unsigned int x_2_2_8; char *x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; } x_8_1_2; struct os_activity_transition_s { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; char *x_3_2_4; char *x_3_2_5; struct timeval { int x_6_3_1; int x_6_3_2; } x_3_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_3_2_7; unsigned int x_3_2_8; unsigned int x_3_2_9; } x_8_1_3; struct os_log_message_s { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; char *x_4_2_4; char *x_4_2_5; struct timeval { int x_6_3_1; int x_6_3_2; } x_4_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_4_2_7; unsigned int x_4_2_8; char *x_4_2_9; char *x_4_2_10; unsigned int x_4_2_11; char *x_4_2_12; unsigned int x_4_2_13; char *x_4_2_14; char *x_4_2_15; unsigned int x_4_2_16; unsigned char x_4_2_17; bool x_4_2_18; } x_8_1_4; } x8; }*)arg1;

- (void).cxx_destruct;
- (void)_addProperties:(id)arg1;
- (void)_initWithProperties:(id)arg1;
- (unsigned int)activityID;
- (id)eventMessage;
- (unsigned int)eventType;
- (void)fillFromStreamEntry:(struct os_activity_stream_entry_s { unsigned int x1; int x2; unsigned int x3; char *x4; char *x5; unsigned int x6; unsigned int x7; union { struct os_activity_stream_common_s { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; char *x_1_2_4; char *x_1_2_5; struct timeval { int x_6_3_1; int x_6_3_2; } x_1_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_1_2_7; unsigned int x_1_2_8; } x_8_1_1; struct os_activity_create_s { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; char *x_2_2_4; char *x_2_2_5; struct timeval { int x_6_3_1; int x_6_3_2; } x_2_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_2_2_7; unsigned int x_2_2_8; char *x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; } x_8_1_2; struct os_activity_transition_s { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; char *x_3_2_4; char *x_3_2_5; struct timeval { int x_6_3_1; int x_6_3_2; } x_3_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_3_2_7; unsigned int x_3_2_8; unsigned int x_3_2_9; } x_8_1_3; struct os_log_message_s { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; char *x_4_2_4; char *x_4_2_5; struct timeval { int x_6_3_1; int x_6_3_2; } x_4_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_4_2_7; unsigned int x_4_2_8; char *x_4_2_9; char *x_4_2_10; unsigned int x_4_2_11; char *x_4_2_12; unsigned int x_4_2_13; char *x_4_2_14; char *x_4_2_15; unsigned int x_4_2_16; unsigned char x_4_2_17; bool x_4_2_18; } x_8_1_4; } x8; }*)arg1 eventMessage:(const char *)arg2 persisted:(BOOL)arg3;
- (unsigned int)machTimestamp;
- (unsigned int)parentActivityID;
- (BOOL)persisted;
- (id)process;
- (int)processID;
- (id)processImagePath;
- (id)processImageUUID;
- (unsigned int)processUniqueID;
- (id)properties;
- (id)sender;
- (id)senderImagePath;
- (id)senderImageUUID;
- (void)setEventMessage:(id)arg1;
- (void)setTimezoneName:(id)arg1;
- (unsigned int)threadID;
- (struct timeval { int x1; int x2; })timeGMT;
- (id)timeZone;
- (id)timestamp;
- (id)timezone;
- (id)timezoneName;
- (unsigned int)traceID;
- (struct timezone { int x1; int x2; })tz;

@end