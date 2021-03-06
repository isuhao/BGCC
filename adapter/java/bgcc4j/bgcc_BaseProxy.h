/***********************************************************************
  * Copyright (c) 2012, Baidu Inc. All rights reserved.
  * 
  * Licensed under the BSD License
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  * 
  *      license.txt
  *********************************************************************/

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class bgcc_BaseProxy */

#ifndef _Included_bgcc_BaseProxy
#define _Included_bgcc_BaseProxy
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     bgcc_BaseProxy
 * Method:    create
 * Signature: (Lbgcc/ServerInfo;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_BaseProxy_create
  (JNIEnv *, jobject, jobject);

/*
 * Class:     bgcc_BaseProxy
 * Method:    destroy
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_BaseProxy_destroy
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_BaseProxy
 * Method:    getErrno
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_BaseProxy_getErrno
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_BaseProxy
 * Method:    setErrno
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_bgcc_BaseProxy_setErrno
  (JNIEnv *, jobject, jint);

/*
 * Class:     bgcc_BaseProxy
 * Method:    getProtocol
 * Signature: ()Lbgcc/Protocol;
 */
JNIEXPORT jobject JNICALL Java_bgcc_BaseProxy_getProtocol
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_BaseProxy
 * Method:    putProtocol
 * Signature: (Lbgcc/Protocol;)V
 */
JNIEXPORT void JNICALL Java_bgcc_BaseProxy_putProtocol
  (JNIEnv *, jobject, jobject);

/*
 * Class:     bgcc_BaseProxy
 * Method:    getName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bgcc_BaseProxy_getName
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_BaseProxy
 * Method:    setName
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bgcc_BaseProxy_setName
  (JNIEnv *, jobject, jstring);

/*
 * Class:     bgcc_BaseProxy
 * Method:    getWhoAmI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_bgcc_BaseProxy_getWhoAmI
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_BaseProxy
 * Method:    setWhoAmI
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bgcc_BaseProxy_setWhoAmI
  (JNIEnv *, jobject, jstring);

/*
 * Class:     bgcc_BaseProxy
 * Method:    getTicketId
 * Signature: (Ljava/lang/String;Lbgcc/IntHolder;ZLbgcc/Protocol;Lbgcc/Protocol;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_BaseProxy_getTicketId
  (JNIEnv *, jobject, jstring, jobject, jboolean, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
