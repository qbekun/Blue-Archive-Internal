#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class EntityInCircleCondition; }
namespace MX::Logic::Data { class LogicEffectCategoryCondition; }
namespace MX::Logic::Data { class LogicEffectGroupIdCondition; }
namespace MX::Logic::Data { class LogicEffectTypeCondition; }
namespace MX::Logic::Data { class TacticRoleCondition; }
namespace MX::Logic::Data { class ModifierTacticEntityTypeCondition; }
namespace MX::Logic::Data { class SquadTypeCondition; }
namespace MX::Logic::Data { class BulletTypeCondition; }
namespace MX::Logic::Data { class ArmorTypeCondition; }
namespace MX::GameData::DAO::Battle { class CountEntityListCombinedModifierDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1222480)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_GETCHECKCOUNT_OFFSET UNITYSDK_OFFSET(0x1222CB0)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKENTITYINCIRCLE_OFFSET UNITYSDK_OFFSET(0x1222CC0)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKLOGICEFFECTCATEGORY_OFFSET UNITYSDK_OFFSET(0x1222F90)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKLOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x12231A0)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKLOGICEFFECTTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1223390)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKLOGICEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1223570)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKTACTICROLE_OFFSET UNITYSDK_OFFSET(0x1223720)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKTACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1223900)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKSQUADTYPE_OFFSET UNITYSDK_OFFSET(0x1223AD0)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x1223CA0)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKARMORTYPE_OFFSET UNITYSDK_OFFSET(0x1223E70)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x1222F20)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x1224050)
#define MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER__CHECKENTITYINCIRCLE_B__16_0_OFFSET UNITYSDK_OFFSET(0x1224200)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountEntityListCombinedModifier_TypeDefinitionIndex = 13759;

	class CountEntityListCombinedModifier : public Il2CppObject
	{
	public:
		::MX::Logic::Data::EntityInCircleCondition* entityInCircleCondition; // 0x28
		::MX::Logic::Data::LogicEffectCategoryCondition* logicEffectCategoryCondition; // 0x30
		::MX::Logic::Data::LogicEffectGroupIdCondition* logicEffectGroupIdCondition; // 0x38
		Il2CppObject* templateIdConditionHashList; // 0x40
		::System::Boolean templateIdConditionIsCountFalse; // 0x48
		::MX::Logic::Data::LogicEffectTypeCondition* logicEffectTypeCondition; // 0x50
		Il2CppObject* logicEffectTypeList; // 0x58
		::MX::Logic::Data::TacticRoleCondition* tacticRoleCondition; // 0x60
		::MX::Logic::Data::ModifierTacticEntityTypeCondition* tacticEntityTypeCondition; // 0x68
		::MX::Logic::Data::SquadTypeCondition* squadTypeCondition; // 0x70
		::MX::Logic::Data::BulletTypeCondition* bulletTypeCondition; // 0x78
		::MX::Logic::Data::ArmorTypeCondition* armorTypeCondition; // 0x80
		::System::Boolean isAnd; // 0x88
		::System::Boolean isConditionEmpty; // 0x89

		::System::Void .ctor(::MX::GameData::DAO::Battle::CountEntityListCombinedModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CountEntityListCombinedModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCheckCount(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Int32(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_GETCHECKCOUNT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean CheckEntityInCircle(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKENTITYINCIRCLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CheckLogicEffectCategory(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKLOGICEFFECTCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckLogicEffectGroupId(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKLOGICEFFECTGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckLogicEffectTemplateId(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKLOGICEFFECTTEMPLATEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckLogicEffectType(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKLOGICEFFECTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckTacticRole(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKTACTICROLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckTacticEntityType(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKTACTICENTITYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckSquadType(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKSQUADTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckBulletType(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKBULLETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckArmorType(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_CHECKARMORTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSuccess(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_ISSUCCESS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean _CheckEntityInCircle_b__16_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTENTITYLISTCOMBINEDMODIFIER__CHECKENTITYINCIRCLE_B__16_0_OFFSET))(arg, nullptr);
		}

	};
}

