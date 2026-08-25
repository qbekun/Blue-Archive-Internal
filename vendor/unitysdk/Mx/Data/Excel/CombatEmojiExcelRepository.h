#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EmojiEvent; }

#define MX_DATA_EXCEL_COMBATEMOJIEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A50600)
#define MX_DATA_EXCEL_COMBATEMOJIEXCELREPOSITORY_SELECTFIRST_EMOJIEVENT_OFFSET UNITYSDK_OFFSET(0x1A50640)
#define MX_DATA_EXCEL_COMBATEMOJIEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A509A0)
#define MX_DATA_EXCEL_COMBATEMOJIEXCELREPOSITORY_SELECT_EMOJIEVENTS_OFFSET UNITYSDK_OFFSET(0x1A50B10)
#define MX_DATA_EXCEL_COMBATEMOJIEXCELREPOSITORY_SELECT_EMOJIEVENT_OFFSET UNITYSDK_OFFSET(0x1A50F10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CombatEmojiExcelRepository_TypeDefinitionIndex = 17188;

	class CombatEmojiExcelRepository : public ::FlatData::ScenarioModeSubTypes
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_EmojiEvent(::FlatData::EmojiEvent* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::EmojiEvent*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCELREPOSITORY_SELECTFIRST_EMOJIEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_EmojiEvents(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCELREPOSITORY_SELECT_EMOJIEVENTS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_EmojiEvent(::FlatData::EmojiEvent* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::EmojiEvent*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_COMBATEMOJIEXCELREPOSITORY_SELECT_EMOJIEVENT_OFFSET))(arg, arg, nullptr);
		}

	};
}

