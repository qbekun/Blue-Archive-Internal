#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class TBGVoiceCondition; }

#define MX_DATA_EXCEL_MINIGAMETBGVOICEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C0F800)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEDBSCHEMA_GET_VOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1C0F810)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEDBSCHEMA_SET_VOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1C0F820)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C0F830)
#define MX_DATA_EXCEL_MINIGAMETBGVOICEDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C0F840)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGVoiceDBSchema_TypeDefinitionIndex = 18923;

	class MinigameTBGVoiceDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::FlatData::TBGVoiceCondition* _VoiceCondition_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::TBGVoiceCondition* get_VoiceCondition()
		{
			return (return (::FlatData::TBGVoiceCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEDBSCHEMA_GET_VOICECONDITION_OFFSET))(nullptr);
		}

		::System::Void set_VoiceCondition(::FlatData::TBGVoiceCondition* arg)
		{
			((::System::Void(*)(::FlatData::TBGVoiceCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEDBSCHEMA_SET_VOICECONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGVOICEDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

