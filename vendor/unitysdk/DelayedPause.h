#pragma once
#include "unitysdk.h"

namespace Animancer { class AnimancerPlayable; }
namespace Animancer { class AnimancerState; }

#define DELAYEDPAUSE_SET_ROOT_OFFSET UNITYSDK_OFFSET(0x4A5900)
#define DELAYEDPAUSE_REGISTER_OFFSET UNITYSDK_OFFSET(0x48F8C0)
#define DELAYEDPAUSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4A5910)
#define DELAYEDPAUSE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x4A5920)
#define DELAYEDPAUSE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x4A5930)
#define DELAYEDPAUSE_UPDATE_OFFSET UNITYSDK_OFFSET(0x4A5940)
#define DELAYEDPAUSE_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x4A5A00)

	inline static constexpr unsigned int DelayedPause_TypeDefinitionIndex = 35118;

	class DelayedPause : public Il2CppObject
	{
	public:
		::Animancer::AnimancerPlayable* _Root_k__BackingField; // 0x18
		::Animancer::AnimancerState* _State_k__BackingField; // 0x20

		::System::Void set_Root(::Animancer::AnimancerPlayable* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + DELAYEDPAUSE_SET_ROOT_OFFSET))(arg, nullptr);
		}

		::System::Void Register(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + DELAYEDPAUSE_REGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYEDPAUSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_State(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + DELAYEDPAUSE_SET_STATE_OFFSET))(arg, nullptr);
		}

		::Animancer::AnimancerState* get_State()
		{
			return (return (::Animancer::AnimancerState*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYEDPAUSE_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYEDPAUSE_UPDATE_OFFSET))(nullptr);
		}

		::Animancer::AnimancerPlayable* get_Root()
		{
			return (return (::Animancer::AnimancerPlayable*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELAYEDPAUSE_GET_ROOT_OFFSET))(nullptr);
		}

	};

