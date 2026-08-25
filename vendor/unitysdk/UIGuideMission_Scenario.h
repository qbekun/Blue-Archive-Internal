#pragma once
#include "unitysdk.h"

class MXButton;
class ButtonActivator;
class SpineChatDialogContainer;
class UITexture;
class UILabel;
class UIGuideMissionScrollController;
class UIGuideMissionScenarioTabController;
class UIGuideMissionReward;
namespace MX::Data { class GuideMissionSeasonInfo; }
class MissionContentBase;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIGUIDEMISSION_SCENARIO__REFRESHITEMS_B__25_1_OFFSET UNITYSDK_OFFSET(0x25CAC00)
#define UIGUIDEMISSION_SCENARIO___N__0_OFFSET UNITYSDK_OFFSET(0x25CAD20)
#define UIGUIDEMISSION_SCENARIO_ONCLICKRECEIVEALL_OFFSET UNITYSDK_OFFSET(0x25CAD30)
#define UIGUIDEMISSION_SCENARIO_COLOADSEASONWIDGETS_OFFSET UNITYSDK_OFFSET(0x25CADE0)
#define UIGUIDEMISSION_SCENARIO_GET_GUIDEMISSIONREWARD_OFFSET UNITYSDK_OFFSET(0x25CAE70)
#define UIGUIDEMISSION_SCENARIO_AWAKE_OFFSET UNITYSDK_OFFSET(0x25CAEE0)
#define UIGUIDEMISSION_SCENARIO_.CTOR_OFFSET UNITYSDK_OFFSET(0x25CB100)
#define UIGUIDEMISSION_SCENARIO_ONBACKBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x25CB110)
#define UIGUIDEMISSION_SCENARIO_HANDLEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x25CB130)
#define UIGUIDEMISSION_SCENARIO_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x25CB410)
#define UIGUIDEMISSION_SCENARIO_ONOPENED_OFFSET UNITYSDK_OFFSET(0x25CB4A0)
#define UIGUIDEMISSION_SCENARIO_GET_TABCONTROLLER_OFFSET UNITYSDK_OFFSET(0x25CACB0)
#define UIGUIDEMISSION_SCENARIO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25CB740)
#define UIGUIDEMISSION_SCENARIO_COLOADSPINECHARACTER_OFFSET UNITYSDK_OFFSET(0x25CB7F0)
#define UIGUIDEMISSION_SCENARIO_GET_SCROLLCONTROLLER_OFFSET UNITYSDK_OFFSET(0x25CB6D0)
#define UIGUIDEMISSION_SCENARIO_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0x25CB880)
#define UIGUIDEMISSION_SCENARIO_REFRESH_OFFSET UNITYSDK_OFFSET(0x25CBC50)
#define UIGUIDEMISSION_SCENARIO_HANDLEMISSIONREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x25CBD50)
#define UIGUIDEMISSION_SCENARIO_REFRESHMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x25CB210)
#define UIGUIDEMISSION_SCENARIO_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x25CA5F0)
#define UIGUIDEMISSION_SCENARIO_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x25CC050)
#define UIGUIDEMISSION_SCENARIO_HANDLEMISSIONLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x25CC260)

	inline static constexpr unsigned int UIGuideMission_Scenario_TypeDefinitionIndex = 6339;

	class UIGuideMission_Scenario : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		ButtonActivator* receiveAllButton; // 0xE0
		SpineChatDialogContainer* spineChatDialogContainer; // 0xE8
		UITexture* backgroundTexture; // 0xF0
		UITexture* titleTexture; // 0xF8
		UILabel* titleLabel; // 0x100
		UIGuideMissionScrollController* scrollController; // 0x108
		UIGuideMissionScenarioTabController* tabController; // 0x110
		UIGuideMissionReward* guideMissionReward; // 0x118
		::System::Int64 loginCount; // 0x120
		::System::Int64 spineCharacterId; // 0x128
		::MX::Data::GuideMissionSeasonInfo* seasonInfo; // 0x130

		::System::Boolean _RefreshItems_b__25_1(MissionContentBase* arg)
		{
			return ((::System::Boolean(*)(MissionContentBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO__REFRESHITEMS_B__25_1_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClickReceiveAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_ONCLICKRECEIVEALL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoLoadSeasonWidgets()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_COLOADSEASONWIDGETS_OFFSET))(nullptr);
		}

		UIGuideMissionReward* get_GuideMissionReward()
		{
			return ((UIGuideMissionReward*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_GET_GUIDEMISSIONREWARD_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBackButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_ONBACKBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Boolean HandleMissionMultipleRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_HANDLEMISSIONMULTIPLEREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_ONOPENED_OFFSET))(arg, nullptr);
		}

		UIGuideMissionScenarioTabController* get_TabController()
		{
			return ((UIGuideMissionScenarioTabController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_GET_TABCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Data::GuideMissionSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::GuideMissionSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoLoadSpineCharacter()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_COLOADSPINECHARACTER_OFFSET))(nullptr);
		}

		UIGuideMissionScrollController* get_ScrollController()
		{
			return ((UIGuideMissionScrollController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_GET_SCROLLCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void RefreshItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_REFRESHITEMS_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_REFRESH_OFFSET))(nullptr);
		}

		::System::Boolean HandleMissionRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_HANDLEMISSIONREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshMissionList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_REFRESHMISSIONLIST_OFFSET))(nullptr);
		}

		::System::Void ResetScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_RESETSCROLL_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Boolean HandleMissionListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSION_SCENARIO_HANDLEMISSIONLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

	};

