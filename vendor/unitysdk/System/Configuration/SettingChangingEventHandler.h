#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB57B0)
#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9AB57E0)
#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9AB5810)
#define SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9AB5840)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingChangingEventHandler_TypeDefinitionIndex = 30012;

	class SettingChangingEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::Configuration::SettingChangingEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Configuration::SettingChangingEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::Configuration::SettingChangingEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::Configuration::SettingChangingEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGCHANGINGEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

