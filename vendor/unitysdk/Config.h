#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class AnimationCurve; }

#define CONFIG_.CTOR_OFFSET UNITYSDK_OFFSET(0x20BE790)

	inline static constexpr unsigned int Config_TypeDefinitionIndex = 3627;

	class Config : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* Amplitude; // 0x10
		::System::Single XdirRandomness; // 0x1C
		::System::Single YdirRandomness; // 0x20
		::System::Single ZdirRandomness; // 0x24
		::System::Int32 PeriodMs; // 0x28
		::System::Int32 DurationMs; // 0x2C
		::UnityEngine::AnimationCurve* AmpCurve; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIG_.CTOR_OFFSET))(nullptr);
		}

	};

