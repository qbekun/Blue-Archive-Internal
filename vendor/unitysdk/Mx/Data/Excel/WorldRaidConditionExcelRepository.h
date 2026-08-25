#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC040)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1CCC080)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CCC380)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1CCC4F0)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1CCC810)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WorldRaidConditionExcelRepository_TypeDefinitionIndex = 19811;

	class WorldRaidConditionExcelRepository : public ::MXUnderCover::LoadItemMessage
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

