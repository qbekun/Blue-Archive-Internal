#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CountListLogicEffectCategoryModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTCATEGORYMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16E84C0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTCATEGORYMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16E8520)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTCATEGORYMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16E89E0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTCATEGORYMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E8A90)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTCATEGORYMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16E8530)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTCATEGORYMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E8C40)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CountListLogicEffectCategoryModifierDAO_TypeDefinitionIndex = 15412;

	class CountListLogicEffectCategoryModifierDAO : public Il2CppObject
	{
	public:
		Il2CppObject* LogicEffectCategoryList; // 0x28

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTCATEGORYMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTCATEGORYMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTCATEGORYMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListLogicEffectCategoryModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListLogicEffectCategoryModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTCATEGORYMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTCATEGORYMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListLogicEffectCategoryModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListLogicEffectCategoryModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTCATEGORYMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

