#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_HEADERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A4DF00)

namespace System::Net
{
	inline static constexpr unsigned int HeaderInfo_TypeDefinitionIndex = 29710;

	class HeaderInfo : public Il2CppObject
	{
	public:
		::System::Boolean IsRequestRestricted; // 0x10
		::System::Boolean IsResponseRestricted; // 0x11
		::System::Net::HeaderParser* Parser; // 0x18
		::System::String* HeaderName; // 0x20
		::System::Boolean AllowMultiValues; // 0x28

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Net::HeaderParser* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Net::HeaderParser*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERINFO_.CTOR_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

	};
}

