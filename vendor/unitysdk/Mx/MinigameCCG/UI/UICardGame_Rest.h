#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Animation; }
namespace MX::Data::Excel { class MinigameCCGLevelStageExcel; }
namespace MX::GameLogic::DBModel { class MiniGameCCGCampOption; }
namespace MX::MinigameCCG::UI { class UICardGame_Lobby; }

#define MX_MINIGAMECCG_UI_UICARDGAME_REST_ACTIVEBTNS_OFFSET UNITYSDK_OFFSET(0x1E0EB10)
#define MX_MINIGAMECCG_UI_UICARDGAME_REST_ONCLICKDECK_OFFSET UNITYSDK_OFFSET(0x1E0EC30)
#define MX_MINIGAMECCG_UI_UICARDGAME_REST_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0x1E0ED10)
#define MX_MINIGAMECCG_UI_UICARDGAME_REST_ONCLICKREMOVECARD_OFFSET UNITYSDK_OFFSET(0x1E0ED90)
#define MX_MINIGAMECCG_UI_UICARDGAME_REST_EXECUTECAMPACTION_OFFSET UNITYSDK_OFFSET(0x1E0EFC0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REST_GETDESCRIPTIONCOLOR_OFFSET UNITYSDK_OFFSET(0x1E0F1E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REST_ONBACK_OFFSET UNITYSDK_OFFSET(0x1E0F230)
#define MX_MINIGAMECCG_UI_UICARDGAME_REST__ONBACK_B__34_0_OFFSET UNITYSDK_OFFSET(0x1E0F340)
#define MX_MINIGAMECCG_UI_UICARDGAME_REST__ONCLICKDECK_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E0F3D0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REST_GETTITLECOLOR_OFFSET UNITYSDK_OFFSET(0x1E0F470)
#define MX_MINIGAMECCG_UI_UICARDGAME_REST_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E0F4C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REST_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F960)
#define MX_MINIGAMECCG_UI_UICARDGAME_REST_GET_HASDEADCHARACTER_OFFSET UNITYSDK_OFFSET(0x1E0FA20)
#define MX_MINIGAMECCG_UI_UICARDGAME_REST_ONCLICKPASS_OFFSET UNITYSDK_OFFSET(0x1E0FB40)
#define MX_MINIGAMECCG_UI_UICARDGAME_REST_ONCLICKHEAL_OFFSET UNITYSDK_OFFSET(0x1E0FB50)
#define MX_MINIGAMECCG_UI_UICARDGAME_REST_ONCLICKREVIVE_OFFSET UNITYSDK_OFFSET(0x1E0FBD0)
#define MX_MINIGAMECCG_UI_UICARDGAME_REST_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E0C300)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Rest_TypeDefinitionIndex = 20798;

	class UICardGame_Rest : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* anim; // 0xD8
		MXButton* healBtn; // 0xE0
		UILabel* healCountLabel; // 0xE8
		MXButton* reviveBtn; // 0xF0
		UISprite* reviveCover; // 0xF8
		UILabel* reviveTitleLabel; // 0x100
		UILabel* reviveDescLabel; // 0x108
		UILabel* reviveCountLabel; // 0x110
		MXButton* removeCardBtn; // 0x118
		UISprite* removeCover; // 0x120
		UILabel* removeTitleLabel; // 0x128
		UILabel* removeDescLabel; // 0x130
		MXButton* passBtn; // 0x138
		MXButton* deckBtn; // 0x140
		Il2CppObject* removeCardDBIds; // 0x148
		::MX::Data::Excel::MinigameCCGLevelStageExcel* stageExcel; // 0x150
		Il2CppObject* snapShotStrikerDBs; // 0x160
		::System::String* coverSpriteName; // 0x168
		::System::String* dicCoverSpriteName; // 0x170
		::System::String* outAnimationClipName; // 0x178
		::System::String* backAnimationClipName; // 0x180
		::System::Boolean canRemoveHandCard; // 0x188

		::System::Void ActiveBtns(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST_ACTIVEBTNS_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickDeck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST_ONCLICKDECK_OFFSET))(nullptr);
		}

		MinigameCCGObject* get_ccgObject()
		{
			return (return (MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST_GET_CCGOBJECT_OFFSET))(nullptr);
		}

		::System::Void OnClickRemoveCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST_ONCLICKREMOVECARD_OFFSET))(nullptr);
		}

		::System::Void ExecuteCampAction(::MX::GameLogic::DBModel::MiniGameCCGCampOption* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCampOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST_EXECUTECAMPACTION_OFFSET))(arg, nullptr);
		}

		::System::String* GetDescriptionColor(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST_GETDESCRIPTIONCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST_ONBACK_OFFSET))(nullptr);
		}

		::System::Void _OnBack_b__34_0(::MX::MinigameCCG::UI::UICardGame_Lobby* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_Lobby*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST__ONBACK_B__34_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickDeck_b__33_0(UICardGame_MyDeck* arg)
		{
			((::System::Void(*)(UICardGame_MyDeck*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST__ONCLICKDECK_B__33_0_OFFSET))(arg, nullptr);
		}

		::System::String* GetTitleColor(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST_GETTITLECOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_hasDeadCharacter()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST_GET_HASDEADCHARACTER_OFFSET))(nullptr);
		}

		::System::Void OnClickPass()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST_ONCLICKPASS_OFFSET))(nullptr);
		}

		::System::Void OnClickHeal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST_ONCLICKHEAL_OFFSET))(nullptr);
		}

		::System::Void OnClickRevive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST_ONCLICKREVIVE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Data::Excel::MinigameCCGLevelStageExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameCCGLevelStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_REST_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};
}

