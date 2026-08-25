#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGCharacterDB; }
namespace MX::MinigameCCG::UI { class UICardGame_CardGroup; }

#define MX_MINIGAMECCG_UI_ONCLICKREPLACECARDMESSAGE_SET_DB_OFFSET UNITYSDK_OFFSET(0x1E1F330)
#define MX_MINIGAMECCG_UI_ONCLICKREPLACECARDMESSAGE_SET_CARDGROUP_OFFSET UNITYSDK_OFFSET(0x1E1F340)
#define MX_MINIGAMECCG_UI_ONCLICKREPLACECARDMESSAGE_GET_CARDGROUP_OFFSET UNITYSDK_OFFSET(0x1E1F350)
#define MX_MINIGAMECCG_UI_ONCLICKREPLACECARDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F360)
#define MX_MINIGAMECCG_UI_ONCLICKREPLACECARDMESSAGE_GET_DB_OFFSET UNITYSDK_OFFSET(0x1E1F3B0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int OnClickReplaceCardMessage_TypeDefinitionIndex = 20842;

	class OnClickReplaceCardMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* _DB_k__BackingField; // 0x18
		::MX::MinigameCCG::UI::UICardGame_CardGroup* _CardGroup_k__BackingField; // 0x20

		::System::Void set_DB(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKREPLACECARDMESSAGE_SET_DB_OFFSET))(arg, nullptr);
		}

		::System::Void set_CardGroup(::MX::MinigameCCG::UI::UICardGame_CardGroup* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_CardGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKREPLACECARDMESSAGE_SET_CARDGROUP_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::UI::UICardGame_CardGroup* get_CardGroup()
		{
			return (return (::MX::MinigameCCG::UI::UICardGame_CardGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKREPLACECARDMESSAGE_GET_CARDGROUP_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* arg, ::MX::MinigameCCG::UI::UICardGame_CardGroup* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*, ::MX::MinigameCCG::UI::UICardGame_CardGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKREPLACECARDMESSAGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* get_DB()
		{
			return (return (::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKREPLACECARDMESSAGE_GET_DB_OFFSET))(nullptr);
		}

	};
}

