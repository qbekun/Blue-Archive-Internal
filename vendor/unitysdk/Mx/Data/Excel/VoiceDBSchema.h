#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_VOICEDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1CB2FA0)
#define MX_DATA_EXCEL_VOICEDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CB2FB0)
#define MX_DATA_EXCEL_VOICEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CB2FC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VoiceDBSchema_TypeDefinitionIndex = 19688;

	class VoiceDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _Id_k__BackingField; // 0x20

		::System::Void set_Id(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_Id()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

