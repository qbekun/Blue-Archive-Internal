#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AEF190)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCELREPOSITORY_SELECTFIRST_ITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AEF4B0)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AEF7D0)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCELREPOSITORY_SELECT_ITEMUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1AEFAD0)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AEFEE0)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1AEFF20)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1AF0180)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCELREPOSITORY_SELECT_ITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AF0580)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentMiniEventTokenExcelRepository_TypeDefinitionIndex = 17777;

	class EventContentMiniEventTokenExcelRepository : public ::MXUnderCover::UCEntityMovement
	{
	public:
		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ItemUniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCELREPOSITORY_SELECTFIRST_ITEMUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ItemUniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCELREPOSITORY_SELECT_ITEMUNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ItemUniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTTOKENEXCELREPOSITORY_SELECT_ITEMUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

	};
}

