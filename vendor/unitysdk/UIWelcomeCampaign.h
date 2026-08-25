#pragma once
#include "unitysdk.h"

class MXButton;
class IntTabController;
class UILabel;
class UITexture;
namespace UnityEngine { class GameObject; }
class UIMissionScrollController;
class ButtonActivator;
class FixedMissionWidget;
class UIWelcomeCampaign_OpenCondition;
class UIWelcomeCampaign_AttendanceSlot;
class UIWelcomeCampaign_ContinuousRewardCard;
class UIWelcomeCampaign_BonusSlot;
class TabCategory;
namespace MX::Data { class WelcomeCampaignSeasonInfo; }
namespace UnityEngine { class Texture; }
namespace MX::NetworkProtocol { class WelcomeCampaignMissionMultipleRewardResponse; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class RewardStatus;
namespace MX::Data { class WelcomeCampaignAttendanceRewardInfo; }

#define UIWELCOMECAMPAIGN_AWAKE_OFFSET UNITYSDK_OFFSET(0xBD3240)
#define UIWELCOMECAMPAIGN_REFRESHATTENDANCEPAGE_OFFSET UNITYSDK_OFFSET(0xBD36C0)
#define UIWELCOMECAMPAIGN_INITIALIZEATTENDANCETAB_OFFSET UNITYSDK_OFFSET(0xBD3ED0)
#define UIWELCOMECAMPAIGN_REFRESHMISSIONITEMS_OFFSET UNITYSDK_OFFSET(0xBD4130)
#define UIWELCOMECAMPAIGN_INITIALIZEMISSIONTAB_OFFSET UNITYSDK_OFFSET(0xBD4CC0)
#define UIWELCOMECAMPAIGN_ONCLICKMISSIONRECEIVEALL_OFFSET UNITYSDK_OFFSET(0xBD5020)
#define UIWELCOMECAMPAIGN__SETDATA_B__30_1_OFFSET UNITYSDK_OFFSET(0xBD50F0)
#define UIWELCOMECAMPAIGN__SETDATA_B__30_0_OFFSET UNITYSDK_OFFSET(0xBD5120)
#define UIWELCOMECAMPAIGN_REFRESHTAGS_OFFSET UNITYSDK_OFFSET(0xBD5150)
#define UIWELCOMECAMPAIGN_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xBD5930)
#define UIWELCOMECAMPAIGN_ONMISSIONTABCHANGED_OFFSET UNITYSDK_OFFSET(0xBD5AC0)
#define UIWELCOMECAMPAIGN_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBD5AE0)
#define UIWELCOMECAMPAIGN__ONCLICKMISSIONRECEIVEALL_B__40_0_OFFSET UNITYSDK_OFFSET(0xBD6290)
#define UIWELCOMECAMPAIGN_HANDLEMISSIONREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBD6620)
#define UIWELCOMECAMPAIGN_ONCHANGEDTAB_OFFSET UNITYSDK_OFFSET(0xBD66A0)
#define UIWELCOMECAMPAIGN_.CTOR_OFFSET UNITYSDK_OFFSET(0xBD68A0)
#define UIWELCOMECAMPAIGN_ONCLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xBD6920)
#define UIWELCOMECAMPAIGN_ONCLICKATTENDANCERECEIVEALL_OFFSET UNITYSDK_OFFSET(0xBD6940)
#define UIWELCOMECAMPAIGN_GETCONSECUTIVEREWARDSTATUS_OFFSET UNITYSDK_OFFSET(0xBD3CB0)
#define UIWELCOMECAMPAIGN_SETDATA_OFFSET UNITYSDK_OFFSET(0xBD5D00)
#define UIWELCOMECAMPAIGN_HANDLEATTENDANCEREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBD6D00)
#define UIWELCOMECAMPAIGN_INITIALIZEBONUSTAB_OFFSET UNITYSDK_OFFSET(0xBD6AA0)

	inline static constexpr unsigned int UIWelcomeCampaign_TypeDefinitionIndex = 8679;

	class UIWelcomeCampaign : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		IntTabController* tabController; // 0xE0
		::Il2CppArray<::System::Object*>* newbieBG; // 0xE8
		::Il2CppArray<::System::Object*>* comebackBG; // 0xF0
		UILabel* titleLabel; // 0xF8
		UILabel* endTimeLabel; // 0x100
		UITexture* newbieTexture; // 0x108
		UITexture* comebackTexture; // 0x110
		::UnityEngine::GameObject* empty; // 0x118
		IntTabController* missionTabController; // 0x120
		UIMissionScrollController* missionScrollController; // 0x128
		ButtonActivator* missionReceiveAllButton; // 0x130
		FixedMissionWidget* completeMissionWidget; // 0x138
		UIWelcomeCampaign_OpenCondition* openCondition; // 0x140
		::System::Int32 currentDayTab; // 0x148
		::Il2CppArray<::System::Object*>* attendanceGrids; // 0x150
		UIWelcomeCampaign_AttendanceSlot* attendanceSlot; // 0x158
		::UnityEngine::GameObject* attendanceContinuousPart; // 0x160
		UILabel* attendanceContinuousCountLabel; // 0x168
		UILabel* attendanceContinuousInfoLabel; // 0x170
		ButtonActivator* attendanceReceiveAllButton; // 0x178
		UIWelcomeCampaign_ContinuousRewardCard* attendanceContinuousRewardCard; // 0x180
		Il2CppObject* attendanceSlots; // 0x188
		::Il2CppArray<::System::Object*>* bonusGrids; // 0x190
		UIWelcomeCampaign_BonusSlot* bonusSlot; // 0x198
		TabCategory* currentTab; // 0x1A0
		::System::Boolean isInitialized; // 0x1A4
		::MX::Data::WelcomeCampaignSeasonInfo* seasonInfo; // 0x1A8

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RefreshAttendancePage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_REFRESHATTENDANCEPAGE_OFFSET))(nullptr);
		}

		::System::Void InitializeAttendanceTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_INITIALIZEATTENDANCETAB_OFFSET))(nullptr);
		}

		::System::Void RefreshMissionItems(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_REFRESHMISSIONITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeMissionTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_INITIALIZEMISSIONTAB_OFFSET))(nullptr);
		}

		::System::Void OnClickMissionReceiveAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_ONCLICKMISSIONRECEIVEALL_OFFSET))(nullptr);
		}

		::System::Void _SetData_b__30_1(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN__SETDATA_B__30_1_OFFSET))(arg, nullptr);
		}

		::System::Void _SetData_b__30_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN__SETDATA_B__30_0_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshTags()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_REFRESHTAGS_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnMissionTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_ONMISSIONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickMissionReceiveAll_b__40_0(::MX::NetworkProtocol::WelcomeCampaignMissionMultipleRewardResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WelcomeCampaignMissionMultipleRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN__ONCLICKMISSIONRECEIVEALL_B__40_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMissionRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_HANDLEMISSIONREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangedTab(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_ONCHANGEDTAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_ONCLICKBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickAttendanceReceiveAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_ONCLICKATTENDANCERECEIVEALL_OFFSET))(nullptr);
		}

		RewardStatus* GetConsecutiveRewardStatus(::MX::Data::WelcomeCampaignAttendanceRewardInfo* arg)
		{
			return ((RewardStatus*(*)(::MX::Data::WelcomeCampaignAttendanceRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_GETCONSECUTIVEREWARDSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_SETDATA_OFFSET))(nullptr);
		}

		::System::Boolean HandleAttendanceRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_HANDLEATTENDANCEREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeBonusTab()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWELCOMECAMPAIGN_INITIALIZEBONUSTAB_OFFSET))(nullptr);
		}

	};

