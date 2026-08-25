#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERVOICEDBSCHEMA_GET_VOICEHASH_OFFSET UNITYSDK_OFFSET(0x1A44C20)
#define MX_DATA_EXCEL_CHARACTERVOICEDBSCHEMA_SET_CHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A44C30)
#define MX_DATA_EXCEL_CHARACTERVOICEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A44C40)
#define MX_DATA_EXCEL_CHARACTERVOICEDBSCHEMA_GET_CHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A44C50)
#define MX_DATA_EXCEL_CHARACTERVOICEDBSCHEMA_SET_VOICEHASH_OFFSET UNITYSDK_OFFSET(0x1A44C60)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterVoiceDBSchema_TypeDefinitionIndex = 17125;

	class CharacterVoiceDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CharacterVoiceGroupId_k__BackingField; // 0x20
		::System::UInt32 _VoiceHash_k__BackingField; // 0x28

		::System::UInt32 get_VoiceHash()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEDBSCHEMA_GET_VOICEHASH_OFFSET))(nullptr);
		}

		::System::Void set_CharacterVoiceGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEDBSCHEMA_SET_CHARACTERVOICEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterVoiceGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEDBSCHEMA_GET_CHARACTERVOICEGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_VoiceHash(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEDBSCHEMA_SET_VOICEHASH_OFFSET))(arg, nullptr);
		}

	};
}

