#pragma once
#include "../../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_SET_NUMCHANNELS_OFFSET UNITYSDK_OFFSET(0x9F28AA0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_SET_MAXBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x9F28AB0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_GET_NUMCHANNELS_OFFSET UNITYSDK_OFFSET(0x9F28AC0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_GET_FREQUENCYHZ_OFFSET UNITYSDK_OFFSET(0x9F28AD0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_GET_MAXBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x9F28AE0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_SET_FREQUENCYHZ_OFFSET UNITYSDK_OFFSET(0x9F28AF0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F28B00)

namespace UnityEngine::InputSystem::XR::Haptics
{
	inline static constexpr unsigned int HapticCapabilities_TypeDefinitionIndex = 28594;

	class HapticCapabilities : public Il2CppObject
	{
	public:
		::System::UInt32 _numChannels_k__BackingField; // 0x10
		::System::UInt32 _frequencyHz_k__BackingField; // 0x14
		::System::UInt32 _maxBufferSize_k__BackingField; // 0x18

		::System::Void set_numChannels(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_SET_NUMCHANNELS_OFFSET))(arg, nullptr);
		}

		::System::Void set_maxBufferSize(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_SET_MAXBUFFERSIZE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_numChannels()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_GET_NUMCHANNELS_OFFSET))(nullptr);
		}

		::System::UInt32 get_frequencyHz()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_GET_FREQUENCYHZ_OFFSET))(nullptr);
		}

		::System::UInt32 get_maxBufferSize()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_GET_MAXBUFFERSIZE_OFFSET))(nullptr);
		}

		::System::Void set_frequencyHz(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_SET_FREQUENCYHZ_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_HAPTICCAPABILITIES_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

