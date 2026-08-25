#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SHOPFREERECRUITEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C788C0)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C78A30)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C78D50)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C78D90)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C79090)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopFreeRecruitExcelRepository_TypeDefinitionIndex = 19404;

	class ShopFreeRecruitExcelRepository : public <co_Init>d__15
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

