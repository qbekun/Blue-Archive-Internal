#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class DialogCategory; }
namespace FlatData { class DialogCondition; }

#define MX_DATA_EXCEL_CHARACTERDIALOGEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A1E9F0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A1EC50)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCELREPOSITORY_SELECT_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A1EF70)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET UNITYSDK_OFFSET(0x1A1F270)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCELREPOSITORY_SELECTFIRST_DIALOGCATEGORY_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A1F670)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCELREPOSITORY_SELECT_DIALOGCATEGORY_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A1FAF0)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCELREPOSITORY_SELECT_DIALOGCATEGORY_DIALOGCONDITION_OFFSET UNITYSDK_OFFSET(0x1A1FF60)
#define MX_DATA_EXCEL_CHARACTERDIALOGEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A20500)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterDialogExcelRepository_TypeDefinitionIndex = 16992;

	class CharacterDialogExcelRepository : public ::FlatData::CurrencyTypes
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCELREPOSITORY_SELECTFIRST_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCELREPOSITORY_SELECT_CHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCELREPOSITORY_SELECT_CHARACTERIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_DialogCategory_DialogCondition(::FlatData::DialogCategory* arg, ::FlatData::DialogCondition* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::DialogCategory*, ::FlatData::DialogCondition*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCELREPOSITORY_SELECTFIRST_DIALOGCATEGORY_DIALOGCONDITION_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_DialogCategory_DialogCondition(::FlatData::DialogCategory* arg, ::FlatData::DialogCondition* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::DialogCategory*, ::FlatData::DialogCondition*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCELREPOSITORY_SELECT_DIALOGCATEGORY_DIALOGCONDITION_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_DialogCategory_DialogCondition(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCELREPOSITORY_SELECT_DIALOGCATEGORY_DIALOGCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

