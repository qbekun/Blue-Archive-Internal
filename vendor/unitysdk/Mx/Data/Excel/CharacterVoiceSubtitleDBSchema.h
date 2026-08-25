#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEDBSCHEMA_GET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A47230)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEDBSCHEMA_SET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A47240)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A47250)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEDBSCHEMA_GET_CHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A47260)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEDBSCHEMA_SET_CHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A47270)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterVoiceSubtitleDBSchema_TypeDefinitionIndex = 17135;

	class CharacterVoiceSubtitleDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _LocalizeCVGroup_k__BackingField; // 0x20
		::System::Int64 _CharacterVoiceGroupId_k__BackingField; // 0x28

		::System::String* get_LocalizeCVGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEDBSCHEMA_GET_LOCALIZECVGROUP_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeCVGroup(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEDBSCHEMA_SET_LOCALIZECVGROUP_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterVoiceGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEDBSCHEMA_GET_CHARACTERVOICEGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterVoiceGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEDBSCHEMA_SET_CHARACTERVOICEGROUPID_OFFSET))(arg, nullptr);
		}

	};
}

