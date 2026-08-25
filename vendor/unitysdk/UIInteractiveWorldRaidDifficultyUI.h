#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UIWorldRaidBossInfo;
class UILabel;
class UIInteractiveWorldRaidSkillScrollViewController;
class UIWorldRaidRoomlistScrollViewController;
class UIWorldRaidRewardPreviewScrollViewController;
class UIInteractiveWorldRaidCarrierSkillInfoTooltip;
namespace UnityEngine { class Transform; }
class UIAdmissionDisplay;
namespace MX::Data { class WorldRaidSeasonInfo; }
namespace MX::Data { class WorldRaidBossGroupInfo; }
namespace MX::GameLogic::DBModel { class WorldRaidLocalBossDB; }
namespace MX::Data { class WorldRaidStageInfo; }
namespace MX::Data { class EventContentStageInfo; }
namespace FlatData { class EchelonType; }
namespace FlatData { class EchelonExtensionType; }
namespace MX::GameLogic::DBModel { class WorldRaidBossGroup; }
namespace MX::Data { class BGMPlayInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class WorldRaidBossListInfoDB; }
class EventContentShopListResponseMessage;
namespace MX::Data::Excel { class TutorialFailureImageExcel; }
class CurrencyUpdateMessage;
class InteractiveWorldRaidCarrierSkillInfoTooltipInfo;
namespace UnityEngine { class Vector2; }
class UIScrollView;
class UIEnemyInfoPopup;
class UIPopup_TutorialFailure;
class BossAppearState;
class From;

#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_AWAKE_OFFSET UNITYSDK_OFFSET(0x2618E40)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI__ENTEREVENTCONTENTSTAGE_B__70_6_OFFSET UNITYSDK_OFFSET(0x2619730)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI__SETWORLDBOSSINFOUI_B__58_0_OFFSET UNITYSDK_OFFSET(0x2619820)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_FINALBATTLEENTERFAIL_OFFSET UNITYSDK_OFFSET(0x2619850)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ENTEREVENTCONTENTSTAGE_OFFSET UNITYSDK_OFFSET(0x2619860)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x261A1C0)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONBACK_OFFSET UNITYSDK_OFFSET(0x261A4E0)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SETREWARDSPREVIEW_OFFSET UNITYSDK_OFFSET(0x261A8C0)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONOPENED_OFFSET UNITYSDK_OFFSET(0x261ABC0)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ALIGNSCROLLVIEWONCLICKPARCEL_OFFSET UNITYSDK_OFFSET(0x261AD20)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI__SETBOSSLISTSCROLLVIEW_B__59_0_OFFSET UNITYSDK_OFFSET(0x261AE20)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SETBOSSLISTSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x261AE50)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONCLICKENTEREVENTCONTENTSTAGEBUTTON_OFFSET UNITYSDK_OFFSET(0x261B5B0)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_HANDLEEVENTCONTENTSHOPLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x261B760)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SETWORLDBOSSHP_OFFSET UNITYSDK_OFFSET(0x261BD70)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI__SETFINALBATTLEUI_B__76_0_OFFSET UNITYSDK_OFFSET(0x261BEA0)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_HIDEADDITIONALTOOLTIP_OFFSET UNITYSDK_OFFSET(0x261A590)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI__ONCLICKFINALENTER_G__FINALBATTLEENTERINTERNAL|67_0_OFFSET UNITYSDK_OFFSET(0x261BF00)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONCLICKPRACTICE_OFFSET UNITYSDK_OFFSET(0x261C2E0)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x261C760)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_HANDLERESETABLECONTENTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x261C910)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SHOWADDITIONALTOOLTIP_OFFSET UNITYSDK_OFFSET(0x261CED0)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONCLICKCLEARDECK_OFFSET UNITYSDK_OFFSET(0x261D090)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SHOWTOOLTIP_OFFSET UNITYSDK_OFFSET(0x261D150)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0x261D370)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_HIDETOOLTIP_OFFSET UNITYSDK_OFFSET(0x261A6D0)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI__HANDLERESETABLECONTENTRESPONSEMESSAGE_B__82_3_OFFSET UNITYSDK_OFFSET(0x261D380)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SETLOCALBOSSINFOUI_OFFSET UNITYSDK_OFFSET(0x261DB30)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x261E250)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI__ONCLICKENEMYINFO_B__86_0_OFFSET UNITYSDK_OFFSET(0x261E360)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SETINFO_OFFSET UNITYSDK_OFFSET(0x261E390)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI__ONCLICKOPENRAIDGUIDE_B__63_0_OFFSET UNITYSDK_OFFSET(0x261E3D0)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_GETCURRENTCARRIERBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x261A270)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_OPENIAWORLDRAIDDIFFICULTYUIASBOSSRAID_OFFSET UNITYSDK_OFFSET(0x261E4A0)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI__ENTEREVENTCONTENTSTAGE_G__OPENFORMATION|70_0_OFFSET UNITYSDK_OFFSET(0x261A020)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_WORLDRAIDENTER_OFFSET UNITYSDK_OFFSET(0x261C2F0)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONCLICKOPENRAIDGUIDE_OFFSET UNITYSDK_OFFSET(0x261F660)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI__ENTEREVENTCONTENTSTAGE_B__70_4_OFFSET UNITYSDK_OFFSET(0x261F730)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONENABLE_OFFSET UNITYSDK_OFFSET(0x261F820)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_OPENIAWORLDRAIDDIFFICULTYUIASEVENTSTAGE_OFFSET UNITYSDK_OFFSET(0x260FFC0)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SETSKILLSPREVIEW_OFFSET UNITYSDK_OFFSET(0x261DE20)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_HANDLEWORLDBOSSHPFAKESYNCCALLBACKMESSAGE_OFFSET UNITYSDK_OFFSET(0x261FA20)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SETFINALBATTLEUI_OFFSET UNITYSDK_OFFSET(0x261EB40)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONCLICKENEMYINFO_OFFSET UNITYSDK_OFFSET(0x261FAD0)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x261FBB0)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONCLICKFINALENTER_OFFSET UNITYSDK_OFFSET(0x261FE20)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SETWORLDBOSSINFOUI_OFFSET UNITYSDK_OFFSET(0x261E610)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI_WORLDBOSSENTERFORMATION_OFFSET UNITYSDK_OFFSET(0x261D390)
#define UIINTERACTIVEWORLDRAIDDIFFICULTYUI__ENTEREVENTCONTENTSTAGE_B__70_2_OFFSET UNITYSDK_OFFSET(0x261FFE0)

	inline static constexpr unsigned int UIInteractiveWorldRaidDifficultyUI_TypeDefinitionIndex = 6535;

	class UIInteractiveWorldRaidDifficultyUI : public Il2CppObject
	{
	public:
		MXButton* BackButton; // 0xD8
		::UnityEngine::GameObject* RaidUIRoot; // 0xE0
		::UnityEngine::GameObject* EventStageRoot; // 0xE8
		::UnityEngine::GameObject* worldRaidBossUIRoot; // 0xF0
		::UnityEngine::GameObject* scenarioBossUIRoot; // 0xF8
		UIWorldRaidBossInfo* uIWorldRaidBossInfo; // 0x100
		UIWorldRaidBossInfo* uIWorldRaidEventStageBossInfo; // 0x108
		::UnityEngine::GameObject* raidGuideButtonRoot; // 0x110
		MXButton* raidGuideButton; // 0x118
		::UnityEngine::GameObject* clearDeckButtonRoot; // 0x120
		MXButton* clearDeckButton; // 0x128
		::UnityEngine::GameObject* storyInformationRoot; // 0x130
		MXButton* enemyInfoButton; // 0x138
		UILabel* RemainTimeLabel; // 0x140
		UIInteractiveWorldRaidSkillScrollViewController* interactiveWorldRaidSkillScrollView; // 0x148
		UIInteractiveWorldRaidSkillScrollViewController* interactiveWorldRaidFinalBattleSkillScrollView; // 0x150
		UIWorldRaidRoomlistScrollViewController* RoomlistScrollView; // 0x158
		UIWorldRaidRewardPreviewScrollViewController* ParticipantRewardScrollView; // 0x160
		UIWorldRaidRewardPreviewScrollViewController* ClearRewardScrollView; // 0x168
		UIWorldRaidRewardPreviewScrollViewController* FinalBattleRewardScrollView; // 0x170
		UIWorldRaidRewardPreviewScrollViewController* EventStageRewardScrollView; // 0x178
		UIInteractiveWorldRaidCarrierSkillInfoTooltip* iaWorldRaidSkillTooltip; // 0x180
		UIInteractiveWorldRaidCarrierSkillInfoTooltip* iaWorldRaidAdditionalSkillTooltip; // 0x188
		::UnityEngine::GameObject* tooltipParentObject; // 0x190
		::UnityEngine::Transform* tooltipTargetObjectParent; // 0x198
		MXButton* tooltipCloseButton; // 0x1A0
		::UnityEngine::GameObject* additionalTooltipParentObject; // 0x1A8
		::UnityEngine::Transform* additionalTooltipTargetObjectParent; // 0x1B0
		MXButton* additionalTooltipCloseButton; // 0x1B8
		::UnityEngine::Transform* _tooltipTarget; // 0x1C0
		::UnityEngine::Transform* _tooltipTargetParent; // 0x1C8
		::UnityEngine::Transform* _additionalTooltipTarget; // 0x1D0
		::UnityEngine::Transform* _additionalTooltipTargetParent; // 0x1D8
		UIAdmissionDisplay* AdmissionDisplay; // 0x1E0
		MXButton* EnterButton; // 0x1E8
		UILabel* EnterButtonLabel; // 0x1F0
		MXButton* PracticeButton; // 0x1F8
		MXButton* FinalEnterButton; // 0x200
		UILabel* finalBattleRewardEmptyLabel; // 0x208
		UILabel* EventStageRewardEmptyLabel; // 0x210
		UIWorldRaidBossInfo* uIWorldRaidScenarioBossInfo; // 0x218
		MXButton* EnterEventContentStageButton; // 0x220
		Il2CppObject* textLabelDecoColorByPhase; // 0x228
		Il2CppObject* _artLevelToIndex; // 0x230
		::System::Int64 _phaseId; // 0x238
		::MX::Data::WorldRaidSeasonInfo* _seasonInfo; // 0x240
		::MX::Data::WorldRaidBossGroupInfo* _groupInfo; // 0x248
		::MX::GameLogic::DBModel::WorldRaidLocalBossDB* _bossDB; // 0x250
		::MX::Data::WorldRaidStageInfo* _currentWorldRaidStageInfo; // 0x258
		::MX::Data::EventContentStageInfo* _eventStageInfo; // 0x260
		::System::Boolean _selectedStageHasGlobalSkillRemaining; // 0x268

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _EnterEventContentStage_b__70_6(::FlatData::EchelonType* arg, ::FlatData::EchelonExtensionType* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI__ENTEREVENTCONTENTSTAGE_B__70_6_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean _SetWorldBossInfoUI_b__58_0(::MX::GameLogic::DBModel::WorldRaidBossGroup* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::WorldRaidBossGroup*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI__SETWORLDBOSSINFOUI_B__58_0_OFFSET))(arg, nullptr);
		}

		::System::Void FinalBattleEnterFail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_FINALBATTLEENTERFAIL_OFFSET))(nullptr);
		}

		::System::Void EnterEventContentStage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ENTEREVENTCONTENTSTAGE_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONBACK_OFFSET))(nullptr);
		}

		::System::Void SetRewardsPreview(UIWorldRaidRewardPreviewScrollViewController* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(UIWorldRaidRewardPreviewScrollViewController*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SETREWARDSPREVIEW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean AlignScrollViewOnClickParcel(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ALIGNSCROLLVIEWONCLICKPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetBosslistScrollView_b__59_0(::MX::GameLogic::DBModel::WorldRaidBossListInfoDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::WorldRaidBossListInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI__SETBOSSLISTSCROLLVIEW_B__59_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetBosslistScrollView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SETBOSSLISTSCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void OnClickEnterEventContentStageButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONCLICKENTEREVENTCONTENTSTAGEBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentShopListResponseMessage(EventContentShopListResponseMessage* arg)
		{
			return ((::System::Boolean(*)(EventContentShopListResponseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_HANDLEEVENTCONTENTSHOPLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetWorldBossHp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SETWORLDBOSSHP_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetFinalBattleUI_b__76_0(::MX::Data::Excel::TutorialFailureImageExcel* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::Excel::TutorialFailureImageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI__SETFINALBATTLEUI_B__76_0_OFFSET))(arg, nullptr);
		}

		::System::Void HideAdditionalTooltip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_HIDEADDITIONALTOOLTIP_OFFSET))(nullptr);
		}

		::System::Void _OnClickFinalEnter_g__FinalBattleEnterInternal|67_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI__ONCLICKFINALENTER_G__FINALBATTLEENTERINTERNAL|67_0_OFFSET))(nullptr);
		}

		::System::Void OnClickPractice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONCLICKPRACTICE_OFFSET))(nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(CurrencyUpdateMessage* arg)
		{
			return ((::System::Boolean(*)(CurrencyUpdateMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleResetableContentResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_HANDLERESETABLECONTENTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void ShowAdditionalTooltip(InteractiveWorldRaidCarrierSkillInfoTooltipInfo* arg, ::UnityEngine::Transform* arg2, ::UnityEngine::Vector2* arg3)
		{
			((::System::Void(*)(InteractiveWorldRaidCarrierSkillInfoTooltipInfo*, ::UnityEngine::Transform*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SHOWADDITIONALTOOLTIP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickClearDeck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONCLICKCLEARDECK_OFFSET))(nullptr);
		}

		::System::Void ShowTooltip(UIScrollView* arg, InteractiveWorldRaidCarrierSkillInfoTooltipInfo* arg2, ::UnityEngine::Transform* arg3, ::UnityEngine::Vector2* arg4)
		{
			((::System::Void(*)(UIScrollView*, InteractiveWorldRaidCarrierSkillInfoTooltipInfo*, ::UnityEngine::Transform*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SHOWTOOLTIP_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Void HideTooltip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_HIDETOOLTIP_OFFSET))(nullptr);
		}

		::System::Void _HandleResetableContentResponseMessage_b__82_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI__HANDLERESETABLECONTENTRESPONSEMESSAGE_B__82_3_OFFSET))(nullptr);
		}

		::System::Void SetLocalBossInfoUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SETLOCALBOSSINFOUI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickEnemyInfo_b__86_0(UIEnemyInfoPopup* arg)
		{
			((::System::Void(*)(UIEnemyInfoPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI__ONCLICKENEMYINFO_B__86_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetInfo(::MX::Data::WorldRaidSeasonInfo* arg, ::MX::Data::WorldRaidBossGroupInfo* arg2)
		{
			((::System::Void(*)(::MX::Data::WorldRaidSeasonInfo*, ::MX::Data::WorldRaidBossGroupInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SETINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnClickOpenRaidGuide_b__63_0(UIPopup_TutorialFailure* arg)
		{
			((::System::Void(*)(UIPopup_TutorialFailure*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI__ONCLICKOPENRAIDGUIDE_B__63_0_OFFSET))(arg, nullptr);
		}

		::MX::Data::BGMPlayInfo* GetCurrentCarrierBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_GETCURRENTCARRIERBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void OpenIaWorldRaidDifficultyUIAsBossRaid(BossAppearState* arg)
		{
			((::System::Void(*)(BossAppearState*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_OPENIAWORLDRAIDDIFFICULTYUIASBOSSRAID_OFFSET))(arg, nullptr);
		}

		::System::Void _EnterEventContentStage_g__OpenFormation|70_0(From* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(From*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI__ENTEREVENTCONTENTSTAGE_G__OPENFORMATION|70_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void WorldRaidEnter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_WORLDRAIDENTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOpenRaidGuide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONCLICKOPENRAIDGUIDE_OFFSET))(nullptr);
		}

		::System::Void _EnterEventContentStage_b__70_4(::FlatData::EchelonType* arg, ::FlatData::EchelonExtensionType* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI__ENTEREVENTCONTENTSTAGE_B__70_4_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OpenIaWorldRaidDifficultyUIAsEventStage(::MX::Data::EventContentStageInfo* arg, ::System::String* str)
		{
			((::System::Void(*)(::MX::Data::EventContentStageInfo*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_OPENIAWORLDRAIDDIFFICULTYUIASEVENTSTAGE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetSkillsPreview(UIInteractiveWorldRaidSkillScrollViewController* arg, ::MX::Data::WorldRaidStageInfo* arg2)
		{
			((::System::Void(*)(UIInteractiveWorldRaidSkillScrollViewController*, ::MX::Data::WorldRaidStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SETSKILLSPREVIEW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleWorldBossHpFakeSyncCallBackMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_HANDLEWORLDBOSSHPFAKESYNCCALLBACKMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetFinalBattleUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SETFINALBATTLEUI_OFFSET))(nullptr);
		}

		::System::Void OnClickEnemyInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONCLICKENEMYINFO_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickFinalEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_ONCLICKFINALENTER_OFFSET))(nullptr);
		}

		::System::Void SetWorldBossInfoUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_SETWORLDBOSSINFOUI_OFFSET))(nullptr);
		}

		::System::Void WorldBossEnterFormation(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI_WORLDBOSSENTERFORMATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _EnterEventContentStage_b__70_2(::FlatData::EchelonType* arg, ::FlatData::EchelonExtensionType* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::FlatData::EchelonExtensionType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIINTERACTIVEWORLDRAIDDIFFICULTYUI__ENTEREVENTCONTENTSTAGE_B__70_2_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

