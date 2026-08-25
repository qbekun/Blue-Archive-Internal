#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SHORTCUTTYPEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C85DB0)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C85DF0)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C861F0)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C86510)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C86680)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShortcutTypeExcelRepository_TypeDefinitionIndex = 19463;

	class ShortcutTypeExcelRepository : public <<CreateVisual>g__co_CreateVisual|1>d
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

