#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class ENXPSteamAPIInitResult; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int ENXPSteamAPIInitResult_TypeDefinitionIndex = 25995;

	class ENXPSteamAPIInitResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::Steam::ENXPSteamAPIInitResult* k_ESteamAPIInitResult_OK; // 0x0
		::NPA::Ex::Steam::ENXPSteamAPIInitResult* k_ESteamAPIInitResult_FailedGeneric; // 0x0
		::NPA::Ex::Steam::ENXPSteamAPIInitResult* k_ESteamAPIInitResult_NoSteamClient; // 0x0
		::NPA::Ex::Steam::ENXPSteamAPIInitResult* k_ESteamAPIInitResult_VersionMismatch; // 0x0

	};
}

