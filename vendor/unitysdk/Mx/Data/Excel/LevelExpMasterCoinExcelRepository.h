#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B748D0)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B74CD0)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B74E40)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B75140)
#define MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B75180)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LevelExpMasterCoinExcelRepository_TypeDefinitionIndex = 18345;

	class LevelExpMasterCoinExcelRepository : public <co_InternalInvoke>d__3
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LEVELEXPMASTERCOINEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

