#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ConquestProgressType; }

#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A64E10)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCELREPOSITORY_SELECTFIRST_GROUP_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A64F80)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCELREPOSITORY_SELECT_GROUP_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A653C0)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCELREPOSITORY_SELECT_GROUP_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A657F0)
#define MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A65D90)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestProgressResourceExcelRepository_TypeDefinitionIndex = 17277;

	class ConquestProgressResourceExcelRepository : public ::FlatData::PurchaseStatusCode
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Group_EventContentId(::FlatData::ConquestProgressType* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ConquestProgressType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCELREPOSITORY_SELECTFIRST_GROUP_EVENTCONTENTID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_Group_EventContentId(::FlatData::ConquestProgressType* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ConquestProgressType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCELREPOSITORY_SELECT_GROUP_EVENTCONTENTID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_Group_EventContentId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCELREPOSITORY_SELECT_GROUP_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTPROGRESSRESOURCEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

