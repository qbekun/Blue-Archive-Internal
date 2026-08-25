#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CA83B0)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1CA86B0)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CA8AB0)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CA8C20)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CA8F40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TrophyCollectionExcelRepository_TypeDefinitionIndex = 19637;

	class TrophyCollectionExcelRepository : public <co_Uninitialize>d__36
	{
	public:
		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

