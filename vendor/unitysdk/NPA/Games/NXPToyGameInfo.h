#pragma once
#include "../../unitysdk.h"

#define NPA_GAMES_NXPTOYGAMEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD4830)

namespace NPA::Games
{
	inline static constexpr unsigned int NXPToyGameInfo_TypeDefinitionIndex = 27449;

	class NXPToyGameInfo : public Il2CppObject
	{
	public:
		::System::String* gameServerCode; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_GAMES_NXPTOYGAMEINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

