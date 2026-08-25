#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B1C2E0)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B1C600)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B1C640)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B1C7B0)
#define MX_DATA_EXCEL_FIELDQUESTGROUPEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B1CBB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FieldQuestGroupExcelRepository_TypeDefinitionIndex = 17967;

	class FieldQuestGroupExcelRepository : public <<SetDither>g__co_SetDither|51_0>d
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDQUESTGROUPEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

