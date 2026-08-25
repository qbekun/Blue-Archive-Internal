#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SPINELIPSYNCDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C91320)
#define MX_DATA_EXCEL_SPINELIPSYNCDBSCHEMA_GET_VOICEID_OFFSET UNITYSDK_OFFSET(0x1C91330)
#define MX_DATA_EXCEL_SPINELIPSYNCDBSCHEMA_SET_VOICEID_OFFSET UNITYSDK_OFFSET(0x1C91340)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SpineLipsyncDBSchema_TypeDefinitionIndex = 19517;

	class SpineLipsyncDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::UInt32 _VoiceId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::UInt32 get_VoiceId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCDBSCHEMA_GET_VOICEID_OFFSET))(nullptr);
		}

		::System::Void set_VoiceId(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SPINELIPSYNCDBSCHEMA_SET_VOICEID_OFFSET))(arg, nullptr);
		}

	};
}

