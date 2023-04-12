// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from mynteye_types.djinni

#pragma once

#include <functional>

namespace mynteye_jni {

enum class CalibrationModel : int {
    /** Pinhole */
    PINHOLE,
    /** Equidistant: KANNALA_BRANDT */
    KANNALA_BRANDT,
    /** Unknow */
    UNKNOW,
};

}  // namespace mynteye_jni

namespace std {

template <>
struct hash<::mynteye_jni::CalibrationModel> {
    size_t operator()(::mynteye_jni::CalibrationModel type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
