#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class BoxCollider; }

#define UITUTORIALBUTTON_ONCLICK_OFFSET UNITYSDK_OFFSET(0xB7FF50)
#define UITUTORIALBUTTON_SETBUTTONBOXCOLLIDERENABLED_OFFSET UNITYSDK_OFFSET(0xB80280)
#define UITUTORIALBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB80300)
#define UITUTORIALBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xB80600)

	inline static constexpr unsigned int UITutorialButton_TypeDefinitionIndex = 8513;

	class UITutorialButton : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* obj; // 0x18
		::System::String* findObjName; // 0x20
		::System::Int32 buttonIndex; // 0x28
		::UnityEngine::Transform* find; // 0x30
		::UnityEngine::BoxCollider* boxCollider; // 0x38

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALBUTTON_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetButtonBoxColliderEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALBUTTON_SETBUTTONBOXCOLLIDERENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALBUTTON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITUTORIALBUTTON_.CTOR_OFFSET))(nullptr);
		}

	};

