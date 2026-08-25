#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class TrailRenderer; }

#define FXTOUCH_AWAKE_OFFSET UNITYSDK_OFFSET(0x2343C30)
#define FXTOUCH_PLAY_OFFSET UNITYSDK_OFFSET(0x2343CB0)
#define FXTOUCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x2343CD0)
#define FXTOUCH_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x2343CE0)
#define FXTOUCH_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x2343CF0)
#define FXTOUCH_STOP_OFFSET UNITYSDK_OFFSET(0x2343D00)

	inline static constexpr unsigned int FXTouch_TypeDefinitionIndex = 4993;

	class FXTouch : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* TouchEffect; // 0x18
		::System::Single _Duration_k__BackingField; // 0x20
		::UnityEngine::TrailRenderer* Trail; // 0x28

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXTOUCH_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXTOUCH_PLAY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXTOUCH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Duration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FXTOUCH_SET_DURATION_OFFSET))(arg, nullptr);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FXTOUCH_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXTOUCH_STOP_OFFSET))(nullptr);
		}

	};

