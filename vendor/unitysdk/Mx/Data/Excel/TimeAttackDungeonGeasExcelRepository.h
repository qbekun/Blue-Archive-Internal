#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2CA0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CA2CE0)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1CA2E50)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1CA3150)
#define MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1CA3470)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TimeAttackDungeonGeasExcelRepository_TypeDefinitionIndex = 19609;

	class TimeAttackDungeonGeasExcelRepository : public RenderingBackup
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TIMEATTACKDUNGEONGEASEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

