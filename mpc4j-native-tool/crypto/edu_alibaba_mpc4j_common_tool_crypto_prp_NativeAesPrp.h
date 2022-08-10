/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_alibaba_mpc4j_common_tool_crypto_prp_NativeAesPrp */

#ifndef _Included_edu_alibaba_mpc4j_common_tool_crypto_prp_NativeAesPrp
#define _Included_edu_alibaba_mpc4j_common_tool_crypto_prp_NativeAesPrp
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_alibaba_mpc4j_common_tool_crypto_prp_NativeAesPrp
 * Method:    nativeSetKey
 * Signature: ([B)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_edu_alibaba_mpc4j_common_tool_crypto_prp_NativeAesPrp_nativeSetKey
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     edu_alibaba_mpc4j_common_tool_crypto_prp_NativeAesPrp
 * Method:    nativeEncrypt
 * Signature: (Ljava/nio/ByteBuffer;[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_edu_alibaba_mpc4j_common_tool_crypto_prp_NativeAesPrp_nativeEncrypt
  (JNIEnv *, jobject, jobject, jbyteArray);

/*
 * Class:     edu_alibaba_mpc4j_common_tool_crypto_prp_NativeAesPrp
 * Method:    nativeDecrypt
 * Signature: (Ljava/nio/ByteBuffer;[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_edu_alibaba_mpc4j_common_tool_crypto_prp_NativeAesPrp_nativeDecrypt
  (JNIEnv *, jobject, jobject, jbyteArray);

/*
 * Class:     edu_alibaba_mpc4j_common_tool_crypto_prp_NativeAesPrp
 * Method:    nativeDestroyKey
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_edu_alibaba_mpc4j_common_tool_crypto_prp_NativeAesPrp_nativeDestroyKey
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif