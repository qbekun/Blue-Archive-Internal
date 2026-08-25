#pragma once
#include "../unitysdk.h"

namespace NPA { class EXPErrorCode; }

namespace NPA
{
	inline static constexpr unsigned int EXPErrorCode_TypeDefinitionIndex = 25757;

	class EXPErrorCode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::EXPErrorCode* OK; // 0x0
		::NPA::EXPErrorCode* NETWORK_UNAVAILABLE; // 0x0
		::NPA::EXPErrorCode* FAILED_TO_GET_TOKEN; // 0x0
		::NPA::EXPErrorCode* FAILED_TO_REQUIRE_ONLINE; // 0x0

	};
}

