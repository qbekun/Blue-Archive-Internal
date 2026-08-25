#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERVOICEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A44C70)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCELREPOSITORY_SELECTFIRST_CHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A44ED0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCELREPOSITORY_SELECT_CHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A451F0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCELREPOSITORY_SELECT_CHARACTERVOICEGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1A454F0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCELREPOSITORY_SELECTFIRST_CHARACTERVOICEGROUPID_VOICEHASH_OFFSET UNITYSDK_OFFSET(0x1A458F0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCELREPOSITORY_SELECT_CHARACTERVOICEGROUPID_VOICEHASH_OFFSET UNITYSDK_OFFSET(0x1A45CF0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCELREPOSITORY_SELECT_CHARACTERVOICEGROUPID_VOICEHASH_OFFSET UNITYSDK_OFFSET(0x1A460D0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A46670)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterVoiceExcelRepository_TypeDefinitionIndex = 17133;

	class CharacterVoiceExcelRepository : public ::FlatData::DialogConditionDetail
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_CharacterVoiceGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCELREPOSITORY_SELECTFIRST_CHARACTERVOICEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterVoiceGroupId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCELREPOSITORY_SELECT_CHARACTERVOICEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterVoiceGroupIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCELREPOSITORY_SELECT_CHARACTERVOICEGROUPIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_CharacterVoiceGroupId_VoiceHash(::System::Int64 arg, ::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCELREPOSITORY_SELECTFIRST_CHARACTERVOICEGROUPID_VOICEHASH_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterVoiceGroupId_VoiceHash(::System::Int64 arg, ::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCELREPOSITORY_SELECT_CHARACTERVOICEGROUPID_VOICEHASH_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_CharacterVoiceGroupId_VoiceHash(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCELREPOSITORY_SELECT_CHARACTERVOICEGROUPID_VOICEHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

