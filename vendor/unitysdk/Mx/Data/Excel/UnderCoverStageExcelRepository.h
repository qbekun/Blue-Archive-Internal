#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CAD8C0)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1CADBE0)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CADFE0)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CAE2E0)
#define MX_DATA_EXCEL_UNDERCOVERSTAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CAE450)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int UnderCoverStageExcelRepository_TypeDefinitionIndex = 19665;

	class UnderCoverStageExcelRepository : public <co_UnloadStage>d__40
	{
	public:
		Il2CppObject* SelectFirst_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_UNDERCOVERSTAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

