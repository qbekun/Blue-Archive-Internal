#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_EXTENSIONS_EXCEPTIONHELPER_SERVERCLOSEDTCPSTREAM_OFFSET UNITYSDK_OFFSET(0x8D4B40)

namespace BestHTTP::Extensions
{
	inline static constexpr unsigned int ExceptionHelper_TypeDefinitionIndex = 23346;

	class ExceptionHelper : public Il2CppObject
	{
	public:
		::System::Exception* ServerClosedTCPStream()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_EXCEPTIONHELPER_SERVERCLOSEDTCPSTREAM_OFFSET))(nullptr);
		}

	};
}

