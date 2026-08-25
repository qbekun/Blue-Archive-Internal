#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CountListTacticRangeModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICRANGEMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16ED2D0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICRANGEMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16ED330)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICRANGEMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16ED7F0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICRANGEMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16EDD40)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICRANGEMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16ED340)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICRANGEMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EDE30)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CountListTacticRangeModifierDAO_TypeDefinitionIndex = 15422;

	class CountListTacticRangeModifierDAO : public Il2CppObject
	{
	public:
		Il2CppObject* TacticRangeList; // 0x28

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICRANGEMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICRANGEMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListTacticRangeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListTacticRangeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICRANGEMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICRANGEMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICRANGEMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListTacticRangeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListTacticRangeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICRANGEMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

