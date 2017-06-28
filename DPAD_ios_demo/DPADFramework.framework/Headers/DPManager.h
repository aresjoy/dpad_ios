//
//  DPManager.h
//  DPADFramework
//
//  Created by kdh on 2017. 6. 16..
//  Copyright © 2017년 AresJoy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AdSupport/AdSupport.h>

@interface DPManager : NSObject
#pragma mark - Methods
#pragma mark Class Methods
/*!
 * @brief singleton 싱글톤 객체 반환
 * @return DPADManager 싱글톤 객체 반환
 */
+ (DPManager *)sharedManager;

/*!
 * @brief 최초 설정 클래스 함수
 * @discussion 최초 초기화 함수로서 발급된 pubid와 appid를 이용하여 초기화한다.
 * @param pubID : 매체app에게 Dpad가 발급한 8자리 알파벳 난수
 * @param appID : 매체app에게 Dpad가 발급한 앱아이디
 */
+ (void)initManagerWithPubID:(NSString *)pubID appID:(NSString *)appID;

/*!
 * @brief UIApplication 및 광고식별자(IDFA) 관련 추가 세팅 클래스 함수
 * @discussion 최초 초기화 함수로서 발급된 pubid, appid와 UIApplication, 광고식별자(IDFA)를 파라미터로 넘긴다.
 * @param IDFA : NSUUID - 광고식별자(IDFA)
 * @param isIDFATrackingEnabled : BOOL - 광고식별자 추적 가능 여부
 */
//+ (void)setManagerWithIDFA:(NSUUID *)IDFA isIDFATrackingEnabled:(BOOL)isIDFATrackingEnabled;

#pragma mark Instance Methods
/*!
 * @brief 필수 값 세팅 확인 함수
 * @discussion 필수 값 (pubID, appID, userID)이 세팅되어 있는지 확인 및 미세팅시 토스트 출력
 */
- (BOOL)checkRequiredValues;

/*!
 * @brief 광고식별자 값 가져오는 함수
 */
- (NSUUID*)getIDFA;

/*!
 * @brief 광고식별자 추적 가능 여부 가져오는 함수
 */
- (BOOL)isAdvertisingTrackingEnabled;

/*!
 * @brief 오퍼월 리스트 보기 함수
 */
- (void)showOFW;

#pragma mark - Property
/*!
 * @brief Framework mainBundle Framework
 */
@property (nonatomic, strong, readonly) NSBundle *mainBundle;

/*!
 * @brief pubID Property
 */
@property (nonatomic, strong) NSString *pubID;
/*!
 * @brief appID Property
 */
@property (nonatomic, strong) NSString *appID;
/*!
 * @brief userID Property
 */
@property (nonatomic, strong) NSString *userID;

@end
