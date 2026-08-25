#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class EntityInCircleCondition; }
namespace MX::Logic::Data { class LogicEffectCategoryCondition; }
namespace MX::Logic::Data { class LogicEffectGroupIdCondition; }
namespace MX::Logic::Data { class TemplateIdCondition; }
namespace MX::Logic::Data { class LogicEffectTypeCondition; }
namespace MX::Logic::Data { class TacticRoleCondition; }
namespace MX::Logic::Data { class ModifierTacticEntityTypeCondition; }
namespace MX::Logic::Data { class SquadTypeCondition; }
namespace MX::Logic::Data { class BulletTypeCondition; }
namespace MX::Logic::Data { class ArmorTypeCondition; }
namespace MX::Logic::Data { class CheckConditionOperator; }
namespace MX::Logic::Data { class AbilityModifier; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CountEntityListCombinedModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x16E57F0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x16E5C20)
#define MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZEBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x16E5C30)
#define MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZEARMORTYPE_OFFSET UNITYSDK_OFFSET(0x16E5C40)
#define MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZEENTITYINCIRCLE_OFFSET UNITYSDK_OFFSET(0x16E5C50)
#define MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16E5C60)
#define MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZELOGICEFFECTCATEGORY_OFFSET UNITYSDK_OFFSET(0x16E5C70)
#define MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZESQUADTYPE_OFFSET UNITYSDK_OFFSET(0x16E5C80)
#define MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZETACTICROLE_OFFSET UNITYSDK_OFFSET(0x16E5C90)
#define MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZELOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x16E5CA0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_TOABILITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x16E5CB0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E5D10)
#define MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZETACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x16E61D0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x16E61E0)
#define MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZELOGICEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x16E6290)
#define MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E62A0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CountEntityListCombinedModifierDAO_TypeDefinitionIndex = 15408;

	class CountEntityListCombinedModifierDAO : public Il2CppObject
	{
	public:
		::System::Boolean CheckEntityInCircle; // 0x28
		::MX::Logic::Data::EntityInCircleCondition* EntityInCircle; // 0x30
		::System::Boolean CheckLogicEffectCategory; // 0x38
		::MX::Logic::Data::LogicEffectCategoryCondition* LogicEffectCategory; // 0x40
		::System::Boolean CheckLogicEffectGroupId; // 0x48
		::MX::Logic::Data::LogicEffectGroupIdCondition* LogicEffectGroupId; // 0x50
		::System::Boolean CheckTemplateId; // 0x58
		::MX::Logic::Data::TemplateIdCondition* TemplateId; // 0x60
		::System::Boolean CheckLogicEffectType; // 0x68
		::MX::Logic::Data::LogicEffectTypeCondition* LogicEffectType; // 0x70
		::System::Boolean CheckTacticRole; // 0x78
		::MX::Logic::Data::TacticRoleCondition* TacticRole; // 0x80
		::System::Boolean CheckTacticEntityType; // 0x88
		::MX::Logic::Data::ModifierTacticEntityTypeCondition* TacticEntityType; // 0x90
		::System::Boolean CheckSquadType; // 0x98
		::MX::Logic::Data::SquadTypeCondition* SquadType; // 0xA0
		::System::Boolean CheckBulletType; // 0xA8
		::MX::Logic::Data::BulletTypeCondition* BulletType; // 0xB0
		::System::Boolean CheckArmorType; // 0xB8
		::MX::Logic::Data::ArmorTypeCondition* ArmorType; // 0xC0
		::MX::Logic::Data::CheckConditionOperator* Operator; // 0xC8

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeTemplateId()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZETEMPLATEID_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeBulletType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZEBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeArmorType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZEARMORTYPE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeEntityInCircle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZEENTITYINCIRCLE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeLogicEffectCategory()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZELOGICEFFECTCATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeSquadType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZESQUADTYPE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeTacticRole()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZETACTICROLE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeLogicEffectGroupId()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZELOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::MX::Logic::Data::AbilityModifier* ToAbilityModifier()
		{
			return (return (::MX::Logic::Data::AbilityModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_TOABILITYMODIFIER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountEntityListCombinedModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountEntityListCombinedModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSerializeTacticEntityType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZETACTICENTITYTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeLogicEffectType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_SHOULDSERIALIZELOGICEFFECTTYPE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountEntityListCombinedModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountEntityListCombinedModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_COUNTENTITYLISTCOMBINEDMODIFIERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

