/**
 * Compile the binary in person_detect_model_data.cpp to be used with micro-controllers
 * that do not have a rootfs (example arduino)
 * 
 * xxd -i person_detect.tflite > person_detect_model_data.cpp
 */

#ifndef TENSORFLOW_LITE_MICRO_EXAMPLES_PERSON_DETECTION_PERSON_DETECT_MODEL_DATA_H_
#define TENSORFLOW_LITE_MICRO_EXAMPLES_PERSON_DETECTION_PERSON_DETECT_MODEL_DATA_H_

extern const unsigned char g_person_detect_model_data[];
extern const int g_person_detect_model_data_len;

#endif  // TENSORFLOW_LITE_MICRO_EXAMPLES_PERSON_DETECTION_PERSON_DETECT_MODEL_DATA_H_
