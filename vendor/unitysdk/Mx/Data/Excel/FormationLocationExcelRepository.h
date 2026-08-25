#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B28620)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCELREPOSITORY_SELECT_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B28660)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET UNITYSDK_OFFSET(0x1B28960)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B28D60)
#define MX_DATA_EXCEL_FORMATIONLOCATIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B29080)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FormationLocationExcelRepository_TypeDefinitionIndex = 18016;

	class FormationLocationExcelRepository : public ::MXUnderCover::UCPropAniController
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_GroupID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCELREPOSITORY_SELECT_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_GroupIDs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCELREPOSITORY_SELECT_GROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_GroupID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCELREPOSITORY_SELECTFIRST_GROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FORMATIONLOCATIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

