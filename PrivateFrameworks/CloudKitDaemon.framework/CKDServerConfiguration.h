/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSDate, NSMutableDictionary, NSString;

@interface CKDServerConfiguration : NSObject <CKPropertyCoding> {
    NSMutableDictionary *_allowedAppVersionsCache;
    NSDate *_expiry;
    NSMutableDictionary *_values;
}

@property(retain) NSMutableDictionary * allowedAppVersionsCache;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSDate * expiry;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) NSMutableDictionary * values;

- (void).cxx_destruct;
- (id)allowedAppVersionsCache;
- (bool)applicationWithBundleID:(id)arg1 canSyncUsingVersion:(id)arg2 forContainer:(id)arg3;
- (id)description;
- (id)dictionaryPropertyEncoding;
- (id)expiry;
- (id)flowControlBudgetForContainer:(id)arg1;
- (id)flowControlMaximumThrottleTime:(id)arg1;
- (id)flowControlRegenerationForContainer:(id)arg1;
- (id)initWithPropertyDictionary:(id)arg1;
- (id)initWithValues:(id)arg1;
- (bool)isExpired;
- (unsigned long long)maxBatchSizeForContainer:(id)arg1;
- (id)mescalCertURLForContainer:(id)arg1;
- (unsigned int)mescalServerVersionForContainer:(id)arg1;
- (id)mescalSessionURLForContainer:(id)arg1;
- (void)setAllowedAppVersionsCache:(id)arg1;
- (void)setExpiry:(id)arg1;
- (void)setValues:(id)arg1;
- (bool)shouldSignForMessageType:(int)arg1 inDatabaseScope:(long long)arg2 forContainer:(id)arg3;
- (long long)tokenRegisterDaysForContainer:(id)arg1;
- (id)valueForKeyPath:(id)arg1 forContainer:(id)arg2;
- (id)values;

@end