#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A47280)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCELREPOSITORY_SELECTFIRST_CHARACTERVOICEGROUPID_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A473F0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCELREPOSITORY_SELECT_CHARACTERVOICEGROUPID_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A47800)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCELREPOSITORY_SELECT_CHARACTERVOICEGROUPID_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A47BF0)
#define MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A48190)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterVoiceSubtitleExcelRepository_TypeDefinitionIndex = 17140;

	class CharacterVoiceSubtitleExcelRepository : public ::FlatData::DialogType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_CharacterVoiceGroupId_LocalizeCVGroup(::System::Int64 arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCELREPOSITORY_SELECTFIRST_CHARACTERVOICEGROUPID_LOCALIZECVGROUP_OFFSET))(arg, str, arg, nullptr);
		}

		Il2CppObject* Select_CharacterVoiceGroupId_LocalizeCVGroup(::System::Int64 arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCELREPOSITORY_SELECT_CHARACTERVOICEGROUPID_LOCALIZECVGROUP_OFFSET))(arg, str, arg, nullptr);
		}

		Il2CppObject* Select_CharacterVoiceGroupId_LocalizeCVGroup(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCELREPOSITORY_SELECT_CHARACTERVOICEGROUPID_LOCALIZECVGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICESUBTITLEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

