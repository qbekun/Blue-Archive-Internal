#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEDBSCHEMA_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A210B0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEDBSCHEMA_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A210C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEDBSCHEMA_GET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A210D0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEDBSCHEMA_SET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A210E0)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A210F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterDialogSubtitleDBSchema_TypeDefinitionIndex = 16994;

	class CharacterDialogSubtitleDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::String* _LocalizeCVGroup_k__BackingField; // 0x20
		::System::Int64 _CharacterId_k__BackingField; // 0x28

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEDBSCHEMA_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEDBSCHEMA_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCVGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEDBSCHEMA_GET_LOCALIZECVGROUP_OFFSET))(nullptr);
		}

		::System::Void set_LocalizeCVGroup(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEDBSCHEMA_SET_LOCALIZECVGROUP_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

