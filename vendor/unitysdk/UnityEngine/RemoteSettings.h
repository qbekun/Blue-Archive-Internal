#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSUPDATED_OFFSET UNITYSDK_OFFSET(0xA49ECC0)
#define UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSBEFOREFETCHFROMSERVER_OFFSET UNITYSDK_OFFSET(0xA49ED10)
#define UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSUPDATECOMPLETED_OFFSET UNITYSDK_OFFSET(0xA49ED60)

namespace UnityEngine
{
	inline static constexpr unsigned int RemoteSettings_TypeDefinitionIndex = 38011;

	class RemoteSettings : public Il2CppObject
	{
	public:
		UpdatedEventHandler* Updated; // 0x0
		::System::Action* BeforeFetchFromServer; // 0x8
		Il2CppObject* Completed; // 0x10

		::System::Void RemoteSettingsUpdated(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void RemoteSettingsBeforeFetchFromServer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSBEFOREFETCHFROMSERVER_OFFSET))(nullptr);
		}

		::System::Void RemoteSettingsUpdateCompleted(::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTESETTINGS_REMOTESETTINGSUPDATECOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

