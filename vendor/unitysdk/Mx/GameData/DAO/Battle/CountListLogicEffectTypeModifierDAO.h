#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CountListLogicEffectTypeModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class AbilityModifier; }

#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTYPEMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16EAC40)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTYPEMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EB070)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTYPEMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EB670)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTYPEMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16EB7E0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTYPEMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16EB7F0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTYPEMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16EB5C0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CountListLogicEffectTypeModifierDAO_TypeDefinitionIndex = 15418;

	class CountListLogicEffectTypeModifierDAO : public Il2CppObject
	{
	public:
		Il2CppObject* LogicEffectTypeList; // 0x28

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTYPEMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListLogicEffectTypeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListLogicEffectTypeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTYPEMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListLogicEffectTypeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListLogicEffectTypeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTYPEMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTYPEMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTYPEMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTLOGICEFFECTTYPEMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

