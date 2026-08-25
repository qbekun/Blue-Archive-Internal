#pragma once
#include "../unitysdk.h"

namespace BestHTTP::Authentication { class Credentials; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_PROXY_GET_EXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x4E95D0)
#define BESTHTTP_PROXY_GETREQUESTPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_PROXY_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x4E95E0)
#define BESTHTTP_PROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x4E95F0)
#define BESTHTTP_PROXY_USEPROXYFORADDRESS_OFFSET UNITYSDK_OFFSET(0x4DD800)
#define BESTHTTP_PROXY_SET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x4E9640)
#define BESTHTTP_PROXY_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x4E9650)
#define BESTHTTP_PROXY_SET_EXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x4E9660)
#define BESTHTTP_PROXY_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x4E9670)
#define BESTHTTP_PROXY_CONNECT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP
{
	inline static constexpr unsigned int Proxy_TypeDefinitionIndex = 21316;

	class Proxy : public Il2CppObject
	{
	public:
		::System::Uri* _Address_k__BackingField; // 0x10
		::BestHTTP::Authentication::Credentials* _Credentials_k__BackingField; // 0x18
		Il2CppObject* _Exceptions_k__BackingField; // 0x20

		Il2CppObject* get_Exceptions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PROXY_GET_EXCEPTIONS_OFFSET))(nullptr);
		}

		::System::String* GetRequestPath(::System::Uri* arg)
		{
			return (return (::System::String*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PROXY_GETREQUESTPATH_OFFSET))(arg, nullptr);
		}

		::System::Void set_Credentials(::BestHTTP::Authentication::Credentials* arg)
		{
			((::System::Void(*)(::BestHTTP::Authentication::Credentials*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PROXY_SET_CREDENTIALS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::Authentication::Credentials* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::Authentication::Credentials*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PROXY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean UseProxyForAddress(::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PROXY_USEPROXYFORADDRESS_OFFSET))(arg, nullptr);
		}

		::System::Void set_Address(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PROXY_SET_ADDRESS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Authentication::Credentials* get_Credentials()
		{
			return (return (::BestHTTP::Authentication::Credentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PROXY_GET_CREDENTIALS_OFFSET))(nullptr);
		}

		::System::Void set_Exceptions(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PROXY_SET_EXCEPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Uri* get_Address()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PROXY_GET_ADDRESS_OFFSET))(nullptr);
		}

		::System::Void Connect(::System::IO::Stream* arg, ::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PROXY_CONNECT_OFFSET))(arg, arg, nullptr);
		}

	};
}

