#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Toggle; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class SpriteState; }

#define NPA_EDITOR_BOARD_NXPTODAYVIEW_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C5DBF0)
#define NPA_EDITOR_BOARD_NXPTODAYVIEW_SETUSEDONOTSHOWTODAY_OFFSET UNITYSDK_OFFSET(0x9C5DC10)
#define NPA_EDITOR_BOARD_NXPTODAYVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9C5DC20)
#define NPA_EDITOR_BOARD_NXPTODAYVIEW_SETDONOTSHOWTODAYVISIBLE_OFFSET UNITYSDK_OFFSET(0x9C56C80)
#define NPA_EDITOR_BOARD_NXPTODAYVIEW_GETSPRITERESOURCE_OFFSET UNITYSDK_OFFSET(0x9C5E9E0)
#define NPA_EDITOR_BOARD_NXPTODAYVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C569C0)
#define NPA_EDITOR_BOARD_NXPTODAYVIEW__LOAD_B__17_0_OFFSET UNITYSDK_OFFSET(0x9C5EA70)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPTodayView_TypeDefinitionIndex = 26906;

	class NXPTodayView : public Il2CppObject
	{
	public:
		::System::String* IconCheckEnabled; // 0x0
		::System::String* IconCheckPressed; // 0x0
		::System::String* IconCheckDisabled; // 0x0
		::System::String* IconUncheckEnabled; // 0x0
		::System::String* IconUncheckPressed; // 0x0
		::System::String* IconUncheckDisabled; // 0x0
		::System::String* todayViewPrefabUrl; // 0xC0
		::System::Boolean useDoNotShowToday; // 0xC8
		::UnityEngine::UI::Toggle* doNotShowTodayToggle; // 0xD0
		::UnityEngine::UI::Text* doNotShowTodayText; // 0xD8
		::UnityEngine::Sprite* checkDefaultSprite; // 0xE0
		::UnityEngine::UI::SpriteState* checkSpriteState; // 0xE8
		::UnityEngine::Sprite* uncheckDefaultSprite; // 0x108
		::UnityEngine::UI::SpriteState* uncheckSpriteState; // 0x110
		Il2CppObject* clickCallback; // 0x130

		::System::Void SetClickCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYVIEW_SETCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetUseDoNotShowToday(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYVIEW_SETUSEDONOTSHOWTODAY_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void SetDoNotShowTodayVisible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYVIEW_SETDONOTSHOWTODAYVISIBLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Sprite* GetSpriteResource(::System::String* str)
		{
			return (return (::UnityEngine::Sprite*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYVIEW_GETSPRITERESOURCE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Load_b__17_0(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPTODAYVIEW__LOAD_B__17_0_OFFSET))(arg, nullptr);
		}

	};
}

