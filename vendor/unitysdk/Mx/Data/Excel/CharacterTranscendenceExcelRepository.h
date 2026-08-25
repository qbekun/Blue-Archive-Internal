#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCELREPOSITORY_SELECT_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A40AF0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A40DF0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1A41110)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A41510)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A41550)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterTranscendenceExcelRepository_TypeDefinitionIndex = 17116;

	class CharacterTranscendenceExcelRepository : public ::FlatData::DialogCategory
	{
	public:
		Il2CppObject* Select_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCELREPOSITORY_SELECT_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

