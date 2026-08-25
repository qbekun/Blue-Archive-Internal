#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::GameLogic::DBModel { class MiniGameCCGCharacterDB; }

#define MX_MINIGAMECCG_UI_UICARDGAME_REWARD_CHARACTERCARD_SCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E21260)
#define MX_MINIGAMECCG_UI_UICARDGAME_REWARD_CHARACTERCARD_SCROLLVIEWELEMENT_ONCLICKCARD_OFFSET UNITYSDK_OFFSET(0x1E214F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REWARD_CHARACTERCARD_SCROLLVIEWELEMENT_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1E215B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REWARD_CHARACTERCARD_SCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E215D0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REWARD_CHARACTERCARD_SCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E21710)
#define MX_MINIGAMECCG_UI_UICARDGAME_REWARD_CHARACTERCARD_SCROLLVIEWELEMENT_ACTIVESELECTIONMARK_OFFSET UNITYSDK_OFFSET(0x1E214D0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Reward_CharacterCard_ScrollViewElement_TypeDefinitionIndex = 20853;

	class UICardGame_Reward_CharacterCard_ScrollViewElement : public ::System::Xml::Serialization::CodeIdentifier
	{
	public:
		UILabel* cardStatusLabel; // 0x28
		UITexture* image; // 0x30
		MXButton* clickBtn; // 0x38
		::UnityEngine::GameObject* selectionMark; // 0x40
		::System::Int32 NEW_CHARACTER_INDEX; // 0x0
		::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* db; // 0x48

		::System::Void SetData(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REWARD_CHARACTERCARD_SCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REWARD_CHARACTERCARD_SCROLLVIEWELEMENT_ONCLICKCARD_OFFSET))(nullptr);
		}

		::System::Int64 get_Index()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REWARD_CHARACTERCARD_SCROLLVIEWELEMENT_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REWARD_CHARACTERCARD_SCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REWARD_CHARACTERCARD_SCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ActiveSelectionMark(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REWARD_CHARACTERCARD_SCROLLVIEWELEMENT_ACTIVESELECTIONMARK_OFFSET))(arg, nullptr);
		}

	};
}

