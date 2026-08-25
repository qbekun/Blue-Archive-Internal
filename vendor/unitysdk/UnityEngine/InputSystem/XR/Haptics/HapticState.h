#pragma once
#include "../../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F28930)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_GET_SAMPLESAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9F28940)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_GET_SAMPLESQUEUED_OFFSET UNITYSDK_OFFSET(0x9F28950)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_SET_SAMPLESAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9F28960)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_SET_SAMPLESQUEUED_OFFSET UNITYSDK_OFFSET(0x9F28970)

namespace UnityEngine::InputSystem::XR::Haptics
{
	inline static constexpr unsigned int HapticState_TypeDefinitionIndex = 28592;

	class HapticState : public Il2CppObject
	{
	public:
		::System::UInt32 _samplesQueued_k__BackingField; // 0x10
		::System::UInt32 _samplesAvailable_k__BackingField; // 0x14

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_samplesAvailable()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_GET_SAMPLESAVAILABLE_OFFSET))(nullptr);
		}

		::System::UInt32 get_samplesQueued()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_GET_SAMPLESQUEUED_OFFSET))(nullptr);
		}

		::System::Void set_samplesAvailable(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_SET_SAMPLESAVAILABLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_samplesQueued(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICSTATE_SET_SAMPLESQUEUED_OFFSET))(arg, nullptr);
		}

	};
}

