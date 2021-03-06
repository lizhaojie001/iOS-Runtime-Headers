/* Generated by RuntimeBrowser.
 */

@protocol EDFormulaBuilding <NSObject>

@required

- (BOOL)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (BOOL)addInfixOperator:(int)arg1 atIndex:(unsigned int)arg2 factor:(double)arg3;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (BOOL)convertLastRefsToArea;
- (BOOL)convertToIntersect:(unsigned int)arg1;
- (BOOL)convertToList:(unsigned int)arg1;
- (BOOL)convertToList:(unsigned int)arg1 withFinalParen:(BOOL)arg2;
- (BOOL)fixTableOfConstantsRefs;
- (BOOL)insertExternalName:(unsigned int)arg1 withLink:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (BOOL)insertName:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (bool)isSupportedFormula;
- (EDLinkReference *)lastTokenRefOrArea3dLinkRefIsValid:(BOOL*)arg1 withEDLinks:(EDLinksCollection *)arg2;
- (void)markLastTokenAsDuration;
- (void)markLastTokenAsSpanningRefVertically:(BOOL)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (void)removeTokenAtIndex:(unsigned int)arg1;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)setWarning:(int)arg1;
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (int)tokenTypeAtIndex:(unsigned int)arg1;
- (BOOL)uppercaseArgAtIndex:(unsigned int)arg1;
- (int)warningType;
- (BOOL)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned int)arg2 atIndex:(unsigned int)arg3;

@end
