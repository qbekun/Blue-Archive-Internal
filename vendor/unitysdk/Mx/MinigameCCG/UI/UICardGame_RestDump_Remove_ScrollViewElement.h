#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_CardGroup; }
namespace MX::GameLogic::DBModel { class MiniGameCCGCardDB; }

#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_REMOVE_SCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E15650)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_REMOVE_SCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E15690)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_REMOVE_SCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E15770)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_REMOVE_SCROLLVIEWELEMENT_ONCLICKCARD_OFFSET UNITYSDK_OFFSET(0x1E15830)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_REMOVE_SCROLLVIEWELEMENT_SETDEPTH_OFFSET UNITYSDK_OFFSET(0x1E15900)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_RestDump_Remove_ScrollViewElement_TypeDefinitionIndex = 20819;

	class UICardGame_RestDump_Remove_ScrollViewElement : public ::System::Xml::XPath::XPathNodeType
	{
	public:
		::MX::MinigameCCG::UI::UICardGame_CardGroup* cardGroup; // 0x28
		::MX::GameLogic::DBModel::MiniGameCCGCardDB* card; // 0x30
		::System::Int32 UNSELECTEDID; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_REMOVE_SCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_REMOVE_SCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::MiniGameCCGCardDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCardDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_REMOVE_SCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_REMOVE_SCROLLVIEWELEMENT_ONCLICKCARD_OFFSET))(nullptr);
		}

		::System::Void SetDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTDUMP_REMOVE_SCROLLVIEWELEMENT_SETDEPTH_OFFSET))(arg, nullptr);
		}

	};
}

