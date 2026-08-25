#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UITexture;
class UISlider;
class UIGradientSprite;
class UILabel;
class UIPopup_ChapterReward;
class UIWidget;
class UIChapterCompleteStampPlayer;
namespace MX::Data { class CampaignChapterInfo; }
namespace FlatData { class StageDifficulty; }
class UIPopup_OpenContents;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIPopup_ChapterSelect;

#define UISTAGESELECT_CHAPTERWIDGETS_GETCHAPTERREWARDPOPUPOBJECT_OFFSET UNITYSDK_OFFSET(0xB20630)
#define UISTAGESELECT_CHAPTERWIDGETS_REFRESHGAUGECOLOR_OFFSET UNITYSDK_OFFSET(0xB26900)
#define UISTAGESELECT_CHAPTERWIDGETS_REFRESHCHAPTERLABELS_OFFSET UNITYSDK_OFFSET(0xB269D0)
#define UISTAGESELECT_CHAPTERWIDGETS_PLAYCHAPTERSTAMPANIMATION_OFFSET UNITYSDK_OFFSET(0xB25A80)
#define UISTAGESELECT_CHAPTERWIDGETS_GET_CHAPTERCOMPLETESTAMPPLAYER_OFFSET UNITYSDK_OFFSET(0xB26CB0)
#define UISTAGESELECT_CHAPTERWIDGETS_REFRESHCHAPTERREWARDBUTTONS_OFFSET UNITYSDK_OFFSET(0xB26D20)
#define UISTAGESELECT_CHAPTERWIDGETS_START_OFFSET UNITYSDK_OFFSET(0xB26DF0)
#define UISTAGESELECT_CHAPTERWIDGETS_REFRESH_OFFSET UNITYSDK_OFFSET(0xB1D360)
#define UISTAGESELECT_CHAPTERWIDGETS_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB27B20)
#define UISTAGESELECT_CHAPTERWIDGETS_ONCLICKMULTISWEEPPOPUP_OFFSET UNITYSDK_OFFSET(0xB27CA0)
#define UISTAGESELECT_CHAPTERWIDGETS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB27D50)
#define UISTAGESELECT_CHAPTERWIDGETS_ONCLICKOPENCONTENTSPOPUP_OFFSET UNITYSDK_OFFSET(0xB27F50)
#define UISTAGESELECT_CHAPTERWIDGETS_REFRESHCOMPLETEIMAGE_OFFSET UNITYSDK_OFFSET(0xB275B0)
#define UISTAGESELECT_CHAPTERWIDGETS_REFRESHCHAPTERTEXTURE_OFFSET UNITYSDK_OFFSET(0xB274A0)
#define UISTAGESELECT_CHAPTERWIDGETS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB21C30)
#define UISTAGESELECT_CHAPTERWIDGETS__ONCLICKOPENCONTENTSPOPUP_B__45_0_OFFSET UNITYSDK_OFFSET(0xB28030)
#define UISTAGESELECT_CHAPTERWIDGETS_HANDLECAMPAIGNCHAPTERCLEARREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB28070)
#define UISTAGESELECT_CHAPTERWIDGETS__ONCLICKCHAPTERSELECT_B__43_0_OFFSET UNITYSDK_OFFSET(0xB28170)
#define UISTAGESELECT_CHAPTERWIDGETS_ONCLICKCHAPTERREWARD_OFFSET UNITYSDK_OFFSET(0xB281B0)
#define UISTAGESELECT_CHAPTERWIDGETS_.CTOR_OFFSET UNITYSDK_OFFSET(0xB28410)
#define UISTAGESELECT_CHAPTERWIDGETS_ONCLICKCHAPTERSELECT_OFFSET UNITYSDK_OFFSET(0xB28420)
#define UISTAGESELECT_CHAPTERWIDGETS_REFRESHCHAPTERACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0xB27270)
#define UISTAGESELECT_CHAPTERWIDGETS_HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB28560)
#define UISTAGESELECT_CHAPTERWIDGETS_REFRESHCHPATERSELECTREDDOT_OFFSET UNITYSDK_OFFSET(0xB27AC0)
#define UISTAGESELECT_CHAPTERWIDGETS_REFRESHEVENTREWARDINFO_OFFSET UNITYSDK_OFFSET(0xB27820)

	inline static constexpr unsigned int UIStageSelect_ChapterWidgets_TypeDefinitionIndex = 8264;

	class UIStageSelect_ChapterWidgets : public Il2CppObject
	{
	public:
		MXButton* chapterRewardButton; // 0x18
		MXButton* chapterRewardButton_Receive; // 0x20
		MXButton* chapterSelectButton; // 0x28
		MXButton* openContentsButton; // 0x30
		MXButton* multiSweepButton; // 0x38
		::UnityEngine::GameObject* chapterRewardButton_Dis; // 0x40
		::UnityEngine::GameObject* chapterRewardFxOnce; // 0x48
		UITexture* chapterImage; // 0x50
		UISlider* starCountSlider; // 0x58
		UIGradientSprite* gradientSprite; // 0x60
		::Il2CppArray<::System::Object*>* proceedingColor; // 0x68
		::Il2CppArray<::System::Object*>* completeColor; // 0x70
		UILabel* chapterNumberLabel; // 0x78
		UILabel* chapterCountLabel; // 0x80
		UILabel* chapterNameLabel; // 0x88
		UILabel* missionLabel; // 0x90
		UILabel* chapterTagLabel; // 0x98
		::UnityEngine::GameObject* eventRewardInfo; // 0xA0
		UILabel* eventRewardInfoTextLabel; // 0xA8
		UIPopup_ChapterReward* chapterRewardPopup; // 0xB0
		UIWidget* chapterSelectButtonReddot; // 0xB8
		UIChapterCompleteStampPlayer* _chapterCompleteStampPlayer; // 0xC0
		::MX::Data::CampaignChapterInfo* chapterInfo; // 0xC8
		::FlatData::StageDifficulty* stageDifficulty; // 0xD0

		::UnityEngine::GameObject* GetChapterRewardPopupObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_GETCHAPTERREWARDPOPUPOBJECT_OFFSET))(nullptr);
		}

		::System::Void RefreshGaugeColor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_REFRESHGAUGECOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshChapterLabels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_REFRESHCHAPTERLABELS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayChapterStampAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_PLAYCHAPTERSTAMPANIMATION_OFFSET))(nullptr);
		}

		UIChapterCompleteStampPlayer* get_chapterCompleteStampPlayer()
		{
			return ((UIChapterCompleteStampPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_GET_CHAPTERCOMPLETESTAMPPLAYER_OFFSET))(nullptr);
		}

		::System::Void RefreshChapterRewardButtons(::System::Boolean arg, ::System::Boolean arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_REFRESHCHAPTERREWARDBUTTONS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_START_OFFSET))(nullptr);
		}

		::System::Void Refresh(::MX::Data::CampaignChapterInfo* arg, ::FlatData::StageDifficulty* arg2, ::System::Boolean arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Data::CampaignChapterInfo*, ::FlatData::StageDifficulty*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_REFRESH_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickMultiSweepPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_ONCLICKMULTISWEEPPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickOpenContentsPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_ONCLICKOPENCONTENTSPOPUP_OFFSET))(nullptr);
		}

		::System::Void RefreshCompleteImage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_REFRESHCOMPLETEIMAGE_OFFSET))(nullptr);
		}

		::System::Void RefreshChapterTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_REFRESHCHAPTERTEXTURE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void _OnClickOpenContentsPopup_b__45_0(UIPopup_OpenContents* arg)
		{
			((::System::Void(*)(UIPopup_OpenContents*, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS__ONCLICKOPENCONTENTSPOPUP_B__45_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCampaignChapterClearRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_HANDLECAMPAIGNCHAPTERCLEARREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickChapterSelect_b__43_0(UIPopup_ChapterSelect* arg)
		{
			((::System::Void(*)(UIPopup_ChapterSelect*, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS__ONCLICKCHAPTERSELECT_B__43_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickChapterReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_ONCLICKCHAPTERREWARD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickChapterSelect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_ONCLICKCHAPTERSELECT_OFFSET))(nullptr);
		}

		::System::Void RefreshChapterAchievement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_REFRESHCHAPTERACHIEVEMENT_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventRewardIncreaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshChpaterSelectReddot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_REFRESHCHPATERSELECTREDDOT_OFFSET))(nullptr);
		}

		::System::Void RefreshEventRewardInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTAGESELECT_CHAPTERWIDGETS_REFRESHEVENTREWARDINFO_OFFSET))(nullptr);
		}

	};

