#pragma once
#include "../../unitysdk.h"

class UIAdmissionDisplay;
class MXButton;
class UIWidget;
class UILabel;
namespace UnityEngine { class Color; }
namespace MXField::Talk { class FieldAIConversant; }
namespace MXField::Talk { class FieldInteractionStatus; }
namespace MXField::Shared::Data { class FieldInteractionInfo; }
class UIPopup_System;

#define MXFIELD_UI_FIELDINTERACTIONBUTTON_START_OFFSET UNITYSDK_OFFSET(0xE992F0)
#define MXFIELD_UI_FIELDINTERACTIONBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xE99410)
#define MXFIELD_UI_FIELDINTERACTIONBUTTON_INITADMISSIONDISPLAY_OFFSET UNITYSDK_OFFSET(0xE99420)
#define MXFIELD_UI_FIELDINTERACTIONBUTTON__ONCLICKTHIS_B__15_0_OFFSET UNITYSDK_OFFSET(0xE99640)
#define MXFIELD_UI_FIELDINTERACTIONBUTTON_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE99710)
#define MXFIELD_UI_FIELDINTERACTIONBUTTON_ONCLICKTHIS_OFFSET UNITYSDK_OFFSET(0xE99A30)
#define MXFIELD_UI_FIELDINTERACTIONBUTTON_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE99DD0)
#define MXFIELD_UI_FIELDINTERACTIONBUTTON_GET_HASCOST_OFFSET UNITYSDK_OFFSET(0xE995B0)

namespace MXField::UI
{
	inline static constexpr unsigned int FieldInteractionButton_TypeDefinitionIndex = 10711;

	class FieldInteractionButton : public Il2CppObject
	{
	public:
		UIAdmissionDisplay* admissionDisplay; // 0x18
		MXButton* button; // 0x20
		UIWidget* widget; // 0x28
		UILabel* label; // 0x30
		::UnityEngine::Color* progressColor; // 0x38
		::UnityEngine::Color* historyColor; // 0x48
		::MXField::Talk::FieldAIConversant* aiConversant; // 0x58
		::MXField::Talk::FieldInteractionStatus* interactionStatus; // 0x60
		::MXField::Shared::Data::FieldInteractionInfo* displayInteractionInfo; // 0x68
		::MXField::Shared::Data::FieldInteractionInfo* executeInteractionInfo; // 0x70

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTIONBUTTON_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTIONBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitAdmissionDisplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTIONBUTTON_INITADMISSIONDISPLAY_OFFSET))(nullptr);
		}

		::System::Void _OnClickThis_b__15_0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTIONBUTTON__ONCLICKTHIS_B__15_0_OFFSET))(arg, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTIONBUTTON_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void OnClickThis()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTIONBUTTON_ONCLICKTHIS_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXField::Talk::FieldAIConversant* arg, ::MXField::Talk::FieldInteractionStatus* arg2)
		{
			((::System::Void(*)(::MXField::Talk::FieldAIConversant*, ::MXField::Talk::FieldInteractionStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTIONBUTTON_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_HasCost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDINTERACTIONBUTTON_GET_HASCOST_OFFSET))(nullptr);
		}

	};
}

