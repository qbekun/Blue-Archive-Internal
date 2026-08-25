#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class GameObject; }

#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COSTELEMENT_SETACTIVEENABLEOBJECT_OFFSET UNITYSDK_OFFSET(0x1DEC130)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COSTELEMENT_SETACTIVELACKOBJECT_OFFSET UNITYSDK_OFFSET(0x1DEC1C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COSTELEMENT_SETACTIVEDISABLEOBJECT_OFFSET UNITYSDK_OFFSET(0x1DEC210)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COSTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC230)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COSTELEMENT_PLAYTWEEN_OFFSET UNITYSDK_OFFSET(0x1DEC180)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COSTELEMENT_SETACTIVEUSEOBJECT_OFFSET UNITYSDK_OFFSET(0x1DEC240)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_InGame_HUD_CostElement_TypeDefinitionIndex = 20692;

	class UICardGame_InGame_HUD_CostElement : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* use; // 0x18
		::UnityEngine::GameObject* enable; // 0x20
		TweenAlpha* enableTweenAlpha; // 0x28
		::UnityEngine::GameObject* disable; // 0x30
		::UnityEngine::GameObject* lack; // 0x38
		TweenAlpha* lackTweenAlpha; // 0x40

		::System::Void SetActiveEnableObject(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COSTELEMENT_SETACTIVEENABLEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveLackObject(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COSTELEMENT_SETACTIVELACKOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveDisableObject(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COSTELEMENT_SETACTIVEDISABLEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COSTELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayTween(TweenAlpha* arg)
		{
			((::System::Void(*)(TweenAlpha*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COSTELEMENT_PLAYTWEEN_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveUseObject(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_HUD_COSTELEMENT_SETACTIVEUSEOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

