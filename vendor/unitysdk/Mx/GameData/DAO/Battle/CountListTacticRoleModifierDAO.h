#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CountListTacticRoleModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class AbilityModifier; }

#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICROLEMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16EE040)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICROLEMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EE670)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICROLEMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EE810)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICROLEMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16EE050)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICROLEMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16EEEF0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICROLEMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16EEE00)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CountListTacticRoleModifierDAO_TypeDefinitionIndex = 15424;

	class CountListTacticRoleModifierDAO : public Il2CppObject
	{
	public:
		Il2CppObject* TacticRoleList; // 0x28
		Il2CppObject* TacticEntityTypeList; // 0x30

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICROLEMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListTacticRoleModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListTacticRoleModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICROLEMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListTacticRoleModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListTacticRoleModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICROLEMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICROLEMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICROLEMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTTACTICROLEMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

