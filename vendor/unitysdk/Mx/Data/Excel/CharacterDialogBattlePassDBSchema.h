#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogCondition; }

#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_SET_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A10C70)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A10C80)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_SET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A10C90)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_GET_ORIGINALCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A10CA0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_GET_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A10CB0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_SET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x1A10CC0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_SET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A10CD0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_GET_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A10CE0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_SET_ORIGINALCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A10CF0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x1A10D00)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_GET_COSTUMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A10D10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterDialogBattlePassDBSchema_TypeDefinitionIndex = 16942;

	class CharacterDialogBattlePassDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CostumeUniqueId_k__BackingField; // 0x20
		::System::Int64 _OriginalCharacterId_k__BackingField; // 0x28
		::System::Int64 _BattlePassID_k__BackingField; // 0x30
		::FlatData::DialogCategory* _DialogCategory_k__BackingField; // 0x38
		::FlatData::DialogCondition* _DialogCondition_k__BackingField; // 0x3C

		::System::Void set_DialogCondition(::FlatData::DialogCondition* arg)
		{
			((::System::Void(*)(::FlatData::DialogCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_SET_DIALOGCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_DialogCategory(::FlatData::DialogCategory* arg)
		{
			((::System::Void(*)(::FlatData::DialogCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_SET_DIALOGCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_OriginalCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_GET_ORIGINALCHARACTERID_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_DialogCategory()
		{
			return (return (::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_GET_DIALOGCATEGORY_OFFSET))(nullptr);
		}

		::System::Void set_BattlePassID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_SET_BATTLEPASSID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CostumeUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_SET_COSTUMEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::FlatData::DialogCondition* get_DialogCondition()
		{
			return (return (::FlatData::DialogCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_GET_DIALOGCONDITION_OFFSET))(nullptr);
		}

		::System::Void set_OriginalCharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_SET_ORIGINALCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BattlePassID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSDBSCHEMA_GET_COSTUMEUNIQUEID_OFFSET))(nullptr);
		}

	};
}

