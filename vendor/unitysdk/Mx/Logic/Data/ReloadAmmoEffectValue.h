#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class ReloadAmmoEffectDAO; }

#define MX_LOGIC_DATA_RELOADAMMOEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123DCA0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ReloadAmmoEffectValue_TypeDefinitionIndex = 13914;

	class ReloadAmmoEffectValue : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::GameData::DAO::Battle::ReloadAmmoEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ReloadAmmoEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_RELOADAMMOEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

