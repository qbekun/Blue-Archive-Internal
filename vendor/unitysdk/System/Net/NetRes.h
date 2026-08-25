#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_NETRES_GETWEBSTATUSSTRING_OFFSET UNITYSDK_OFFSET(0x9A51580)
#define SYSTEM_NET_NETRES_GETWEBSTATUSSTRING_OFFSET UNITYSDK_OFFSET(0x9A51620)
#define SYSTEM_NET_NETRES_GETWEBSTATUSCODESTRING_OFFSET UNITYSDK_OFFSET(0x9A51670)

namespace System::Net
{
	inline static constexpr unsigned int NetRes_TypeDefinitionIndex = 29716;

	class NetRes : public Il2CppObject
	{
	public:
		::System::String* GetWebStatusString(::System::String* str, ::System::Net::WebExceptionStatus* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Net::WebExceptionStatus*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETRES_GETWEBSTATUSSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetWebStatusString(::System::Net::WebExceptionStatus* arg)
		{
			return (return (::System::String*(*)(::System::Net::WebExceptionStatus*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETRES_GETWEBSTATUSSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* GetWebStatusCodeString(::System::Net::FtpStatusCode* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::Net::FtpStatusCode*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETRES_GETWEBSTATUSCODESTRING_OFFSET))(arg, str, nullptr);
		}

	};
}

