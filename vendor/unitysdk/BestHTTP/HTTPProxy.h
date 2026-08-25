#pragma once
#include "../unitysdk.h"

namespace BestHTTP::Authentication { class Credentials; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_HTTPPROXY_GET_ISTRANSPARENT_OFFSET UNITYSDK_OFFSET(0x4E9680)
#define BESTHTTP_HTTPPROXY_SET_ISTRANSPARENT_OFFSET UNITYSDK_OFFSET(0x4E9690)
#define BESTHTTP_HTTPPROXY_GET_SENDWHOLEURI_OFFSET UNITYSDK_OFFSET(0x4E96A0)
#define BESTHTTP_HTTPPROXY_SET_SENDWHOLEURI_OFFSET UNITYSDK_OFFSET(0x4E96B0)
#define BESTHTTP_HTTPPROXY_GET_NONTRANSPARENTFORHTTPS_OFFSET UNITYSDK_OFFSET(0x4E96C0)
#define BESTHTTP_HTTPPROXY_SET_NONTRANSPARENTFORHTTPS_OFFSET UNITYSDK_OFFSET(0x4E96D0)
#define BESTHTTP_HTTPPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x4E96E0)
#define BESTHTTP_HTTPPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x4E9790)
#define BESTHTTP_HTTPPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x4E9730)
#define BESTHTTP_HTTPPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x4E97E0)
#define BESTHTTP_HTTPPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x4E9840)
#define BESTHTTP_HTTPPROXY_GETREQUESTPATH_OFFSET UNITYSDK_OFFSET(0x4E98B0)
#define BESTHTTP_HTTPPROXY_CONNECT_OFFSET UNITYSDK_OFFSET(0x4E9920)

namespace BestHTTP
{
	inline static constexpr unsigned int HTTPProxy_TypeDefinitionIndex = 21317;

	class HTTPProxy : public Il2CppObject
	{
	public:
		::System::Boolean _IsTransparent_k__BackingField; // 0x28
		::System::Boolean _SendWholeUri_k__BackingField; // 0x29
		::System::Boolean _NonTransparentForHTTPS_k__BackingField; // 0x2A

		::System::Boolean get_IsTransparent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPPROXY_GET_ISTRANSPARENT_OFFSET))(nullptr);
		}

		::System::Void set_IsTransparent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPPROXY_SET_ISTRANSPARENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SendWholeUri()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPPROXY_GET_SENDWHOLEURI_OFFSET))(nullptr);
		}

		::System::Void set_SendWholeUri(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPPROXY_SET_SENDWHOLEURI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NonTransparentForHTTPS()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPPROXY_GET_NONTRANSPARENTFORHTTPS_OFFSET))(nullptr);
		}

		::System::Void set_NonTransparentForHTTPS(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPPROXY_SET_NONTRANSPARENTFORHTTPS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPPROXY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::Authentication::Credentials* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::Authentication::Credentials*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPPROXY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::Authentication::Credentials* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::Authentication::Credentials*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPPROXY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::Authentication::Credentials* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::Authentication::Credentials*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPPROXY_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::Authentication::Credentials* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::Authentication::Credentials*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPPROXY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* GetRequestPath(::System::Uri* arg)
		{
			return (return (::System::String*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPPROXY_GETREQUESTPATH_OFFSET))(arg, nullptr);
		}

		::System::Void Connect(::System::IO::Stream* arg, ::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPPROXY_CONNECT_OFFSET))(arg, arg, nullptr);
		}

	};
}

