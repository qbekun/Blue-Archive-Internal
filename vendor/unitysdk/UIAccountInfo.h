#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UISlider;
namespace UnityEngine { class GameObject; }
class UITexture;
class UIEmblemParcel;
class PortraitSpineCharacter;
namespace UnityEngine { class Coroutine; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class UICharacterSelectPopup;
class UIPopup_EmblemList;

#define UIACCOUNTINFO_HANDLEACCOUNTNICKNAMERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21E6E10)
#define UIACCOUNTINFO_HANDLEACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21E6F20)
#define UIACCOUNTINFO_REFRESHLEVELEXP_OFFSET UNITYSDK_OFFSET(0x21E70A0)
#define UIACCOUNTINFO_ONCLICKEMBLEMEDIT_OFFSET UNITYSDK_OFFSET(0x21E7530)
#define UIACCOUNTINFO_ONEDITNICKNAME_OFFSET UNITYSDK_OFFSET(0x21E76D0)
#define UIACCOUNTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x21E79E0)
#define UIACCOUNTINFO_REFRESHUUID_OFFSET UNITYSDK_OFFSET(0x21E7A50)
#define UIACCOUNTINFO_HANDLENEWEMBLEMACQUIREMESSAGE_OFFSET UNITYSDK_OFFSET(0x21E7B10)
#define UIACCOUNTINFO_ONEDITCOMMENT_OFFSET UNITYSDK_OFFSET(0x21E7C80)
#define UIACCOUNTINFO_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x21E7F90)
#define UIACCOUNTINFO_REFRESHCOLLECTIONINFO_OFFSET UNITYSDK_OFFSET(0x21E7FF0)
#define UIACCOUNTINFO_ONCONFIRMCHANGEREPRESENTATIVE_OFFSET UNITYSDK_OFFSET(0x21E8110)
#define UIACCOUNTINFO__ONOPENCHARACTERPOPUP_B__65_0_OFFSET UNITYSDK_OFFSET(0x21E8300)
#define UIACCOUNTINFO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x21E8590)
#define UIACCOUNTINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x21E8820)
#define UIACCOUNTINFO_ONCLICKCALLNAMESOUNDBUTTON_OFFSET UNITYSDK_OFFSET(0x21E9150)
#define UIACCOUNTINFO_REFRESHCALLNAME_OFFSET UNITYSDK_OFFSET(0x21E9500)
#define UIACCOUNTINFO_REFRESHFAVORITE_OFFSET UNITYSDK_OFFSET(0x21E9800)
#define UIACCOUNTINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x21E9C30)
#define UIACCOUNTINFO_CO_CALLNAMEDOWNLOADREQUEST_OFFSET UNITYSDK_OFFSET(0x21E9F20)
#define UIACCOUNTINFO_ONCLICKUUID_OFFSET UNITYSDK_OFFSET(0x21E9FB0)
#define UIACCOUNTINFO_ONCLICKIDCARD_OFFSET UNITYSDK_OFFSET(0x21EA130)
#define UIACCOUNTINFO_REFRESHCOMMENT_OFFSET UNITYSDK_OFFSET(0x21EA1A0)
#define UIACCOUNTINFO_CO_PLAYCALLNAME_OFFSET UNITYSDK_OFFSET(0x21E9490)
#define UIACCOUNTINFO_ONOPENCHARACTERPOPUP_OFFSET UNITYSDK_OFFSET(0x21EA370)
#define UIACCOUNTINFO_REFRESHNICKNAME_OFFSET UNITYSDK_OFFSET(0x21E6E80)
#define UIACCOUNTINFO_REFRESHCALLNAMESOUNDBUTTON_OFFSET UNITYSDK_OFFSET(0x21E96A0)
#define UIACCOUNTINFO_ONCLICKUSERINFO_OFFSET UNITYSDK_OFFSET(0x21EA480)
#define UIACCOUNTINFO_REFRESHNEWBIEOBJECT_OFFSET UNITYSDK_OFFSET(0x21EA5E0)
#define UIACCOUNTINFO_REFRESHEMBLEMEDITYELLOWDOT_OFFSET UNITYSDK_OFFSET(0x21E7B80)
#define UIACCOUNTINFO_HANDLEACCOUNTCALLNAMERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x21EA8A0)
#define UIACCOUNTINFO__REFRESHCALLNAMESOUNDBUTTON_B__51_0_OFFSET UNITYSDK_OFFSET(0x21EA910)
#define UIACCOUNTINFO_REFRESHALL_OFFSET UNITYSDK_OFFSET(0x21E6F90)
#define UIACCOUNTINFO__ONCLICKEMBLEMEDIT_B__68_0_OFFSET UNITYSDK_OFFSET(0x21EAF70)
#define UIACCOUNTINFO_ONOPENED_OFFSET UNITYSDK_OFFSET(0x21EB060)
#define UIACCOUNTINFO_ONEDITCALLNAME_OFFSET UNITYSDK_OFFSET(0x21EB270)
#define UIACCOUNTINFO_REFRESHARENAINFO_OFFSET UNITYSDK_OFFSET(0x21EAB50)
#define UIACCOUNTINFO_REFRESHEMBLEM_OFFSET UNITYSDK_OFFSET(0x21EAF30)
#define UIACCOUNTINFO__REFRESHFAVORITE_B__47_0_OFFSET UNITYSDK_OFFSET(0x21EB580)

	inline static constexpr unsigned int UIAccountInfo_TypeDefinitionIndex = 4243;

	class UIAccountInfo : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		MXButton* commentButton; // 0xE0
		UILabel* commentLabel; // 0xE8
		MXButton* nicknameButton; // 0xF0
		UILabel* nicknameLabel; // 0xF8
		MXButton* callnameButton; // 0x100
		MXButton* callnameSoundButton; // 0x108
		MXButton* callnameSoundDisableButton; // 0x110
		UILabel* callnameLabel; // 0x118
		UILabel* callnameEmptyLabel; // 0x120
		UILabel* level; // 0x128
		UILabel* exp; // 0x130
		UISlider* expGauge; // 0x138
		::UnityEngine::GameObject* normalLevelExp; // 0x140
		::UnityEngine::GameObject* maxLevelExp; // 0x148
		UILabel* uuid; // 0x150
		MXButton* uuidButton; // 0x158
		UILabel* characterCollection; // 0x160
		UITexture* bgTaxTexture; // 0x168
		MXButton* characterPopupButton; // 0x170
		::UnityEngine::GameObject* spineParent; // 0x178
		UILabel* characterNameLabel; // 0x180
		UITexture* arenaRankIcon; // 0x188
		UILabel* arenaSeasonRanking; // 0x190
		UILabel* arenaRanking; // 0x198
		MXButton* idCardButton; // 0x1A0
		UIEmblemParcel* equipedEmblem; // 0x1A8
		MXButton* emblemEditButton; // 0x1B0
		::UnityEngine::GameObject* newEmblemMark; // 0x1B8
		UITexture* characterIconTexture; // 0x1C0
		MXButton* userInfoButton; // 0x1C8
		::UnityEngine::GameObject* newbieTag; // 0x1D0
		UILabel* newbieTagInfoLabel; // 0x1D8
		::UnityEngine::GameObject* newbieIcon; // 0x1E0
		::System::String* newbieTagInfoComment; // 0x1E8
		PortraitSpineCharacter* spineCharacter; // 0x1F0
		::UnityEngine::Coroutine* coCallnameDownloadHash; // 0x1F8
		::System::Single requestCallnameDownloadWaitTime; // 0x200

		::System::Boolean HandleAccountNicknameResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_HANDLEACCOUNTNICKNAMERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleAccountSetRepresentCharacterIdAndCommentResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_HANDLEACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshLevelExp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_REFRESHLEVELEXP_OFFSET))(nullptr);
		}

		::System::Void OnClickEmblemEdit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_ONCLICKEMBLEMEDIT_OFFSET))(nullptr);
		}

		::System::Void OnEditNickname()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_ONEDITNICKNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshUUID()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_REFRESHUUID_OFFSET))(nullptr);
		}

		::System::Boolean HandleNewEmblemAcquireMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_HANDLENEWEMBLEMACQUIREMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEditComment()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_ONEDITCOMMENT_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void RefreshCollectionInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_REFRESHCOLLECTIONINFO_OFFSET))(nullptr);
		}

		::System::Void OnConfirmChangeRepresentative(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_ONCONFIRMCHANGEREPRESENTATIVE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnOpenCharacterPopup_b__65_0(UICharacterSelectPopup* arg)
		{
			((::System::Void(*)(UICharacterSelectPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO__ONOPENCHARACTERPOPUP_B__65_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickCallNameSoundButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_ONCLICKCALLNAMESOUNDBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefreshCallname()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_REFRESHCALLNAME_OFFSET))(nullptr);
		}

		::System::Void RefreshFavorite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_REFRESHFAVORITE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_CallnameDownloadRequest()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_CO_CALLNAMEDOWNLOADREQUEST_OFFSET))(nullptr);
		}

		::System::Void OnClickUUID()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_ONCLICKUUID_OFFSET))(nullptr);
		}

		::System::Void OnClickIdCard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_ONCLICKIDCARD_OFFSET))(nullptr);
		}

		::System::Void RefreshComment()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_REFRESHCOMMENT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_PlayCallName()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_CO_PLAYCALLNAME_OFFSET))(nullptr);
		}

		::System::Void OnOpenCharacterPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_ONOPENCHARACTERPOPUP_OFFSET))(nullptr);
		}

		::System::Void RefreshNickname()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_REFRESHNICKNAME_OFFSET))(nullptr);
		}

		::System::Void RefreshCallnameSoundButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_REFRESHCALLNAMESOUNDBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickUserInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_ONCLICKUSERINFO_OFFSET))(nullptr);
		}

		::System::Void RefreshNewbieObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_REFRESHNEWBIEOBJECT_OFFSET))(nullptr);
		}

		::System::Void RefreshEmblemEditYellowDot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_REFRESHEMBLEMEDITYELLOWDOT_OFFSET))(nullptr);
		}

		::System::Boolean HandleAccountCallnameResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_HANDLEACCOUNTCALLNAMERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _RefreshCallnameSoundButton_b__51_0(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO__REFRESHCALLNAMESOUNDBUTTON_B__51_0_OFFSET))(str, nullptr);
		}

		::System::Void RefreshAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_REFRESHALL_OFFSET))(nullptr);
		}

		::System::Void _OnClickEmblemEdit_b__68_0(UIPopup_EmblemList* arg)
		{
			((::System::Void(*)(UIPopup_EmblemList*, ::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO__ONCLICKEMBLEMEDIT_B__68_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnEditCallname()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_ONEDITCALLNAME_OFFSET))(nullptr);
		}

		::System::Void RefreshArenaInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_REFRESHARENAINFO_OFFSET))(nullptr);
		}

		::System::Void RefreshEmblem(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO_REFRESHEMBLEM_OFFSET))(arg, nullptr);
		}

		::System::Void _RefreshFavorite_b__47_0(PortraitSpineCharacter* arg)
		{
			((::System::Void(*)(PortraitSpineCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + UIACCOUNTINFO__REFRESHFAVORITE_B__47_0_OFFSET))(arg, nullptr);
		}

	};

