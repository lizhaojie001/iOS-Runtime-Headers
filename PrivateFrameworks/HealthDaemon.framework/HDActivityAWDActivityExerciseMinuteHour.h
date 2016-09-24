/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivityAWDActivityExerciseMinuteHour : PBCodable <NSCopying> {
    int  _exerciseMinutes;
    struct { 
        unsigned int exerciseMinutes : 1; 
        unsigned int hourSinceMidnight : 1; 
    }  _has;
    int  _hourSinceMidnight;
}

@property (nonatomic) int exerciseMinutes;
@property (nonatomic) BOOL hasExerciseMinutes;
@property (nonatomic) BOOL hasHourSinceMidnight;
@property (nonatomic) int hourSinceMidnight;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)exerciseMinutes;
- (BOOL)hasExerciseMinutes;
- (BOOL)hasHourSinceMidnight;
- (unsigned int)hash;
- (int)hourSinceMidnight;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setExerciseMinutes:(int)arg1;
- (void)setHasExerciseMinutes:(BOOL)arg1;
- (void)setHasHourSinceMidnight:(BOOL)arg1;
- (void)setHourSinceMidnight:(int)arg1;
- (void)writeTo:(id)arg1;

@end