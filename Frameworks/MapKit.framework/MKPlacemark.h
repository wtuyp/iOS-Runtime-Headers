/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKPlacemarkInternal;



@interface MKPlacemark : NSObject <MKAnnotation>
{
    MKPlacemarkInternal *_internal;
}

@property(readonly) NSString *countryCode;
@property(readonly) NSString *country;
@property(readonly) NSString *postalCode;
@property(readonly) NSString *subAdministrativeArea;
@property(readonly) NSString *administrativeArea;
@property(readonly) NSString *subLocality;
@property(readonly) NSString *locality;
@property(readonly) NSString *subThoroughfare;
@property(readonly) NSString *thoroughfare;
@property(readonly) NSDictionary *addressDictionary;
@property(readonly) ? coordinate;


- (id)thoroughfare;
- (id)subThoroughfare;
- (id)locality;
- (id)subAdministrativeArea;
- (id)postalCode;
- (id)countryCode;
- (id)_mapkit_cache_key;
- (NSUInteger)_mapkit_cache_accessTime;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 addressDictionary:(id)arg2;
- (void)set_mapkit_cache_accessTime:(NSUInteger)arg1;
- (id)_formattedAddressLines;
- (id)_mergedThoroughfare;
- (id)subLocality;
- (id)administrativeArea;
- (id)addressDictionary;
- (id)title;
- (void)dealloc;
- (id)description;
- (id)country;
- (struct { double x1; double x2; })coordinate;

@end