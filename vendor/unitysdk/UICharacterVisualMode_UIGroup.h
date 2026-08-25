#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITexture;
class UIWidget;
namespace UnityEngine { class Transform; }
class MXButton;

#define UICHARACTERVISUALMODE_UIGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x22C38A0)

	inline static constexpr unsigned int UICharacterVisualMode_UIGroup_TypeDefinitionIndex = 4800;

	class UICharacterVisualMode_UIGroup : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* Root; // 0x10
		UITexture* backgroundTexture; // 0x18
		UIWidget* PortraitOffsetWidget; // 0x20
		::UnityEngine::Transform* PortraitPos; // 0x28
		MXButton* resetButton; // 0x30
		::UnityEngine::GameObject* resetDisableButton; // 0x38
		MXButton* ShowButton; // 0x40
		MXButton* HideButton; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERVISUALMODE_UIGROUP_.CTOR_OFFSET))(nullptr);
		}

	};

