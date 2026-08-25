#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Sprite; }
namespace UnityEngine { class SpriteDrawMode; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class SpriteTileMode; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class SpriteMaskInteraction; }
namespace UnityEngine { class SpriteSortPoint; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class Color&; }
namespace UnityEngine { class Bounds&; }

#define UNITYENGINE_SPRITERENDERER_REGISTERSPRITECHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0xA241670)
#define UNITYENGINE_SPRITERENDERER_UNREGISTERSPRITECHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0xA241720)
#define UNITYENGINE_SPRITERENDERER_INVOKESPRITECHANGED_OFFSET UNITYSDK_OFFSET(0xA241770)
#define UNITYENGINE_SPRITERENDERER_GET_SHOULDSUPPORTTILING_OFFSET UNITYSDK_OFFSET(0xA241880)
#define UNITYENGINE_SPRITERENDERER_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0xA2418C0)
#define UNITYENGINE_SPRITERENDERER_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0xA241900)
#define UNITYENGINE_SPRITERENDERER_GET_DRAWMODE_OFFSET UNITYSDK_OFFSET(0xA241940)
#define UNITYENGINE_SPRITERENDERER_SET_DRAWMODE_OFFSET UNITYSDK_OFFSET(0xA241980)
#define UNITYENGINE_SPRITERENDERER_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xA2419C0)
#define UNITYENGINE_SPRITERENDERER_SET_SIZE_OFFSET UNITYSDK_OFFSET(0xA241A50)
#define UNITYENGINE_SPRITERENDERER_GET_ADAPTIVEMODETHRESHOLD_OFFSET UNITYSDK_OFFSET(0xA241AD0)
#define UNITYENGINE_SPRITERENDERER_SET_ADAPTIVEMODETHRESHOLD_OFFSET UNITYSDK_OFFSET(0xA241B10)
#define UNITYENGINE_SPRITERENDERER_GET_TILEMODE_OFFSET UNITYSDK_OFFSET(0xA241B60)
#define UNITYENGINE_SPRITERENDERER_SET_TILEMODE_OFFSET UNITYSDK_OFFSET(0xA241BA0)
#define UNITYENGINE_SPRITERENDERER_GET_COLOR_OFFSET UNITYSDK_OFFSET(0xA241BE0)
#define UNITYENGINE_SPRITERENDERER_SET_COLOR_OFFSET UNITYSDK_OFFSET(0xA241C70)
#define UNITYENGINE_SPRITERENDERER_GET_MASKINTERACTION_OFFSET UNITYSDK_OFFSET(0xA241CF0)
#define UNITYENGINE_SPRITERENDERER_SET_MASKINTERACTION_OFFSET UNITYSDK_OFFSET(0xA241D30)
#define UNITYENGINE_SPRITERENDERER_GET_FLIPX_OFFSET UNITYSDK_OFFSET(0xA241D70)
#define UNITYENGINE_SPRITERENDERER_SET_FLIPX_OFFSET UNITYSDK_OFFSET(0xA241DB0)
#define UNITYENGINE_SPRITERENDERER_GET_FLIPY_OFFSET UNITYSDK_OFFSET(0xA241DF0)
#define UNITYENGINE_SPRITERENDERER_SET_FLIPY_OFFSET UNITYSDK_OFFSET(0xA241E30)
#define UNITYENGINE_SPRITERENDERER_GET_SPRITESORTPOINT_OFFSET UNITYSDK_OFFSET(0xA241E70)
#define UNITYENGINE_SPRITERENDERER_SET_SPRITESORTPOINT_OFFSET UNITYSDK_OFFSET(0xA241EB0)
#define UNITYENGINE_SPRITERENDERER_INTERNAL_GETSPRITEBOUNDS_OFFSET UNITYSDK_OFFSET(0xA241EF0)
#define UNITYENGINE_SPRITERENDERER_GETSPRITEBOUNDS_OFFSET UNITYSDK_OFFSET(0xA241FB0)
#define UNITYENGINE_SPRITERENDERER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA242050)
#define UNITYENGINE_SPRITERENDERER_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA241A10)
#define UNITYENGINE_SPRITERENDERER_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA241A90)
#define UNITYENGINE_SPRITERENDERER_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA241C30)
#define UNITYENGINE_SPRITERENDERER_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA241CB0)
#define UNITYENGINE_SPRITERENDERER_INTERNAL_GETSPRITEBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA241F60)

namespace UnityEngine
{
	inline static constexpr unsigned int SpriteRenderer_TypeDefinitionIndex = 31218;

	class SpriteRenderer : public Il2CppObject
	{
	public:
		Il2CppObject* m_SpriteChangeEvent; // 0x18

		::System::Void RegisterSpriteChangeCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_REGISTERSPRITECHANGECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterSpriteChangeCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_UNREGISTERSPRITECHANGECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeSpriteChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_INVOKESPRITECHANGED_OFFSET))(nullptr);
		}

		::System::Boolean get_shouldSupportTiling()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_SHOULDSUPPORTTILING_OFFSET))(nullptr);
		}

		::UnityEngine::Sprite* get_sprite()
		{
			return (return (::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_SPRITE_OFFSET))(nullptr);
		}

		::System::Void set_sprite(::UnityEngine::Sprite* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_SPRITE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::SpriteDrawMode* get_drawMode()
		{
			return (return (::UnityEngine::SpriteDrawMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_DRAWMODE_OFFSET))(nullptr);
		}

		::System::Void set_drawMode(::UnityEngine::SpriteDrawMode* arg)
		{
			((::System::Void(*)(::UnityEngine::SpriteDrawMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_DRAWMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_size()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Void set_size(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::System::Single get_adaptiveModeThreshold()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_ADAPTIVEMODETHRESHOLD_OFFSET))(nullptr);
		}

		::System::Void set_adaptiveModeThreshold(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_ADAPTIVEMODETHRESHOLD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::SpriteTileMode* get_tileMode()
		{
			return (return (::UnityEngine::SpriteTileMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_TILEMODE_OFFSET))(nullptr);
		}

		::System::Void set_tileMode(::UnityEngine::SpriteTileMode* arg)
		{
			((::System::Void(*)(::UnityEngine::SpriteTileMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_TILEMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_color()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_COLOR_OFFSET))(nullptr);
		}

		::System::Void set_color(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_COLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::SpriteMaskInteraction* get_maskInteraction()
		{
			return (return (::UnityEngine::SpriteMaskInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_MASKINTERACTION_OFFSET))(nullptr);
		}

		::System::Void set_maskInteraction(::UnityEngine::SpriteMaskInteraction* arg)
		{
			((::System::Void(*)(::UnityEngine::SpriteMaskInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_MASKINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_flipX()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_FLIPX_OFFSET))(nullptr);
		}

		::System::Void set_flipX(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_FLIPX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_flipY()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_FLIPY_OFFSET))(nullptr);
		}

		::System::Void set_flipY(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_FLIPY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::SpriteSortPoint* get_spriteSortPoint()
		{
			return (return (::UnityEngine::SpriteSortPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_SPRITESORTPOINT_OFFSET))(nullptr);
		}

		::System::Void set_spriteSortPoint(::UnityEngine::SpriteSortPoint* arg)
		{
			((::System::Void(*)(::UnityEngine::SpriteSortPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_SPRITESORTPOINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Bounds* Internal_GetSpriteBounds(::UnityEngine::SpriteDrawMode* arg)
		{
			return (return (::UnityEngine::Bounds*(*)(::UnityEngine::SpriteDrawMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_INTERNAL_GETSPRITEBOUNDS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Bounds* GetSpriteBounds()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GETSPRITEBOUNDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_SIZE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_SIZE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_color_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_GET_COLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_color_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_SET_COLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_GetSpriteBounds_Injected(::UnityEngine::SpriteDrawMode* arg, ::UnityEngine::Bounds&* arg)
		{
			((::System::Void(*)(::UnityEngine::SpriteDrawMode*, ::UnityEngine::Bounds&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITERENDERER_INTERNAL_GETSPRITEBOUNDS_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

