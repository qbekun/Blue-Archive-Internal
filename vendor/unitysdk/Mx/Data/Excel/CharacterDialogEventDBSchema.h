#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogCondition; }

#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A18F10)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_SET_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A18F20)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1A18F30)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_GET_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A18F40)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A18F50)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_SET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A18F60)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_GET_ORIGINALCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A18F70)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_SET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A18F80)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1A18F90)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_SET_ORIGINALCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A18FA0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_GET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A18FB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterDialogEventDBSchema_TypeDefinitionIndex = 16968;

	class CharacterDialogEventDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CostumeUniqueId_k__BackingField; // 0x20
		::System::Int64 _OriginalCharacterId_k__BackingField; // 0x28
		::System::Int64 _EventID_k__BackingField; // 0x30
		::FlatData::DialogCategory* _DialogCategory_k__BackingField; // 0x38
		::FlatData::DialogCondition* _DialogCondition_k__BackingField; // 0x3C

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_DialogCondition(::FlatData::DialogCondition* arg)
		{
			((::System::Void(*)(::FlatData::DialogCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_SET_DIALOGCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_GET_EVENTID_OFFSET))(nullptr);
		}

		::FlatData::DialogCondition* get_DialogCondition()
		{
			return (return (::FlatData::DialogCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_GET_DIALOGCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CostumeUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_SET_COSTUMEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_OriginalCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_GET_ORIGINALCHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_DialogCategory(::FlatData::DialogCategory* arg)
		{
			((::System::Void(*)(::FlatData::DialogCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_SET_DIALOGCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_SET_EVENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_OriginalCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_SET_ORIGINALCHARACTERID_OFFSET))(arg, nullptr);
		}

		::FlatData::DialogCategory* get_DialogCategory()
		{
			return (return (::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTDBSCHEMA_GET_DIALOGCATEGORY_OFFSET))(nullptr);
		}

	};
}

