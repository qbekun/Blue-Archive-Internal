#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x19CBFA0)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x19CC2A0)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x19CC6A0)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCELREPOSITORY_SELECT_LEVEL_OFFSET UNITYSDK_OFFSET(0x19CC9C0)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19CCCD0)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCELREPOSITORY_SELECTFIRST_LEVEL_OFFSET UNITYSDK_OFFSET(0x19CCF30)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCELREPOSITORY_SELECT_LEVELS_OFFSET UNITYSDK_OFFSET(0x19CD250)
#define MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19CD660)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AccountLevelRewardExcelRepository_TypeDefinitionIndex = 16629;

	class AccountLevelRewardExcelRepository : public ::FlatData::WelcomeCampaignAttendanceType
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Level(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCELREPOSITORY_SELECT_LEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Level(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCELREPOSITORY_SELECTFIRST_LEVEL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Levels(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCELREPOSITORY_SELECT_LEVELS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ACCOUNTLEVELREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

