#pragma once
#include "unitysdk.h"

class UIAcademyMessangerMessageUnit;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class UIWidget;
class UIAcademyMessangerAnswerElement;
class UIAcademyMessangerFavorScheduleElement;
class UICharacterThumbnail;
class UILabel;
namespace UnityEngine { class Coroutine; }
class MomotalkHistory;
namespace MX::Data { class AcademyMessageData; }

#define UIACADEMYMESSANGERSTUDENTELEMENT_SET_LASTMESSAGEBG_OFFSET UNITYSDK_OFFSET(0x21A8F60)
#define UIACADEMYMESSANGERSTUDENTELEMENT_GET_STUDENTMESSAGES_OFFSET UNITYSDK_OFFSET(0x21A8F70)
#define UIACADEMYMESSANGERSTUDENTELEMENT_GET_STUDENTIMAGES_OFFSET UNITYSDK_OFFSET(0x21A8FD0)
#define UIACADEMYMESSANGERSTUDENTELEMENT_SETUI_OFFSET UNITYSDK_OFFSET(0x21A72F0)
#define UIACADEMYMESSANGERSTUDENTELEMENT_PLAYINPUT_OFFSET UNITYSDK_OFFSET(0x21A92E0)
#define UIACADEMYMESSANGERSTUDENTELEMENT_GET_LASTMESSAGEBG_OFFSET UNITYSDK_OFFSET(0x21A9390)
#define UIACADEMYMESSANGERSTUDENTELEMENT_SETUNIT_OFFSET UNITYSDK_OFFSET(0x21A9030)
#define UIACADEMYMESSANGERSTUDENTELEMENT_GET_STUDENTINPUTANI_OFFSET UNITYSDK_OFFSET(0x21A93A0)
#define UIACADEMYMESSANGERSTUDENTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21A9440)

	inline static constexpr unsigned int UIAcademyMessangerStudentElement_TypeDefinitionIndex = 4168;

	class UIAcademyMessangerStudentElement : public Il2CppObject
	{
	public:
		UIAcademyMessangerMessageUnit* messageUnit; // 0x18
		::Il2CppArray<::System::Object*>* studentMessages; // 0x20
		::Il2CppArray<::System::Object*>* studentImages; // 0x28
		::UnityEngine::GameObject* studentInputGo; // 0x30
		::UnityEngine::Animation* studentInputAni; // 0x38
		UIWidget* studentInputBg; // 0x40
		UIAcademyMessangerAnswerElement* answerElement; // 0x48
		UIAcademyMessangerFavorScheduleElement* favorElement; // 0x50
		UICharacterThumbnail* thumbnail; // 0x58
		UILabel* characterName; // 0x60
		::System::Int64 MessageGroupId; // 0x68
		Il2CppObject* groupMessages; // 0x70
		::System::Int32 Height; // 0x78
		UIWidget* _LastMessageBg_k__BackingField; // 0x80
		::System::Int32 index; // 0x88
		::System::Int32 textIndex; // 0x8C
		::System::Int32 imageIndex; // 0x90
		::System::Int32 widgetDelta_BetweenMessage; // 0x94
		::System::Int32 widgetDelta_Default; // 0x98
		::UnityEngine::Coroutine* playCoroutine; // 0xA0

		::System::Void set_LastMessageBg(UIWidget* arg)
		{
			((::System::Void(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTELEMENT_SET_LASTMESSAGEBG_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_StudentMessages()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTELEMENT_GET_STUDENTMESSAGES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_StudentImages()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTELEMENT_GET_STUDENTIMAGES_OFFSET))(nullptr);
		}

		::System::Void SetUI(MomotalkHistory* arg)
		{
			((::System::Void(*)(MomotalkHistory*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTELEMENT_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayInput(MomotalkHistory* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(MomotalkHistory*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTELEMENT_PLAYINPUT_OFFSET))(arg, nullptr);
		}

		UIWidget* get_LastMessageBg()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTELEMENT_GET_LASTMESSAGEBG_OFFSET))(nullptr);
		}

		::System::Void SetUnit(::MX::Data::AcademyMessageData* arg)
		{
			((::System::Void(*)(::MX::Data::AcademyMessageData*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTELEMENT_SETUNIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animation* get_StudentInputAni()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTELEMENT_GET_STUDENTINPUTANI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERSTUDENTELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

