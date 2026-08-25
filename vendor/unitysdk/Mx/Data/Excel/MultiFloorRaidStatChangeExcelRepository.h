#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C1BD90)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C1BF00)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCELREPOSITORY_SELECT_STATCHANGEIDS_OFFSET UNITYSDK_OFFSET(0x1C1BF40)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCELREPOSITORY_SELECTFIRST_STATCHANGEID_OFFSET UNITYSDK_OFFSET(0x1C1C340)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCELREPOSITORY_SELECT_STATCHANGEID_OFFSET UNITYSDK_OFFSET(0x1C1C660)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MultiFloorRaidStatChangeExcelRepository_TypeDefinitionIndex = 18980;

	class MultiFloorRaidStatChangeExcelRepository : public <>c__DisplayClass5_0
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_StatChangeIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCELREPOSITORY_SELECT_STATCHANGEIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_StatChangeId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCELREPOSITORY_SELECTFIRST_STATCHANGEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_StatChangeId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTATCHANGEEXCELREPOSITORY_SELECT_STATCHANGEID_OFFSET))(arg, arg, nullptr);
		}

	};
}

