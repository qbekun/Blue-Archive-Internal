#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ARENAMAPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19D06A0)
#define MX_DATA_EXCEL_ARENAMAPEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x19D06E0)
#define MX_DATA_EXCEL_ARENAMAPEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D0AE0)
#define MX_DATA_EXCEL_ARENAMAPEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19D0E00)
#define MX_DATA_EXCEL_ARENAMAPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19D1100)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaMapExcelRepository_TypeDefinitionIndex = 16650;

	class ArenaMapExcelRepository : public ::FlatData::CCGEntityType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_UniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENAMAPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

