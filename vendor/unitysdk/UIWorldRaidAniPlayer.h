#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Animation; }
class UIWorldRaidLobby;

#define UIWORLDRAIDANIPLAYER_CHECKOPENEDBOSSISSPECIFICBOSS_OFFSET UNITYSDK_OFFSET(0xBF2CD0)
#define UIWORLDRAIDANIPLAYER_PLAYBALLOONANIMATION_OFFSET UNITYSDK_OFFSET(0xBF2D80)
#define UIWORLDRAIDANIPLAYER_CREATEPLAYLIST_OFFSET UNITYSDK_OFFSET(0xBF2E10)
#define UIWORLDRAIDANIPLAYER_WAITZONEANIMATION_OFFSET UNITYSDK_OFFSET(0xBF3840)
#define UIWORLDRAIDANIPLAYER_SET_NEEDPLAYOPENEVENT_OFFSET UNITYSDK_OFFSET(0xBF38F0)
#define UIWORLDRAIDANIPLAYER_GET_LOBBY_OFFSET UNITYSDK_OFFSET(0xBF3900)
#define UIWORLDRAIDANIPLAYER_SET_LOBBY_OFFSET UNITYSDK_OFFSET(0xBF3910)
#define UIWORLDRAIDANIPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0xBF3920)
#define UIWORLDRAIDANIPLAYER_COUIANIPLAY_OFFSET UNITYSDK_OFFSET(0xBF3930)
#define UIWORLDRAIDANIPLAYER_PLAYSPECIFICEOPENEVENTANI_OFFSET UNITYSDK_OFFSET(0xBF3A20)
#define UIWORLDRAIDANIPLAYER_STARTPLAYONREFRESH_OFFSET UNITYSDK_OFFSET(0xBF3AB0)
#define UIWORLDRAIDANIPLAYER_STARTPLAYONENTER_OFFSET UNITYSDK_OFFSET(0xBF3F10)
#define UIWORLDRAIDANIPLAYER_GET_TILE_OFFSET UNITYSDK_OFFSET(0xBF3F30)
#define UIWORLDRAIDANIPLAYER_GET_NEEDPLAYOPENEVENT_OFFSET UNITYSDK_OFFSET(0xBF3F40)
#define UIWORLDRAIDANIPLAYER_PLAYLOCATIONANIMATION_OFFSET UNITYSDK_OFFSET(0xBF3F50)
#define UIWORLDRAIDANIPLAYER_CO_PLAYONENTERLOBBY_OFFSET UNITYSDK_OFFSET(0xBF3FE0)
#define UIWORLDRAIDANIPLAYER_STARTPLAYONENTERLOBBY_OFFSET UNITYSDK_OFFSET(0xBF4090)

	inline static constexpr unsigned int UIWorldRaidAniPlayer_TypeDefinitionIndex = 8758;

	class UIWorldRaidAniPlayer : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* tilepos; // 0x18
		::UnityEngine::Animation* LocationAnimation; // 0x20
		UIWorldRaidLobby* _lobby_k__BackingField; // 0x28
		::System::Boolean _NeedPlayOpenEvent_k__BackingField; // 0x30

		::System::Void CheckOpenedBossIsSpecificBoss()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_CHECKOPENEDBOSSISSPECIFICBOSS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayBalloonAnimation(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_PLAYBALLOONANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void CreatePlayList(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Boolean arg4, Il2CppObject&* arg5, Il2CppObject&* arg6, Il2CppObject&* arg7)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Boolean, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_CREATEPLAYLIST_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Collections::IEnumerator* WaitZoneAnimation(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_WAITZONEANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_NeedPlayOpenEvent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_SET_NEEDPLAYOPENEVENT_OFFSET))(arg, nullptr);
		}

		UIWorldRaidLobby* get_lobby()
		{
			return ((UIWorldRaidLobby*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_GET_LOBBY_OFFSET))(nullptr);
		}

		::System::Void set_lobby(UIWorldRaidLobby* arg)
		{
			((::System::Void(*)(UIWorldRaidLobby*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_SET_LOBBY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoUIAniPlay(Il2CppObject* arg, Il2CppObject* arg2, ::System::Boolean arg3, ::System::Action* arg4)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_COUIANIPLAY_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Collections::IEnumerator* PlaySpecificeOpenEventAni()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_PLAYSPECIFICEOPENEVENTANI_OFFSET))(nullptr);
		}

		::System::Void StartPlayOnRefresh(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_STARTPLAYONREFRESH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartPlayOnEnter(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_STARTPLAYONENTER_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* get_tile()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_GET_TILE_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedPlayOpenEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_GET_NEEDPLAYOPENEVENT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* PlayLocationAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_PLAYLOCATIONANIMATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayOnEnterLobby(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_CO_PLAYONENTERLOBBY_OFFSET))(arg, nullptr);
		}

		::System::Void StartPlayOnEnterLobby(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDANIPLAYER_STARTPLAYONENTERLOBBY_OFFSET))(arg, nullptr);
		}

	};

