#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGCardDB; }
namespace MX::MinigameCCG::UI { class UICardGame_CardGroup; }

#define MX_MINIGAMECCG_UI_ONCLICKRESTDUMPREMOVECARDMESSAGE_GET_CARDGROUP_OFFSET UNITYSDK_OFFSET(0x1E155C0)
#define MX_MINIGAMECCG_UI_ONCLICKRESTDUMPREMOVECARDMESSAGE_SET_CARD_OFFSET UNITYSDK_OFFSET(0x1E155D0)
#define MX_MINIGAMECCG_UI_ONCLICKRESTDUMPREMOVECARDMESSAGE_SET_CARDGROUP_OFFSET UNITYSDK_OFFSET(0x1E155E0)
#define MX_MINIGAMECCG_UI_ONCLICKRESTDUMPREMOVECARDMESSAGE_GET_CARD_OFFSET UNITYSDK_OFFSET(0x1E155F0)
#define MX_MINIGAMECCG_UI_ONCLICKRESTDUMPREMOVECARDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E15600)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int OnClickRestDumpRemoveCardMessage_TypeDefinitionIndex = 20818;

	class OnClickRestDumpRemoveCardMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MX::GameLogic::DBModel::MiniGameCCGCardDB* _Card_k__BackingField; // 0x18
		::MX::MinigameCCG::UI::UICardGame_CardGroup* _CardGroup_k__BackingField; // 0x20

		::MX::MinigameCCG::UI::UICardGame_CardGroup* get_CardGroup()
		{
			return (return (::MX::MinigameCCG::UI::UICardGame_CardGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKRESTDUMPREMOVECARDMESSAGE_GET_CARDGROUP_OFFSET))(nullptr);
		}

		::System::Void set_Card(::MX::GameLogic::DBModel::MiniGameCCGCardDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCardDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKRESTDUMPREMOVECARDMESSAGE_SET_CARD_OFFSET))(arg, nullptr);
		}

		::System::Void set_CardGroup(::MX::MinigameCCG::UI::UICardGame_CardGroup* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_CardGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKRESTDUMPREMOVECARDMESSAGE_SET_CARDGROUP_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGCardDB* get_Card()
		{
			return (return (::MX::GameLogic::DBModel::MiniGameCCGCardDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKRESTDUMPREMOVECARDMESSAGE_GET_CARD_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::MiniGameCCGCardDB* arg, ::MX::MinigameCCG::UI::UICardGame_CardGroup* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCardDB*, ::MX::MinigameCCG::UI::UICardGame_CardGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKRESTDUMPREMOVECARDMESSAGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

