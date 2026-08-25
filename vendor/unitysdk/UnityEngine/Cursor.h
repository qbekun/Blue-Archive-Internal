#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class CursorMode; }
namespace UnityEngine { class CursorLockMode; }
namespace UnityEngine { class Vector2&; }

#define UNITYENGINE_CURSOR_SETCURSOR_OFFSET UNITYSDK_OFFSET(0xA21DEA0)
#define UNITYENGINE_CURSOR_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0xA21DF40)
#define UNITYENGINE_CURSOR_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0xA21DF80)
#define UNITYENGINE_CURSOR_GET_LOCKSTATE_OFFSET UNITYSDK_OFFSET(0xA21DFC0)
#define UNITYENGINE_CURSOR_SET_LOCKSTATE_OFFSET UNITYSDK_OFFSET(0xA21E000)
#define UNITYENGINE_CURSOR_SETCURSOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA21DEF0)

namespace UnityEngine
{
	inline static constexpr unsigned int Cursor_TypeDefinitionIndex = 31084;

	class Cursor : public Il2CppObject
	{
	public:
		::System::Void SetCursor(::UnityEngine::Texture2D* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::CursorMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Vector2*, ::UnityEngine::CursorMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_SETCURSOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_visible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_GET_VISIBLE_OFFSET))(nullptr);
		}

		::System::Void set_visible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_SET_VISIBLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::CursorLockMode* get_lockState()
		{
			return (return (::UnityEngine::CursorLockMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_GET_LOCKSTATE_OFFSET))(nullptr);
		}

		::System::Void set_lockState(::UnityEngine::CursorLockMode* arg)
		{
			((::System::Void(*)(::UnityEngine::CursorLockMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_SET_LOCKSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetCursor_Injected(::UnityEngine::Texture2D* arg, ::UnityEngine::Vector2&* arg, ::UnityEngine::CursorMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Vector2&*, ::UnityEngine::CursorMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_SETCURSOR_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

