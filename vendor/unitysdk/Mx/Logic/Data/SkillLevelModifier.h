#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Data { class ComparisonOperator; }
namespace MX::Logic::Data { class IncludeType; }
namespace MX::GameData::DAO::Battle { class SkillLevelModifierDAO; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_DATA_SKILLLEVELMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122FFD0)
#define MX_LOGIC_DATA_SKILLLEVELMODIFIER_GET_OPERATOR_OFFSET UNITYSDK_OFFSET(0x1230270)
#define MX_LOGIC_DATA_SKILLLEVELMODIFIER__GETPREDICATE_B__14_5_OFFSET UNITYSDK_OFFSET(0x1230280)
#define MX_LOGIC_DATA_SKILLLEVELMODIFIER__GETPREDICATE_B__14_2_OFFSET UNITYSDK_OFFSET(0x1230390)
#define MX_LOGIC_DATA_SKILLLEVELMODIFIER_GET_INCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x12303C0)
#define MX_LOGIC_DATA_SKILLLEVELMODIFIER_GET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0x12303D0)
#define MX_LOGIC_DATA_SKILLLEVELMODIFIER__GETPREDICATE_B__14_6_OFFSET UNITYSDK_OFFSET(0x12303E0)
#define MX_LOGIC_DATA_SKILLLEVELMODIFIER__GETPREDICATE_B__14_3_OFFSET UNITYSDK_OFFSET(0x1230410)
#define MX_LOGIC_DATA_SKILLLEVELMODIFIER__GETPREDICATE_B__14_4_OFFSET UNITYSDK_OFFSET(0x1230440)
#define MX_LOGIC_DATA_SKILLLEVELMODIFIER__GETPREDICATE_B__14_1_OFFSET UNITYSDK_OFFSET(0x1230470)
#define MX_LOGIC_DATA_SKILLLEVELMODIFIER_GET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x12304A0)
#define MX_LOGIC_DATA_SKILLLEVELMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x12304B0)
#define MX_LOGIC_DATA_SKILLLEVELMODIFIER_GETPREDICATE_OFFSET UNITYSDK_OFFSET(0x1230030)
#define MX_LOGIC_DATA_SKILLLEVELMODIFIER__GETPREDICATE_G__GETSKILLLEVEL|14_0_OFFSET UNITYSDK_OFFSET(0x12302B0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillLevelModifier_TypeDefinitionIndex = 13825;

	class SkillLevelModifier : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::SkillSlot* _SkillSlot_k__BackingField; // 0x18
		::MX::Logic::Data::ComparisonOperator* _Operator_k__BackingField; // 0x1C
		::System::Int32 _SkillLevel_k__BackingField; // 0x20
		::MX::Logic::Data::IncludeType* _IncludeType_k__BackingField; // 0x24
		Il2CppObject* predicate; // 0x28

		::System::Void .ctor(::MX::GameData::DAO::Battle::SkillLevelModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillLevelModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLEVELMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::ComparisonOperator* get_Operator()
		{
			return ((::MX::Logic::Data::ComparisonOperator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLEVELMODIFIER_GET_OPERATOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetPredicate_b__14_5(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLEVELMODIFIER__GETPREDICATE_B__14_5_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetPredicate_b__14_2(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLEVELMODIFIER__GETPREDICATE_B__14_2_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::IncludeType* get_IncludeType()
		{
			return ((::MX::Logic::Data::IncludeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLEVELMODIFIER_GET_INCLUDETYPE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* get_SkillSlot()
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLEVELMODIFIER_GET_SKILLSLOT_OFFSET))(nullptr);
		}

		::System::Boolean _GetPredicate_b__14_6(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLEVELMODIFIER__GETPREDICATE_B__14_6_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetPredicate_b__14_3(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLEVELMODIFIER__GETPREDICATE_B__14_3_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetPredicate_b__14_4(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLEVELMODIFIER__GETPREDICATE_B__14_4_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetPredicate_b__14_1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLEVELMODIFIER__GETPREDICATE_B__14_1_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SkillLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLEVELMODIFIER_GET_SKILLLEVEL_OFFSET))(nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLEVELMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* GetPredicate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLEVELMODIFIER_GETPREDICATE_OFFSET))(nullptr);
		}

		::System::Int32 _GetPredicate_g__GetSkillLevel|14_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Int32(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLLEVELMODIFIER__GETPREDICATE_G__GETSKILLLEVEL|14_0_OFFSET))(arg, nullptr);
		}

	};
}

