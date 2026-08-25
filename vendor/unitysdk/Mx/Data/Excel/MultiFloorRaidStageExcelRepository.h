#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCELREPOSITORY_SELECT_BOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1C19AF0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C19DE0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCELREPOSITORY_SELECT_BOSSGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1C19E20)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C1A230)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C1A630)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C1A950)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCELREPOSITORY_SELECTFIRST_BOSSGROUPID_OFFSET UNITYSDK_OFFSET(0x1C1AC50)
#define MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C1AF60)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MultiFloorRaidStageExcelRepository_TypeDefinitionIndex = 18973;

	class MultiFloorRaidStageExcelRepository : public WireCutter
	{
	public:
		Il2CppObject* Select_BossGroupId(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCELREPOSITORY_SELECT_BOSSGROUPID_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_BossGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCELREPOSITORY_SELECT_BOSSGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_BossGroupId(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCELREPOSITORY_SELECTFIRST_BOSSGROUPID_OFFSET))(str, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDSTAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

