#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1AF2E10)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AF3130)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1AF3170)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1AF3580)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AF3980)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1AF3C90)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AF3F90)
#define MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AF41F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentMissionExcelRepository_TypeDefinitionIndex = 17787;

	class EventContentMissionExcelRepository : public ::MXUnderCover::UCBreakable
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMISSIONEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

	};
}

