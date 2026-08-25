#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B3A240)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A3B0)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B3A3F0)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B3A7F0)
#define MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B3AB10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaSelectPickupGroupExcelRepository_TypeDefinitionIndex = 18106;

	class GachaSelectPickupGroupExcelRepository : public <>c__DisplayClass14_0
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHASELECTPICKUPGROUPEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

