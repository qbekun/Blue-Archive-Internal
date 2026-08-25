#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class TextureRegistry; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UIElements { class TextureId; }

#define UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA40D0B0)
#define UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0xA40D100)
#define UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_ALLOCANDACQUIREDYNAMIC_OFFSET UNITYSDK_OFFSET(0xA4064D0)
#define UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_UPDATEDYNAMIC_OFFSET UNITYSDK_OFFSET(0xA40D5A0)
#define UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_ALLOCANDACQUIRE_OFFSET UNITYSDK_OFFSET(0xA40D2B0)
#define UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_ACQUIRE_OFFSET UNITYSDK_OFFSET(0xA40D7F0)
#define UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_RELEASE_OFFSET UNITYSDK_OFFSET(0xA4068C0)
#define UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA40D970)
#define UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA40DA90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TextureRegistry_TypeDefinitionIndex = 30587;

	class TextureRegistry : public Il2CppObject
	{
	public:
		Il2CppObject* m_Textures; // 0x10
		Il2CppObject* m_TextureToId; // 0x18
		Il2CppObject* m_FreeIds; // 0x20
		::System::Int32 maxTextures; // 0x0
		::UnityEngine::UIElements::TextureRegistry* _instance_k__BackingField; // 0x0

		::UnityEngine::UIElements::TextureRegistry* get_instance()
		{
			return (return (::UnityEngine::UIElements::TextureRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_GET_INSTANCE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture* GetTexture(::UnityEngine::UIElements::TextureId* arg)
		{
			return (return (::UnityEngine::Texture*(*)(::UnityEngine::UIElements::TextureId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_GETTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::TextureId* AllocAndAcquireDynamic()
		{
			return (return (::UnityEngine::UIElements::TextureId*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_ALLOCANDACQUIREDYNAMIC_OFFSET))(nullptr);
		}

		::System::Void UpdateDynamic(::UnityEngine::UIElements::TextureId* arg, ::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextureId*, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_UPDATEDYNAMIC_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::TextureId* AllocAndAcquire(::UnityEngine::Texture* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::UIElements::TextureId*(*)(::UnityEngine::Texture*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_ALLOCANDACQUIRE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::TextureId* Acquire(::UnityEngine::Texture* arg)
		{
			return (return (::UnityEngine::UIElements::TextureId*(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_ACQUIRE_OFFSET))(arg, nullptr);
		}

		::System::Void Release(::UnityEngine::UIElements::TextureId* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextureId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEXTUREREGISTRY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

