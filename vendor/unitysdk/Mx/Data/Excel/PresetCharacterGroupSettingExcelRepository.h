#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C30080)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1C300C0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCELREPOSITORY_SELECT_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C304C0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C307C0)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C30930)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PresetCharacterGroupSettingExcelRepository_TypeDefinitionIndex = 19077;

	class PresetCharacterGroupSettingExcelRepository : public <Invoke>d__42
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_CharacterIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCELREPOSITORY_SELECT_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGEXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

	};
}

