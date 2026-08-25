#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1B43160)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B43560)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B43880)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B439F0)
#define MX_DATA_EXCEL_GROUNDMODULEREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B43CF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GroundModuleRewardExcelRepository_TypeDefinitionIndex = 18134;

	class GroundModuleRewardExcelRepository : public ::MXUnderCover::UCFocusedSectionTrigger
	{
	public:
		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GROUNDMODULEREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

