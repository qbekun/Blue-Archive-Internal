#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }

#define NPA_EDITOR_HELPER_OPENBROWSER_OFFSET UNITYSDK_OFFSET(0x9D4E3F0)
#define NPA_EDITOR_HELPER_SETIMAGESPRITE_OFFSET UNITYSDK_OFFSET(0x9D4E400)
#define NPA_EDITOR_HELPER_DESTROYIMAGETEXTURE_OFFSET UNITYSDK_OFFSET(0x9D4E500)
#define NPA_EDITOR_HELPER_GETEDITOROS_OFFSET UNITYSDK_OFFSET(0x9D4E600)
#define NPA_EDITOR_HELPER_ADDPOINTERDOWNLISTENER_OFFSET UNITYSDK_OFFSET(0x9D4E610)
#define NPA_EDITOR_HELPER_ADDPOINTERUPLISTENER_OFFSET UNITYSDK_OFFSET(0x9D4E800)
#define NPA_EDITOR_HELPER_ADDPOINTERENTERLISTENER_OFFSET UNITYSDK_OFFSET(0x9D4E9F0)
#define NPA_EDITOR_HELPER_ADDPOINTEREXITLISTENER_OFFSET UNITYSDK_OFFSET(0x9D4EBE0)
#define NPA_EDITOR_HELPER_GETORADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_HELPER_SETBUTTONTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x9D4EDD0)

namespace NPA::Editor
{
	inline static constexpr unsigned int Helper_TypeDefinitionIndex = 26173;

	class Helper : public Il2CppObject
	{
	public:
		::System::Void OpenBrowser(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HELPER_OPENBROWSER_OFFSET))(str, nullptr);
		}

		::System::Void SetImageSprite(::UnityEngine::UI::Image* arg, ::UnityEngine::Texture2D* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Image*, ::UnityEngine::Texture2D*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HELPER_SETIMAGESPRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DestroyImageTexture(::UnityEngine::UI::Image* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Image*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HELPER_DESTROYIMAGETEXTURE_OFFSET))(arg, nullptr);
		}

		::System::String* GetEditorOS()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HELPER_GETEDITOROS_OFFSET))(nullptr);
		}

		::System::Void AddPointerDownListener(::UnityEngine::Component* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::UnityEngine::Component*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HELPER_ADDPOINTERDOWNLISTENER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPointerUpListener(::UnityEngine::Component* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::UnityEngine::Component*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HELPER_ADDPOINTERUPLISTENER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPointerEnterListener(::UnityEngine::Component* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::UnityEngine::Component*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HELPER_ADDPOINTERENTERLISTENER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPointerExitListener(::UnityEngine::Component* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::UnityEngine::Component*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HELPER_ADDPOINTEREXITLISTENER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetOrAddComponent(::UnityEngine::GameObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HELPER_GETORADDCOMPONENT_OFFSET))(arg, nullptr);
		}

		::System::Void SetButtonTextColor(::UnityEngine::UI::Button* arg, ::System::Byte arg, ::System::Byte arg, ::System::Byte arg, ::System::Byte arg, ::System::Byte arg, ::System::Byte arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Button*, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_HELPER_SETBUTTONTEXTCOLOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

