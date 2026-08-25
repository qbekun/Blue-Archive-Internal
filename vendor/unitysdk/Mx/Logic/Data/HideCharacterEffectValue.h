#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class HideCharacterEffectDAO; }

#define MX_LOGIC_DATA_HIDECHARACTEREFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123BA80)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HideCharacterEffectValue_TypeDefinitionIndex = 13899;

	class HideCharacterEffectValue : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::GameData::DAO::Battle::HideCharacterEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::HideCharacterEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HIDECHARACTEREFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

