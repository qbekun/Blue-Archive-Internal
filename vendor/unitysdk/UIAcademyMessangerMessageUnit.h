#pragma once
#include "unitysdk.h"

class UIAcademyMessangerStudentElement;
class UIAcademyMessangerMessageElement;
class UIAcademyMessangerAnswerElement;
class UIAcademyMessangerFavorScheduleElement;
namespace UnityEngine { class GameObject; }
class UIWidget;
class UICharacterThumbnail;
class UIAcademyMessangerMessageList;
class MomotalkHistory;
namespace MX::Data { class AcademyMessageData; }

#define UIACADEMYMESSANGERMESSAGEUNIT_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x21A6DF0)
#define UIACADEMYMESSANGERMESSAGEUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x21A5B50)
#define UIACADEMYMESSANGERMESSAGEUNIT_SETHEIGHT_OFFSET UNITYSDK_OFFSET(0x21A2190)
#define UIACADEMYMESSANGERMESSAGEUNIT_GET_MESSAGELIST_OFFSET UNITYSDK_OFFSET(0x21A7190)
#define UIACADEMYMESSANGERMESSAGEUNIT_GETBOTTOM_OFFSET UNITYSDK_OFFSET(0x21A5320)
#define UIACADEMYMESSANGERMESSAGEUNIT_ONFEEDBACKMESSAGEUPDATED_OFFSET UNITYSDK_OFFSET(0x21A7220)
#define UIACADEMYMESSANGERMESSAGEUNIT_GET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x21A72E0)
#define UIACADEMYMESSANGERMESSAGEUNIT_SETUI_OFFSET UNITYSDK_OFFSET(0x21A6F40)
#define UIACADEMYMESSANGERMESSAGEUNIT_HIDEFAVORSCHEDULEBUTTON_OFFSET UNITYSDK_OFFSET(0x21A6D70)
#define UIACADEMYMESSANGERMESSAGEUNIT_SETUSERMESSAGE_OFFSET UNITYSDK_OFFSET(0x21A7AF0)
#define UIACADEMYMESSANGERMESSAGEUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21A7C90)
#define UIACADEMYMESSANGERMESSAGEUNIT_GET_ISREADMARKON_OFFSET UNITYSDK_OFFSET(0x21A2120)
#define UIACADEMYMESSANGERMESSAGEUNIT_CACHEMESSAGEGROUPS_OFFSET UNITYSDK_OFFSET(0x21A24F0)
#define UIACADEMYMESSANGERMESSAGEUNIT_GETHEIGHT_OFFSET UNITYSDK_OFFSET(0x21A7CC0)
#define UIACADEMYMESSANGERMESSAGEUNIT_GETTOP_OFFSET UNITYSDK_OFFSET(0x21A6EC0)

	inline static constexpr unsigned int UIAcademyMessangerMessageUnit_TypeDefinitionIndex = 4164;

	class UIAcademyMessangerMessageUnit : public Il2CppObject
	{
	public:
		UIAcademyMessangerStudentElement* studentRoot; // 0x50
		UIAcademyMessangerMessageElement* userMessage; // 0x58
		UIAcademyMessangerAnswerElement* answerRoot; // 0x60
		UIAcademyMessangerFavorScheduleElement* favorRoot; // 0x68
		::UnityEngine::GameObject* readMark; // 0x70
		UIWidget* readMarkWidget; // 0x78
		UICharacterThumbnail* thumbnail; // 0x80
		::System::Int64 characterServerId; // 0x88
		::System::Int64 groupId; // 0x90
		::System::Int64 chosenMessageId; // 0x98
		::System::Int32 widgetDelta_ReadMark; // 0xA0
		::System::Int32 widgetDelta_Default; // 0xA4
		::System::Int32 widgetHeight_Student; // 0xA8
		::System::Int32 Height; // 0xAC
		::System::Boolean IsFirst; // 0xB0
		::System::Boolean IsUnreadStart; // 0xB1
		UIAcademyMessangerMessageList* messageList; // 0xB8

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEUNIT_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::Void SetData(MomotalkHistory* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MomotalkHistory*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEUNIT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetHeight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEUNIT_SETHEIGHT_OFFSET))(nullptr);
		}

		UIAcademyMessangerMessageList* get_MessageList()
		{
			return ((UIAcademyMessangerMessageList*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEUNIT_GET_MESSAGELIST_OFFSET))(nullptr);
		}

		UIWidget* GetBottom()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEUNIT_GETBOTTOM_OFFSET))(nullptr);
		}

		::System::Void OnFeedbackMessageUpdated(::MX::Data::AcademyMessageData* arg)
		{
			((::System::Void(*)(::MX::Data::AcademyMessageData*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEUNIT_ONFEEDBACKMESSAGEUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEUNIT_GET_CHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Void SetUI(MomotalkHistory* arg)
		{
			((::System::Void(*)(MomotalkHistory*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEUNIT_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Void HideFavorScheduleButton(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEUNIT_HIDEFAVORSCHEDULEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void SetUserMessage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEUNIT_SETUSERMESSAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadMarkOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEUNIT_GET_ISREADMARKON_OFFSET))(nullptr);
		}

		::System::Void CacheMessageGroups(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEUNIT_CACHEMESSAGEGROUPS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEUNIT_GETHEIGHT_OFFSET))(nullptr);
		}

		UIWidget* GetTop()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGERMESSAGEUNIT_GETTOP_OFFSET))(nullptr);
		}

	};

