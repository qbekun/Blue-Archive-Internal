#pragma once
#include "../../unitysdk.h"

namespace NPA { class NXPToyUserInterfaceOption; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace NPA::Editor { class NXPCachedPrefab; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class Texture2D; }

#define NPA_EDITOR_NXPTOYUIMANAGER_CREATETOYUI_OFFSET UNITYSDK_OFFSET(0x9DA3240)
#define NPA_EDITOR_NXPTOYUIMANAGER_CREATETOYUI_OFFSET UNITYSDK_OFFSET(0x9DA32F0)
#define NPA_EDITOR_NXPTOYUIMANAGER_CREATETOYUI_OFFSET UNITYSDK_OFFSET(0x9DA33B0)
#define NPA_EDITOR_NXPTOYUIMANAGER_CREATETOYUI_OFFSET UNITYSDK_OFFSET(0x9DA3480)
#define NPA_EDITOR_NXPTOYUIMANAGER_CREATETOYUIWITHCACHEDPREFAB_OFFSET UNITYSDK_OFFSET(0x9DA3560)
#define NPA_EDITOR_NXPTOYUIMANAGER_CREATETOYUIWITHCACHEDPREFAB_OFFSET UNITYSDK_OFFSET(0x9DA3660)
#define NPA_EDITOR_NXPTOYUIMANAGER_ADDTEXTHANDLER_OFFSET UNITYSDK_OFFSET(0x9DA3770)
#define NPA_EDITOR_NXPTOYUIMANAGER_ADDVIRTUALKEYBOARDHANDLER_OFFSET UNITYSDK_OFFSET(0x9DA38C0)
#define NPA_EDITOR_NXPTOYUIMANAGER_SHOWALERT_OFFSET UNITYSDK_OFFSET(0x9DA3A30)
#define NPA_EDITOR_NXPTOYUIMANAGER_GENERATESPRITE_OFFSET UNITYSDK_OFFSET(0x9DA3C80)
#define NPA_EDITOR_NXPTOYUIMANAGER_SETIMAGESPRITE_OFFSET UNITYSDK_OFFSET(0x9DA3D80)
#define NPA_EDITOR_NXPTOYUIMANAGER_DESTROYIMAGETEXTURE_OFFSET UNITYSDK_OFFSET(0x9DA3E80)
#define NPA_EDITOR_NXPTOYUIMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DA3F80)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPToyUIManager_TypeDefinitionIndex = 26359;

	class NXPToyUIManager : public Il2CppObject
	{
	public:
		::System::String* ImagePath; // 0x0
		::NPA::NXPToyUserInterfaceOption* UserInterfaceOption; // 0x0

		::UnityEngine::GameObject* CreateToyUI(::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUIMANAGER_CREATETOYUI_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* CreateToyUI(::UnityEngine::GameObject* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUIMANAGER_CREATETOYUI_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::GameObject* CreateToyUI(::System::String* str)
		{
			return (return (::UnityEngine::GameObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUIMANAGER_CREATETOYUI_OFFSET))(str, nullptr);
		}

		::UnityEngine::GameObject* CreateToyUI(::System::String* str, ::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUIMANAGER_CREATETOYUI_OFFSET))(str, arg, nullptr);
		}

		::NPA::Editor::NXPCachedPrefab* CreateToyUIWithCachedPrefab(::System::String* str)
		{
			return (return (::NPA::Editor::NXPCachedPrefab*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUIMANAGER_CREATETOYUIWITHCACHEDPREFAB_OFFSET))(str, nullptr);
		}

		::NPA::Editor::NXPCachedPrefab* CreateToyUIWithCachedPrefab(::System::String* str, ::UnityEngine::Transform* arg)
		{
			return (return (::NPA::Editor::NXPCachedPrefab*(*)(::System::String*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUIMANAGER_CREATETOYUIWITHCACHEDPREFAB_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddTextHandler(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUIMANAGER_ADDTEXTHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void AddVirtualKeyboardHandler(::UnityEngine::UI::InputField* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::InputField*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUIMANAGER_ADDVIRTUALKEYBOARDHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void ShowAlert(::System::String* str, ::System::Action* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUIMANAGER_SHOWALERT_OFFSET))(str, arg, arg, nullptr);
		}

		::UnityEngine::Sprite* GenerateSprite(::System::String* str)
		{
			return (return (::UnityEngine::Sprite*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUIMANAGER_GENERATESPRITE_OFFSET))(str, nullptr);
		}

		::System::Void SetImageSprite(::UnityEngine::UI::Image* arg, ::UnityEngine::Texture2D* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Image*, ::UnityEngine::Texture2D*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUIMANAGER_SETIMAGESPRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DestroyImageTexture(::UnityEngine::UI::Image* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Image*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUIMANAGER_DESTROYIMAGETEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUIMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

