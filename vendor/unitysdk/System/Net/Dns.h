#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_DNS_BEGINGETHOSTADDRESSES_OFFSET UNITYSDK_OFFSET(0x9A6B4A0)
#define SYSTEM_NET_DNS_ENDGETHOSTADDRESSES_OFFSET UNITYSDK_OFFSET(0x9A6B720)
#define SYSTEM_NET_DNS_GETHOSTBYNAME_ICALL_OFFSET UNITYSDK_OFFSET(0x9A6B830)
#define SYSTEM_NET_DNS_GETHOSTBYADDR_ICALL_OFFSET UNITYSDK_OFFSET(0x9A6B840)
#define SYSTEM_NET_DNS_GETHOSTNAME_ICALL_OFFSET UNITYSDK_OFFSET(0x9A6B850)
#define SYSTEM_NET_DNS_ERROR_11001_OFFSET UNITYSDK_OFFSET(0x9A6B860)
#define SYSTEM_NET_DNS_HOSTENT_TO_IPHOSTENTRY_OFFSET UNITYSDK_OFFSET(0x9A6B8D0)
#define SYSTEM_NET_DNS_GETHOSTBYADDRESSFROMSTRING_OFFSET UNITYSDK_OFFSET(0x9A6BC60)
#define SYSTEM_NET_DNS_GETHOSTENTRY_OFFSET UNITYSDK_OFFSET(0x9A6BE00)
#define SYSTEM_NET_DNS_GETHOSTENTRY_OFFSET UNITYSDK_OFFSET(0x9A6BF70)
#define SYSTEM_NET_DNS_GETHOSTADDRESSES_OFFSET UNITYSDK_OFFSET(0x9A6C150)
#define SYSTEM_NET_DNS_GETHOSTBYNAME_OFFSET UNITYSDK_OFFSET(0x9A6BFF0)
#define SYSTEM_NET_DNS_GETHOSTNAME_OFFSET UNITYSDK_OFFSET(0x9A6C350)
#define SYSTEM_NET_DNS_GETHOSTADDRESSESASYNC_OFFSET UNITYSDK_OFFSET(0x9A6C3F0)

namespace System::Net
{
	inline static constexpr unsigned int Dns_TypeDefinitionIndex = 29768;

	class Dns : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginGetHostAddresses(::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_BEGINGETHOSTADDRESSES_OFFSET))(str, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EndGetHostAddresses(::System::IAsyncResult* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_ENDGETHOSTADDRESSES_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetHostByName_icall(::System::String* str, ::System::String&* arg, ::System::Object[]&* arg, ::System::Object[]&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String&*, ::System::Object[]&*, ::System::Object[]&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTBYNAME_ICALL_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean GetHostByAddr_icall(::System::String* str, ::System::String&* arg, ::System::Object[]&* arg, ::System::Object[]&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String&*, ::System::Object[]&*, ::System::Object[]&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTBYADDR_ICALL_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean GetHostName_icall(::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTNAME_ICALL_OFFSET))(arg, nullptr);
		}

		::System::Void Error_11001(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_ERROR_11001_OFFSET))(str, nullptr);
		}

		::System::Net::IPHostEntry* hostent_to_IPHostEntry(::System::String* str, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Net::IPHostEntry*(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_HOSTENT_TO_IPHOSTENTRY_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Net::IPHostEntry* GetHostByAddressFromString(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Net::IPHostEntry*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTBYADDRESSFROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Net::IPHostEntry* GetHostEntry(::System::String* str)
		{
			return (return (::System::Net::IPHostEntry*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRY_OFFSET))(str, nullptr);
		}

		::System::Net::IPHostEntry* GetHostEntry(::System::Net::IPAddress* arg)
		{
			return (return (::System::Net::IPHostEntry*(*)(::System::Net::IPAddress*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetHostAddresses(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTADDRESSES_OFFSET))(str, nullptr);
		}

		::System::Net::IPHostEntry* GetHostByName(::System::String* str)
		{
			return (return (::System::Net::IPHostEntry*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTBYNAME_OFFSET))(str, nullptr);
		}

		::System::String* GetHostName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetHostAddressesAsync(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTADDRESSESASYNC_OFFSET))(str, nullptr);
		}

	};
}

