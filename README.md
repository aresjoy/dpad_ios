# DPAD SDK 연동하기 : iOS 네이티브
본 가이드는 iOS 네이티브 프로젝트에서 DPAD SDK를 연동하기 위한 문서입니다.
DPAD에 대한 서비스 소개나 이용방법 안내는 아래 아티클에서 확인하실 수 있습니다.

서비스 이용 중 도움이 필요한 경우에는 아래 메일 주소로 연락 부탁 드립니다.
1. 서비스 이용 및 제휴 문의 - ( mail address )
2. 기술 문의 : iOS개발팀 ( kdh@aresjoy.com )
***
> SDK 설치

### SDK 다운로드
GitHub Repositary( https://github.com/aresjoy/dpad_ios.git )에서 프로젝트를 클론하거나 소스를 다운로드 받습니다.

<img src="images/install_manual1.png"/>

### 파일 확인
해당경로 ( Path: ~/repasitory/DPAD_Framework/DPADFramework.framework )에 파일이 잘 받아졌는지 확인합니다.

<img src="images/install_manual2.png"/>


> 프로젝트 & 소스 연동

### 프로젝트에 SDK 추가

<img src="images/install_manual3.png"/>

### 소스연동
```objc
#import "AppDelegate.h"
#import "DPADFramework.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    [DPManager initManagerWithPubID:@"[발급받은 Pub ID 입력]" appID:@"[발급받은 App ID 입력"];
    
    return YES;
}
```
