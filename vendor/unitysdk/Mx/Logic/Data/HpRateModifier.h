#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ComparisonOperator; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Logic::Data { class IncludeType; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class HpRateModifierDAO; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_DATA_HPRATEMODIFIER_GETPREDICATE_OFFSET UNITYSDK_OFFSET(0x122E9B0)
#define MX_LOGIC_DATA_HPRATEMODIFIER__GETPREDICATE_B__11_0_OFFSET UNITYSDK_OFFSET(0x122EBF0)
#define MX_LOGIC_DATA_HPRATEMODIFIER__GETPREDICATE_B__11_2_OFFSET UNITYSDK_OFFSET(0x122EC60)
#define MX_LOGIC_DATA_HPRATEMODIFIER_GET_INCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x122ECD0)
#define MX_LOGIC_DATA_HPRATEMODIFIER__GETPREDICATE_B__11_3_OFFSET UNITYSDK_OFFSET(0x122ECE0)
#define MX_LOGIC_DATA_HPRATEMODIFIER__GETPREDICATE_B__11_1_OFFSET UNITYSDK_OFFSET(0x122ED50)
#define MX_LOGIC_DATA_HPRATEMODIFIER__GETPREDICATE_B__11_5_OFFSET UNITYSDK_OFFSET(0x122EDC0)
#define MX_LOGIC_DATA_HPRATEMODIFIER__GETPREDICATE_B__11_4_OFFSET UNITYSDK_OFFSET(0x122EE30)
#define MX_LOGIC_DATA_HPRATEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122EEA0)
#define MX_LOGIC_DATA_HPRATEMODIFIER_GET_OPERATOR_OFFSET UNITYSDK_OFFSET(0x122EF00)
#define MX_LOGIC_DATA_HPRATEMODIFIER_GET_HPRATE_OFFSET UNITYSDK_OFFSET(0x122EF10)
#define MX_LOGIC_DATA_HPRATEMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x122EF20)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HpRateModifier_TypeDefinitionIndex = 13816;

	class HpRateModifier : public Il2CppObject
	{
	public:
		::MX::Logic::Data::ComparisonOperator* _Operator_k__BackingField; // 0x18
		::MX::Core::Math::BasisPoint* _HpRate_k__BackingField; // 0x20
		::MX::Logic::Data::IncludeType* _IncludeType_k__BackingField; // 0x28
		Il2CppObject* predicate; // 0x30

		Il2CppObject* GetPredicate()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEMODIFIER_GETPREDICATE_OFFSET))(nullptr);
		}

		::System::Boolean _GetPredicate_b__11_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEMODIFIER__GETPREDICATE_B__11_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetPredicate_b__11_2(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEMODIFIER__GETPREDICATE_B__11_2_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::IncludeType* get_IncludeType()
		{
			return ((::MX::Logic::Data::IncludeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEMODIFIER_GET_INCLUDETYPE_OFFSET))(nullptr);
		}

		::System::Boolean _GetPredicate_b__11_3(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEMODIFIER__GETPREDICATE_B__11_3_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetPredicate_b__11_1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEMODIFIER__GETPREDICATE_B__11_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetPredicate_b__11_5(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEMODIFIER__GETPREDICATE_B__11_5_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetPredicate_b__11_4(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEMODIFIER__GETPREDICATE_B__11_4_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::HpRateModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::HpRateModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::ComparisonOperator* get_Operator()
		{
			return ((::MX::Logic::Data::ComparisonOperator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEMODIFIER_GET_OPERATOR_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_HpRate()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEMODIFIER_GET_HPRATE_OFFSET))(nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HPRATEMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

