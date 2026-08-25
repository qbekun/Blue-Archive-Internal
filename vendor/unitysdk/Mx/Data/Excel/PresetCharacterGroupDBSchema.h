#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRESETCHARACTERGROUPDBSCHEMA_SET_PRESETCHARACTERGROUPID_OFFSET UNITYSDK_OFFSET(0x1C2EE20)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPDBSCHEMA_GET_PRESETCHARACTERGROUPID_OFFSET UNITYSDK_OFFSET(0x1C2EE30)
#define MX_DATA_EXCEL_PRESETCHARACTERGROUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C2EE40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int PresetCharacterGroupDBSchema_TypeDefinitionIndex = 19065;

	class PresetCharacterGroupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _PresetCharacterGroupId_k__BackingField; // 0x20

		::System::Void set_PresetCharacterGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPDBSCHEMA_SET_PRESETCHARACTERGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PresetCharacterGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPDBSCHEMA_GET_PRESETCHARACTERGROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRESETCHARACTERGROUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

