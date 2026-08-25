#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ARENASEASONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19D6FE0)
#define MX_DATA_EXCEL_ARENASEASONEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x19D7020)
#define MX_DATA_EXCEL_ARENASEASONEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D7420)
#define MX_DATA_EXCEL_ARENASEASONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19D7740)
#define MX_DATA_EXCEL_ARENASEASONEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D78B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaSeasonExcelRepository_TypeDefinitionIndex = 16681;

	class ArenaSeasonExcelRepository : public ::FlatData::CCGTagType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_UniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

	};
}

