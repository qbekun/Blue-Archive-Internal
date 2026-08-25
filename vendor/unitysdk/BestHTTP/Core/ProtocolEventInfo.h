#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Core { class IProtocol; }

#define BESTHTTP_CORE_PROTOCOLEVENTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8F1CE0)
#define BESTHTTP_CORE_PROTOCOLEVENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x8F1D20)

namespace BestHTTP::Core
{
	inline static constexpr unsigned int ProtocolEventInfo_TypeDefinitionIndex = 23407;

	class ProtocolEventInfo : public Il2CppObject
	{
	public:
		::BestHTTP::Core::IProtocol* Source; // 0x10

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_PROTOCOLEVENTINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::Core::IProtocol* arg)
		{
			((::System::Void(*)(::BestHTTP::Core::IProtocol*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_PROTOCOLEVENTINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

