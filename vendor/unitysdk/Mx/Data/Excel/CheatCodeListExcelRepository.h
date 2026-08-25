#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHEATCODELISTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A4CA20)
#define MX_DATA_EXCEL_CHEATCODELISTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A4CA60)
#define MX_DATA_EXCEL_CHEATCODELISTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A4CBD0)
#define MX_DATA_EXCEL_CHEATCODELISTEXCELREPOSITORY_GET_ISINBUILD_OFFSET UNITYSDK_OFFSET(0x1A4CEF0)
#define MX_DATA_EXCEL_CHEATCODELISTEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A4CF00)
#define MX_DATA_EXCEL_CHEATCODELISTEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A4D300)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CheatCodeListExcelRepository_TypeDefinitionIndex = 17167;

	class CheatCodeListExcelRepository : public ::FlatData::StoryCondition
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHEATCODELISTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHEATCODELISTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHEATCODELISTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsInBuild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHEATCODELISTEXCELREPOSITORY_GET_ISINBUILD_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHEATCODELISTEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHEATCODELISTEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

