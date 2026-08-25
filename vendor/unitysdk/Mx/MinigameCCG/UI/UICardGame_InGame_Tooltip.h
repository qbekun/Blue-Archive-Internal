#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class Camera; }
namespace MX::MinigameCCG { class CCGEntity; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Transform; }

#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_SETDATAFROMUI_OFFSET UNITYSDK_OFFSET(0x1DF0FC0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_PLAYOPENANIMATIONFROM2DENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1DF10A0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_SETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP__PLAYOPENANIMATIONFROM2DENVIRONMENT_G__ISINSIDEBOX|11_0_OFFSET UNITYSDK_OFFSET(0x1DF11C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_PLAYOPENANIMATIONFROM3DENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1DF13F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP__PLAYOPENANIMATIONFROM3DENVIRONMENT_G__ISINSIDEBOX|13_0_OFFSET UNITYSDK_OFFSET(0x1DF1860)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x1DF1A90)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_SETDATAFROM3DOBJECT_OFFSET UNITYSDK_OFFSET(0x1DF1CC0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x1DF1DD0)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1E30)
#define MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1DF16A0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_InGame_Tooltip_TypeDefinitionIndex = 20711;

	class UICardGame_InGame_Tooltip : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* anim; // 0xD8
		UISprite* leftFrame; // 0xE0
		UISprite* rightFrame; // 0xE8
		::System::String* curAnimationClip; // 0xF0
		::System::String* leftOpenAnimationClip; // 0xF8
		::System::String* rightOpenAnimationClip; // 0x100
		::UnityEngine::Camera* cam; // 0x108
		::System::Boolean isEnteredFromUI; // 0x110

		::System::Void SetDataFromUI(::MX::MinigameCCG::CCGEntity* arg, UIWidget* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_SETDATAFROMUI_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PlayOpenAnimationFrom2dEnvironment(UIWidget* arg)
		{
			((::System::Void(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_PLAYOPENANIMATIONFROM2DENVIRONMENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean _PlayOpenAnimationFrom2dEnvironment_g__IsInsideBox|11_0(UIWidget* arg, UIWidget* arg)
		{
			return (return (::System::Boolean(*)(UIWidget*, UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP__PLAYOPENANIMATIONFROM2DENVIRONMENT_G__ISINSIDEBOX|11_0_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PlayOpenAnimationFrom3dEnvironment(::UnityEngine::Bounds* arg, ::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Bounds*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_PLAYOPENANIMATIONFROM3DENVIRONMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean _PlayOpenAnimationFrom3dEnvironment_g__IsInsideBox|13_0(::UnityEngine::Bounds* arg, ::UnityEngine::Bounds* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Bounds*, ::UnityEngine::Bounds*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP__PLAYOPENANIMATIONFROM3DENVIRONMENT_G__ISINSIDEBOX|13_0_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetDataFrom3DObject(CCGVisualEntity* arg)
		{
			((::System::Void(*)(CCGVisualEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_SETDATAFROM3DOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Bounds* GetBounds(UIWidget* arg)
		{
			return (return (::UnityEngine::Bounds*(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_INGAME_TOOLTIP_GETBOUNDS_OFFSET))(arg, nullptr);
		}

	};
}

