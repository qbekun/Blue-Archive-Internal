#pragma once
#include "unitysdk.h"

class UICharacterInfo;
class IntTabController;
class UICharacterEquipmentSlots;
class UICharacterBasicInfo;
class UICharacterGrowth_LevelUpEstimation;
class UICharacterGrowth_TranscendenceEstimation;
class UICharacterProfile;
class UITexture;
class MXButton;
class MXToggle;
namespace UnityEngine { class GameObject; }
class UISprite;
class CharacterOpenConditionController;
class CombatStyleSelector;
class CharacterDetailData;
namespace UnityEngine { class Vector2; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::DBModel { class CharacterDB; }
class UIPopup_CVCollection;
class UICharacterVisualMode;
class SwipeDir;
class UIPopupCharacterProfile;

#define UICHARACTERDETAIL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x22BA940)
#define UICHARACTERDETAIL_ONMAXSTATTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x22BCC30)
#define UICHARACTERDETAIL_HANDLEGAINCHARACTER_OFFSET UNITYSDK_OFFSET(0x22BD070)
#define UICHARACTERDETAIL_SETDATA_OFFSET UNITYSDK_OFFSET(0x22BCCF0)
#define UICHARACTERDETAIL_ONCLICKZOOM_OFFSET UNITYSDK_OFFSET(0x22BDC70)
#define UICHARACTERDETAIL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x22BDD50)
#define UICHARACTERDETAIL_ISHASNOTCHARACTERTABACTIVE_OFFSET UNITYSDK_OFFSET(0x22BDF30)
#define UICHARACTERDETAIL_SWITCHDISPLAY_OFFSET UNITYSDK_OFFSET(0x22BDF60)
#define UICHARACTERDETAIL_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x22BE1A0)
#define UICHARACTERDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x22BE3C0)
#define UICHARACTERDETAIL_UPDATE_OFFSET UNITYSDK_OFFSET(0x22BE3D0)
#define UICHARACTERDETAIL_CHECKNOSWIPEZONE_OFFSET UNITYSDK_OFFSET(0x22BE470)
#define UICHARACTERDETAIL__HANDLEGAINCHARACTER_B__66_0_OFFSET UNITYSDK_OFFSET(0x22BE660)
#define UICHARACTERDETAIL_ONBACK_OFFSET UNITYSDK_OFFSET(0x22BE690)
#define UICHARACTERDETAIL__ONCLICKCHARACTERCV_B__60_0_OFFSET UNITYSDK_OFFSET(0x22BE6C0)
#define UICHARACTERDETAIL_HANDLECHARACTERSETFAVORITESRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x22BE700)
#define UICHARACTERDETAIL_ONCLICKLEFTARROW_OFFSET UNITYSDK_OFFSET(0x22BE7B0)
#define UICHARACTERDETAIL_ONCLICKPROFILE_OFFSET UNITYSDK_OFFSET(0x22BE7C0)
#define UICHARACTERDETAIL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22BE8A0)
#define UICHARACTERDETAIL_SETACTIVEARROWBTN_OFFSET UNITYSDK_OFFSET(0x22BD550)
#define UICHARACTERDETAIL_TRYREQUESTFAVORITECHANGED_OFFSET UNITYSDK_OFFSET(0x22BE1C0)
#define UICHARACTERDETAIL_HANDLECHANGESTYLE_OFFSET UNITYSDK_OFFSET(0x22BEA30)
#define UICHARACTERDETAIL_SETDOTS_OFFSET UNITYSDK_OFFSET(0x22BD5F0)
#define UICHARACTERDETAIL__ONCLICKZOOM_B__58_0_OFFSET UNITYSDK_OFFSET(0x22BF480)
#define UICHARACTERDETAIL_APPLYEQUIPMOUNTMOTION_OFFSET UNITYSDK_OFFSET(0x22BF4C0)
#define UICHARACTERDETAIL_ONCLICKCHARACTERCV_OFFSET UNITYSDK_OFFSET(0x22BF4F0)
#define UICHARACTERDETAIL_SWIPE_OFFSET UNITYSDK_OFFSET(0x22BF5D0)
#define UICHARACTERDETAIL_ONCLICKRIGHTARROW_OFFSET UNITYSDK_OFFSET(0x22BF690)
#define UICHARACTERDETAIL_ONHASCHARACTERTABCHANGED_OFFSET UNITYSDK_OFFSET(0x22BEB10)
#define UICHARACTERDETAIL_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x22BF6A0)
#define UICHARACTERDETAIL_ONHASNOTCHARACTERTABCHANGED_OFFSET UNITYSDK_OFFSET(0x22BF0A0)
#define UICHARACTERDETAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x22BF880)
#define UICHARACTERDETAIL__ONCLICKPROFILE_B__59_0_OFFSET UNITYSDK_OFFSET(0x22C02E0)
#define UICHARACTERDETAIL_ONOPENED_OFFSET UNITYSDK_OFFSET(0x22C0320)

	inline static constexpr unsigned int UICharacterDetail_TypeDefinitionIndex = 4795;

	class UICharacterDetail : public Il2CppObject
	{
	public:
		UICharacterInfo* characterInfo; // 0xD8
		UICharacterInfo* noneCharacterInfo; // 0xE0
		IntTabController* hasCharacterTab; // 0xE8
		IntTabController* hasNotCharacterTab; // 0xF0
		UICharacterEquipmentSlots* equipmentSlots; // 0xF8
		UICharacterBasicInfo* characterBasicInfo; // 0x100
		UICharacterGrowth_LevelUpEstimation* LevelUInfo; // 0x108
		UICharacterGrowth_TranscendenceEstimation* TranscendenceInfo; // 0x110
		UICharacterBasicInfo* nonecharacterBasicInfo; // 0x118
		UICharacterProfile* characterProfile; // 0x120
		UITexture* backgroundTexture; // 0x128
		MXButton* backButton; // 0x130
		MXButton* rightButton; // 0x138
		MXButton* leftButton; // 0x140
		MXButton* ZoomButton; // 0x148
		MXButton* ProfileButton; // 0x150
		MXButton* CharacterCVButton; // 0x158
		MXToggle* statToggle; // 0x160
		::UnityEngine::GameObject* basicInfoRedDot; // 0x168
		::UnityEngine::GameObject* levelUpButtonRedDot; // 0x170
		::UnityEngine::GameObject* transcendenceButtonRedDot; // 0x178
		::UnityEngine::GameObject* skillButtonRedDot; // 0x180
		::UnityEngine::GameObject* equipButtonRedDot; // 0x188
		::UnityEngine::GameObject* weaponButtonRedDot; // 0x190
		::UnityEngine::GameObject* potentialButtonRedDot; // 0x198
		::Il2CppArray<::System::Object*>* characterGrowthDisplay; // 0x1A0
		::Il2CppArray<::System::Object*>* characterGainDisplay; // 0x1A8
		::UnityEngine::GameObject* uiPopup_SkillTooltip; // 0x1B0
		UISprite* NoSwipeZone; // 0x1B8
		CharacterOpenConditionController* openCondition; // 0x1C0
		CombatStyleSelector* combatStyleSelector; // 0x1C8
		CharacterDetailData* detailInfo; // 0x1D0
		::System::Int32 curTab; // 0x1D8
		::UnityEngine::Vector2* startSwipePos; // 0x1DC
		::System::Int32 BASIC_INFO; // 0x0
		::System::Int32 LEVEL_UP; // 0x0
		::System::Int32 TRANSCENDENCE; // 0x0
		::System::Int32 PROFILE; // 0x0

		::System::Void Initialize(CharacterDetailData* arg)
		{
			((::System::Void(*)(CharacterDetailData*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnMaxStatToggleChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_ONMAXSTATTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HandleGainCharacter(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_HANDLEGAINCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_SETDATA_OFFSET))(nullptr);
		}

		::System::Void OnClickZoom()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_ONCLICKZOOM_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean IsHasNotCharacterTabActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_ISHASNOTCHARACTERTABACTIVE_OFFSET))(nullptr);
		}

		::System::Void SwitchDisplay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_SWITCHDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean CheckNoSwipeZone(::UnityEngine::Vector2* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_CHECKNOSWIPEZONE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _HandleGainCharacter_b__66_0(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL__HANDLEGAINCHARACTER_B__66_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_ONBACK_OFFSET))(nullptr);
		}

		::System::Void _OnClickCharacterCV_b__60_0(UIPopup_CVCollection* arg)
		{
			((::System::Void(*)(UIPopup_CVCollection*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL__ONCLICKCHARACTERCV_B__60_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCharacterSetFavoritesResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_HANDLECHARACTERSETFAVORITESRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickLeftArrow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_ONCLICKLEFTARROW_OFFSET))(nullptr);
		}

		::System::Void OnClickProfile()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_ONCLICKPROFILE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetActiveArrowBtn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_SETACTIVEARROWBTN_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryRequestFavoriteChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_TRYREQUESTFAVORITECHANGED_OFFSET))(nullptr);
		}

		::System::Void HandleChangeStyle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_HANDLECHANGESTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDots()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_SETDOTS_OFFSET))(nullptr);
		}

		::System::Void _OnClickZoom_b__58_0(UICharacterVisualMode* arg)
		{
			((::System::Void(*)(UICharacterVisualMode*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL__ONCLICKZOOM_B__58_0_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyEquipMountMotion(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_APPLYEQUIPMOUNTMOTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCharacterCV()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_ONCLICKCHARACTERCV_OFFSET))(nullptr);
		}

		::System::Void Swipe(SwipeDir* arg)
		{
			((::System::Void(*)(SwipeDir*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_SWIPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRightArrow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_ONCLICKRIGHTARROW_OFFSET))(nullptr);
		}

		::System::Void OnHasCharacterTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_ONHASCHARACTERTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnHasNotCharacterTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_ONHASNOTCHARACTERTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickProfile_b__59_0(UIPopupCharacterProfile* arg)
		{
			((::System::Void(*)(UIPopupCharacterProfile*, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL__ONCLICKPROFILE_B__59_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERDETAIL_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

