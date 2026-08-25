#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class RoadPuzzleVoiceCondition; }

#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BF7840)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BF7850)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEDBSCHEMA_GET_VOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1BF7860)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BF7870)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEDBSCHEMA_SET_VOICECONDITION_OFFSET UNITYSDK_OFFSET(0x1BF7880)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEDBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BF7890)
#define MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEDBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BF78A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameRoadPuzzleVoiceDBSchema_TypeDefinitionIndex = 18819;

	class MiniGameRoadPuzzleVoiceDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20
		::System::Int64 _UniqueId_k__BackingField; // 0x28
		::FlatData::RoadPuzzleVoiceCondition* _VoiceCondition_k__BackingField; // 0x30

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::RoadPuzzleVoiceCondition* get_VoiceCondition()
		{
			return (return (::FlatData::RoadPuzzleVoiceCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEDBSCHEMA_GET_VOICECONDITION_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_VoiceCondition(::FlatData::RoadPuzzleVoiceCondition* arg)
		{
			((::System::Void(*)(::FlatData::RoadPuzzleVoiceCondition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEDBSCHEMA_SET_VOICECONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEDBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEROADPUZZLEVOICEDBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

