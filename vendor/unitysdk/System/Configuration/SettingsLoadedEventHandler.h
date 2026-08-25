#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5960)
#define SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9AB5990)
#define SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9AB59C0)
#define SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9AB59F0)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsLoadedEventHandler_TypeDefinitionIndex = 30014;

	class SettingsLoadedEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Configuration::SettingsLoadedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Configuration::SettingsLoadedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::Configuration::SettingsLoadedEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::Configuration::SettingsLoadedEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSLOADEDEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

