#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A854A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A857A0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A85AC0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A85EC0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A85F00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EliminateRaidStageExcelRepository_TypeDefinitionIndex = 17405;

	class EliminateRaidStageExcelRepository : public ::FlatData::AutoSelectPopupType
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

