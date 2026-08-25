#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET UNITYSDK_OFFSET(0x1A95160)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A95560)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A955A0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A95710)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A95A30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentBoxGachaManageExcelRepository_TypeDefinitionIndex = 17481;

	class EventContentBoxGachaManageExcelRepository : public ::FlatData::HexaUnitGrade
	{
	public:
		Il2CppObject* Select_EventContentIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCELREPOSITORY_SELECT_EVENTCONTENTIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHAMANAGEEXCELREPOSITORY_SELECT_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

	};
}

