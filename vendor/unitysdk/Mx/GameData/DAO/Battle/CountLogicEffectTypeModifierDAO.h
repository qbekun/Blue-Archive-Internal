#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CountLogicEffectTypeModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class AbilityModifier; }

#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTYPEMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16EB8F0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTYPEMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16EBC30)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTYPEMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EBC80)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTYPEMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EC4D0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTYPEMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16EB900)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTYPEMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16ED1D0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CountLogicEffectTypeModifierDAO_TypeDefinitionIndex = 15420;

	class CountLogicEffectTypeModifierDAO : public Il2CppObject
	{
	public:
		::System::String* LogicEffectType; // 0x18
		::System::Int32 CountMin; // 0x20
		::System::Int32 CountMax; // 0x24
		::MX::Logic::Data::IncludeType* IncludeType; // 0x28

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTYPEMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTYPEMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountLogicEffectTypeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountLogicEffectTypeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTYPEMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountLogicEffectTypeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountLogicEffectTypeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTYPEMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTYPEMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLOGICEFFECTTYPEMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

	};
}

