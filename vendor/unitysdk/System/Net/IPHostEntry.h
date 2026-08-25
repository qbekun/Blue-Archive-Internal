#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_IPHOSTENTRY_GET_HOSTNAME_OFFSET UNITYSDK_OFFSET(0x9BA6B10)
#define SYSTEM_NET_IPHOSTENTRY_SET_HOSTNAME_OFFSET UNITYSDK_OFFSET(0x9BA6B20)
#define SYSTEM_NET_IPHOSTENTRY_SET_ALIASES_OFFSET UNITYSDK_OFFSET(0x9BA6B30)
#define SYSTEM_NET_IPHOSTENTRY_GET_ADDRESSLIST_OFFSET UNITYSDK_OFFSET(0x9BA6B40)
#define SYSTEM_NET_IPHOSTENTRY_SET_ADDRESSLIST_OFFSET UNITYSDK_OFFSET(0x9BA6B50)
#define SYSTEM_NET_IPHOSTENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA6B60)

namespace System::Net
{
	inline static constexpr unsigned int IPHostEntry_TypeDefinitionIndex = 29681;

	class IPHostEntry : public Il2CppObject
	{
	public:
		::System::String* hostName; // 0x10
		::Il2CppArray<::System::Object*>* aliases; // 0x18
		::Il2CppArray<::System::Object*>* addressList; // 0x20
		::System::Boolean isTrustedHost; // 0x28

		::System::String* get_HostName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_GET_HOSTNAME_OFFSET))(nullptr);
		}

		::System::Void set_HostName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_SET_HOSTNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_Aliases(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_SET_ALIASES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_AddressList()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_GET_ADDRESSLIST_OFFSET))(nullptr);
		}

		::System::Void set_AddressList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_SET_ADDRESSLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPHOSTENTRY_.CTOR_OFFSET))(nullptr);
		}

	};
}

