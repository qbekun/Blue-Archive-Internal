#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogCondition; }

#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A18FC0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECTFIRST_EVENTID_COSTUMEUNIQUEID_DIALOGCATEGORY_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A19420)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECT_EVENTID_COSTUMEUNIQUEID_DIALOGCATEGORY_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A19A70)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECT_EVENTID_COSTUMEUNIQUEID_DIALOGCATEGORY_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A1A0A0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECTFIRST_ORIGINALCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A1A780)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECT_ORIGINALCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A1AAA0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECT_ORIGINALCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1A1ADB0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECTFIRST_EVENTID_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A1B1C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECT_EVENTID_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A1B600)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECT_EVENTID_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A1BA30)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECTFIRST_COSTUMEUNIQUEID_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A1BFD0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECT_COSTUMEUNIQUEID_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A1C410)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECT_COSTUMEUNIQUEID_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A1C840)
#define MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CDE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterDialogEventExcelRepository_TypeDefinitionIndex = 16982;

	class CharacterDialogEventExcelRepository : public ::FlatData::Tier
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventID_CostumeUniqueId_DialogCategory_DialogCondition(::System::Int64 arg, ::System::Int64 arg, ::FlatData::DialogCategory* arg, ::FlatData::DialogCondition* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::FlatData::DialogCategory*, ::FlatData::DialogCondition*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECTFIRST_EVENTID_COSTUMEUNIQUEID_DIALOGCATEGORY_DIALOGCONDITION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventID_CostumeUniqueId_DialogCategory_DialogCondition(::System::Int64 arg, ::System::Int64 arg, ::FlatData::DialogCategory* arg, ::FlatData::DialogCondition* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::FlatData::DialogCategory*, ::FlatData::DialogCondition*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECT_EVENTID_COSTUMEUNIQUEID_DIALOGCATEGORY_DIALOGCONDITION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventID_CostumeUniqueId_DialogCategory_DialogCondition(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECT_EVENTID_COSTUMEUNIQUEID_DIALOGCATEGORY_DIALOGCONDITION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_OriginalCharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECTFIRST_ORIGINALCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_OriginalCharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECT_ORIGINALCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_OriginalCharacterIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECT_ORIGINALCHARACTERIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventID_DialogCategory(::System::Int64 arg, ::FlatData::DialogCategory* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::DialogCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECTFIRST_EVENTID_DIALOGCATEGORY_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventID_DialogCategory(::System::Int64 arg, ::FlatData::DialogCategory* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::DialogCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECT_EVENTID_DIALOGCATEGORY_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventID_DialogCategory(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECT_EVENTID_DIALOGCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_CostumeUniqueId_DialogCategory(::System::Int64 arg, ::FlatData::DialogCategory* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::DialogCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECTFIRST_COSTUMEUNIQUEID_DIALOGCATEGORY_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_CostumeUniqueId_DialogCategory(::System::Int64 arg, ::FlatData::DialogCategory* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::DialogCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECT_COSTUMEUNIQUEID_DIALOGCATEGORY_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_CostumeUniqueId_DialogCategory(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_SELECT_COSTUMEUNIQUEID_DIALOGCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEVENTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

