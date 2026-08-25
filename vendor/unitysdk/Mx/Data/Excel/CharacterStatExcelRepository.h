#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERSTATEXCELREPOSITORY_SELECT_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A3ACD0)
#define MX_DATA_EXCEL_CHARACTERSTATEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A3AFD0)
#define MX_DATA_EXCEL_CHARACTERSTATEXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1A3B010)
#define MX_DATA_EXCEL_CHARACTERSTATEXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A3B410)
#define MX_DATA_EXCEL_CHARACTERSTATEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A3B730)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterStatExcelRepository_TypeDefinitionIndex = 17088;

	class CharacterStatExcelRepository : public ::FlatData::ScenarioCharacterAction
	{
	public:
		Il2CppObject* Select_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATEXCELREPOSITORY_SELECT_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_CharacterIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATEXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATEXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERSTATEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

