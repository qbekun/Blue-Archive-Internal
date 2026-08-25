#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CountListLogicEffectGroupIdModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16E9230)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16E9630)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16E9240)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E96D0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16E9840)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E98F0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CountListLogicEffectGroupIdModifierDAO_TypeDefinitionIndex = 15414;

	class CountListLogicEffectGroupIdModifierDAO : public Il2CppObject
	{
	public:
		Il2CppObject* LogicEffectGroupIdList; // 0x28

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListLogicEffectGroupIdModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListLogicEffectGroupIdModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListLogicEffectGroupIdModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListLogicEffectGroupIdModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTGROUPIDMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

