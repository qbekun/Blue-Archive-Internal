#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMESHOOTING_PLAYERSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x14778E0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int PlayerSetting_TypeDefinitionIndex = 15178;

	class PlayerSetting : public Il2CppObject
	{
	public:
		::System::Int64 CharacterId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PLAYERSETTING_.CTOR_OFFSET))(nullptr);
		}

	};
}

