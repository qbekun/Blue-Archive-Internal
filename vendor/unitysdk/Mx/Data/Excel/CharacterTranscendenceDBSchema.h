#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A40AC0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEDBSCHEMA_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A40AD0)
#define MX_DATA_EXCEL_CHARACTERTRANSCENDENCEDBSCHEMA_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A40AE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterTranscendenceDBSchema_TypeDefinitionIndex = 17111;

	class CharacterTranscendenceDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CharacterId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEDBSCHEMA_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERTRANSCENDENCEDBSCHEMA_GET_CHARACTERID_OFFSET))(nullptr);
		}

	};
}

