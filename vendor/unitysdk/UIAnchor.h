#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
class Side;
namespace UnityEngine { class Vector2; }
class UIWidget;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Rect; }
class UIRoot;

#define UIANCHOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x21C9DF0)
#define UIANCHOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x21CAEB0)
#define UIANCHOR_SCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x21CAFE0)
#define UIANCHOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x21CB000)
#define UIANCHOR_START_OFFSET UNITYSDK_OFFSET(0x21CB0A0)
#define UIANCHOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x21CB240)

	inline static constexpr unsigned int UIAnchor_TypeDefinitionIndex = 190;

	class UIAnchor : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* uiCamera; // 0x18
		::UnityEngine::GameObject* container; // 0x20
		Side* side; // 0x28
		::System::Boolean runOnlyOnce; // 0x2C
		::UnityEngine::Vector2* relativeOffset; // 0x30
		::UnityEngine::Vector2* pixelOffset; // 0x38
		UIWidget* widgetContainer; // 0x40
		::UnityEngine::Transform* mTrans; // 0x48
		::UnityEngine::Animation* mAnim; // 0x50
		::UnityEngine::Rect* mRect; // 0x58
		UIRoot* mRoot; // 0x68
		::System::Boolean mStarted; // 0x70

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIANCHOR_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIANCHOR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void ScreenSizeChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIANCHOR_SCREENSIZECHANGED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIANCHOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIANCHOR_START_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIANCHOR_ONENABLE_OFFSET))(nullptr);
		}

	};

