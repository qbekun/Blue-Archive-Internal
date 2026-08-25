#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
class Style;
namespace UnityEngine { class Vector2; }
class UIWidget;
namespace UnityEngine { class Transform; }
class UISprite;
class UIPanel;
class UIRoot;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Rect; }

#define UISTRETCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x243F580)
#define UISTRETCH_SCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x243F650)
#define UISTRETCH_AWAKE_OFFSET UNITYSDK_OFFSET(0x2440550)
#define UISTRETCH_UPDATE_OFFSET UNITYSDK_OFFSET(0x243F670)
#define UISTRETCH_START_OFFSET UNITYSDK_OFFSET(0x2440750)
#define UISTRETCH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2440900)

	inline static constexpr unsigned int UIStretch_TypeDefinitionIndex = 263;

	class UIStretch : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* uiCamera; // 0x18
		::UnityEngine::GameObject* container; // 0x20
		Style* style; // 0x28
		::System::Boolean runOnlyOnce; // 0x2C
		::UnityEngine::Vector2* relativeSize; // 0x30
		::UnityEngine::Vector2* initialSize; // 0x38
		::UnityEngine::Vector2* borderPadding; // 0x40
		UIWidget* widgetContainer; // 0x48
		::UnityEngine::Transform* mTrans; // 0x50
		UIWidget* mWidget; // 0x58
		UISprite* mSprite; // 0x60
		UIPanel* mPanel; // 0x68
		UIRoot* mRoot; // 0x70
		::UnityEngine::Animation* mAnim; // 0x78
		::UnityEngine::Rect* mRect; // 0x80
		::System::Boolean mStarted; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTRETCH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ScreenSizeChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTRETCH_SCREENSIZECHANGED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTRETCH_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTRETCH_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTRETCH_START_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTRETCH_ONDESTROY_OFFSET))(nullptr);
		}

	};

