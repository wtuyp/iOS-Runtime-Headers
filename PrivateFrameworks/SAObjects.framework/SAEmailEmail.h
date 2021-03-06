/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSDate, NSNumber, NSString, NSURL, SAPersonAttribute;

@interface SAEmailEmail : SADomainObject {
}

@property(copy) NSDate * dateSent;
@property(retain) SAPersonAttribute * fromEmail;
@property(copy) NSString * message;
@property(copy) NSNumber * outgoing;
@property(copy) NSArray * receivingAddresses;
@property(copy) NSArray * recipientsBcc;
@property(copy) NSArray * recipientsCc;
@property(copy) NSArray * recipientsTo;
@property(copy) NSURL * referenceId;
@property(copy) NSString * subject;
@property(copy) NSString * timeZoneId;
@property(copy) NSString * type;

+ (id)email;
+ (id)emailWithDictionary:(id)arg1 context:(id)arg2;

- (id)dateSent;
- (id)encodedClassName;
- (id)fromEmail;
- (id)groupIdentifier;
- (id)message;
- (id)outgoing;
- (id)receivingAddresses;
- (id)recipientsBcc;
- (id)recipientsCc;
- (id)recipientsTo;
- (id)referenceId;
- (void)setDateSent:(id)arg1;
- (void)setFromEmail:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setOutgoing:(id)arg1;
- (void)setReceivingAddresses:(id)arg1;
- (void)setRecipientsBcc:(id)arg1;
- (void)setRecipientsCc:(id)arg1;
- (void)setRecipientsTo:(id)arg1;
- (void)setReferenceId:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (void)setType:(id)arg1;
- (id)subject;
- (id)timeZoneId;
- (id)type;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
