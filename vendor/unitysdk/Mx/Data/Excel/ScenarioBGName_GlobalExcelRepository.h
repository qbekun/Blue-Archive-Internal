#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCELREPOSITORY_SELECT_GROUPNAMES_OFFSET UNITYSDK_OFFSET(0x1C57F60)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCELREPOSITORY_SELECTFIRST_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1C58360)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCELREPOSITORY_SELECT_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1C58680)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C58980)
#define MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C589C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioBGName_GlobalExcelRepository_TypeDefinitionIndex = 19254;

	class ScenarioBGName_GlobalExcelRepository : public ::MXUnderCover::UCCharacterModel
	{
	public:
		Il2CppObject* Select_GroupNames(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCELREPOSITORY_SELECT_GROUPNAMES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_GroupName(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCELREPOSITORY_SELECTFIRST_GROUPNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupName(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCELREPOSITORY_SELECT_GROUPNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAME_GLOBALEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

