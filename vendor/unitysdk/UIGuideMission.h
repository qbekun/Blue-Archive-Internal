#pragma once
#include "unitysdk.h"

class MXButton;
class ButtonActivator;
class SpineChatDialogContainer;
class UITexture;
class UILabel;
class UIGuideMissionScrollController;
class UIGuideMissionTabController;
class UIGuideMissionReward;
namespace MX::Data { class GuideMissionSeasonInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class MissionContentBase;

#define UIGUIDEMISSION_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x25C3F80)
#define UIGUIDEMISSION_CO_LOADSPINECHARACTER_OFFSET UNITYSDK_OFFSET(0x25C4450)
#define UIGUIDEMISSION_GET_GUIDEMISSIONREWARD_OFFSET UNITYSDK_OFFSET(0x25C44E0)
#define UIGUIDEMISSION_ONBACK_OFFSET UNITYSDK_OFFSET(0x25C4550)
#define UIGUIDEMISSION_ONCLICKRECEIVEALL_OFFSET UNITYSDK_OFFSET(0x25C4700)
#define UIGUIDEMISSION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25C47B0)
#define UIGUIDEMISSION_AWAKE_OFFSET UNITYSDK_OFFSET(0x25C4850)
#define UIGUIDEMISSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x25C4A70)
#define UIGUIDEMISSION_HANDLEMISSIONREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x25C4B00)
#define UIGUIDEMISSION_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0x25C4010)
#define UIGUIDEMISSION__REFRESHITEMS_B__31_1_OFFSET UNITYSDK_OFFSET(0x25C5470)
#define UIGUIDEMISSION_ONOPENED_OFFSET UNITYSDK_OFFSET(0x25C5520)
#define UIGUIDEMISSION_REFRESHMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x25C5000)
#define UIGUIDEMISSION_CO_LOADSEASONWIDGETS_OFFSET UNITYSDK_OFFSET(0x25C5790)
#define UIGUIDEMISSION___N__0_OFFSET UNITYSDK_OFFSET(0x25C5820)
#define UIGUIDEMISSION_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x25C43E0)
#define UIGUIDEMISSION___N__1_OFFSET UNITYSDK_OFFSET(0x25C5830)
#define UIGUIDEMISSION_HANDLEMISSIONLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x25C5840)
#define UIGUIDEMISSION_CHANGEGUIDEMISSIONSEASON_OFFSET UNITYSDK_OFFSET(0x25C45E0)
#define UIGUIDEMISSION_ONBACKBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x25C58D0)
#define UIGUIDEMISSION_REFRESH_OFFSET UNITYSDK_OFFSET(0x25C58F0)
#define UIGUIDEMISSION_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x25C6190)
#define UIGUIDEMISSION_CO_LOADUI_OFFSET UNITYSDK_OFFSET(0x25C6220)
#define UIGUIDEMISSION_HANDLEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x25C62B0)
#define UIGUIDEMISSION_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x25C64A0)
#define UIGUIDEMISSION_GET_TABCONTROLLER_OFFSET UNITYSDK_OFFSET(0x25C5330)

	inline static constexpr unsigned int UIGuideMission_TypeDefinitionIndex = 6317;

	class UIGuideMission : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		ButtonActivator* receiveAllButton; // 0xE0
		SpineChatDialogContainer* spineChatDialogContainer; // 0xE8
		UITexture* backgroundTexture; // 0xF0
		UITexture* titleTexture; // 0xF8
		UILabel* titleLabel; // 0x100
		UIGuideMissionScrollController* scrollController; // 0x108
		UIGuideMissionTabController* tabController; // 0x110
		UIGuideMissionReward* guideMissionReward; // 0x118
		::MX::Data::GuideMissionSeasonInfo* seasonInfo; // 0x120
		::System::Int64 loginCount; // 0x128
		::System::Int64 spineCharacterId; // 0x130
		Il2CppObject* changeGuideMissionSeasonStack; // 0x138

		::System::Void ResetScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_RESETSCROLL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_LoadSpineCharacter()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_CO_LOADSPINECHARACTER_OFFSET))(nullptr);
		}

		UIGuideMissionReward* get_GuideMissionReward()
		{
			return ((UIGuideMissionReward*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_GET_GUIDEMISSIONREWARD_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OnClickReceiveAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_ONCLICKRECEIVEALL_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Data::GuideMissionSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::GuideMissionSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMissionRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_HANDLEMISSIONREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_REFRESHITEMS_OFFSET))(nullptr);
		}

		::System::Boolean _RefreshItems_b__31_1(MissionContentBase* arg)
		{
			return ((::System::Boolean(*)(MissionContentBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION__REFRESHITEMS_B__31_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshMissionList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_REFRESHMISSIONLIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_LoadSeasonWidgets()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_CO_LOADSEASONWIDGETS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION___N__0_OFFSET))(nullptr);
		}

		UIGuideMissionScrollController* get_ScrollController()
		{
			return ((UIGuideMissionScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void __n__1(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION___N__1_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMissionListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_HANDLEMISSIONLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeGuideMissionSeason(::MX::Data::GuideMissionSeasonInfo* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::GuideMissionSeasonInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_CHANGEGUIDEMISSIONSEASON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBackButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_ONBACKBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_REFRESH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_LoadUI()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_CO_LOADUI_OFFSET))(nullptr);
		}

		::System::Boolean HandleMissionMultipleRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_HANDLEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_ONCLOSED_OFFSET))(nullptr);
		}

		UIGuideMissionTabController* get_TabController()
		{
			return ((UIGuideMissionTabController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_GET_TABCONTROLLER_OFFSET))(nullptr);
		}

	};

