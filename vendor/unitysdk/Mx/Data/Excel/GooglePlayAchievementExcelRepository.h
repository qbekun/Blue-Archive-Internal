#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E020)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B3E060)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B3E1D0)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B3E5D0)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B3E8F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GooglePlayAchievementExcelRepository_TypeDefinitionIndex = 18120;

	class GooglePlayAchievementExcelRepository : public ::MXUnderCover::UCCollisionTrigger
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

