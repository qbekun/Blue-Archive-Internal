#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class TextureRegistry; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UIElements { class TextureId&; }
namespace UnityEngine { class RectInt&; }
namespace UnityEngine::UIElements { class TextureId; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_UIELEMENTS_ATLASBASE_TRYGETATLAS_OFFSET UNITYSDK_OFFSET(0xA30C800)
#define UNITYENGINE_UIELEMENTS_ATLASBASE_RETURNATLAS_OFFSET UNITYSDK_OFFSET(0xA30C860)
#define UNITYENGINE_UIELEMENTS_ATLASBASE_RESET_OFFSET UNITYSDK_OFFSET(0xA30C870)
#define UNITYENGINE_UIELEMENTS_ATLASBASE_ONASSIGNEDTOPANEL_OFFSET UNITYSDK_OFFSET(0xA30C880)
#define UNITYENGINE_UIELEMENTS_ATLASBASE_ONREMOVEDFROMPANEL_OFFSET UNITYSDK_OFFSET(0xA30C890)
#define UNITYENGINE_UIELEMENTS_ATLASBASE_ONUPDATEDYNAMICTEXTURES_OFFSET UNITYSDK_OFFSET(0xA30C8A0)
#define UNITYENGINE_UIELEMENTS_ATLASBASE_INVOKEASSIGNEDTOPANEL_OFFSET UNITYSDK_OFFSET(0xA30C8B0)
#define UNITYENGINE_UIELEMENTS_ATLASBASE_INVOKEREMOVEDFROMPANEL_OFFSET UNITYSDK_OFFSET(0xA30C8D0)
#define UNITYENGINE_UIELEMENTS_ATLASBASE_INVOKEUPDATEDYNAMICTEXTURES_OFFSET UNITYSDK_OFFSET(0xA30C8F0)
#define UNITYENGINE_UIELEMENTS_ATLASBASE_REPAINTTEXTUREDELEMENTS_OFFSET UNITYSDK_OFFSET(0xA30C910)
#define UNITYENGINE_UIELEMENTS_ATLASBASE_SETDYNAMICTEXTURE_OFFSET UNITYSDK_OFFSET(0xA30C9E0)
#define UNITYENGINE_UIELEMENTS_ATLASBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA30CA00)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int AtlasBase_TypeDefinitionIndex = 30060;

	class AtlasBase : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::TextureRegistry* textureRegistry; // 0x10

		::System::Boolean TryGetAtlas(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::Texture2D* arg, ::UnityEngine::UIElements::TextureId&* arg, ::UnityEngine::RectInt&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Texture2D*, ::UnityEngine::UIElements::TextureId&*, ::UnityEngine::RectInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ATLASBASE_TRYGETATLAS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ReturnAtlas(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::Texture2D* arg, ::UnityEngine::UIElements::TextureId* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Texture2D*, ::UnityEngine::UIElements::TextureId*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ATLASBASE_RETURNATLAS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ATLASBASE_RESET_OFFSET))(nullptr);
		}

		::System::Void OnAssignedToPanel(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ATLASBASE_ONASSIGNEDTOPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnRemovedFromPanel(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ATLASBASE_ONREMOVEDFROMPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnUpdateDynamicTextures(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ATLASBASE_ONUPDATEDYNAMICTEXTURES_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeAssignedToPanel(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ATLASBASE_INVOKEASSIGNEDTOPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeRemovedFromPanel(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ATLASBASE_INVOKEREMOVEDFROMPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeUpdateDynamicTextures(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ATLASBASE_INVOKEUPDATEDYNAMICTEXTURES_OFFSET))(arg, nullptr);
		}

		::System::Void RepaintTexturedElements(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ATLASBASE_REPAINTTEXTUREDELEMENTS_OFFSET))(arg, nullptr);
		}

		::System::Void SetDynamicTexture(::UnityEngine::UIElements::TextureId* arg, ::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::TextureId*, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ATLASBASE_SETDYNAMICTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ATLASBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

