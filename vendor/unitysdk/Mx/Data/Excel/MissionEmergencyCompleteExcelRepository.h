#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C10CE0)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCELREPOSITORY_SELECT_MISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1C10E50)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCELREPOSITORY_SELECT_MISSIONID_OFFSET UNITYSDK_OFFSET(0x1C11250)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C11550)
#define MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCELREPOSITORY_SELECTFIRST_MISSIONID_OFFSET UNITYSDK_OFFSET(0x1C11590)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MissionEmergencyCompleteExcelRepository_TypeDefinitionIndex = 18935;

	class MissionEmergencyCompleteExcelRepository : public Ammo
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_MissionIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCELREPOSITORY_SELECT_MISSIONIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_MissionId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCELREPOSITORY_SELECT_MISSIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_MissionId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEMERGENCYCOMPLETEEXCELREPOSITORY_SELECTFIRST_MISSIONID_OFFSET))(arg, arg, nullptr);
		}

	};
}

