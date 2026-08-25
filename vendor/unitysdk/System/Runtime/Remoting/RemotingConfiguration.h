#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_GET_APPLICATIONNAME_OFFSET UNITYSDK_OFFSET(0x91C4850)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_SET_APPLICATIONNAME_OFFSET UNITYSDK_OFFSET(0x91C48A0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_GET_PROCESSID_OFFSET UNITYSDK_OFFSET(0x91C4910)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_LOADDEFAULTDELAYEDCHANNELS_OFFSET UNITYSDK_OFFSET(0x91C4A00)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_ISACTIVATIONALLOWED_OFFSET UNITYSDK_OFFSET(0x91C4E60)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_ISREMOTELYACTIVATEDCLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x91C4FF0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_ISWELLKNOWNCLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x91C51D0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERACTIVATEDCLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x91C53B0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERACTIVATEDSERVICETYPE_OFFSET UNITYSDK_OFFSET(0x91C5680)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERWELLKNOWNCLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x91C57F0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERWELLKNOWNSERVICETYPE_OFFSET UNITYSDK_OFFSET(0x91C5AC0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCHANNELTEMPLATE_OFFSET UNITYSDK_OFFSET(0x91C5DA0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCLIENTPROVIDERTEMPLATE_OFFSET UNITYSDK_OFFSET(0x91C5E40)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERSERVERPROVIDERTEMPLATE_OFFSET UNITYSDK_OFFSET(0x91C5EE0)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCHANNELS_OFFSET UNITYSDK_OFFSET(0x91C5F80)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERTYPES_OFFSET UNITYSDK_OFFSET(0x91C8340)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_CUSTOMERRORSENABLED_OFFSET UNITYSDK_OFFSET(0x91C8870)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_SETCUSTOMERRORSMODE_OFFSET UNITYSDK_OFFSET(0x91C8920)
#define SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91C8B60)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int RemotingConfiguration_TypeDefinitionIndex = 24439;

	class RemotingConfiguration : public Il2CppObject
	{
	public:
		::System::String* applicationID; // 0x0
		::System::String* applicationName; // 0x8
		::System::String* processGuid; // 0x10
		::System::Boolean defaultConfigRead; // 0x18
		::System::Boolean defaultDelayedConfigRead; // 0x19
		::System::Runtime::Remoting::CustomErrorsModes* _errorMode; // 0x1C
		::System::Collections::Hashtable* wellKnownClientEntries; // 0x20
		::System::Collections::Hashtable* activatedClientEntries; // 0x28
		::System::Collections::Hashtable* wellKnownServiceEntries; // 0x30
		::System::Collections::Hashtable* activatedServiceEntries; // 0x38
		::System::Collections::Hashtable* channelTemplates; // 0x40
		::System::Collections::Hashtable* clientProviderTemplates; // 0x48
		::System::Collections::Hashtable* serverProviderTemplates; // 0x50

		::System::String* get_ApplicationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_GET_APPLICATIONNAME_OFFSET))(nullptr);
		}

		::System::Void set_ApplicationName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_SET_APPLICATIONNAME_OFFSET))(str, nullptr);
		}

		::System::String* get_ProcessId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_GET_PROCESSID_OFFSET))(nullptr);
		}

		::System::Void LoadDefaultDelayedChannels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_LOADDEFAULTDELAYEDCHANNELS_OFFSET))(nullptr);
		}

		::System::Boolean IsActivationAllowed(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_ISACTIVATIONALLOWED_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::ActivatedClientTypeEntry* IsRemotelyActivatedClientType(::System::Type* arg)
		{
			return (return (::System::Runtime::Remoting::ActivatedClientTypeEntry*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_ISREMOTELYACTIVATEDCLIENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::WellKnownClientTypeEntry* IsWellKnownClientType(::System::Type* arg)
		{
			return (return (::System::Runtime::Remoting::WellKnownClientTypeEntry*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_ISWELLKNOWNCLIENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterActivatedClientType(::System::Runtime::Remoting::ActivatedClientTypeEntry* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::ActivatedClientTypeEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERACTIVATEDCLIENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterActivatedServiceType(::System::Runtime::Remoting::ActivatedServiceTypeEntry* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::ActivatedServiceTypeEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERACTIVATEDSERVICETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterWellKnownClientType(::System::Runtime::Remoting::WellKnownClientTypeEntry* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::WellKnownClientTypeEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERWELLKNOWNCLIENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterWellKnownServiceType(::System::Runtime::Remoting::WellKnownServiceTypeEntry* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::WellKnownServiceTypeEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERWELLKNOWNSERVICETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterChannelTemplate(::System::Runtime::Remoting::ChannelData* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::ChannelData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCHANNELTEMPLATE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterClientProviderTemplate(::System::Runtime::Remoting::ProviderData* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::ProviderData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCLIENTPROVIDERTEMPLATE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterServerProviderTemplate(::System::Runtime::Remoting::ProviderData* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::ProviderData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERSERVERPROVIDERTEMPLATE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterChannels(::System::Collections::ArrayList* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Collections::ArrayList*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERCHANNELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterTypes(::System::Collections::ArrayList* arg)
		{
			((::System::Void(*)(::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_REGISTERTYPES_OFFSET))(arg, nullptr);
		}

		::System::Boolean CustomErrorsEnabled(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_CUSTOMERRORSENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void SetCustomErrorsMode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_SETCUSTOMERRORSMODE_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_REMOTINGCONFIGURATION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

