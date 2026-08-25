#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define RESCUEHELICOPTERVISUAL_ONPLAYFINISHED_OFFSET UNITYSDK_OFFSET(0x13C1E80)
#define RESCUEHELICOPTERVISUAL_PLAY_OFFSET UNITYSDK_OFFSET(0x13C1780)
#define RESCUEHELICOPTERVISUAL_COPLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x13C1F50)
#define RESCUEHELICOPTERVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x13C1FE0)
#define RESCUEHELICOPTERVISUAL_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x13C1FF0)
#define RESCUEHELICOPTERVISUAL_GET_HASTOSTOP_OFFSET UNITYSDK_OFFSET(0x13C2030)
#define RESCUEHELICOPTERVISUAL_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x13C2040)
#define RESCUEHELICOPTERVISUAL_SET_HASTOSTOP_OFFSET UNITYSDK_OFFSET(0x13C2050)
#define RESCUEHELICOPTERVISUAL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13C15E0)
#define RESCUEHELICOPTERVISUAL_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x13C2060)

	inline static constexpr unsigned int RescueHelicopterVisual_TypeDefinitionIndex = 1037;

	class RescueHelicopterVisual : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* effect; // 0x18
		::System::Boolean _Loop_k__BackingField; // 0x20
		::System::Boolean _HasToStop_k__BackingField; // 0x21
		::System::Action* onPlayFinished; // 0x28

		::System::Void OnPlayFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERVISUAL_ONPLAYFINISHED_OFFSET))(nullptr);
		}

		::System::Void Play(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERVISUAL_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlayEffect()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERVISUAL_COPLAYEFFECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERVISUAL_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Boolean get_HasToStop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERVISUAL_GET_HASTOSTOP_OFFSET))(nullptr);
		}

		::System::Boolean get_Loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERVISUAL_GET_LOOP_OFFSET))(nullptr);
		}

		::System::Void set_HasToStop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERVISUAL_SET_HASTOSTOP_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERVISUAL_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Loop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RESCUEHELICOPTERVISUAL_SET_LOOP_OFFSET))(arg, nullptr);
		}

	};

