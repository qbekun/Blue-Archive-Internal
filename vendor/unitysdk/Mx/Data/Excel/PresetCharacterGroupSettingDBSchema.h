#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C30050)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGDBSCHEMA_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C30060)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGDBSCHEMA_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C30070)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PresetCharacterGroupSettingDBSchema_TypeDefinitionIndex = 19072;

	class PresetCharacterGroupSettingDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CharacterId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGDBSCHEMA_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPSETTINGDBSCHEMA_GET_CHARACTERID_OFFSET))(nullptr);
		}

	};
}

