#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCELREPOSITORY_SELECT_SEASONID_OFFSET UNITYSDK_OFFSET(0x19D5CB0)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19D5FB0)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19D6120)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCELREPOSITORY_SELECTFIRST_SEASONID_OFFSET UNITYSDK_OFFSET(0x19D6160)
#define MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCELREPOSITORY_SELECT_SEASONIDS_OFFSET UNITYSDK_OFFSET(0x19D6480)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaSeasonCloseRewardExcelRepository_TypeDefinitionIndex = 16674;

	class ArenaSeasonCloseRewardExcelRepository : public ::FlatData::CCGLevelNodeIcon
	{
	public:
		Il2CppObject* Select_SeasonId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCELREPOSITORY_SELECT_SEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_SeasonId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCELREPOSITORY_SELECTFIRST_SEASONID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_SeasonIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENASEASONCLOSEREWARDEXCELREPOSITORY_SELECT_SEASONIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

