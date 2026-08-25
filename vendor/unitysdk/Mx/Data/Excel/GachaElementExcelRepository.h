#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GACHAELEMENTEXCELREPOSITORY_SELECT_GACHAGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1B35370)
#define MX_DATA_EXCEL_GACHAELEMENTEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B35780)
#define MX_DATA_EXCEL_GACHAELEMENTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B35B80)
#define MX_DATA_EXCEL_GACHAELEMENTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B35BC0)
#define MX_DATA_EXCEL_GACHAELEMENTEXCELREPOSITORY_SELECT_GACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1B35EE0)
#define MX_DATA_EXCEL_GACHAELEMENTEXCELREPOSITORY_SELECTFIRST_GACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1B361F0)
#define MX_DATA_EXCEL_GACHAELEMENTEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B36510)
#define MX_DATA_EXCEL_GACHAELEMENTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B36810)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaElementExcelRepository_TypeDefinitionIndex = 18082;

	class GachaElementExcelRepository : public CheckCondition
	{
	public:
		Il2CppObject* Select_GachaGroupIDs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCELREPOSITORY_SELECT_GACHAGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_IDs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_ID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GachaGroupID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCELREPOSITORY_SELECT_GACHAGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_GachaGroupID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCELREPOSITORY_SELECTFIRST_GACHAGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHAELEMENTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

