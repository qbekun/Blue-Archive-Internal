#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class DisplayGroupType; }

#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCELREPOSITORY_SELECT_DISPLAYGROUPTYPES_OFFSET UNITYSDK_OFFSET(0x1B6FD10)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCELREPOSITORY_SELECTFIRST_DISPLAYGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1B70110)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B70470)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B705E0)
#define MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCELREPOSITORY_SELECT_DISPLAYGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1B70620)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingGroupInfoExcelRepository_TypeDefinitionIndex = 18317;

	class KeyMappingGroupInfoExcelRepository : public Parallel
	{
	public:
		Il2CppObject* Select_DisplayGroupTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCELREPOSITORY_SELECT_DISPLAYGROUPTYPES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_DisplayGroupType(::FlatData::DisplayGroupType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::DisplayGroupType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCELREPOSITORY_SELECTFIRST_DISPLAYGROUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_DisplayGroupType(::FlatData::DisplayGroupType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::DisplayGroupType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGGROUPINFOEXCELREPOSITORY_SELECT_DISPLAYGROUPTYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

