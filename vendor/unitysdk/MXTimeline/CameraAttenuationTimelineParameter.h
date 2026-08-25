#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }

#define MXTIMELINE_CAMERAATTENUATIONTIMELINEPARAMETER_SETTING_OFFSET UNITYSDK_OFFSET(0xE03410)
#define MXTIMELINE_CAMERAATTENUATIONTIMELINEPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE03780)

namespace MXTimeline
{
	inline static constexpr unsigned int CameraAttenuationTimelineParameter_TypeDefinitionIndex = 10236;

	class CameraAttenuationTimelineParameter : public Il2CppObject
	{
	public:
		::System::Boolean overrideState; // 0x10
		::System::Single startDistance; // 0x14
		::System::Single distanceAttenuation; // 0x18
		::UnityEngine::Vector2* angleAttenuation; // 0x1C
		::System::Single attenuation; // 0x24

		::System::Void Setting(::UnityEngine::Vector3* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_CAMERAATTENUATIONTIMELINEPARAMETER_SETTING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_CAMERAATTENUATIONTIMELINEPARAMETER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

