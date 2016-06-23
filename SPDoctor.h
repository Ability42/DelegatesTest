//
//  SPDoctor.h
//  DelegatesTest
//
//  Created by Stepan Paholyk on 6/23/16.
//  Copyright © 2016 Stepan Paholyk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SPPatient.h"

@protocol SPPatientDelegate;

@interface SPDoctor : NSObject <SPPatientDelegate>

@end
