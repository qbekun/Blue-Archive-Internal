#pragma once
#include "unitysdk.h"

class UIAcademyMessangerMessageUnit;
class UIAcademyMessangerStudentElement;
class UIAcademyMessangerMessageElement;
namespace UnityEngine { class GameObject; }
class UIAcademyMessangerFavorScheduleElement;
class UIWidget;
namespace MX::Data { class AcademyMessageData; }
class MomotalkHistory;
namespace FlatData { class AcademyMessageConditions; }

#define UIACADEMYMESSANGERANSWERELEMENT_SET_BG_OFFSET UNITYSDK_OFFSET(0x219F4E0)
#define UIACADEMYMESSANGERANSWERELEMENT_ONSELECTMESSAGE_OFFSET UNITYSDK_OFFSET(0x219F4F0)
#define UIACADEMYMESSANGERANSWERELEMENT_ONSELECT1_OFFSET UNITYSDK_OFFSET(0x219F5F0)
#define UIACADEMYMESSANGERANSWERELEMENT_GET_BG_OFFSET UNITYSDK_OFFSET(0x219F650)
#define UIACADEMYMESSANGERANSWERELEMENT_SETUI_OFFSET UNITYSDK_OFFSET(0x219F660)
#define UIACADEMYMESSANGERANSWERELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21A07F0)
#define UIACADEMYMESSANGERANSWERELEMENT_SETSELECTIONS_OFFSET UNITYSDK_OFFSET(0x219F900)
#define UIACADEMYMESSANGERANSWERELEMENT_GET_BUTTONS_OFFSET UNITYSDK_OFFSET(0x21A0880)
#define UIACADEMYMESSANGERANSWERELEMENT_ONSELECT0_OFFSET UNITYSDK_OFFSET(0x21A08E0)

	inline static constexpr unsigned int UIAcademyMessangerAnswerElement_TypeDefinitionIndex = 4147;

	class UIAcademyMessangerAnswerElement : public Il2CppObject
	{
	public:
		UIAcademyMessangerMessageUnit* messageUnit; // 0x18
		UIAcademyMessangerStudentElement* studentMessages; // 0x20
		UIAcademyMessangerMessageElement* userMessage; // 0x28
		::UnityEngine::GameObject* selectionRoot; // 0x30
		::Il2CppArray<::System::Object*>* buttons; // 0x38
		::Il2CppArray<::System::Object*>* selectionBgs; // 0x40
		UIAcademyMessangerFavorScheduleElement* favorElement; // 0x48
		::System::Int32 oneButtonHeight; // 0x50
		::System::Int32 twoButtonHeight; // 0x54
		UIWidget* _Bg_k__BackingField; // 0x58
		Il2CppObject* selectionMessages; // 0x60

		::System::Void set_Bg(UIWidget* arg)
		{
			((::System::Void(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERANSWERELEMENT_SET_BG_OFFSET))(arg, nullptr);
		}

		::System::Void OnSelectMessage(::MX::Data::AcademyMessageData* arg)
		{
			((::System::Void(*)(::MX::Data::AcademyMessageData*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERANSWERELEMENT_ONSELECTMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSelect1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERANSWERELEMENT_ONSELECT1_OFFSET))(nullptr);
		}

		UIWidget* get_Bg()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERANSWERELEMENT_GET_BG_OFFSET))(nullptr);
		}

		::System::Void SetUI(MomotalkHistory* arg)
		{
			((::System::Void(*)(MomotalkHistory*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERANSWERELEMENT_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERANSWERELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSelections(Il2CppObject* arg, ::FlatData::AcademyMessageConditions* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::FlatData::AcademyMessageConditions*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERANSWERELEMENT_SETSELECTIONS_OFFSET))(arg, arg2, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Buttons()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERANSWERELEMENT_GET_BUTTONS_OFFSET))(nullptr);
		}

		::System::Void OnSelect0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERANSWERELEMENT_ONSELECT0_OFFSET))(nullptr);
		}

	};

