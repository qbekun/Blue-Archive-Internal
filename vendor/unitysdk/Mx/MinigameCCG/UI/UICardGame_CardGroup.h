#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_CharacterCard; }
namespace MX::MinigameCCG::UI { class UICardGame_Card; }
namespace MX::MinigameCCG::UI { class UICardGame_Environment; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Animation; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace FlatData { class CCGEntityType; }
namespace MX::GameLogic::DBModel { class MiniGameCCGCharacterDB; }

#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1DFAD00)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_ACTIVESELECTIONFRAME_OFFSET UNITYSDK_OFFSET(0x1DFAD10)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_ACTIVERETREATCOVER_OFFSET UNITYSDK_OFFSET(0x1DFAD30)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_ACTIVEFXSHINE_OFFSET UNITYSDK_OFFSET(0x1DFAD50)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_SETDEPTH_OFFSET UNITYSDK_OFFSET(0x1DF0420)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_ACTIVEDIMCOVER_OFFSET UNITYSDK_OFFSET(0x1DFADB0)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_GETANIMATION_OFFSET UNITYSDK_OFFSET(0x1DFADD0)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DFADE0)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_INITCARDACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x1DFAF50)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DFB150)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_SETCARDDATA_OFFSET UNITYSDK_OFFSET(0x1DFB350)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_SETENVIRONMENTDATA_OFFSET UNITYSDK_OFFSET(0x1DFB450)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_SETCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x1DFB490)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_SETCHARACTERDATA_OFFSET UNITYSDK_OFFSET(0x1DFB9A0)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_ONCLICKCARD_OFFSET UNITYSDK_OFFSET(0x1DFBBD0)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_OPENTOOLTIP_OFFSET UNITYSDK_OFFSET(0x1DFBC10)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBEF0)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP__OPENTOOLTIP_G__OPEN|34_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP__OPENTOOLTIP_B__34_1_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_CardGroup_TypeDefinitionIndex = 20736;

	class UICardGame_CardGroup : public Il2CppObject
	{
	public:
		UIPanel* panel; // 0x18
		UIWidget* frame; // 0x20
		::MX::MinigameCCG::UI::UICardGame_CharacterCard* allyStriker; // 0x28
		::MX::MinigameCCG::UI::UICardGame_CharacterCard* allySpecial; // 0x30
		::MX::MinigameCCG::UI::UICardGame_CharacterCard* enemy; // 0x38
		::MX::MinigameCCG::UI::UICardGame_Card* card; // 0x40
		::MX::MinigameCCG::UI::UICardGame_Environment* environment; // 0x48
		::UnityEngine::GameObject* retreatCover; // 0x50
		::UnityEngine::GameObject* selectionFrame; // 0x58
		MXButton* clickBtn; // 0x60
		::UnityEngine::ParticleSystem* fx_Shine; // 0x68
		::UnityEngine::Animation* anim; // 0x70
		::UnityEngine::GameObject* defaultDim; // 0x78
		::System::Boolean canShowTooltip; // 0x80
		::MX::MinigameCCG::CCGEntity* entity; // 0x88
		::FlatData::CCGEntityType* entityType; // 0x90
		::System::Int64 id; // 0x98
		::System::Action* CallbackClickCard; // 0xA0

		::MX::MinigameCCG::CCGEntity* get_Entity()
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_GET_ENTITY_OFFSET))(nullptr);
		}

		::System::Void ActiveSelectionFrame(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_ACTIVESELECTIONFRAME_OFFSET))(arg, nullptr);
		}

		::System::Void ActiveRetreatCover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_ACTIVERETREATCOVER_OFFSET))(arg, nullptr);
		}

		::System::Void ActiveFXShine(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_ACTIVEFXSHINE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_SETDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void ActiveDimCover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_ACTIVEDIMCOVER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animation* GetAnimation()
		{
			return (return (::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_GETANIMATION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void InitCardActiveState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_INITCARDACTIVESTATE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::CCGEntity* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_SETDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCardData(::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_SETCARDDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetEnvironmentData(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_SETENVIRONMENTDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetCharacterData(::System::Int64 arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_SETCHARACTERDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetCharacterData(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_SETCHARACTERDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_ONCLICKCARD_OFFSET))(nullptr);
		}

		::System::Void OpenTooltip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_OPENTOOLTIP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OpenTooltip_g__Open|34_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP__OPENTOOLTIP_G__OPEN|34_0_OFFSET))(nullptr);
		}

		::System::Void _OpenTooltip_b__34_1(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_CARDGROUP__OPENTOOLTIP_B__34_1_OFFSET))(arg, nullptr);
		}

	};
}

