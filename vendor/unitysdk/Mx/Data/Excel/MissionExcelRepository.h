#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MISSIONEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C13890)
#define MX_DATA_EXCEL_MISSIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C13C90)
#define MX_DATA_EXCEL_MISSIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C13CD0)
#define MX_DATA_EXCEL_MISSIONEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C13E40)
#define MX_DATA_EXCEL_MISSIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C14140)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MissionExcelRepository_TypeDefinitionIndex = 18942;

	class MissionExcelRepository : public <>c__DisplayClass4_0
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MISSIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

