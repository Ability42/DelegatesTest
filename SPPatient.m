//
//  SPPatient.m
//  DelegatesTest
//
//  Created by Stepan Paholyk on 6/23/16.
//  Copyright © 2016 Stepan Paholyk. All rights reserved.
//

#import "SPPatient.h"


@implementation SPPatient

- (BOOL) howAreYou {
    BOOL iFeelGood = arc4random() % 2;
    
    if (!iFeelGood) {
        [self.delegate patientFeelsBad:self];
    }
    
    return iFeelGood;
}

- (void) takePill {
    NSLog(@"%@ take a pill", self.name);
}

- (void) makeShot {
    NSLog(@"%@ make a shot", self.name);
}
@end
