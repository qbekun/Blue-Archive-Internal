#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CAFEINFOEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19F7A60)
#define MX_DATA_EXCEL_CAFEINFOEXCELREPOSITORY_SELECT_CAFEIDS_OFFSET UNITYSDK_OFFSET(0x19F7BD0)
#define MX_DATA_EXCEL_CAFEINFOEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19F7FD0)
#define MX_DATA_EXCEL_CAFEINFOEXCELREPOSITORY_SELECT_CAFEID_OFFSET UNITYSDK_OFFSET(0x19F8010)
#define MX_DATA_EXCEL_CAFEINFOEXCELREPOSITORY_SELECTFIRST_CAFEID_OFFSET UNITYSDK_OFFSET(0x19F8310)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CafeInfoExcelRepository_TypeDefinitionIndex = 16839;

	class CafeInfoExcelRepository : public ::FlatData::TBGProbModifyCondition
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_CafeIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCELREPOSITORY_SELECT_CAFEIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_CafeId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCELREPOSITORY_SELECT_CAFEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_CafeId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCELREPOSITORY_SELECTFIRST_CAFEID_OFFSET))(arg, arg, nullptr);
		}

	};
}

