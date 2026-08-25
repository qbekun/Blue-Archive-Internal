#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogCondition; }

#define MX_DATA_EXCEL_CHARACTERDIALOGDBSCHEMA_SET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A1E980)
#define MX_DATA_EXCEL_CHARACTERDIALOGDBSCHEMA_GET_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A1E990)
#define MX_DATA_EXCEL_CHARACTERDIALOGDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E9A0)
#define MX_DATA_EXCEL_CHARACTERDIALOGDBSCHEMA_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A1E9B0)
#define MX_DATA_EXCEL_CHARACTERDIALOGDBSCHEMA_GET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A1E9C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGDBSCHEMA_SET_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A1E9D0)
#define MX_DATA_EXCEL_CHARACTERDIALOGDBSCHEMA_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A1E9E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterDialogDBSchema_TypeDefinitionIndex = 16984;

	class CharacterDialogDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CharacterId_k__BackingField; // 0x20
		::FlatData::DialogCategory* _DialogCategory_k__BackingField; // 0x28
		::FlatData::DialogCondition* _DialogCondition_k__BackingField; // 0x2C

		::System::Void set_DialogCategory(::FlatData::DialogCategory* arg)
		{
			((::System::Void(*)(::FlatData::DialogCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGDBSCHEMA_SET_DIALOGCATEGORY_OFFSET))(arg, nullptr);
		}

		::FlatData::DialogCondition* get_DialogCondition()
		{
			return (return (::FlatData::DialogCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGDBSCHEMA_GET_DIALOGCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGDBSCHEMA_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::FlatData::DialogCategory* get_DialogCategory()
		{
			return (return (::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGDBSCHEMA_GET_DIALOGCATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_DialogCondition(::FlatData::DialogCondition* arg)
		{
			((::System::Void(*)(::FlatData::DialogCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGDBSCHEMA_SET_DIALOGCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGDBSCHEMA_GET_CHARACTERID_OFFSET))(nullptr);
		}

	};
}

