#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CHANNELDATA_GET_SERVERPROVIDERS_OFFSET UNITYSDK_OFFSET(0x91C7A70)
#define SYSTEM_RUNTIME_REMOTING_CHANNELDATA_GET_CLIENTPROVIDERS_OFFSET UNITYSDK_OFFSET(0x91C82D0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELDATA_GET_CUSTOMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x91CC3C0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x91C6D80)
#define SYSTEM_RUNTIME_REMOTING_CHANNELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x91CC2E0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ChannelData_TypeDefinitionIndex = 24441;

	class ChannelData : public Il2CppObject
	{
	public:
		::System::String* Ref; // 0x10
		::System::String* Type; // 0x18
		::System::String* Id; // 0x20
		::System::String* DelayLoadAsClientChannel; // 0x28
		::System::Collections::ArrayList* _serverProviders; // 0x30
		::System::Collections::ArrayList* _clientProviders; // 0x38
		::System::Collections::Hashtable* _customProperties; // 0x40

		::System::Collections::ArrayList* get_ServerProviders()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELDATA_GET_SERVERPROVIDERS_OFFSET))(nullptr);
		}

		::System::Collections::ArrayList* get_ClientProviders()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELDATA_GET_CLIENTPROVIDERS_OFFSET))(nullptr);
		}

		::System::Collections::Hashtable* get_CustomProperties()
		{
			return (return (::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELDATA_GET_CUSTOMPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void CopyFrom(::System::Runtime::Remoting::ChannelData* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::ChannelData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELDATA_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

