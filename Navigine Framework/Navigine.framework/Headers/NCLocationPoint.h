#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NCLocationPoint : NSObject <NSCoding, NSCopying>

/**
 * Id of location
 */
@property (nonatomic, readonly) NSInteger location;

/**
 * Id of sublocation
 */
@property (nonatomic, readonly) NSInteger sublocation;

/**
 * X coordinate of the location point within the sublocation (m)
 */
@property (nonatomic, readonly) NSNumber  *x;

/**
 * Y coordinate of the location point within the sublocation (m)
 */
@property (nonatomic, readonly) NSNumber  *y;

- (double) distanceTo: (NCLocationPoint *)point;

/**
 * Convenience creation method.
 *
 * @param location: Location id of LocationPoint.
 * @param sublocation: Sublocation id of LocationPoint.
 * @param x: x coordinate of LocationPoint(m)
 * @param y: y coordinate of LocationPoint(m)
 *
 * @return An instance of NCLocationPoint.
 */
+ (instancetype) pointWithLocation:(NSInteger) locationId
                       sublocation:(NSInteger) sublocationId
                                 x:(NSNumber *) x
                                 y:(NSNumber *) y;

/**
 * Initializes and returns a LocationPoint object using the provided Name and Identifier.
 
 */
- (instancetype) initWithLocation: (NSInteger) locationId
                      sublocation: (NSInteger) sublocationId
                                x: (NSNumber *) x
                                y: (NSNumber *) y NS_DESIGNATED_INITIALIZER;

- (nullable instancetype) initWithCoder: (NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;

NS_ASSUME_NONNULL_END

/**
 * Method for LocationPoint validation
 *
 * @return YES if valid, NO othetwise
 */
- (BOOL) isValid;

typedef NCLocationPoint NCLocalPoint;

@end
