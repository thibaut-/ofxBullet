/*
 *  ofxBulletCylinder.h
 *  ofxBullet_v3
 *
 *  Created by Nick Hardeman on 5/23/11.
 *  Copyright 2011 Arnold Worldwide. All rights reserved.
 *
 */

#pragma once

#include "ofxBulletBaseShape.h"
#include "ofVbo.h"

class ofxBulletCylinder : public ofxBulletBaseShape {
public:
	ofxBulletCylinder();
	~ofxBulletCylinder();
	void	init(float $radius, float $height);
	void	init( btCylinderShape* $colShape );
	
	void	create( btDiscreteDynamicsWorld* $world, ofVec3f $loc=ofVec3f(0,0,0), float $mass=1.f, float $radius=1.f, float $height=10.f );
	// angles of Quaternion should be in Radians //
	void	create( btDiscreteDynamicsWorld* $world, ofVec3f $loc=ofVec3f(0,0,0), ofQuaternion $rot=ofQuaternion(0, 1, 0, 1), 
				   float $mass=1.f, float $radius=1.f, float $height=10.f );
	void	create( btDiscreteDynamicsWorld* $world, btTransform $bt_tr, float $mass=1.f, float $radius=1.f, float $height=10.f );
	
	// GETTERS //
	float	getRadius();
	float	getHeight();
	
	void	draw();
	void	drawCylinder(float radius, float halfHeight, int upAxis);
	//void	destroy();
	
protected:
	

private:
	
};