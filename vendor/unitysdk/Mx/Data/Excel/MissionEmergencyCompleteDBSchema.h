#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEDBSCHEMA_SET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x1C10CB0)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEDBSCHEMA_GET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x1C10CC0)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C10CD0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MissionEmergencyCompleteDBSchema_TypeDefinitionIndex = 18930;

	class MissionEmergencyCompleteDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _MissionId_k__BackingField; // 0x20

		::System::Void set_MissionId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEDBSCHEMA_SET_MISSIONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MissionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEDBSCHEMA_GET_MISSIONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

