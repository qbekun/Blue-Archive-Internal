#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_CardGroup; }
namespace MX::MinigameCCG::UI { class CCGRestDumpCardDBInfo; }
namespace MX::GameLogic::DBModel { class MiniGameCCGCardDB; }

#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_DECK_SCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E15260)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_DECK_SCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E152A0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_DECK_SCROLLVIEWELEMENT_GET_CARDDB_OFFSET UNITYSDK_OFFSET(0x1E14A50)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_DECK_SCROLLVIEWELEMENT__SETDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0x1E15390)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_DECK_SCROLLVIEWELEMENT_ACTIVESELECTIONFRAME_OFFSET UNITYSDK_OFFSET(0x1E111D0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_DECK_SCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E153C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_DECK_SCROLLVIEWELEMENT_ONCLICKCARD_OFFSET UNITYSDK_OFFSET(0x1E154A0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_RestDump_Deck_ScrollViewElement_TypeDefinitionIndex = 20816;

	class UICardGame_RestDump_Deck_ScrollViewElement : public ::System::Xml::Ucs4Encoding
	{
	public:
		::MX::MinigameCCG::UI::UICardGame_CardGroup* cardGroup; // 0x28
		::MX::MinigameCCG::UI::CCGRestDumpCardDBInfo* info; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_DECK_SCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::UI::CCGRestDumpCardDBInfo* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::CCGRestDumpCardDBInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_DECK_SCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGCardDB* get_CardDB()
		{
			return (return (::MX::GameLogic::DBModel::MiniGameCCGCardDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_DECK_SCROLLVIEWELEMENT_GET_CARDDB_OFFSET))(nullptr);
		}

		::System::Boolean _SetData_b__7_0(::MX::GameLogic::DBModel::MiniGameCCGCardDB* arg)
		{
			return (return (::System::Boolean(*)(::MX::GameLogic::DBModel::MiniGameCCGCardDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_DECK_SCROLLVIEWELEMENT__SETDATA_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void ActiveSelectionFrame(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_DECK_SCROLLVIEWELEMENT_ACTIVESELECTIONFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_DECK_SCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_DECK_SCROLLVIEWELEMENT_ONCLICKCARD_OFFSET))(nullptr);
		}

	};
}

