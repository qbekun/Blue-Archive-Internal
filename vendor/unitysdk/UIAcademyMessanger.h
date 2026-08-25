#pragma once
#include "unitysdk.h"

class MXButton;
class MessangerDisplayTypeTabController;
class UIAcademyMessangerStudentPopulator;
namespace UnityEngine { class GameObject; }
class UIAcademyMessangerStudentInfo;
class UIAcademyMessangerMessageList;
class UILabel;
class UIAcademyMessangerFavorScheduleInfo;
class UIAcademyMessangerFavorRankStatList;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class MessangerDisplayType;
namespace Assets::_MX::Program::Scripts::Network { class TaskState; }

#define UIACADEMYMESSANGER_SHOWFAVORSCHEDULEINFO_OFFSET UNITYSDK_OFFSET(0x219E070)
#define UIACADEMYMESSANGER_SETLABELS_OFFSET UNITYSDK_OFFSET(0x219E0A0)
#define UIACADEMYMESSANGER_REFRESHNOMESSAGENOTI_OFFSET UNITYSDK_OFFSET(0x219E330)
#define UIACADEMYMESSANGER_GET_CURRENTSERVERID_OFFSET UNITYSDK_OFFSET(0x219E460)
#define UIACADEMYMESSANGER_HANDLEMOMOTALKREADSYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0x219E470)
#define UIACADEMYMESSANGER_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x219E480)
#define UIACADEMYMESSANGER_UPDATEMESSAGELIST_OFFSET UNITYSDK_OFFSET(0x219E7C0)
#define UIACADEMYMESSANGER_SETUPSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x219E840)
#define UIACADEMYMESSANGER_SET_CURRENTSERVERID_OFFSET UNITYSDK_OFFSET(0x219E890)
#define UIACADEMYMESSANGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x219E8A0)
#define UIACADEMYMESSANGER_ONOPENED_OFFSET UNITYSDK_OFFSET(0x219E8B0)
#define UIACADEMYMESSANGER_REFRESHMESSAGELIST_OFFSET UNITYSDK_OFFSET(0x219EAC0)
#define UIACADEMYMESSANGER_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0x219EC30)
#define UIACADEMYMESSANGER__ONSELECTCHARACTER_B__30_0_OFFSET UNITYSDK_OFFSET(0x219ED90)
#define UIACADEMYMESSANGER_SETUNREADMESSAGECOUNT_OFFSET UNITYSDK_OFFSET(0x219E1D0)
#define UIACADEMYMESSANGER_SETISMEMORIALINREWARD_OFFSET UNITYSDK_OFFSET(0x219EDA0)
#define UIACADEMYMESSANGER_ONBACK_OFFSET UNITYSDK_OFFSET(0x219EDB0)
#define UIACADEMYMESSANGER_ONSELECTCHARACTER_OFFSET UNITYSDK_OFFSET(0x219EE00)
#define UIACADEMYMESSANGER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x219F2E0)
#define UIACADEMYMESSANGER_HIDEFAVORSCHEDULEBUTTON_OFFSET UNITYSDK_OFFSET(0x219F320)
#define UIACADEMYMESSANGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x219F350)

	inline static constexpr unsigned int UIAcademyMessanger_TypeDefinitionIndex = 4146;

	class UIAcademyMessanger : public Il2CppObject
	{
	public:
		MXButton* close; // 0xD8
		MessangerDisplayTypeTabController* tab; // 0xE0
		UIAcademyMessangerStudentPopulator* studentPopulator; // 0xE8
		::UnityEngine::GameObject* noStudentLabel; // 0xF0
		UIAcademyMessangerStudentInfo* studentInfo; // 0xF8
		::UnityEngine::GameObject* noMessageFromCharacterLabel; // 0x100
		UIAcademyMessangerMessageList* messageList; // 0x108
		UILabel* studentCount; // 0x110
		UILabel* unreadMessageCount_TabContents; // 0x118
		::UnityEngine::GameObject* unreadMessageCount_Tab; // 0x120
		UILabel* unreadMessageCount_TabLabel; // 0x128
		UILabel* characterName; // 0x130
		::UnityEngine::GameObject* noMessageFromAnyCharacter; // 0x138
		UIAcademyMessangerFavorScheduleInfo* scheduleInfo; // 0x140
		UIAcademyMessangerFavorRankStatList* statList; // 0x148
		::System::Int64 _CurrentServerId_k__BackingField; // 0x150
		::System::Boolean isMemorialInReward; // 0x158

		::System::Void ShowFavorScheduleInfo(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_SHOWFAVORSCHEDULEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SetLabels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_SETLABELS_OFFSET))(nullptr);
		}

		::System::Void RefreshNoMessageNoti()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_REFRESHNOMESSAGENOTI_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_GET_CURRENTSERVERID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMomotalkReadSyncMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_HANDLEMOMOTALKREADSYNCMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void UpdateMessageList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_UPDATEMESSAGELIST_OFFSET))(nullptr);
		}

		::System::Void SetupScrollView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_SETUPSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void set_CurrentServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_SET_CURRENTSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshMessageList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_REFRESHMESSAGELIST_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, MessangerDisplayType* arg2)
		{
			((::System::Void(*)(::System::Boolean, MessangerDisplayType*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnSelectCharacter_b__30_0(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER__ONSELECTCHARACTER_B__30_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetUnreadMessageCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_SETUNREADMESSAGECOUNT_OFFSET))(nullptr);
		}

		::System::Void SetIsMemorialInReward(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_SETISMEMORIALINREWARD_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OnSelectCharacter(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_ONSELECTCHARACTER_OFFSET))(arg, nullptr);
		}

		MessangerDisplayType* get_Type()
		{
			return ((MessangerDisplayType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void HideFavorScheduleButton(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_HIDEFAVORSCHEDULEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYMESSANGER_AWAKE_OFFSET))(nullptr);
		}

	};

