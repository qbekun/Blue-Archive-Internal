#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_CORE_HTTP2CONNECTPROTOCOLINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x8F1CA0)

namespace BestHTTP::Core
{
	inline static constexpr unsigned int HTTP2ConnectProtocolInfo_TypeDefinitionIndex = 23406;

	class HTTP2ConnectProtocolInfo : public Il2CppObject
	{
	public:
		::System::String* Host; // 0x10
		::System::Boolean Enabled; // 0x18

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HTTP2CONNECTPROTOCOLINFO_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

