#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CountListBulletConditionModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTBULLETCONDITIONMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16F0D10)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTBULLETCONDITIONMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16F11D0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTBULLETCONDITIONMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F1230)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTBULLETCONDITIONMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16F0D20)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTBULLETCONDITIONMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F13E0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTLISTBULLETCONDITIONMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F1490)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CountListBulletConditionModifierDAO_TypeDefinitionIndex = 15430;

	class CountListBulletConditionModifierDAO : public Il2CppObject
	{
	public:
		Il2CppObject* BulletTypeList; // 0x28

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTBULLETCONDITIONMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTBULLETCONDITIONMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListBulletConditionModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListBulletConditionModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTBULLETCONDITIONMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTBULLETCONDITIONMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTBULLETCONDITIONMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListBulletConditionModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListBulletConditionModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTLISTBULLETCONDITIONMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

