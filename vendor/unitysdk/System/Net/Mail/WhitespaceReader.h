#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_MAIL_WHITESPACEREADER_READFWSREVERSE_OFFSET UNITYSDK_OFFSET(0x9AAC820)
#define SYSTEM_NET_MAIL_WHITESPACEREADER_READCFWSREVERSE_OFFSET UNITYSDK_OFFSET(0x9AAD910)

namespace System::Net::Mail
{
	inline static constexpr unsigned int WhitespaceReader_TypeDefinitionIndex = 29934;

	class WhitespaceReader : public Il2CppObject
	{
	public:
		::System::Int32 ReadFwsReverse(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_WHITESPACEREADER_READFWSREVERSE_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 ReadCfwsReverse(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_WHITESPACEREADER_READCFWSREVERSE_OFFSET))(str, arg, nullptr);
		}

	};
}

