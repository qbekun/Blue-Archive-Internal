#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_WEBCOMPLETIONSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A74050)

namespace System::Net
{
	inline static constexpr unsigned int WebCompletionSource_TypeDefinitionIndex = 29802;

	class WebCompletionSource : public ::System::Net::Sockets::Socket
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCOMPLETIONSOURCE_.CTOR_OFFSET))(nullptr);
		}

	};
}

