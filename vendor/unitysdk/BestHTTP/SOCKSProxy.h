#pragma once
#include "../unitysdk.h"

namespace BestHTTP::Authentication { class Credentials; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_SOCKSPROXY_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x4EACD0)
#define BESTHTTP_SOCKSPROXY_GETREQUESTPATH_OFFSET UNITYSDK_OFFSET(0x4EAE00)
#define BESTHTTP_SOCKSPROXY_WRITEBYTES_OFFSET UNITYSDK_OFFSET(0x4EAE50)
#define BESTHTTP_SOCKSPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x4EAEA0)
#define BESTHTTP_SOCKSPROXY_CONNECT_OFFSET UNITYSDK_OFFSET(0x4EAEF0)
#define BESTHTTP_SOCKSPROXY_BUFFERTOHEXSTR_OFFSET UNITYSDK_OFFSET(0x4EC840)

namespace BestHTTP
{
	inline static constexpr unsigned int SOCKSProxy_TypeDefinitionIndex = 21322;

	class SOCKSProxy : public Il2CppObject
	{
	public:
		::System::Void WriteString(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::System::String* str)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKSPROXY_WRITESTRING_OFFSET))(arg, arg, str, nullptr);
		}

		::System::String* GetRequestPath(::System::Uri* arg)
		{
			return (return (::System::String*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKSPROXY_GETREQUESTPATH_OFFSET))(arg, nullptr);
		}

		::System::Void WriteBytes(::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKSPROXY_WRITEBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::Authentication::Credentials* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::Authentication::Credentials*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKSPROXY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Connect(::System::IO::Stream* arg, ::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKSPROXY_CONNECT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* BufferToHexStr(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKSPROXY_BUFFERTOHEXSTR_OFFSET))(arg, arg, nullptr);
		}

	};
}

