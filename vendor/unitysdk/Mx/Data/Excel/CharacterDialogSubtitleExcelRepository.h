#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A21100)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCELREPOSITORY_SELECTFIRST_CHARACTERID_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A21270)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCELREPOSITORY_SELECT_CHARACTERID_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A21680)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCELREPOSITORY_SELECT_CHARACTERID_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A21A70)
#define MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A22010)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterDialogSubtitleExcelRepository_TypeDefinitionIndex = 16999;

	class CharacterDialogSubtitleExcelRepository : public ::FlatData::SortingTarget
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_CharacterId_LocalizeCVGroup(::System::Int64 arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCELREPOSITORY_SELECTFIRST_CHARACTERID_LOCALIZECVGROUP_OFFSET))(arg, str, arg, nullptr);
		}

		Il2CppObject* Select_CharacterId_LocalizeCVGroup(::System::Int64 arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCELREPOSITORY_SELECT_CHARACTERID_LOCALIZECVGROUP_OFFSET))(arg, str, arg, nullptr);
		}

		Il2CppObject* Select_CharacterId_LocalizeCVGroup(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCELREPOSITORY_SELECT_CHARACTERID_LOCALIZECVGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERDIALOGSUBTITLEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

