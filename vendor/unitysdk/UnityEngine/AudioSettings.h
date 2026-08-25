#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_AUDIOSETTINGS_GET_DSPTIME_OFFSET UNITYSDK_OFFSET(0xA1DA670)
#define UNITYENGINE_AUDIOSETTINGS_ADD_ONAUDIOCONFIGURATIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA1DA6B0)
#define UNITYENGINE_AUDIOSETTINGS_REMOVE_ONAUDIOCONFIGURATIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA1DA760)
#define UNITYENGINE_AUDIOSETTINGS_INVOKEONAUDIOCONFIGURATIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA1DA810)
#define UNITYENGINE_AUDIOSETTINGS_INVOKEONAUDIOSYSTEMSHUTTINGDOWN_OFFSET UNITYSDK_OFFSET(0xA1DA870)
#define UNITYENGINE_AUDIOSETTINGS_INVOKEONAUDIOSYSTEMSTARTEDUP_OFFSET UNITYSDK_OFFSET(0xA1DA8C0)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioSettings_TypeDefinitionIndex = 37466;

	class AudioSettings : public Il2CppObject
	{
	public:
		AudioConfigurationChangeHandler* OnAudioConfigurationChanged; // 0x0
		::System::Action* OnAudioSystemShuttingDown; // 0x8
		::System::Action* OnAudioSystemStartedUp; // 0x10

		::System::Double get_dspTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSETTINGS_GET_DSPTIME_OFFSET))(nullptr);
		}

		::System::Void add_OnAudioConfigurationChanged(AudioConfigurationChangeHandler* arg)
		{
			((::System::Void(*)(AudioConfigurationChangeHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSETTINGS_ADD_ONAUDIOCONFIGURATIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnAudioConfigurationChanged(AudioConfigurationChangeHandler* arg)
		{
			((::System::Void(*)(AudioConfigurationChangeHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSETTINGS_REMOVE_ONAUDIOCONFIGURATIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeOnAudioConfigurationChanged(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSETTINGS_INVOKEONAUDIOCONFIGURATIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeOnAudioSystemShuttingDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSETTINGS_INVOKEONAUDIOSYSTEMSHUTTINGDOWN_OFFSET))(nullptr);
		}

		::System::Void InvokeOnAudioSystemStartedUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOSETTINGS_INVOKEONAUDIOSYSTEMSTARTEDUP_OFFSET))(nullptr);
		}

	};
}

