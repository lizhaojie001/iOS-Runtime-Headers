/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMAssociatedMessageChatItem : IMTranscriptChatItem {
    struct IMAssociatedMessageGeometryDescriptor { 
        unsigned int layoutIntent; 
        unsigned int associatedLayoutIntent; 
        double parentPreviewWidth; 
        double xScalar; 
        double yScalar; 
        double scale; 
        double rotation; 
    }  _geometryDescriptor;
    BOOL  _parentMessageIsFromMe;
    IMHandle * _sender;
}

@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } associatedMessageRange;
@property (nonatomic, readonly) int associatedMessageType;
@property (nonatomic, readonly) BOOL failed;
@property (nonatomic, readonly) struct IMAssociatedMessageGeometryDescriptor { unsigned int x1; unsigned int x2; double x3; double x4; double x5; double x6; double x7; } geometryDescriptor;
@property (nonatomic, readonly) BOOL isFromMe;
@property (nonatomic, readonly) NSDictionary *messageSummaryInfo;
@property (nonatomic, readonly) BOOL parentMessageIsFromMe;
@property (nonatomic, readonly) IMHandle *sender;
@property (nonatomic, readonly) NSDate *time;

- (void).cxx_destruct;
- (id)_imAssociatedMessageItem;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
- (void)_setParentMessageIsFromMe:(BOOL)arg1;
- (id)associatedMessageGUID;
- (struct _NSRange { unsigned int x1; unsigned int x2; })associatedMessageRange;
- (int)associatedMessageType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)failed;
- (struct IMAssociatedMessageGeometryDescriptor { unsigned int x1; unsigned int x2; double x3; double x4; double x5; double x6; double x7; })geometryDescriptor;
- (BOOL)isFromMe;
- (id)message;
- (id)messageSummaryInfo;
- (BOOL)parentMessageIsFromMe;
- (id)sender;
- (id)time;

@end