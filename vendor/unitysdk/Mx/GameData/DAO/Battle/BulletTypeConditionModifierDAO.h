#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class BulletType; }
namespace MX::Logic::Data { class IncludeType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class BulletTypeConditionModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class AbilityModifier; }

#define MX_GAMEDATA_DAO_BATTLE_BULLETTYPECONDITIONMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E3720)
#define MX_GAMEDATA_DAO_BATTLE_BULLETTYPECONDITIONMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E3B10)
#define MX_GAMEDATA_DAO_BATTLE_BULLETTYPECONDITIONMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16E3C40)
#define MX_GAMEDATA_DAO_BATTLE_BULLETTYPECONDITIONMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16E4040)
#define MX_GAMEDATA_DAO_BATTLE_BULLETTYPECONDITIONMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16E3AC0)
#define MX_GAMEDATA_DAO_BATTLE_BULLETTYPECONDITIONMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16E3C50)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int BulletTypeConditionModifierDAO_TypeDefinitionIndex = 15402;

	class BulletTypeConditionModifierDAO : public Il2CppObject
	{
	public:
		::FlatData::BulletType* BulletType; // 0x18
		::MX::Logic::Data::IncludeType* IncludeType; // 0x1C

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BulletTypeConditionModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BulletTypeConditionModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETTYPECONDITIONMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BulletTypeConditionModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BulletTypeConditionModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETTYPECONDITIONMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETTYPECONDITIONMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETTYPECONDITIONMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETTYPECONDITIONMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_BULLETTYPECONDITIONMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

