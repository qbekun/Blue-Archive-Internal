#pragma once
#include "../../unitysdk.h"

namespace NPA::Games { class NXPToyGameMetaInfo; }

#define NPA_GAMES_NXPTOYGAMEMETAINFORESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD4210)

namespace NPA::Games
{
	inline static constexpr unsigned int NXPToyGameMetaInfoResult_TypeDefinitionIndex = 27442;

	class NXPToyGameMetaInfoResult : public Il2CppObject
	{
	public:
		::NPA::Games::NXPToyGameMetaInfo* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEMETAINFORESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

