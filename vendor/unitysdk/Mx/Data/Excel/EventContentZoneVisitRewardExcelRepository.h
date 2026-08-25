#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B17110)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_EVENTCONTENTLOCATIONID_OFFSET UNITYSDK_OFFSET(0x1B17280)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTCONTENTLOCATIONID_OFFSET UNITYSDK_OFFSET(0x1B17680)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTCONTENTLOCATIONID_OFFSET UNITYSDK_OFFSET(0x1B17A60)
#define MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B18000)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentZoneVisitRewardExcelRepository_TypeDefinitionIndex = 17939;

	class EventContentZoneVisitRewardExcelRepository : public ::MXUnderCover::UCEntityStatus
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_EventContentLocationId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_EVENTCONTENTLOCATIONID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_EventContentLocationId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTCONTENTLOCATIONID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_EventContentLocationId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCELREPOSITORY_SELECT_EVENTCONTENTID_EVENTCONTENTLOCATIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTZONEVISITREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

