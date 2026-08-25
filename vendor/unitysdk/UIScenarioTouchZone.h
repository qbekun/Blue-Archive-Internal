#pragma once
#include "unitysdk.h"

class MXButton;
class UIWidget;
namespace UnityEngine { class Transform; }
class ScenarioScriptInfo;

#define UISCENARIOTOUCHZONE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27E9F50)
#define UISCENARIOTOUCHZONE_INITTOUCHZONE_OFFSET UNITYSDK_OFFSET(0x27E9F80)
#define UISCENARIOTOUCHZONE_GET_BUTTONTRANSFORM_OFFSET UNITYSDK_OFFSET(0x27EA0C0)
#define UISCENARIOTOUCHZONE_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x27EA220)
#define UISCENARIOTOUCHZONE_GET_BUTTONWIDGET_OFFSET UNITYSDK_OFFSET(0x27EA160)
#define UISCENARIOTOUCHZONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27EA2E0)
#define UISCENARIOTOUCHZONE_AWAKE_OFFSET UNITYSDK_OFFSET(0x27EA2F0)

	inline static constexpr unsigned int UIScenarioTouchZone_TypeDefinitionIndex = 7698;

	class UIScenarioTouchZone : public Il2CppObject
	{
	public:
		MXButton* button; // 0x18
		UIWidget* buttonWidget; // 0x20
		::UnityEngine::Transform* buttonTransform; // 0x28

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTOUCHZONE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void InitTouchZone(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTOUCHZONE_INITTOUCHZONE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_ButtonTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTOUCHZONE_GET_BUTTONTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTOUCHZONE_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		UIWidget* get_ButtonWidget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTOUCHZONE_GET_BUTTONWIDGET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTOUCHZONE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOTOUCHZONE_AWAKE_OFFSET))(nullptr);
		}

	};

