#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPAuthenticationEnvironment; }

namespace NPA
{
	inline static constexpr unsigned int NXPAuthenticationEnvironment_TypeDefinitionIndex = 25520;

	class NXPAuthenticationEnvironment : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::NXPAuthenticationEnvironment* UNKNOWN; // 0x0
		::NPA::NXPAuthenticationEnvironment* TOYNPSN; // 0x0
		::NPA::NXPAuthenticationEnvironment* TPA; // 0x0
		::NPA::NXPAuthenticationEnvironment* KRPC; // 0x0
		::NPA::NXPAuthenticationEnvironment* JPPC; // 0x0
		::NPA::NXPAuthenticationEnvironment* ARENA; // 0x0

	};
}

