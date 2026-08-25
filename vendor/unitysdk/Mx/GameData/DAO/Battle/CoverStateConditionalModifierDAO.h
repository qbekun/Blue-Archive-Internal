#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class CoverState; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CoverStateConditionalModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class AbilityModifier; }

#define MX_GAMEDATA_DAO_BATTLE_COVERSTATECONDITIONALMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F41E0)
#define MX_GAMEDATA_DAO_BATTLE_COVERSTATECONDITIONALMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F4230)
#define MX_GAMEDATA_DAO_BATTLE_COVERSTATECONDITIONALMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16F45A0)
#define MX_GAMEDATA_DAO_BATTLE_COVERSTATECONDITIONALMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16F45B0)
#define MX_GAMEDATA_DAO_BATTLE_COVERSTATECONDITIONALMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F4920)
#define MX_GAMEDATA_DAO_BATTLE_COVERSTATECONDITIONALMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16F4A50)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CoverStateConditionalModifierDAO_TypeDefinitionIndex = 15436;

	class CoverStateConditionalModifierDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::CoverState* CoverState; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COVERSTATECONDITIONALMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CoverStateConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CoverStateConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COVERSTATECONDITIONALMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COVERSTATECONDITIONALMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COVERSTATECONDITIONALMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CoverStateConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CoverStateConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COVERSTATECONDITIONALMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COVERSTATECONDITIONALMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

	};
}

