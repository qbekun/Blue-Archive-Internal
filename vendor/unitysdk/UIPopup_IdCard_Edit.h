#pragma once
#include "unitysdk.h"

class MXButton;
class UIPopup_IdCardEditTabContoller;
class UIScrollView;
class UITexture;
class UIEmblemParcel;
namespace UnityEngine { class GameObject; }
class UILabel;
class MXToggle;
namespace MX::GameLogic::DBModel { class FriendIdCardDB; }
class UIPopup_IdCardBackground;
class FriendShowToggleFlag;
namespace Assets::_MX::Program::Scripts::Network { class TaskState; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UIPopup_EmblemList;
class UIPopup_Input;

#define UIPOPUP_IDCARD_EDIT_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0x2578100)
#define UIPOPUP_IDCARD_EDIT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2578200)
#define UIPOPUP_IDCARD_EDIT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x25782B0)
#define UIPOPUP_IDCARD_EDIT__ONTABCHANGED_G__YIELDREPOSITION|27_0_OFFSET UNITYSDK_OFFSET(0x2578190)
#define UIPOPUP_IDCARD_EDIT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2578420)
#define UIPOPUP_IDCARD_EDIT_SETBGTEXTURE_OFFSET UNITYSDK_OFFSET(0x2578530)
#define UIPOPUP_IDCARD_EDIT_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2578620)
#define UIPOPUP_IDCARD_EDIT_ONCOMMENTINPUT_OFFSET UNITYSDK_OFFSET(0x2578870)
#define UIPOPUP_IDCARD_EDIT_CHECKDBANDSYNC_OFFSET UNITYSDK_OFFSET(0x2578900)
#define UIPOPUP_IDCARD_EDIT_ONCLICKEDITCOMMENT_OFFSET UNITYSDK_OFFSET(0x2578BB0)
#define UIPOPUP_IDCARD_EDIT_ONCONFIRMCHANGEBG_OFFSET UNITYSDK_OFFSET(0x2578C90)
#define UIPOPUP_IDCARD_EDIT__ONCLICKEDITBG_B__40_0_OFFSET UNITYSDK_OFFSET(0x2578D50)
#define UIPOPUP_IDCARD_EDIT_GETCURRENTFLAG_OFFSET UNITYSDK_OFFSET(0x2578E00)
#define UIPOPUP_IDCARD_EDIT_SETREPRESENTATIVETEXTURE_OFFSET UNITYSDK_OFFSET(0x2578EA0)
#define UIPOPUP_IDCARD_EDIT_ONCONFIRMCHANGEREPRESENTATIVE_OFFSET UNITYSDK_OFFSET(0x2578FE0)
#define UIPOPUP_IDCARD_EDIT_ONTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x2579010)
#define UIPOPUP_IDCARD_EDIT_ONCLICKEDITREPRESENTATIVE_OFFSET UNITYSDK_OFFSET(0x2579070)
#define UIPOPUP_IDCARD_EDIT_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x2579290)
#define UIPOPUP_IDCARD_EDIT_ONCLICKEDITBG_OFFSET UNITYSDK_OFFSET(0x2579310)
#define UIPOPUP_IDCARD_EDIT__CHECKDBANDSYNC_B__44_0_OFFSET UNITYSDK_OFFSET(0x25793F0)
#define UIPOPUP_IDCARD_EDIT_SETTOGGLES_OFFSET UNITYSDK_OFFSET(0x2578770)
#define UIPOPUP_IDCARD_EDIT_SETCOMMENT_OFFSET UNITYSDK_OFFSET(0x25788C0)
#define UIPOPUP_IDCARD_EDIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2579400)
#define UIPOPUP_IDCARD_EDIT_HANDLENEWEMBLEMACQUIREMESSAGE_OFFSET UNITYSDK_OFFSET(0x2579EF0)
#define UIPOPUP_IDCARD_EDIT__ONCLICKEDITEMBLEM_B__39_0_OFFSET UNITYSDK_OFFSET(0x257A030)
#define UIPOPUP_IDCARD_EDIT_ONTOGGLEALLCHANGED_OFFSET UNITYSDK_OFFSET(0x257A1C0)
#define UIPOPUP_IDCARD_EDIT__ONCLICKEDITCOMMENT_B__42_0_OFFSET UNITYSDK_OFFSET(0x257A2C0)
#define UIPOPUP_IDCARD_EDIT_ONCLICKEDITEMBLEM_OFFSET UNITYSDK_OFFSET(0x257A310)
#define UIPOPUP_IDCARD_EDIT_SETUI_OFFSET UNITYSDK_OFFSET(0x2578710)
#define UIPOPUP_IDCARD_EDIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x257A6B0)
#define UIPOPUP_IDCARD_EDIT_SETEMBLEM_OFFSET UNITYSDK_OFFSET(0x257A4B0)

	inline static constexpr unsigned int UIPopup_IdCard_Edit_TypeDefinitionIndex = 6183;

	class UIPopup_IdCard_Edit : public Il2CppObject
	{
	public:
		MXButton* confirmButton; // 0xD8
		UIPopup_IdCardEditTabContoller* tabContoller; // 0xE0
		UIScrollView* firstTabScrollView; // 0xE8
		UITexture* representativeThumbnail; // 0xF0
		MXButton* editRepresentativeButton; // 0xF8
		UITexture* background; // 0x100
		MXButton* editBackground; // 0x108
		UIEmblemParcel* emblemParcel; // 0x110
		MXButton* editEmblemButton; // 0x118
		::UnityEngine::GameObject* emblemYellowDot; // 0x120
		UILabel* comment; // 0x128
		MXButton* editComment; // 0x130
		MXToggle* selectAll; // 0x138
		MXToggle* accountLevelToggle; // 0x140
		MXToggle* friendCodeToggle; // 0x148
		MXToggle* raidRankingToggle; // 0x150
		MXToggle* eliminateRaidRankingToggle; // 0x158
		MXToggle* arenaRankingToggle; // 0x160
		MXToggle* multiFloorRaidClearedDifficultyToggle; // 0x168
		::MX::GameLogic::DBModel::FriendIdCardDB* dbCache; // 0x170

		::System::Void OnTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnTabChanged_g__YieldReposition|27_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT__ONTABCHANGED_G__YIELDREPOSITION|27_0_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetBgTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_SETBGTEXTURE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnCommentInput(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_ONCOMMENTINPUT_OFFSET))(str, nullptr);
		}

		::System::Void CheckDBAndSync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_CHECKDBANDSYNC_OFFSET))(nullptr);
		}

		::System::Void OnClickEditComment()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_ONCLICKEDITCOMMENT_OFFSET))(nullptr);
		}

		::System::Void OnConfirmChangeBg(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_ONCONFIRMCHANGEBG_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickEditBg_b__40_0(UIPopup_IdCardBackground* arg)
		{
			((::System::Void(*)(UIPopup_IdCardBackground*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT__ONCLICKEDITBG_B__40_0_OFFSET))(arg, nullptr);
		}

		FriendShowToggleFlag* GetCurrentFlag()
		{
			return ((FriendShowToggleFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_GETCURRENTFLAG_OFFSET))(nullptr);
		}

		::System::Void SetRepresentativeTexture()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_SETREPRESENTATIVETEXTURE_OFFSET))(nullptr);
		}

		::System::Void OnConfirmChangeRepresentative(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_ONCONFIRMCHANGEREPRESENTATIVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnToggleChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_ONTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickEditRepresentative()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_ONCLICKEDITREPRESENTATIVE_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void OnClickEditBg()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_ONCLICKEDITBG_OFFSET))(nullptr);
		}

		::System::Void _CheckDBAndSync_b__44_0(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT__CHECKDBANDSYNC_B__44_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetToggles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_SETTOGGLES_OFFSET))(nullptr);
		}

		::System::Void SetComment()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_SETCOMMENT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HandleNewEmblemAcquireMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_HANDLENEWEMBLEMACQUIREMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickEditEmblem_b__39_0(UIPopup_EmblemList* arg)
		{
			((::System::Void(*)(UIPopup_EmblemList*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT__ONCLICKEDITEMBLEM_B__39_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnToggleAllChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_ONTOGGLEALLCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _OnClickEditComment_b__42_0(UIPopup_Input* arg)
		{
			((::System::Void(*)(UIPopup_Input*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT__ONCLICKEDITCOMMENT_B__42_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEditEmblem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_ONCLICKEDITEMBLEM_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_SETUI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetEmblem(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_IDCARD_EDIT_SETEMBLEM_OFFSET))(arg, nullptr);
		}

	};

