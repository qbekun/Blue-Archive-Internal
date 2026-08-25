#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C346F0)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C34A10)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C34E10)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C35110)
#define MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C35280)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductBattlePassExcelRepository_TypeDefinitionIndex = 19098;

	class ProductBattlePassExcelRepository : public <RotateLerp>d__53
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTBATTLEPASSEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

