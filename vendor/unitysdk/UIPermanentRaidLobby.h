#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
class UILabel;
class TweenAlpha;
namespace UnityEngine { class Animation; }
class UIPermanentRaidBossGroupTabController;
class UIPermanentRaidRoomListScrollViewController;
class UISprite;
namespace MX::GameLogic::DBModel { class RaidDB; }
namespace FlatData { class RaidBossGroupType; }
namespace MX::Data::Excel { class GroundExcel; }
class UIRaidLobby;
class UIPopupPermanentRaid_BossSelect;
class PermanentRaidRoomEndMessage;

#define UIPERMANENTRAIDLOBBY_ONTORAIDBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26D6E90)
#define UIPERMANENTRAIDLOBBY_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x26D6F70)
#define UIPERMANENTRAIDLOBBY__ONBOSSSELECTBUTTONCLICK_B__49_1_OFFSET UNITYSDK_OFFSET(0x26D7000)
#define UIPERMANENTRAIDLOBBY_UPDATE_OFFSET UNITYSDK_OFFSET(0x26D7AF0)
#define UIPERMANENTRAIDLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0x26D7F80)
#define UIPERMANENTRAIDLOBBY_ONLEFTARROWBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26D7F90)
#define UIPERMANENTRAIDLOBBY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x26D8110)
#define UIPERMANENTRAIDLOBBY__ONTORAIDBUTTONCLICK_B__50_0_OFFSET UNITYSDK_OFFSET(0x26D8180)
#define UIPERMANENTRAIDLOBBY_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x26D8210)
#define UIPERMANENTRAIDLOBBY_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x26D8360)
#define UIPERMANENTRAIDLOBBY_SET_PLAYLONGOPENANI_OFFSET UNITYSDK_OFFSET(0x26D8480)
#define UIPERMANENTRAIDLOBBY___N__0_OFFSET UNITYSDK_OFFSET(0x26D8490)
#define UIPERMANENTRAIDLOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0x26D84A0)
#define UIPERMANENTRAIDLOBBY_ONSHOWRANKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26D8EF0)
#define UIPERMANENTRAIDLOBBY__ONBOSSSELECTBUTTONCLICK_B__49_0_OFFSET UNITYSDK_OFFSET(0x26D9050)
#define UIPERMANENTRAIDLOBBY_ONRIGHTARROWBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26D90E0)
#define UIPERMANENTRAIDLOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x26D9250)
#define UIPERMANENTRAIDLOBBY_REFRESHBOSSGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x26D7120)
#define UIPERMANENTRAIDLOBBY_GET_PLAYLONGOPENANI_OFFSET UNITYSDK_OFFSET(0x26D9430)
#define UIPERMANENTRAIDLOBBY_HANDLEPERMANENTRAIDROOMENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x26D9440)
#define UIPERMANENTRAIDLOBBY_GETOPENANIDROPDOWNITEMS_OFFSET UNITYSDK_OFFSET(0x26D9670)
#define UIPERMANENTRAIDLOBBY_ONBOSSGROUPTABCHANGED_OFFSET UNITYSDK_OFFSET(0x26D9A40)
#define UIPERMANENTRAIDLOBBY_ONBOSSSELECTBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26D9D50)

	inline static constexpr unsigned int UIPermanentRaidLobby_TypeDefinitionIndex = 7037;

	class UIPermanentRaidLobby : public Il2CppObject
	{
	public:
		::System::Boolean _PlayLongOpenAni_k__BackingField; // 0xD8
		MXButton* backButton; // 0xE0
		MXButton* bossSelectButton; // 0xE8
		MXButton* toRaidButton; // 0xF0
		::System::String* longOpenAniName; // 0xF8
		::System::String* shortOpenAniName; // 0x100
		UITexture* bossPortrait; // 0x108
		UITexture* bossBg; // 0x110
		UITexture* bossNameBg; // 0x118
		UITexture* bossSubArmorBg; // 0x120
		UILabel* bossArmorType; // 0x128
		UILabel* bossName; // 0x130
		TweenAlpha* mainArmorTweenAlpha; // 0x138
		TweenAlpha* subArmorTweenAlpha; // 0x140
		Il2CppObject* bossNameBgColor; // 0x148
		Il2CppObject* bossNameColorApplyTarget; // 0x150
		::UnityEngine::Animation* bossChangeAnim; // 0x158
		UIPermanentRaidBossGroupTabController* bossGroupTab; // 0x160
		UIPermanentRaidRoomListScrollViewController* roomList; // 0x168
		UISprite* highScoreBg; // 0x170
		UILabel* highScoreDifficulty; // 0x178
		UILabel* highScoreValue; // 0x180
		MXButton* showRankButton; // 0x188
		Il2CppObject* highScoreBgColor; // 0x190
		MXButton* leftArrowButton; // 0x198
		MXButton* rightArrowButton; // 0x1A0
		::System::Boolean _lockBossChangeAnim; // 0x1A8
		Il2CppObject* _bossNameBgColorDic; // 0x1B0
		Il2CppObject* _highScoreBgColorDic; // 0x1B8
		Il2CppObject* _bossGroupTypes; // 0x1C0
		Il2CppObject* _currentBossGroupType; // 0x1C8
		::MX::GameLogic::DBModel::RaidDB* _raidDB; // 0x1D0
		::FlatData::RaidBossGroupType* _playingBossGroupType; // 0x1D8
		::System::Int32 _playingBossIndex; // 0x1DC
		::MX::Data::Excel::GroundExcel* _sampleGround; // 0x1E0

		::System::Void OnToRaidButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_ONTORAIDBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_COOPENANIMATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _OnBossSelectButtonClick_b__49_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY__ONBOSSSELECTBUTTONCLICK_B__49_1_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnLeftArrowButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_ONLEFTARROWBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void _OnToRaidButtonClick_b__50_0(UIRaidLobby* arg)
		{
			((::System::Void(*)(UIRaidLobby*, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY__ONTORAIDBUTTONCLICK_B__50_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void set_PlayLongOpenAni(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_SET_PLAYLONGOPENANI_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY___N__0_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnShowRankButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_ONSHOWRANKBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void _OnBossSelectButtonClick_b__49_0(UIPopupPermanentRaid_BossSelect* arg)
		{
			((::System::Void(*)(UIPopupPermanentRaid_BossSelect*, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY__ONBOSSSELECTBUTTONCLICK_B__49_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnRightArrowButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_ONRIGHTARROWBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshBossGroupType(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_REFRESHBOSSGROUPTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PlayLongOpenAni()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_GET_PLAYLONGOPENANI_OFFSET))(nullptr);
		}

		::System::Boolean HandlePermanentRaidRoomEndMessage(PermanentRaidRoomEndMessage* arg)
		{
			return ((::System::Boolean(*)(PermanentRaidRoomEndMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_HANDLEPERMANENTRAIDROOMENDMESSAGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOpenAniDropdownItems()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_GETOPENANIDROPDOWNITEMS_OFFSET))(nullptr);
		}

		::System::Void OnBossGroupTabChanged(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_ONBOSSGROUPTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnBossSelectButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDLOBBY_ONBOSSSELECTBUTTONCLICK_OFFSET))(nullptr);
		}

	};

