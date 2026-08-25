#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2SettingsRegistry; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2Handler; }
namespace BestHTTP::Connections::HTTP2 { class HTTP2FrameHeaderAndPayload; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_GET_MYSETTINGS_OFFSET UNITYSDK_OFFSET(0x91B7A0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_GET_INITIATEDMYSETTINGS_OFFSET UNITYSDK_OFFSET(0x91B7B0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9148A0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_SET_MYSETTINGS_OFFSET UNITYSDK_OFFSET(0x91B7C0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_GET_SETTINGSCHANGESSENTAT_OFFSET UNITYSDK_OFFSET(0x91B7D0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_PROCESS_OFFSET UNITYSDK_OFFSET(0x918850)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_SET_INITIATEDMYSETTINGS_OFFSET UNITYSDK_OFFSET(0x91B7E0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_SET_REMOTESETTINGS_OFFSET UNITYSDK_OFFSET(0x91B7F0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_SENDCHANGES_OFFSET UNITYSDK_OFFSET(0x918430)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_SET_SETTINGSCHANGESSENTAT_OFFSET UNITYSDK_OFFSET(0x91B800)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_GET_REMOTESETTINGS_OFFSET UNITYSDK_OFFSET(0x91B810)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91B820)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x91B8E0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x91B8F0)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2SettingsManager_TypeDefinitionIndex = 23464;

	class HTTP2SettingsManager : public Il2CppObject
	{
	public:
		::System::Int32 SettingsCount; // 0x0
		::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry* _MySettings_k__BackingField; // 0x10
		::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry* _InitiatedMySettings_k__BackingField; // 0x18
		::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry* _RemoteSettings_k__BackingField; // 0x20
		::System::DateTime* _SettingsChangesSentAt_k__BackingField; // 0x28
		::BestHTTP::Connections::HTTP2::HTTP2Handler* _Parent_k__BackingField; // 0x30

		::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry* get_MySettings()
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_GET_MYSETTINGS_OFFSET))(nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry* get_InitiatedMySettings()
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_GET_INITIATEDMYSETTINGS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::Connections::HTTP2::HTTP2Handler* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2Handler*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_MySettings(::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_SET_MYSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_SettingsChangesSentAt()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_GET_SETTINGSCHANGESSENTAT_OFFSET))(nullptr);
		}

		::System::Void Process(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2FrameHeaderAndPayload*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_PROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_InitiatedMySettings(::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_SET_INITIATEDMYSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void set_RemoteSettings(::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_SET_REMOTESETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void SendChanges(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_SENDCHANGES_OFFSET))(arg, nullptr);
		}

		::System::Void set_SettingsChangesSentAt(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_SET_SETTINGSCHANGESSENTAT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry* get_RemoteSettings()
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2SettingsRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_GET_REMOTESETTINGS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void set_Parent(::BestHTTP::Connections::HTTP2::HTTP2Handler* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::HTTP2::HTTP2Handler*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_SET_PARENT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::HTTP2::HTTP2Handler* get_Parent()
		{
			return (return (::BestHTTP::Connections::HTTP2::HTTP2Handler*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2SETTINGSMANAGER_GET_PARENT_OFFSET))(nullptr);
		}

	};
}

