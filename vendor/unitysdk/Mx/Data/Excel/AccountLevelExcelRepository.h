#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ACCOUNTLEVELEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x19CAD10)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19CB030)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x19CB070)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x19CB370)
#define MX_DATA_EXCEL_ACCOUNTLEVELEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19CB770)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AccountLevelExcelRepository_TypeDefinitionIndex = 16619;

	class AccountLevelExcelRepository : public ::FlatData::MailSortingRule
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

