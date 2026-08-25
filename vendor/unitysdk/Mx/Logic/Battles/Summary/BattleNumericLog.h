#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntityType; }
namespace MX::Logic::Battles::Summary { class BattleLogCategory; }
namespace MX::Logic::Battles::Summary { class BattleLogSourceType; }
namespace MX::Logic::Battles::Summary { class BattleNumericLog; }

#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x13A2DE0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x13A2DF0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x13A2E00)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x13A2E10)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x13A2E20)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x13A2E30)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_CALCULATEDSUM_OFFSET UNITYSDK_OFFSET(0x13A2E40)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_CALCULATEDSUM_OFFSET UNITYSDK_OFFSET(0x13A2E50)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_APPLIEDSUM_OFFSET UNITYSDK_OFFSET(0x13A2E60)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_APPLIEDSUM_OFFSET UNITYSDK_OFFSET(0x13A2E70)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x13A2E80)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x13A2E90)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_CRITICALMULTIPLIERMAX_OFFSET UNITYSDK_OFFSET(0x13A2EA0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_CRITICALMULTIPLIERMAX_OFFSET UNITYSDK_OFFSET(0x13A2EB0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_CRITICALCOUNT_OFFSET UNITYSDK_OFFSET(0x13A2EC0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_CRITICALCOUNT_OFFSET UNITYSDK_OFFSET(0x13A2ED0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_CALCULATEDMIN_OFFSET UNITYSDK_OFFSET(0x13A2EE0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_CALCULATEDMIN_OFFSET UNITYSDK_OFFSET(0x13A2EF0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_CALCULATEDMAX_OFFSET UNITYSDK_OFFSET(0x13A2F00)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_CALCULATEDMAX_OFFSET UNITYSDK_OFFSET(0x13A2F10)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_APPLIEDMIN_OFFSET UNITYSDK_OFFSET(0x13A2F20)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_APPLIEDMIN_OFFSET UNITYSDK_OFFSET(0x13A2F30)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_APPLIEDMAX_OFFSET UNITYSDK_OFFSET(0x13A2F40)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_APPLIEDMAX_OFFSET UNITYSDK_OFFSET(0x13A2F50)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x13A2F60)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x13A2F70)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_RESET_OFFSET UNITYSDK_OFFSET(0x13A2FE0)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_ADD_OFFSET UNITYSDK_OFFSET(0x13A3020)
#define MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x13A3120)

namespace MX::Logic::Battles::Summary
{
	inline static constexpr unsigned int BattleNumericLog_TypeDefinitionIndex = 14461;

	class BattleNumericLog : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntityType* _EntityType_k__BackingField; // 0x10
		::MX::Logic::Battles::Summary::BattleLogCategory* _Category_k__BackingField; // 0x14
		::MX::Logic::Battles::Summary::BattleLogSourceType* _Source_k__BackingField; // 0x18
		::System::Int64 _CalculatedSum_k__BackingField; // 0x20
		::System::Int64 _AppliedSum_k__BackingField; // 0x28
		::System::Int64 _Count_k__BackingField; // 0x30
		::System::Int64 _CriticalMultiplierMax_k__BackingField; // 0x38
		::System::Int64 _CriticalCount_k__BackingField; // 0x40
		::System::Int64 _CalculatedMin_k__BackingField; // 0x48
		::System::Int64 _CalculatedMax_k__BackingField; // 0x50
		::System::Int64 _AppliedMin_k__BackingField; // 0x58
		::System::Int64 _AppliedMax_k__BackingField; // 0x60

		::MX::Logic::BattleEntities::BattleEntityType* get_EntityType()
		{
			return ((::MX::Logic::BattleEntities::BattleEntityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_ENTITYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EntityType(::MX::Logic::BattleEntities::BattleEntityType* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_ENTITYTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::BattleLogCategory* get_Category()
		{
			return ((::MX::Logic::Battles::Summary::BattleLogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_CATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_Category(::MX::Logic::Battles::Summary::BattleLogCategory* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleLogCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_CATEGORY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::BattleLogSourceType* get_Source()
		{
			return ((::MX::Logic::Battles::Summary::BattleLogSourceType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_SOURCE_OFFSET))(nullptr);
		}

		::System::Void set_Source(::MX::Logic::Battles::Summary::BattleLogSourceType* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleLogSourceType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_SOURCE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CalculatedSum()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_CALCULATEDSUM_OFFSET))(nullptr);
		}

		::System::Void set_CalculatedSum(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_CALCULATEDSUM_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AppliedSum()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_APPLIEDSUM_OFFSET))(nullptr);
		}

		::System::Void set_AppliedSum(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_APPLIEDSUM_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Count()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void set_Count(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CriticalMultiplierMax()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_CRITICALMULTIPLIERMAX_OFFSET))(nullptr);
		}

		::System::Void set_CriticalMultiplierMax(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_CRITICALMULTIPLIERMAX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CriticalCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_CRITICALCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CriticalCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_CRITICALCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CalculatedMin()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_CALCULATEDMIN_OFFSET))(nullptr);
		}

		::System::Void set_CalculatedMin(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_CALCULATEDMIN_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CalculatedMax()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_CALCULATEDMAX_OFFSET))(nullptr);
		}

		::System::Void set_CalculatedMax(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_CALCULATEDMAX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AppliedMin()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_APPLIEDMIN_OFFSET))(nullptr);
		}

		::System::Void set_AppliedMin(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_APPLIEDMIN_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AppliedMax()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_GET_APPLIEDMAX_OFFSET))(nullptr);
		}

		::System::Void set_AppliedMax(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_SET_APPLIEDMAX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntityType* arg, ::MX::Logic::Battles::Summary::BattleLogCategory* arg2, ::MX::Logic::Battles::Summary::BattleLogSourceType* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntityType*, ::MX::Logic::Battles::Summary::BattleLogCategory*, ::MX::Logic::Battles::Summary::BattleLogSourceType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_RESET_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_ADD_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Battles::Summary::BattleNumericLog* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Summary::BattleNumericLog*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SUMMARY_BATTLENUMERICLOG_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

