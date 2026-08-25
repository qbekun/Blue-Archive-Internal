#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AndroidJavaObject; }

#define UNITYENGINE_ANDROID_COMMON_GETACTIVITY_OFFSET UNITYSDK_OFFSET(0xA1C0010)

namespace UnityEngine::Android
{
	inline static constexpr unsigned int Common_TypeDefinitionIndex = 37071;

	class Common : public Il2CppObject
	{
	public:
		::UnityEngine::AndroidJavaObject* m_Activity; // 0x0

		::UnityEngine::AndroidJavaObject* GetActivity()
		{
			return (return (::UnityEngine::AndroidJavaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROID_COMMON_GETACTIVITY_OFFSET))(nullptr);
		}

	};
}

