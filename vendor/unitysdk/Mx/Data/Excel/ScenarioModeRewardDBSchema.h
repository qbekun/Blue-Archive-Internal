#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOMODEREWARDDBSCHEMA_GET_SCENARIOMODEREWARDID_OFFSET UNITYSDK_OFFSET(0x1C62CD0)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDDBSCHEMA_SET_SCENARIOMODEREWARDID_OFFSET UNITYSDK_OFFSET(0x1C62CE0)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C62CF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioModeRewardDBSchema_TypeDefinitionIndex = 19298;

	class ScenarioModeRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ScenarioModeRewardId_k__BackingField; // 0x20

		::System::Int64 get_ScenarioModeRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDDBSCHEMA_GET_SCENARIOMODEREWARDID_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioModeRewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDDBSCHEMA_SET_SCENARIOMODEREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

