#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Sprite; }

#define UNITYENGINE_U2D_SPRITEATLAS_GET_SPRITECOUNT_OFFSET UNITYSDK_OFFSET(0xA244AF0)
#define UNITYENGINE_U2D_SPRITEATLAS_CANBINDTO_OFFSET UNITYSDK_OFFSET(0xA244B30)
#define UNITYENGINE_U2D_SPRITEATLAS_GETSPRITE_OFFSET UNITYSDK_OFFSET(0xA244B70)
#define UNITYENGINE_U2D_SPRITEATLAS_GETSPRITES_OFFSET UNITYSDK_OFFSET(0xA244BB0)
#define UNITYENGINE_U2D_SPRITEATLAS_GETSPRITESSCRIPTING_OFFSET UNITYSDK_OFFSET(0xA244BF0)
#define UNITYENGINE_U2D_SPRITEATLAS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA244C30)

namespace UnityEngine::U2D
{
	inline static constexpr unsigned int SpriteAtlas_TypeDefinitionIndex = 31232;

	class SpriteAtlas : public Il2CppObject
	{
	public:
		::System::Int32 get_spriteCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GET_SPRITECOUNT_OFFSET))(nullptr);
		}

		::System::Boolean CanBindTo(::UnityEngine::Sprite* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_CANBINDTO_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Sprite* GetSprite(::System::String* str)
		{
			return (return (::UnityEngine::Sprite*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GETSPRITE_OFFSET))(str, nullptr);
		}

		::System::Int32 GetSprites(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GETSPRITES_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSpritesScripting(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_GETSPRITESSCRIPTING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_U2D_SPRITEATLAS_.CTOR_OFFSET))(nullptr);
		}

	};
}

