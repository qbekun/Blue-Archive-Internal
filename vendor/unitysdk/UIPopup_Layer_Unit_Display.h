#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class UISprite;
class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }

#define UIPOPUP_LAYER_UNIT_DISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2703FF0)
#define UIPOPUP_LAYER_UNIT_DISPLAY_SET_OFFSET UNITYSDK_OFFSET(0x2704000)

	inline static constexpr unsigned int UIPopup_Layer_Unit_Display_TypeDefinitionIndex = 7088;

	class UIPopup_Layer_Unit_Display : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* iconTransform; // 0x10
		UISprite* iconSprite; // 0x18
		UITexture* bgTexture; // 0x20
		UILabel* titleLabel; // 0x28
		UILabel* descriptionLabel; // 0x30
		::UnityEngine::GameObject* eventTagObject; // 0x38
		::UnityEngine::GameObject* rewardTagObject; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LAYER_UNIT_DISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Set(::System::String* str, ::System::String* str2, ::System::String* str3, ::System::String* str4)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_LAYER_UNIT_DISPLAY_SET_OFFSET))(str, str2, str3, str4, nullptr);
		}

	};

