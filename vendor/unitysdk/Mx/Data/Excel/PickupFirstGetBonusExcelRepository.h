#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCELREPOSITORY_SELECT_SHOPRECRUITIDS_OFFSET UNITYSDK_OFFSET(0x1C2B5A0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCELREPOSITORY_SELECTFIRST_SHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x1C2B9A0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C2BCC0)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCELREPOSITORY_SELECT_SHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x1C2BE30)
#define MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C130)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PickupFirstGetBonusExcelRepository_TypeDefinitionIndex = 19056;

	class PickupFirstGetBonusExcelRepository : public DebugLogType
	{
	public:
		Il2CppObject* Select_ShopRecruitIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCELREPOSITORY_SELECT_SHOPRECRUITIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ShopRecruitId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCELREPOSITORY_SELECTFIRST_SHOPRECRUITID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_ShopRecruitId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCELREPOSITORY_SELECT_SHOPRECRUITID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PICKUPFIRSTGETBONUSEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

