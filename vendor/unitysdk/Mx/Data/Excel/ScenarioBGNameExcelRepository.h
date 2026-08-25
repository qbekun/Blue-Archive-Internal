#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCELREPOSITORY_SELECT_NAME_OFFSET UNITYSDK_OFFSET(0x1C56BB0)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCELREPOSITORY_SELECT_NAMES_OFFSET UNITYSDK_OFFSET(0x1C56EB0)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C572B0)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C572F0)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCELREPOSITORY_SELECTFIRST_NAME_OFFSET UNITYSDK_OFFSET(0x1C57460)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioBGNameExcelRepository_TypeDefinitionIndex = 19247;

	class ScenarioBGNameExcelRepository : public ::MXUnderCover::UCEntityModel
	{
	public:
		Il2CppObject* Select_Name(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCELREPOSITORY_SELECT_NAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Names(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCELREPOSITORY_SELECT_NAMES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Name(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCELREPOSITORY_SELECTFIRST_NAME_OFFSET))(arg, arg, nullptr);
		}

	};
}

