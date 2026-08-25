#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSSAVINGEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5A80)
#define SYSTEM_CONFIGURATION_SETTINGSSAVINGEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9AB5AB0)
#define SYSTEM_CONFIGURATION_SETTINGSSAVINGEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9AB5AE0)
#define SYSTEM_CONFIGURATION_SETTINGSSAVINGEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9AB5B10)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsSavingEventHandler_TypeDefinitionIndex = 30016;

	class SettingsSavingEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSSAVINGEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::ComponentModel::CancelEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::ComponentModel::CancelEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSSAVINGEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::ComponentModel::CancelEventArgs* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::ComponentModel::CancelEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSSAVINGEVENTHANDLER_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSSAVINGEVENTHANDLER_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

