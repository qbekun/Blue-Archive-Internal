#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class SpriteState; }

#define UNITYENGINE_UI_SPRITESTATE_GET_PRESSEDSPRITE_OFFSET UNITYSDK_OFFSET(0xA481540)
#define UNITYENGINE_UI_SPRITESTATE_SET_HIGHLIGHTEDSPRITE_OFFSET UNITYSDK_OFFSET(0xA481550)
#define UNITYENGINE_UI_SPRITESTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA481560)
#define UNITYENGINE_UI_SPRITESTATE_SET_PRESSEDSPRITE_OFFSET UNITYSDK_OFFSET(0xA481660)
#define UNITYENGINE_UI_SPRITESTATE_SET_SELECTEDSPRITE_OFFSET UNITYSDK_OFFSET(0xA481670)
#define UNITYENGINE_UI_SPRITESTATE_GET_SELECTEDSPRITE_OFFSET UNITYSDK_OFFSET(0xA481680)
#define UNITYENGINE_UI_SPRITESTATE_GET_HIGHLIGHTEDSPRITE_OFFSET UNITYSDK_OFFSET(0xA481690)
#define UNITYENGINE_UI_SPRITESTATE_SET_DISABLEDSPRITE_OFFSET UNITYSDK_OFFSET(0xA4816A0)
#define UNITYENGINE_UI_SPRITESTATE_GET_DISABLEDSPRITE_OFFSET UNITYSDK_OFFSET(0xA4816B0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int SpriteState_TypeDefinitionIndex = 34850;

	class SpriteState : public Il2CppObject
	{
	public:
		::UnityEngine::Sprite* m_HighlightedSprite; // 0x10
		::UnityEngine::Sprite* m_PressedSprite; // 0x18
		::UnityEngine::Sprite* m_SelectedSprite; // 0x20
		::UnityEngine::Sprite* m_DisabledSprite; // 0x28

		::UnityEngine::Sprite* get_pressedSprite()
		{
			return (return (::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_GET_PRESSEDSPRITE_OFFSET))(nullptr);
		}

		::System::Void set_highlightedSprite(::UnityEngine::Sprite* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_SET_HIGHLIGHTEDSPRITE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UI::SpriteState* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UI::SpriteState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void set_pressedSprite(::UnityEngine::Sprite* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_SET_PRESSEDSPRITE_OFFSET))(arg, nullptr);
		}

		::System::Void set_selectedSprite(::UnityEngine::Sprite* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_SET_SELECTEDSPRITE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Sprite* get_selectedSprite()
		{
			return (return (::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_GET_SELECTEDSPRITE_OFFSET))(nullptr);
		}

		::UnityEngine::Sprite* get_highlightedSprite()
		{
			return (return (::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_GET_HIGHLIGHTEDSPRITE_OFFSET))(nullptr);
		}

		::System::Void set_disabledSprite(::UnityEngine::Sprite* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_SET_DISABLEDSPRITE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Sprite* get_disabledSprite()
		{
			return (return (::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SPRITESTATE_GET_DISABLEDSPRITE_OFFSET))(nullptr);
		}

	};
}

