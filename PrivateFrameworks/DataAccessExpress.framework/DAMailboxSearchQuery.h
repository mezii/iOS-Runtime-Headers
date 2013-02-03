/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSDate, NSString;

@interface DAMailboxSearchQuery : DASearchQuery {
    NSInteger _MIMESupport;
    BOOL _allOrNone;
    NSInteger _bodyType;
    NSString *_collectionID;
    BOOL _deepTraversal;
    NSDate *_priorToDate;
    BOOL _rebuildResults;
    long long _truncationSize;
}

@property BOOL rebuildResults; /* unknown property attribute: V_rebuildResults */
@property BOOL deepTraversal; /* unknown property attribute: V_deepTraversal */
@property NSInteger MIMESupport; /* unknown property attribute: V_MIMESupport */
@property(retain) NSDate *priorToDate; /* unknown property attribute: V_priorToDate */
@property BOOL allOrNone; /* unknown property attribute: V_allOrNone */
@property long long truncationSize; /* unknown property attribute: V_truncationSize */
@property NSInteger bodyType; /* unknown property attribute: V_bodyType */
@property(retain) NSString *collectionID; /* unknown property attribute: V_collectionID */

+ (id)mailboxSearchQueryWithSearchString:(id)arg1 consumer:(id)arg2;

- (NSInteger)MIMESupport;
- (BOOL)allOrNone;
- (NSInteger)bodyType;
- (id)collectionID;
- (void)dealloc;
- (BOOL)deepTraversal;
- (id)dictionaryRepresentation;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (id)priorToDate;
- (BOOL)rebuildResults;
- (void)setAllOrNone:(BOOL)arg1;
- (void)setBodyType:(NSInteger)arg1;
- (void)setCollectionID:(id)arg1;
- (void)setDeepTraversal:(BOOL)arg1;
- (void)setMIMESupport:(NSInteger)arg1;
- (void)setPriorToDate:(id)arg1;
- (void)setRebuildResults:(BOOL)arg1;
- (void)setTruncationSize:(long long)arg1;
- (long long)truncationSize;

@end