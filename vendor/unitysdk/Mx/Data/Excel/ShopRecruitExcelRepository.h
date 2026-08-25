#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SHOPRECRUITEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C7FDD0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C800D0)
#define MX_DATA_EXCEL_SHOPRECRUITEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C80240)
#define MX_DATA_EXCEL_SHOPRECRUITEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C80280)
#define MX_DATA_EXCEL_SHOPRECRUITEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C805A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopRecruitExcelRepository_TypeDefinitionIndex = 19432;

	class ShopRecruitExcelRepository : public ::MXUnderCover::UCPathEdge
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPRECRUITEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

