#pragma once
#include "../../unitysdk.h"

#define MX_DATA_WORLDRAIDCONDITIONSCENARIOGROUP_GET_CONDITIONSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1866320)
#define MX_DATA_WORLDRAIDCONDITIONSCENARIOGROUP_GET_SCENARIOOUTPUTCONDITIONID_OFFSET UNITYSDK_OFFSET(0x1866330)
#define MX_DATA_WORLDRAIDCONDITIONSCENARIOGROUP_SET_CONDITIONSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1866340)
#define MX_DATA_WORLDRAIDCONDITIONSCENARIOGROUP_SET_SCENARIOOUTPUTCONDITIONID_OFFSET UNITYSDK_OFFSET(0x1866350)

namespace MX::Data
{
	inline static constexpr unsigned int WorldRaidConditionScenarioGroup_TypeDefinitionIndex = 15927;

	class WorldRaidConditionScenarioGroup : public Il2CppObject
	{
	public:
		::System::Int64 _ScenarioOutputConditionId_k__BackingField; // 0x10
		::System::Int64 _ConditionScenarioGroupid_k__BackingField; // 0x18

		::System::Int64 get_ConditionScenarioGroupid()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONSCENARIOGROUP_GET_CONDITIONSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioOutputConditionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONSCENARIOGROUP_GET_SCENARIOOUTPUTCONDITIONID_OFFSET))(nullptr);
		}

		::System::Void set_ConditionScenarioGroupid(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONSCENARIOGROUP_SET_CONDITIONSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ScenarioOutputConditionId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WORLDRAIDCONDITIONSCENARIOGROUP_SET_SCENARIOOUTPUTCONDITIONID_OFFSET))(arg, nullptr);
		}

	};
}

