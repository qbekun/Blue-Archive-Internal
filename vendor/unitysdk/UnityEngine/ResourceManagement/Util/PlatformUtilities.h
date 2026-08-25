#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class RuntimePlatform; }

#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_PLATFORMUTILITIES_PLATFORMUSESMULTITHREADING_OFFSET UNITYSDK_OFFSET(0xA0E5300)
#define UNITYENGINE_RESOURCEMANAGEMENT_UTIL_PLATFORMUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E5310)

namespace UnityEngine::ResourceManagement::Util
{
	inline static constexpr unsigned int PlatformUtilities_TypeDefinitionIndex = 36372;

	class PlatformUtilities : public Il2CppObject
	{
	public:
		::System::Boolean PlatformUsesMultiThreading(::UnityEngine::RuntimePlatform* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RuntimePlatform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_PLATFORMUTILITIES_PLATFORMUSESMULTITHREADING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_UTIL_PLATFORMUTILITIES_.CTOR_OFFSET))(nullptr);
		}

	};
}

