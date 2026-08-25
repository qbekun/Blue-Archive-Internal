#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogCondition; }

#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A10D20)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECTFIRST_BATTLEPASSID_COSTUMEUNIQUEID_DIALOGCATEGORY_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A11180)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECT_BATTLEPASSID_COSTUMEUNIQUEID_DIALOGCATEGORY_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A117C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECT_BATTLEPASSID_COSTUMEUNIQUEID_DIALOGCATEGORY_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A11DE0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECTFIRST_ORIGINALCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A124B0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECT_ORIGINALCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A127C0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECT_ORIGINALCHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1A12AC0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECTFIRST_BATTLEPASSID_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A12EC0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECT_BATTLEPASSID_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A132F0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECT_BATTLEPASSID_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A13710)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECTFIRST_COSTUMEUNIQUEID_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A13CA0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECT_COSTUMEUNIQUEID_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A140D0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECT_COSTUMEUNIQUEID_DIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x1A144F0)
#define MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A14A80)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterDialogBattlePassExcelRepository_TypeDefinitionIndex = 16956;

	class CharacterDialogBattlePassExcelRepository : public ::FlatData::ParcelType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_BattlePassID_CostumeUniqueId_DialogCategory_DialogCondition(::System::Int64 arg, ::System::Int64 arg, ::FlatData::DialogCategory* arg, ::FlatData::DialogCondition* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::FlatData::DialogCategory*, ::FlatData::DialogCondition*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECTFIRST_BATTLEPASSID_COSTUMEUNIQUEID_DIALOGCATEGORY_DIALOGCONDITION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_BattlePassID_CostumeUniqueId_DialogCategory_DialogCondition(::System::Int64 arg, ::System::Int64 arg, ::FlatData::DialogCategory* arg, ::FlatData::DialogCondition* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int64, ::FlatData::DialogCategory*, ::FlatData::DialogCondition*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECT_BATTLEPASSID_COSTUMEUNIQUEID_DIALOGCATEGORY_DIALOGCONDITION_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_BattlePassID_CostumeUniqueId_DialogCategory_DialogCondition(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECT_BATTLEPASSID_COSTUMEUNIQUEID_DIALOGCATEGORY_DIALOGCONDITION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_OriginalCharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECTFIRST_ORIGINALCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_OriginalCharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECT_ORIGINALCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_OriginalCharacterIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECT_ORIGINALCHARACTERIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_BattlePassID_DialogCategory(::System::Int64 arg, ::FlatData::DialogCategory* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::DialogCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECTFIRST_BATTLEPASSID_DIALOGCATEGORY_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_BattlePassID_DialogCategory(::System::Int64 arg, ::FlatData::DialogCategory* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::DialogCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECT_BATTLEPASSID_DIALOGCATEGORY_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_BattlePassID_DialogCategory(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECT_BATTLEPASSID_DIALOGCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_CostumeUniqueId_DialogCategory(::System::Int64 arg, ::FlatData::DialogCategory* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::DialogCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECTFIRST_COSTUMEUNIQUEID_DIALOGCATEGORY_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_CostumeUniqueId_DialogCategory(::System::Int64 arg, ::FlatData::DialogCategory* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::DialogCategory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECT_COSTUMEUNIQUEID_DIALOGCATEGORY_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_CostumeUniqueId_DialogCategory(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_SELECT_COSTUMEUNIQUEID_DIALOGCATEGORY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGBATTLEPASSEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

