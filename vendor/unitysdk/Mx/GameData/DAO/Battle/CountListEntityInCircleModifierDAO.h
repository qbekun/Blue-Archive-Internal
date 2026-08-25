#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class BaseEntityType; }
namespace MX::Logic::Skills { class TargetEntityType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CountListEntityInCircleModifierDAO&; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTENTITYINCIRCLEMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16E7630)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTENTITYINCIRCLEMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16E7B20)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTENTITYINCIRCLEMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E7B30)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTENTITYINCIRCLEMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16E81B0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTENTITYINCIRCLEMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16E8260)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTENTITYINCIRCLEMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E82C0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CountListEntityInCircleModifierDAO_TypeDefinitionIndex = 15410;

	class CountListEntityInCircleModifierDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BaseEntityType* BaseEntity; // 0x28
		::System::Int32 RangeMin; // 0x2C
		::System::Int32 RangeMax; // 0x30
		::MX::Logic::Skills::TargetEntityType* ApplyEntityType; // 0x34

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTENTITYINCIRCLEMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTENTITYINCIRCLEMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListEntityInCircleModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListEntityInCircleModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTENTITYINCIRCLEMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTENTITYINCIRCLEMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTENTITYINCIRCLEMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListEntityInCircleModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListEntityInCircleModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTENTITYINCIRCLEMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

