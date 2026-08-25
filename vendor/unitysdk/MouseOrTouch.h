#pragma once
#include "unitysdk.h"

namespace UnityEngine { class KeyCode; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
class ClickNotification;

#define MOUSEORTOUCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F7070)
#define MOUSEORTOUCH_GET_ISOVERUI_OFFSET UNITYSDK_OFFSET(0x22F7090)
#define MOUSEORTOUCH_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x22F71C0)

	inline static constexpr unsigned int MouseOrTouch_TypeDefinitionIndex = 197;

	class MouseOrTouch : public Il2CppObject
	{
	public:
		::UnityEngine::KeyCode* key; // 0x10
		::UnityEngine::Vector2* pos; // 0x14
		::UnityEngine::Vector2* lastPos; // 0x1C
		::UnityEngine::Vector2* delta; // 0x24
		::UnityEngine::Vector2* totalDelta; // 0x2C
		::UnityEngine::Camera* pressedCam; // 0x38
		::UnityEngine::GameObject* last; // 0x40
		::UnityEngine::GameObject* current; // 0x48
		::UnityEngine::GameObject* pressed; // 0x50
		::UnityEngine::GameObject* dragged; // 0x58
		::System::Single pressTime; // 0x60
		::System::Single clickTime; // 0x64
		ClickNotification* clickNotification; // 0x68
		::System::Boolean touchBegan; // 0x6C
		::System::Boolean pressStarted; // 0x6D
		::System::Boolean dragStarted; // 0x6E
		::System::Int32 ignoreDelta; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOUSEORTOUCH_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_isOverUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOUSEORTOUCH_GET_ISOVERUI_OFFSET))(nullptr);
		}

		::System::Single get_deltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOUSEORTOUCH_GET_DELTATIME_OFFSET))(nullptr);
		}

	};

