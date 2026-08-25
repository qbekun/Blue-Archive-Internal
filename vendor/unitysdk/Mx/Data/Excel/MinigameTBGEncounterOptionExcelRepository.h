#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C04310)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C04610)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C04650)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C04970)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1C04AE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGEncounterOptionExcelRepository_TypeDefinitionIndex = 18879;

	class MinigameTBGEncounterOptionExcelRepository : public Heal
	{
	public:
		Il2CppObject* Select_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_UniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

