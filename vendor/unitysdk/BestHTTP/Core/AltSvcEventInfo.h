#pragma once
#include "../../unitysdk.h"

namespace BestHTTP { class HTTPResponse; }

#define BESTHTTP_CORE_ALTSVCEVENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x8F1C50)

namespace BestHTTP::Core
{
	inline static constexpr unsigned int AltSvcEventInfo_TypeDefinitionIndex = 23405;

	class AltSvcEventInfo : public Il2CppObject
	{
	public:
		::System::String* Host; // 0x10
		::BestHTTP::HTTPResponse* Response; // 0x18

		::System::Void .ctor(::System::String* str, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_ALTSVCEVENTINFO_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

