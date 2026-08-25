#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ComparisonOperator; }
namespace MX::Logic::Data { class IncludeType; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::GameData::DAO::Battle { class MaxHpCapGaugeModifierDAO; }

#define MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER__GETPREDICATE_B__11_5_OFFSET UNITYSDK_OFFSET(0x122F480)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER_GET_MAXHPCAPGAUGE_OFFSET UNITYSDK_OFFSET(0x122F4B0)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x122F4C0)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122F540)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER__GETPREDICATE_B__11_3_OFFSET UNITYSDK_OFFSET(0x122F7E0)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER_GET_INCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x122F810)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER__GETPREDICATE_B__11_1_OFFSET UNITYSDK_OFFSET(0x122F820)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER__GETPREDICATE_B__11_4_OFFSET UNITYSDK_OFFSET(0x122F850)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER__GETPREDICATE_B__11_2_OFFSET UNITYSDK_OFFSET(0x122F880)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER__GETPREDICATE_B__11_0_OFFSET UNITYSDK_OFFSET(0x122F8B0)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER_GET_OPERATOR_OFFSET UNITYSDK_OFFSET(0x122F8E0)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER_GETPREDICATE_OFFSET UNITYSDK_OFFSET(0x122F5A0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int MaxHpCapGaugeModifier_TypeDefinitionIndex = 13820;

	class MaxHpCapGaugeModifier : public Il2CppObject
	{
	public:
		::MX::Logic::Data::ComparisonOperator* _Operator_k__BackingField; // 0x18
		::System::Int64 _MaxHpCapGauge_k__BackingField; // 0x20
		::MX::Logic::Data::IncludeType* _IncludeType_k__BackingField; // 0x28
		Il2CppObject* predicate; // 0x30

		::System::Boolean _GetPredicate_b__11_5(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER__GETPREDICATE_B__11_5_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxHpCapGauge()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER_GET_MAXHPCAPGAUGE_OFFSET))(nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::MaxHpCapGaugeModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::MaxHpCapGaugeModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetPredicate_b__11_3(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER__GETPREDICATE_B__11_3_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::IncludeType* get_IncludeType()
		{
			return ((::MX::Logic::Data::IncludeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER_GET_INCLUDETYPE_OFFSET))(nullptr);
		}

		::System::Boolean _GetPredicate_b__11_1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER__GETPREDICATE_B__11_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetPredicate_b__11_4(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER__GETPREDICATE_B__11_4_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetPredicate_b__11_2(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER__GETPREDICATE_B__11_2_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetPredicate_b__11_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER__GETPREDICATE_B__11_0_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::ComparisonOperator* get_Operator()
		{
			return ((::MX::Logic::Data::ComparisonOperator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER_GET_OPERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetPredicate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEMODIFIER_GETPREDICATE_OFFSET))(nullptr);
		}

	};
}

