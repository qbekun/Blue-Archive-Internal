#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIDBSCHEMA_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A15FE0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A15FF0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A16000)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A16010)
#define MX_DATA_EXCEL_CHARACTERDIALOGEMOJIDBSCHEMA_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A16020)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterDialogEmojiDBSchema_TypeDefinitionIndex = 16958;

	class CharacterDialogEmojiDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x20
		::System::Int64 _CharacterId_k__BackingField; // 0x28

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIDBSCHEMA_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEMOJIDBSCHEMA_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

	};
}

