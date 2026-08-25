#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C329D0)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCELREPOSITORY_SELECTFIRST_PRODUCTAUTOSELECTIONGROUPID_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C32B40)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCELREPOSITORY_SELECT_PRODUCTAUTOSELECTIONGROUPID_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C32F40)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCELREPOSITORY_SELECT_PRODUCTAUTOSELECTIONGROUPID_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C33320)
#define MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C338C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductAutoSelectionGroupExcelRepository_TypeDefinitionIndex = 19091;

	class ProductAutoSelectionGroupExcelRepository : public <PlayTransitionAniWithWait>d__51
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_ProductAutoSelectionGroupId_CharacterId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCELREPOSITORY_SELECTFIRST_PRODUCTAUTOSELECTIONGROUPID_CHARACTERID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ProductAutoSelectionGroupId_CharacterId(::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCELREPOSITORY_SELECT_PRODUCTAUTOSELECTIONGROUPID_CHARACTERID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ProductAutoSelectionGroupId_CharacterId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCELREPOSITORY_SELECT_PRODUCTAUTOSELECTIONGROUPID_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTAUTOSELECTIONGROUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

