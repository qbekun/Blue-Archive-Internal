#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ARENANPCEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D2150)
#define MX_DATA_EXCEL_ARENANPCEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D2450)
#define MX_DATA_EXCEL_ARENANPCEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x19D2770)
#define MX_DATA_EXCEL_ARENANPCEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19D2B70)
#define MX_DATA_EXCEL_ARENANPCEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19D2BB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaNPCExcelRepository_TypeDefinitionIndex = 16657;

	class ArenaNPCExcelRepository : public ::FlatData::CCGStageType
	{
	public:
		Il2CppObject* Select_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_UniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENANPCEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

