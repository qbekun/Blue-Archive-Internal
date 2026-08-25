#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UITexture;
class UIEventMissionTab;
class UIMissionScrollController;
class ButtonActivator;
class UILabel;
namespace UnityEngine { class Transform; }
class FixedMissionWidget;
namespace MX::Data { class EventContentSeasonInfo; }
class SpineChatDialogContainerEvent;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class DialogCategory; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
class EventContentMissionObject;
namespace FlatData { class MissionCategory; }

#define UIEVENTMISSION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24B51F0)
#define UIEVENTMISSION_ONCLICKSKIP_OFFSET UNITYSDK_OFFSET(0x24B53E0)
#define UIEVENTMISSION_HANDLEMISSIONREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24B5440)
#define UIEVENTMISSION_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x24B58C0)
#define UIEVENTMISSION_ONCLICKRECEIVEALLBUTTONACTIVATOR_OFFSET UNITYSDK_OFFSET(0x24B5950)
#define UIEVENTMISSION_GET_SPINECHATDIALOGCATEGORY_OFFSET UNITYSDK_OFFSET(0x24B59B0)
#define UIEVENTMISSION_TRYGETSPINEDIALOGOFFSETEXCEL_OFFSET UNITYSDK_OFFSET(0x24B59C0)
#define UIEVENTMISSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x24B5A70)
#define UIEVENTMISSION_COHANDLECOMPLETEDAILYFIXEDMISSION_OFFSET UNITYSDK_OFFSET(0x24B5650)
#define UIEVENTMISSION_GET_EVENTMISSIONOBJECT_OFFSET UNITYSDK_OFFSET(0x24B5AA0)
#define UIEVENTMISSION___N__0_OFFSET UNITYSDK_OFFSET(0x24B5B20)
#define UIEVENTMISSION_SETSPINECHATCONTAINEREVENT_OFFSET UNITYSDK_OFFSET(0x24B5B30)
#define UIEVENTMISSION_ONTABSWITCHED_OFFSET UNITYSDK_OFFSET(0x24B5B70)
#define UIEVENTMISSION_SHOWREWARDUI_OFFSET UNITYSDK_OFFSET(0x24B5BF0)
#define UIEVENTMISSION_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x24B5BB0)
#define UIEVENTMISSION_HANDLECOMPLETEMISSION_OFFSET UNITYSDK_OFFSET(0x24B56E0)
#define UIEVENTMISSION_ONOPENED_OFFSET UNITYSDK_OFFSET(0x24B5F70)
#define UIEVENTMISSION_REFRESHSCROLL_OFFSET UNITYSDK_OFFSET(0x24B5790)
#define UIEVENTMISSION_HANDLEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24B6B80)
#define UIEVENTMISSION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x24B6C20)
#define UIEVENTMISSION_REFRESHFIXEDMISSION_OFFSET UNITYSDK_OFFSET(0x24B57D0)
#define UIEVENTMISSION_SETDATA_OFFSET UNITYSDK_OFFSET(0x24B6E70)
#define UIEVENTMISSION_REFRESHSCROLLITEMS_OFFSET UNITYSDK_OFFSET(0x24B5C70)
#define UIEVENTMISSION_ONCLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x24B6E90)
#define UIEVENTMISSION_GET_ISMINIGAMEMISSION_OFFSET UNITYSDK_OFFSET(0x24B6EB0)
#define UIEVENTMISSION_AWAKE_OFFSET UNITYSDK_OFFSET(0x24B6EC0)

	inline static constexpr unsigned int UIEventMission_TypeDefinitionIndex = 5865;

	class UIEventMission : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		::UnityEngine::GameObject* emptyBg; // 0xE0
		UITexture* bgTexture; // 0xE8
		UIEventMissionTab* tab; // 0xF0
		::UnityEngine::GameObject* emptyRoot; // 0xF8
		UIMissionScrollController* scrollController; // 0x100
		ButtonActivator* receiveAllButtonActivator; // 0x108
		UILabel* remainDateLabel; // 0x110
		::UnityEngine::Transform* spineOffsetTransform; // 0x118
		::UnityEngine::Transform* dialogOffsetTransform; // 0x120
		FixedMissionWidget* fixedMissionWidget; // 0x128
		MXButton* skipButton; // 0x130
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x138
		SpineChatDialogContainerEvent* spineChatContainerEvent; // 0x140

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickSkip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_ONCLICKSKIP_OFFSET))(nullptr);
		}

		::System::Boolean HandleMissionRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_HANDLEMISSIONREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnClickReceiveAllButtonActivator()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_ONCLICKRECEIVEALLBUTTONACTIVATOR_OFFSET))(nullptr);
		}

		::FlatData::DialogCategory* get_SpineChatDialogCategory()
		{
			return ((::FlatData::DialogCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_GET_SPINECHATDIALOGCATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSpineDialogOffsetExcel(::MX::Data::Excel::EventContentSpineDialogOffsetExcel&* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::EventContentSpineDialogOffsetExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_TRYGETSPINEDIALOGOFFSETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoHandleCompleteDailyFixedMission(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_COHANDLECOMPLETEDAILYFIXEDMISSION_OFFSET))(arg, nullptr);
		}

		EventContentMissionObject* get_EventMissionObject()
		{
			return ((EventContentMissionObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_GET_EVENTMISSIONOBJECT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION___N__0_OFFSET))(nullptr);
		}

		::System::Void SetSpineChatContainerEvent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_SETSPINECHATCONTAINEREVENT_OFFSET))(nullptr);
		}

		::System::Void OnTabSwitched(::FlatData::MissionCategory* arg)
		{
			((::System::Void(*)(::FlatData::MissionCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_ONTABSWITCHED_OFFSET))(arg, nullptr);
		}

		::System::Void ShowRewardUI(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_SHOWREWARDUI_OFFSET))(arg, nullptr);
		}

		::System::Void ResetScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_RESETSCROLL_OFFSET))(nullptr);
		}

		::System::Void HandleCompleteMission(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_HANDLECOMPLETEMISSION_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_REFRESHSCROLL_OFFSET))(nullptr);
		}

		::System::Boolean HandleMissionMultipleRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_HANDLEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshFixedMission()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_REFRESHFIXEDMISSION_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshScrollItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_REFRESHSCROLLITEMS_OFFSET))(nullptr);
		}

		::System::Void OnClickBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_ONCLICKBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMiniGameMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_GET_ISMINIGAMEMISSION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMISSION_AWAKE_OFFSET))(nullptr);
		}

	};

