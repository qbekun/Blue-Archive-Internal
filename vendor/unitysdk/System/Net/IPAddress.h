#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_IPADDRESS_GET_ISIPV4_OFFSET UNITYSDK_OFFSET(0x9B8F8F0)
#define SYSTEM_NET_IPADDRESS_GET_ISIPV6_OFFSET UNITYSDK_OFFSET(0x9B8F900)
#define SYSTEM_NET_IPADDRESS_GET_PRIVATEADDRESS_OFFSET UNITYSDK_OFFSET(0x9B8F910)
#define SYSTEM_NET_IPADDRESS_SET_PRIVATEADDRESS_OFFSET UNITYSDK_OFFSET(0x9B8F920)
#define SYSTEM_NET_IPADDRESS_GET_PRIVATESCOPEID_OFFSET UNITYSDK_OFFSET(0x9B8F950)
#define SYSTEM_NET_IPADDRESS_SET_PRIVATESCOPEID_OFFSET UNITYSDK_OFFSET(0x9B8F960)
#define SYSTEM_NET_IPADDRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B8F990)
#define SYSTEM_NET_IPADDRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B8FA30)
#define SYSTEM_NET_IPADDRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B8FB20)
#define SYSTEM_NET_IPADDRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B8FEA0)
#define SYSTEM_NET_IPADDRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B8FFD0)
#define SYSTEM_NET_IPADDRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B90020)
#define SYSTEM_NET_IPADDRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B900A0)
#define SYSTEM_NET_IPADDRESS_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9B903C0)
#define SYSTEM_NET_IPADDRESS_PARSE_OFFSET UNITYSDK_OFFSET(0x9B906A0)
#define SYSTEM_NET_IPADDRESS_TRYWRITEBYTES_OFFSET UNITYSDK_OFFSET(0x9B90750)
#define SYSTEM_NET_IPADDRESS_WRITEIPV6BYTES_OFFSET UNITYSDK_OFFSET(0x9B90990)
#define SYSTEM_NET_IPADDRESS_WRITEIPV4BYTES_OFFSET UNITYSDK_OFFSET(0x9B90C40)
#define SYSTEM_NET_IPADDRESS_GETADDRESSBYTES_OFFSET UNITYSDK_OFFSET(0x9B90C90)
#define SYSTEM_NET_IPADDRESS_GET_ADDRESSFAMILY_OFFSET UNITYSDK_OFFSET(0x9B90FD0)
#define SYSTEM_NET_IPADDRESS_GET_SCOPEID_OFFSET UNITYSDK_OFFSET(0x9B90FF0)
#define SYSTEM_NET_IPADDRESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B91050)
#define SYSTEM_NET_IPADDRESS_ISLOOPBACK_OFFSET UNITYSDK_OFFSET(0x9B91150)
#define SYSTEM_NET_IPADDRESS_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B91280)
#define SYSTEM_NET_IPADDRESS_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B91470)
#define SYSTEM_NET_IPADDRESS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B91480)
#define SYSTEM_NET_IPADDRESS_MAPTOIPV6_OFFSET UNITYSDK_OFFSET(0x9B91A60)
#define SYSTEM_NET_IPADDRESS_THROWADDRESSNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9B8FAC0)
#define SYSTEM_NET_IPADDRESS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B91B70)

namespace System::Net
{
	inline static constexpr unsigned int IPAddress_TypeDefinitionIndex = 29646;

	class IPAddress : public Il2CppObject
	{
	public:
		::System::Net::IPAddress* Any; // 0x0
		::System::Net::IPAddress* Loopback; // 0x8
		::System::Net::IPAddress* Broadcast; // 0x10
		::System::Net::IPAddress* None; // 0x18
		::System::Int64 LoopbackMask; // 0x0
		::System::Net::IPAddress* IPv6Any; // 0x20
		::System::Net::IPAddress* IPv6Loopback; // 0x28
		::System::Net::IPAddress* IPv6None; // 0x30
		::System::UInt32 _addressOrScopeId; // 0x10
		::Il2CppArray<::System::Object*>* _numbers; // 0x18
		::System::String* _toString; // 0x20
		::System::Int32 _hashCode; // 0x28
		::System::Int32 NumberOfLabels; // 0x0

		::System::Boolean get_IsIPv4()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_ISIPV4_OFFSET))(nullptr);
		}

		::System::Boolean get_IsIPv6()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_ISIPV6_OFFSET))(nullptr);
		}

		::System::UInt32 get_PrivateAddress()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_PRIVATEADDRESS_OFFSET))(nullptr);
		}

		::System::Void set_PrivateAddress(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_SET_PRIVATEADDRESS_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_PrivateScopeId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_PRIVATESCOPEID_OFFSET))(nullptr);
		}

		::System::Void set_PrivateScopeId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_SET_PRIVATESCOPEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object** arg, ::System::Int32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Net::IPAddress&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Net::IPAddress&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Net::IPAddress* Parse(::System::String* str)
		{
			return (return (::System::Net::IPAddress*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_PARSE_OFFSET))(str, nullptr);
		}

		::System::Boolean TryWriteBytes(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_TRYWRITEBYTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteIPv6Bytes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_WRITEIPV6BYTES_OFFSET))(arg, nullptr);
		}

		::System::Void WriteIPv4Bytes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_WRITEIPV4BYTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAddressBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GETADDRESSBYTES_OFFSET))(nullptr);
		}

		::System::Net::Sockets::AddressFamily* get_AddressFamily()
		{
			return (return (::System::Net::Sockets::AddressFamily*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_ADDRESSFAMILY_OFFSET))(nullptr);
		}

		::System::Int64 get_ScopeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GET_SCOPEID_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean IsLoopback(::System::Net::IPAddress* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::IPAddress*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_ISLOOPBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Net::IPAddress* MapToIPv6()
		{
			return (return (::System::Net::IPAddress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_MAPTOIPV6_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ThrowAddressNullException()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_THROWADDRESSNULLEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_IPADDRESS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

