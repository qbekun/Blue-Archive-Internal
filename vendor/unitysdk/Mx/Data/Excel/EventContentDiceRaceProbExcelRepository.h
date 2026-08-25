#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AC1910)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AC1C30)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1AC1F30)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AC2330)
#define MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AC2370)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentDiceRaceProbExcelRepository_TypeDefinitionIndex = 17691;

	class EventContentDiceRaceProbExcelRepository : public ::MXUnderCover::UCBTTaskGetNextMovingPath
	{
	public:
		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTDICERACEPROBEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

