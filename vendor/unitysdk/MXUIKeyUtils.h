#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class KeyCode; }
class UIBase;
namespace UnityEngine { class Transform; }

#define MXUIKEYUTILS_GETUIWIDGETSUSESHORTCUT_OFFSET UNITYSDK_OFFSET(0x2191DF0)
#define MXUIKEYUTILS_ISTUTORIALSTATE_OFFSET UNITYSDK_OFFSET(0x2191F50)
#define MXUIKEYUTILS_GETGAMEOBJECTUSEPATHINPREFAB_OFFSET UNITYSDK_OFFSET(0x2192050)
#define MXUIKEYUTILS_NEEDENABLEOBJECT_OFFSET UNITYSDK_OFFSET(0x2190CF0)
#define MXUIKEYUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2192340)
#define MXUIKEYUTILS_GETINPUTKEYCODE_OFFSET UNITYSDK_OFFSET(0x2192960)
#define MXUIKEYUTILS_MXUIKEYPLAYERPREFKEY_OFFSET UNITYSDK_OFFSET(0x2192CF0)
#define MXUIKEYUTILS_GETTOPUI_OFFSET UNITYSDK_OFFSET(0x2192D30)
#define MXUIKEYUTILS_BUILDHIERARCHYPATH_OFFSET UNITYSDK_OFFSET(0x2192270)
#define MXUIKEYUTILS_GETSHORTCUTSTARTDEPTH_OFFSET UNITYSDK_OFFSET(0x2190EC0)
#define MXUIKEYUTILS_GETHIERARCHYPATHINUI_OFFSET UNITYSDK_OFFSET(0x21930C0)

	inline static constexpr unsigned int MXUIKeyUtils_TypeDefinitionIndex = 4109;

	class MXUIKeyUtils : public Il2CppObject
	{
	public:
		::System::String* MXUIKeyContainerPath; // 0x0
		::System::String* Path; // 0x8
		Il2CppObject* _exceptUI; // 0x10
		Il2CppObject* _exceptUIStack; // 0x18

		Il2CppObject* GetUIWidgetsUseShortcut(::UnityEngine::GameObject* arg)
		{
			return ((Il2CppObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYUTILS_GETUIWIDGETSUSESHORTCUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTutorialState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYUTILS_ISTUTORIALSTATE_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* GetGameObjectUsePathInPrefab(::System::String* str, ::UnityEngine::GameObject* arg)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYUTILS_GETGAMEOBJECTUSEPATHINPREFAB_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean NeedEnableObject(::UnityEngine::GameObject* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYUTILS_NEEDENABLEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYUTILS_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::KeyCode* GetInputKeyCode()
		{
			return ((::UnityEngine::KeyCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYUTILS_GETINPUTKEYCODE_OFFSET))(nullptr);
		}

		::System::String* MXUIKeyPlayerPrefKey(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYUTILS_MXUIKEYPLAYERPREFKEY_OFFSET))(str, nullptr);
		}

		UIBase* GetTopUI()
		{
			return ((UIBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYUTILS_GETTOPUI_OFFSET))(nullptr);
		}

		::System::String* BuildHierarchyPath(::UnityEngine::Transform* arg)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYUTILS_BUILDHIERARCHYPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetShortcutStartDepth(::UnityEngine::GameObject* arg)
		{
			return ((::System::Int32(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYUTILS_GETSHORTCUTSTARTDEPTH_OFFSET))(arg, nullptr);
		}

		::System::String* GetHierarchyPathInUI(::System::String* str, ::UnityEngine::Transform* arg)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MXUIKEYUTILS_GETHIERARCHYPATHINUI_OFFSET))(str, arg, nullptr);
		}

	};

