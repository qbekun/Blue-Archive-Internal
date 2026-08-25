#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCELREPOSITORY_SELECT_ARENASEASONID_OFFSET UNITYSDK_OFFSET(0x19CF0C0)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCELREPOSITORY_SELECT_ARENASEASONIDS_OFFSET UNITYSDK_OFFSET(0x19CF3C0)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19CF7C0)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCELREPOSITORY_SELECTFIRST_ARENASEASONID_OFFSET UNITYSDK_OFFSET(0x19CF800)
#define MX_DATA_EXCEL_ARENALEVELSECTIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19CFB20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ArenaLevelSectionExcelRepository_TypeDefinitionIndex = 16643;

	class ArenaLevelSectionExcelRepository : public ::FlatData::CCGCardType
	{
	public:
		Il2CppObject* Select_ArenaSeasonId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCELREPOSITORY_SELECT_ARENASEASONID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_ArenaSeasonIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCELREPOSITORY_SELECT_ARENASEASONIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_ArenaSeasonId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCELREPOSITORY_SELECTFIRST_ARENASEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ARENALEVELSECTIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

