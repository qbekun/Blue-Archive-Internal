#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector3&; }

#define UNITYENGINE_MOTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1C5C60)
#define UNITYENGINE_MOTION_GET_AVERAGEANGULARSPEED_OFFSET UNITYSDK_OFFSET(0xA1CDC40)
#define UNITYENGINE_MOTION_GET_AVERAGESPEED_OFFSET UNITYSDK_OFFSET(0xA1CDC80)
#define UNITYENGINE_MOTION_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0xA1CDD20)
#define UNITYENGINE_MOTION_GET_AVERAGESPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1CDCE0)

namespace UnityEngine
{
	inline static constexpr unsigned int Motion_TypeDefinitionIndex = 36480;

	class Motion : public Il2CppObject
	{
	public:
		::System::Boolean _isAnimatorMotion_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_averageAngularSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_GET_AVERAGEANGULARSPEED_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_averageSpeed()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_GET_AVERAGESPEED_OFFSET))(nullptr);
		}

		::System::Boolean get_isLooping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_GET_ISLOOPING_OFFSET))(nullptr);
		}

		::System::Void get_averageSpeed_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MOTION_GET_AVERAGESPEED_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

