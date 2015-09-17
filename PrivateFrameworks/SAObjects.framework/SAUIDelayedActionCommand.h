/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIDelayedActionCommand : SADomainCommand

@property (nonatomic, copy) NSArray *commands;

+ (id)delayedActionCommand;
+ (id)delayedActionCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setCommands:(id)arg1;

@end