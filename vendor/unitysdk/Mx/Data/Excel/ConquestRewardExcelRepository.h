#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CONQUESTREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1A665D0)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A669D0)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A66CF0)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A66FF0)
#define MX_DATA_EXCEL_CONQUESTREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A67030)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestRewardExcelRepository_TypeDefinitionIndex = 17284;

	class ConquestRewardExcelRepository : public ::FlatData::StoreType
	{
	public:
		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

