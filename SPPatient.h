//
//  SPPatient.h
//  DelegatesTest
//
//  Created by Stepan Paholyk on 6/23/16.
//  Copyright © 2016 Stepan Paholyk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol SPPatientDelegate;


@interface SPPatient : NSObject

@property (strong, nonatomic) NSString* name;
@property (assign, nonatomic) CGFloat temperature;
@property (weak, nonatomic) id <SPPatientDelegate> delegate;

- (BOOL) howAreYou;
- (void) takePill;
- (void) makeShot;

@end


@protocol SPPatientDelegate <NSObject>

@required

- (void) patientFeelsBad:(SPPatient *) patient;
- (void) patient:(SPPatient *) patient hasQuestion:(NSString *) question;

@end
