#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class SpriteRenderer&; }
namespace UnityEngine { class Sprite&; }

#define ANIMANCER_SPRITERENDERERTEXTURESWAP_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0x4BD400)
#define ANIMANCER_SPRITERENDERERTEXTURESWAP_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x4BD410)
#define ANIMANCER_SPRITERENDERERTEXTURESWAP_SET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x4BD420)
#define ANIMANCER_SPRITERENDERERTEXTURESWAP_REFRESHSPRITEMAP_OFFSET UNITYSDK_OFFSET(0x4BD490)
#define ANIMANCER_SPRITERENDERERTEXTURESWAP_AWAKE_OFFSET UNITYSDK_OFFSET(0x4BD660)
#define ANIMANCER_SPRITERENDERERTEXTURESWAP_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x4BD6C0)
#define ANIMANCER_SPRITERENDERERTEXTURESWAP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x4BD720)
#define ANIMANCER_SPRITERENDERERTEXTURESWAP_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x4BDAF0)
#define ANIMANCER_SPRITERENDERERTEXTURESWAP_GETSPRITEMAP_OFFSET UNITYSDK_OFFSET(0x4BD4F0)
#define ANIMANCER_SPRITERENDERERTEXTURESWAP_TRYSWAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x4BD7F0)
#define ANIMANCER_SPRITERENDERERTEXTURESWAP_DESTROYSPRITES_OFFSET UNITYSDK_OFFSET(0x4BDB40)
#define ANIMANCER_SPRITERENDERERTEXTURESWAP_DESTROYSPRITES_OFFSET UNITYSDK_OFFSET(0x4BDD20)
#define ANIMANCER_SPRITERENDERERTEXTURESWAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BDE30)
#define ANIMANCER_SPRITERENDERERTEXTURESWAP_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4BDE40)

namespace Animancer
{
	inline static constexpr unsigned int SpriteRendererTextureSwap_TypeDefinitionIndex = 35208;

	class SpriteRendererTextureSwap : public Il2CppObject
	{
	public:
		::System::Int32 DefaultExecutionOrder; // 0x0
		::UnityEngine::SpriteRenderer* _Renderer; // 0x18
		::UnityEngine::Texture2D* _Texture; // 0x20
		Il2CppObject* _SpriteMap; // 0x28
		Il2CppObject* TextureToSpriteMap; // 0x0

		::UnityEngine::SpriteRenderer&* get_Renderer()
		{
			return (return (::UnityEngine::SpriteRenderer&*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SPRITERENDERERTEXTURESWAP_GET_RENDERER_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_Texture()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SPRITERENDERERTEXTURESWAP_GET_TEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_Texture(::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SPRITERENDERERTEXTURESWAP_SET_TEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSpriteMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SPRITERENDERERTEXTURESWAP_REFRESHSPRITEMAP_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SPRITERENDERERTEXTURESWAP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SPRITERENDERERTEXTURESWAP_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SPRITERENDERERTEXTURESWAP_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void ClearCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SPRITERENDERERTEXTURESWAP_CLEARCACHE_OFFSET))(nullptr);
		}

		Il2CppObject* GetSpriteMap(::UnityEngine::Texture2D* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SPRITERENDERERTEXTURESWAP_GETSPRITEMAP_OFFSET))(arg, nullptr);
		}

		::System::Boolean TrySwapTexture(Il2CppObject* arg, ::UnityEngine::Texture2D* arg, ::UnityEngine::Sprite&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::UnityEngine::Texture2D*, ::UnityEngine::Sprite&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SPRITERENDERERTEXTURESWAP_TRYSWAPTEXTURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DestroySprites(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SPRITERENDERERTEXTURESWAP_DESTROYSPRITES_OFFSET))(arg, nullptr);
		}

		::System::Void DestroySprites(::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SPRITERENDERERTEXTURESWAP_DESTROYSPRITES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SPRITERENDERERTEXTURESWAP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SPRITERENDERERTEXTURESWAP_.CCTOR_OFFSET))(nullptr);
		}

	};
}

