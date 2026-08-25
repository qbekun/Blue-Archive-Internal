#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Network::BoltV2 { class NXPToyBoltV2ErrorCode; }

namespace NPA::Editor::Network::BoltV2
{
	inline static constexpr unsigned int NXPToyBoltV2ErrorCode_TypeDefinitionIndex = 26745;

	class NXPToyBoltV2ErrorCode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Network::BoltV2::NXPToyBoltV2ErrorCode* SUCCESS; // 0x0
		::NPA::Editor::Network::BoltV2::NXPToyBoltV2ErrorCode* INVALID_REQUEST_PARAMETER; // 0x0
		::NPA::Editor::Network::BoltV2::NXPToyBoltV2ErrorCode* NO_USER_TO_RECOVER; // 0x0

	};
}

