#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class VoiceEvent; }

#define MX_DATA_EXCEL_VOICECOMMONDBSCHEMA_GET_VOICEEVENT_OFFSET UNITYSDK_OFFSET(0x1CB1920)
#define MX_DATA_EXCEL_VOICECOMMONDBSCHEMA_SET_VOICEEVENT_OFFSET UNITYSDK_OFFSET(0x1CB1930)
#define MX_DATA_EXCEL_VOICECOMMONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CB1940)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VoiceCommonDBSchema_TypeDefinitionIndex = 19681;

	class VoiceCommonDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::VoiceEvent* _VoiceEvent_k__BackingField; // 0x20

		::FlatData::VoiceEvent* get_VoiceEvent()
		{
			return (return (::FlatData::VoiceEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONDBSCHEMA_GET_VOICEEVENT_OFFSET))(nullptr);
		}

		::System::Void set_VoiceEvent(::FlatData::VoiceEvent* arg)
		{
			((::System::Void(*)(::FlatData::VoiceEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONDBSCHEMA_SET_VOICEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VOICECOMMONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

