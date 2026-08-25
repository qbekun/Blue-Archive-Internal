#pragma once
#include "../../unitysdk.h"

#define MX_DATA_MISSIONEMERGENCYCOMPLETEDATA_GETEXCELS_OFFSET UNITYSDK_OFFSET(0x1918B90)
#define MX_DATA_MISSIONEMERGENCYCOMPLETEDATA_ISEMERGENCYCOMPLETEMISSION_OFFSET UNITYSDK_OFFSET(0x1918C00)
#define MX_DATA_MISSIONEMERGENCYCOMPLETEDATA_PREPROCESSSERVER_OFFSET UNITYSDK_OFFSET(0x1918D20)
#define MX_DATA_MISSIONEMERGENCYCOMPLETEDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1918D30)
#define MX_DATA_MISSIONEMERGENCYCOMPLETEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1918D70)

namespace MX::Data
{
	inline static constexpr unsigned int MissionEmergencyCompleteData_TypeDefinitionIndex = 16269;

	class MissionEmergencyCompleteData : public Il2CppObject
	{
	public:
		Il2CppObject* GetExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONEMERGENCYCOMPLETEDATA_GETEXCELS_OFFSET))(nullptr);
		}

		::System::Boolean IsEmergencyCompleteMission(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONEMERGENCYCOMPLETEDATA_ISEMERGENCYCOMPLETEMISSION_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessServer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONEMERGENCYCOMPLETEDATA_PREPROCESSSERVER_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONEMERGENCYCOMPLETEDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MISSIONEMERGENCYCOMPLETEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

