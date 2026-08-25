#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_CardGroup; }
namespace MX::GameLogic::DBModel { class MiniGameCCGCharacterDB; }
namespace UnityEngine { class Animation; }

#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_CARDELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F3C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_CARDELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E1F3D0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_CARDELEMENT_GETANIMATION_OFFSET UNITYSDK_OFFSET(0x1E1E4A0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_CARDELEMENT_GET_DB_OFFSET UNITYSDK_OFFSET(0x1E1F4B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_CARDELEMENT_ONCLICKCARD_OFFSET UNITYSDK_OFFSET(0x1E1F4C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_CARDELEMENT_GET_CARDGROUP_OFFSET UNITYSDK_OFFSET(0x1E1F590)
#define MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_CARDELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E1C1D0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_ReplaceCard_CardElement_TypeDefinitionIndex = 20843;

	class UICardGame_ReplaceCard_CardElement : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::UI::UICardGame_CardGroup* group; // 0x18
		::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* db; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_CARDELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_CARDELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* GetAnimation()
		{
			return (return (::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_CARDELEMENT_GETANIMATION_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* get_DB()
		{
			return (return (::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_CARDELEMENT_GET_DB_OFFSET))(nullptr);
		}

		::System::Void OnClickCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_CARDELEMENT_ONCLICKCARD_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::UI::UICardGame_CardGroup* get_CardGroup()
		{
			return (return (::MX::MinigameCCG::UI::UICardGame_CardGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_CARDELEMENT_GET_CARDGROUP_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REPLACECARD_CARDELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};
}

