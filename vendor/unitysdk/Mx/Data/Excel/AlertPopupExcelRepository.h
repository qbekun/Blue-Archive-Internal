#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ALERTPOPUPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x19CDF00)
#define MX_DATA_EXCEL_ALERTPOPUPEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x19CE220)
#define MX_DATA_EXCEL_ALERTPOPUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19CE520)
#define MX_DATA_EXCEL_ALERTPOPUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19CE560)
#define MX_DATA_EXCEL_ALERTPOPUPEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x19CE6D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AlertPopupExcelRepository_TypeDefinitionIndex = 16636;

	class AlertPopupExcelRepository : public ::FlatData::CCGCharacterType
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ALERTPOPUPEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

