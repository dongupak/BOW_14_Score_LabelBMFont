//
//  GameLayer.h
//  score_LabelBMFont
//
//  Created by Mobile-X on 13. 7. 1..
//  Copyright 2013년 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "SimpleAudioEngine.h"

@interface GameLayer : CCLayer {
    int bulletCount;
    int score;//점수 저장위한 변수
    
    CCAnimate *sitAnimate;
    CCAnimate *smokeAnimate;
    CCAnimate *tailAnimate;
    CCSprite *gunSmoke;
    CCArray *birdArray;
    CCArray *sitPositions;
    
    CCSprite *ptBulletSprite;
    CCSprite *ptReloadSprite;
    CCProgressTimer *ptReload;
    CCProgressTimer *ptBullet;
    
    CCLabelTTF *lblScore;//화면에 점수를 나타낼 label
    
}

+(CCScene *) scene;
-(CGPoint)getStartPosition;
@end

