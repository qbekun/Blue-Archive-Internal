#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EmojiEvent; }

#define MX_DATA_EXCEL_COMBATEMOJIDBSCHEMA_GET_EMOJIEVENT_OFFSET UNITYSDK_OFFSET(0x1A505D0)
#define MX_DATA_EXCEL_COMBATEMOJIDBSCHEMA_SET_EMOJIEVENT_OFFSET UNITYSDK_OFFSET(0x1A505E0)
#define MX_DATA_EXCEL_COMBATEMOJIDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A505F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CombatEmojiDBSchema_TypeDefinitionIndex = 17183;

	class CombatEmojiDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::FlatData::EmojiEvent* _EmojiEvent_k__BackingField; // 0x20

		::FlatData::EmojiEvent* get_EmojiEvent()
		{
			return (return (::FlatData::EmojiEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIDBSCHEMA_GET_EMOJIEVENT_OFFSET))(nullptr);
		}

		::System::Void set_EmojiEvent(::FlatData::EmojiEvent* arg)
		{
			((::System::Void(*)(::FlatData::EmojiEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIDBSCHEMA_SET_EMOJIEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

