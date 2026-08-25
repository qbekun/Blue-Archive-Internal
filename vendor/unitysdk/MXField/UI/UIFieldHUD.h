#pragma once
#include "../../unitysdk.h"

class MXButton;
namespace MXField::UI { class UIFieldAnimationPlayer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class UIBase;
namespace MXField::UI { class UIFieldEpisodeComplete; }
namespace MXField::Dispatch { class DispatchType; }

#define MXFIELD_UI_UIFIELDHUD_ONCLICKENDDATE_OFFSET UNITYSDK_OFFSET(0xE90FD0)
#define MXFIELD_UI_UIFIELDHUD_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xE91320)
#define MXFIELD_UI_UIFIELDHUD_ONOPENED_OFFSET UNITYSDK_OFFSET(0xE915D0)
#define MXFIELD_UI_UIFIELDHUD_ONCLICKWARP_OFFSET UNITYSDK_OFFSET(0xE91E90)
#define MXFIELD_UI_UIFIELDHUD__ONCLICKQUIT_G__QUIT|24_1_OFFSET UNITYSDK_OFFSET(0xE91F40)
#define MXFIELD_UI_UIFIELDHUD__HANDLEENDREADY_B__17_1_OFFSET UNITYSDK_OFFSET(0xE91FD0)
#define MXFIELD_UI_UIFIELDHUD_HANDLEENDREADY_OFFSET UNITYSDK_OFFSET(0xE92060)
#define MXFIELD_UI_UIFIELDHUD_UPDATE_OFFSET UNITYSDK_OFFSET(0xE921E0)
#define MXFIELD_UI_UIFIELDHUD__HANDLEENDREADY_G__ACTIVEENDDATEBUTTON|17_0_OFFSET UNITYSDK_OFFSET(0xE92570)
#define MXFIELD_UI_UIFIELDHUD_ONCLICKWORLDMAP_OFFSET UNITYSDK_OFFSET(0xE92630)
#define MXFIELD_UI_UIFIELDHUD_SETVISIBILITY_OFFSET UNITYSDK_OFFSET(0xE91870)
#define MXFIELD_UI_UIFIELDHUD_HANDLEINTERACTIONFINISH_OFFSET UNITYSDK_OFFSET(0xE926D0)
#define MXFIELD_UI_UIFIELDHUD_START_OFFSET UNITYSDK_OFFSET(0xE92740)
#define MXFIELD_UI_UIFIELDHUD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE92F50)
#define MXFIELD_UI_UIFIELDHUD_GET_BLOCKPLAYERINPUT_OFFSET UNITYSDK_OFFSET(0xE931C0)
#define MXFIELD_UI_UIFIELDHUD_ONCLICKQUIT_OFFSET UNITYSDK_OFFSET(0xE91330)
#define MXFIELD_UI_UIFIELDHUD_.CTOR_OFFSET UNITYSDK_OFFSET(0xE931E0)
#define MXFIELD_UI_UIFIELDHUD_ONCLICKINVENTORY_OFFSET UNITYSDK_OFFSET(0xE931F0)
#define MXFIELD_UI_UIFIELDHUD_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xE93290)
#define MXFIELD_UI_UIFIELDHUD_CLEARGAMETYPE_OFFSET UNITYSDK_OFFSET(0xE924E0)
#define MXFIELD_UI_UIFIELDHUD_REFRESHNEWTAG_OFFSET UNITYSDK_OFFSET(0xE919A0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldHUD_TypeDefinitionIndex = 10689;

	class UIFieldHUD : public Il2CppObject
	{
	public:
		MXButton* inventoryButton; // 0xE8
		MXButton* quitButton; // 0xF0
		MXButton* worldMapButton; // 0xF8
		MXButton* warpButton; // 0x100
		::MXField::UI::UIFieldAnimationPlayer* animationPlayer; // 0x108
		::UnityEngine::GameObject* hudWidgetsRoot; // 0x110
		MXButton* EndDateButton; // 0x118
		::UnityEngine::Animation* EndDateButtonAni; // 0x120
		::UnityEngine::GameObject* WorldMapNewTag; // 0x128
		UIBase* _lastTopUI; // 0x130

		::System::Void OnClickEndDate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_ONCLICKENDDATE_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickWarp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_ONCLICKWARP_OFFSET))(nullptr);
		}

		::System::Void _OnClickQuit_g__Quit|24_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD__ONCLICKQUIT_G__QUIT|24_1_OFFSET))(nullptr);
		}

		::System::Void _HandleEndReady_b__17_1(::MXField::UI::UIFieldEpisodeComplete* arg)
		{
			((::System::Void(*)(::MXField::UI::UIFieldEpisodeComplete*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD__HANDLEENDREADY_B__17_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEndReady(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_HANDLEENDREADY_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_UPDATE_OFFSET))(nullptr);
		}

		::System::Void _HandleEndReady_g__ActiveEndDateButton|17_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD__HANDLEENDREADY_G__ACTIVEENDDATEBUTTON|17_0_OFFSET))(nullptr);
		}

		::System::Void OnClickWorldMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_ONCLICKWORLDMAP_OFFSET))(nullptr);
		}

		::System::Void SetVisibility(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_SETVISIBILITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleInteractionFinish(::MXField::Dispatch::DispatchType* arg)
		{
			return ((::System::Boolean(*)(::MXField::Dispatch::DispatchType*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_HANDLEINTERACTIONFINISH_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_START_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean get_BlockPlayerInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_GET_BLOCKPLAYERINPUT_OFFSET))(nullptr);
		}

		::System::Void OnClickQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_ONCLICKQUIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickInventory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_ONCLICKINVENTORY_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void ClearGameType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_CLEARGAMETYPE_OFFSET))(nullptr);
		}

		::System::Void RefreshNewTag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDHUD_REFRESHNEWTAG_OFFSET))(nullptr);
		}

	};
}

