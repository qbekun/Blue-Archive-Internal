#pragma once
#include "unitysdk.h"

#define UIWORLDRAIDANIPLAYER_821_STARTPLAYONENTER_OFFSET UNITYSDK_OFFSET(0xBF6090)
#define UIWORLDRAIDANIPLAYER_821_PLAYLOCATIONANIMATION_OFFSET UNITYSDK_OFFSET(0xBF60B0)
#define UIWORLDRAIDANIPLAYER_821__COUIANIPLAY_ONLOCATIONANIMATION_G__SETBALLOONUI|12_0_OFFSET UNITYSDK_OFFSET(0xBF6140)
#define UIWORLDRAIDANIPLAYER_821_COUIANIPLAY_LOCATIONANIMATIONAFTERPLAYLIST_OFFSET UNITYSDK_OFFSET(0xBF62F0)
#define UIWORLDRAIDANIPLAYER_821_COUIANIPLAY_ONLOCATIONANIMATION_OFFSET UNITYSDK_OFFSET(0xBF6380)
#define UIWORLDRAIDANIPLAYER_821_STARTPLAYONREFRESH_OFFSET UNITYSDK_OFFSET(0xBF6410)
#define UIWORLDRAIDANIPLAYER_821_SETBALLOONUIPREVSTATE_OFFSET UNITYSDK_OFFSET(0xBF6450)
#define UIWORLDRAIDANIPLAYER_821_.CTOR_OFFSET UNITYSDK_OFFSET(0xBF6BF0)
#define UIWORLDRAIDANIPLAYER_821_LOCATIONANIEVENT_PHASEGROUP_OFFSET UNITYSDK_OFFSET(0xBF6CF0)
#define UIWORLDRAIDANIPLAYER_821_CO_PLAYONENTERLOBBY_OFFSET UNITYSDK_OFFSET(0xBF70E0)

	inline static constexpr unsigned int UIWorldRaidAniPlayer_821_TypeDefinitionIndex = 8766;

	class UIWorldRaidAniPlayer_821 : public Il2CppObject
	{
	public:
		Il2CppObject* WorldRaidZoneBalloonPhaseGroupInfos; // 0x38
		::System::Boolean phaseGroupPlayOnLocationAni; // 0x40
		::System::Boolean isLocationAnimationPlaying; // 0x41
		Il2CppObject* phaseGroupAniPlayList; // 0x48
		Il2CppObject* phaseGroupWaitPlayList; // 0x50
		Il2CppObject* needHideBalloons; // 0x58

		::System::Void StartPlayOnEnter(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_821_STARTPLAYONENTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* PlayLocationAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_821_PLAYLOCATIONANIMATION_OFFSET))(nullptr);
		}

		::System::Void _CoUIAniPlay_OnLocationAnimation_g__SetBalloonUI|12_0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_821__COUIANIPLAY_ONLOCATIONANIMATION_G__SETBALLOONUI|12_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoUIAniPlay_LocationAnimationAfterPlayList()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_821_COUIANIPLAY_LOCATIONANIMATIONAFTERPLAYLIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoUIAniPlay_OnLocationAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_821_COUIANIPLAY_ONLOCATIONANIMATION_OFFSET))(nullptr);
		}

		::System::Void StartPlayOnRefresh(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_821_STARTPLAYONREFRESH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetBalloonUIPrevState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_821_SETBALLOONUIPREVSTATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_821_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LocationAniEvent_PhaseGroup(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_821_LOCATIONANIEVENT_PHASEGROUP_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayOnEnterLobby(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_821_CO_PLAYONENTERLOBBY_OFFSET))(arg, nullptr);
		}

	};

