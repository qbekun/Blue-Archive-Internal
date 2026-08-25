#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B4C550)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C6C0)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B4C700)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1B4CA00)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B4CE00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int IAWorldRaidStageRewardExcelRepository_TypeDefinitionIndex = 18176;

	class IAWorldRaidStageRewardExcelRepository : public Base
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

	};
}

