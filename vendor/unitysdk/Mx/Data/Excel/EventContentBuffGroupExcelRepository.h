#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A99650)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A998B0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A99BD0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1A99ED0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_BUFFCONTENTID_BUFFGROUPID_OFFSET UNITYSDK_OFFSET(0x1A9A2D0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCELREPOSITORY_SELECT_EVENTCONTENTID_BUFFCONTENTID_BUFFGROUPID_OFFSET UNITYSDK_OFFSET(0x1A9A7B0)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCELREPOSITORY_SELECT_EVENTCONTENTID_BUFFCONTENTID_BUFFGROUPID_OFFSET UNITYSDK_OFFSET(0x1A9AC80)
#define MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A9B2C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentBuffGroupExcelRepository_TypeDefinitionIndex = 17505;

	class EventContentBuffGroupExcelRepository : public ::FlatData::StrategyEnvironment
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_BuffContentId_BuffGroupId(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_BUFFCONTENTID_BUFFGROUPID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_BuffContentId_BuffGroupId(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCELREPOSITORY_SELECT_EVENTCONTENTID_BUFFCONTENTID_BUFFGROUPID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_BuffContentId_BuffGroupId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCELREPOSITORY_SELECT_EVENTCONTENTID_BUFFCONTENTID_BUFFGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBUFFGROUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

