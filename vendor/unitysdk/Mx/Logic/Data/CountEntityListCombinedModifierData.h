#pragma once
#include "../../../unitysdk.h"

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

#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA470)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZESQUADTYPE_OFFSET UNITYSDK_OFFSET(0x11DA490)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZELOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x11DA4A0)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZEARMORTYPE_OFFSET UNITYSDK_OFFSET(0x11DA4B0)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZELOGICEFFECTCATEGORY_OFFSET UNITYSDK_OFFSET(0x11DA4C0)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZEBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x11DA4D0)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZEENTITYINCIRCLE_OFFSET UNITYSDK_OFFSET(0x11DA4E0)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZETACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x11DA4F0)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZELOGICEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x11DA500)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZETACTICROLE_OFFSET UNITYSDK_OFFSET(0x11DA510)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x11DA520)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountEntityListCombinedModifierData_TypeDefinitionIndex = 13386;

	class CountEntityListCombinedModifierData : public Il2CppObject
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

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeSquadType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZESQUADTYPE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeLogicEffectGroupId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZELOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeArmorType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZEARMORTYPE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeLogicEffectCategory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZELOGICEFFECTCATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeBulletType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZEBULLETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeEntityInCircle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZEENTITYINCIRCLE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeTacticEntityType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZETACTICENTITYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeLogicEffectType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZELOGICEFFECTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeTacticRole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZETACTICROLE_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeTemplateId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIERDATA_SHOULDSERIALIZETEMPLATEID_OFFSET))(nullptr);
		}

	};
}

