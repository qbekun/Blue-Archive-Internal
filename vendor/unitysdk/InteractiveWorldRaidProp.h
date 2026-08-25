#pragma once
#include "unitysdk.h"

class InteractiveWorldRaidDesignLevel;
namespace UnityEngine::Timeline { class TrackAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }
class FurnitureTimelineType;

#define INTERACTIVEWORLDRAIDPROP__PLAYINTERACTION_G__UNBINDALLCHARACTERSMULTI|16_2_OFFSET UNITYSDK_OFFSET(0x25A6BC0)
#define INTERACTIVEWORLDRAIDPROP__BINDCHARACTERS_G__BINDRANDOMTRACKS|21_2_OFFSET UNITYSDK_OFFSET(0x25A7300)
#define INTERACTIVEWORLDRAIDPROP_PLAYIDLE_OFFSET UNITYSDK_OFFSET(0x25A7900)
#define INTERACTIVEWORLDRAIDPROP__PLAYINTERACTION_G__UNBINDALLCHARACTERSSINGLE|16_1_OFFSET UNITYSDK_OFFSET(0x25A7EA0)
#define INTERACTIVEWORLDRAIDPROP__PLAYINTERACTION_G__TRYBINDCHARACTERSSINGLE|16_3_OFFSET UNITYSDK_OFFSET(0x25A8050)
#define INTERACTIVEWORLDRAIDPROP_MUTECHILDTRACKS_OFFSET UNITYSDK_OFFSET(0x25A6D50)
#define INTERACTIVEWORLDRAIDPROP__INITIALIZEDIRECTOR_G__REGISTERTRACKSSINGLEUNIQUEID|14_0_OFFSET UNITYSDK_OFFSET(0x25A8AC0)
#define INTERACTIVEWORLDRAIDPROP__PLAYIDLE_G__SETIDLETRACKSSINGLEUNIQUEID|15_1_OFFSET UNITYSDK_OFFSET(0x25A7CE0)
#define INTERACTIVEWORLDRAIDPROP__PLAYIDLE_G__SETIDLETRACKSMULTIPLEUNIQUEIDS|15_2_OFFSET UNITYSDK_OFFSET(0x25A7B20)
#define INTERACTIVEWORLDRAIDPROP_PLAYPREVIOUSTIMELINE_OFFSET UNITYSDK_OFFSET(0x25A8BA0)
#define INTERACTIVEWORLDRAIDPROP__PLAYINTERACTION_G__TRYBINDCHARACTERSMULTI|16_4_OFFSET UNITYSDK_OFFSET(0x25A8D00)
#define INTERACTIVEWORLDRAIDPROP_INITIALIZEDIRECTOR_OFFSET UNITYSDK_OFFSET(0x25A9190)
#define INTERACTIVEWORLDRAIDPROP__BINDCHARACTERS_G__BINDDETERMINISTICTRACKS|21_1_OFFSET UNITYSDK_OFFSET(0x25A9C00)
#define INTERACTIVEWORLDRAIDPROP_BINDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x25A8390)
#define INTERACTIVEWORLDRAIDPROP_UNBINDCHARACTERS_OFFSET UNITYSDK_OFFSET(0x25A6F90)
#define INTERACTIVEWORLDRAIDPROP_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x25A9FF0)
#define INTERACTIVEWORLDRAIDPROP_AWAKE_OFFSET UNITYSDK_OFFSET(0x25AA000)
#define INTERACTIVEWORLDRAIDPROP__INITIALIZEDIRECTOR_G__REGISTERTRACKSMULTIPLEUNIQUEIDS|14_1_OFFSET UNITYSDK_OFFSET(0x25A9910)
#define INTERACTIVEWORLDRAIDPROP_PLAYBGM_OFFSET UNITYSDK_OFFSET(0x25AA170)
#define INTERACTIVEWORLDRAIDPROP_PLAYINTERACTION_OFFSET UNITYSDK_OFFSET(0x259B670)
#define INTERACTIVEWORLDRAIDPROP_.CTOR_OFFSET UNITYSDK_OFFSET(0x25AA250)

	inline static constexpr unsigned int InteractiveWorldRaidProp_TypeDefinitionIndex = 350;

	class InteractiveWorldRaidProp : public Il2CppObject
	{
	public:
		InteractiveWorldRaidDesignLevel* _designLevel; // 0x18
		::UnityEngine::Timeline::TrackAsset* _idleTrack; // 0x20
		Il2CppObject* _reqCharacterTracks; // 0x28
		Il2CppObject* _addCharacterRootTracks; // 0x30
		Il2CppObject* _makeCharacterRootTracks; // 0x38
		Il2CppObject* _onlyCharacterRootTracks; // 0x40
		Il2CppObject* _bgmCharacterRootTracks; // 0x48
		::UnityEngine::Playables::PlayableDirector* _rootDirector; // 0x50
		::UnityEngine::Timeline::TimelineAsset* _rootTimeline; // 0x58
		Il2CppObject* _bgmPlays; // 0x60
		Il2CppObject* _prevInteraction; // 0x68
		Il2CppObject* _currentInteraction; // 0x70

		::System::Void _PlayInteraction_g__UnbindAllCharactersMulti|16_2(Il2CppObject* arg, <>c__DisplayClass16_0&* arg2)
		{
			((::System::Void(*)(Il2CppObject*, <>c__DisplayClass16_0&*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP__PLAYINTERACTION_G__UNBINDALLCHARACTERSMULTI|16_2_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* _BindCharacters_g__BindRandomTracks|21_2(<>c__DisplayClass21_0&* arg)
		{
			return ((Il2CppObject*(*)(<>c__DisplayClass21_0&*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP__BINDCHARACTERS_G__BINDRANDOMTRACKS|21_2_OFFSET))(arg, nullptr);
		}

		::System::Void PlayIdle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP_PLAYIDLE_OFFSET))(nullptr);
		}

		::System::Void _PlayInteraction_g__UnbindAllCharactersSingle|16_1(Il2CppObject* arg, <>c__DisplayClass16_0&* arg2)
		{
			((::System::Void(*)(Il2CppObject*, <>c__DisplayClass16_0&*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP__PLAYINTERACTION_G__UNBINDALLCHARACTERSSINGLE|16_1_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _PlayInteraction_g__TryBindCharactersSingle|16_3(Il2CppObject* arg, FurnitureTimelineType* arg2, <>c__DisplayClass16_0&* arg3)
		{
			((::System::Void(*)(Il2CppObject*, FurnitureTimelineType*, <>c__DisplayClass16_0&*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP__PLAYINTERACTION_G__TRYBINDCHARACTERSSINGLE|16_3_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void MuteChildTracks(::UnityEngine::Timeline::TrackAsset* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP_MUTECHILDTRACKS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _InitializeDirector_g__RegisterTracksSingleUniqueId|14_0(::System::String* str, ::System::String* str2, ::System::Int32 arg, Il2CppObject&* arg2, ::UnityEngine::Timeline::TrackAsset* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, Il2CppObject&*, ::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP__INITIALIZEDIRECTOR_G__REGISTERTRACKSSINGLEUNIQUEID|14_0_OFFSET))(str, str2, arg, arg2, arg3, nullptr);
		}

		::System::Void _PlayIdle_g__SetIdleTracksSingleUniqueId|15_1(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP__PLAYIDLE_G__SETIDLETRACKSSINGLEUNIQUEID|15_1_OFFSET))(arg, nullptr);
		}

		::System::Void _PlayIdle_g__SetIdleTracksMultipleUniqueIds|15_2(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP__PLAYIDLE_G__SETIDLETRACKSMULTIPLEUNIQUEIDS|15_2_OFFSET))(arg, nullptr);
		}

		::System::Void PlayPreviousTimeline()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP_PLAYPREVIOUSTIMELINE_OFFSET))(nullptr);
		}

		::System::Void _PlayInteraction_g__TryBindCharactersMulti|16_4(Il2CppObject* arg, FurnitureTimelineType* arg2, <>c__DisplayClass16_0&* arg3)
		{
			((::System::Void(*)(Il2CppObject*, FurnitureTimelineType*, <>c__DisplayClass16_0&*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP__PLAYINTERACTION_G__TRYBINDCHARACTERSMULTI|16_4_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitializeDirector()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP_INITIALIZEDIRECTOR_OFFSET))(nullptr);
		}

		Il2CppObject* _BindCharacters_g__BindDeterministicTracks|21_1(<>c__DisplayClass21_0&* arg)
		{
			return ((Il2CppObject*(*)(<>c__DisplayClass21_0&*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP__BINDCHARACTERS_G__BINDDETERMINISTICTRACKS|21_1_OFFSET))(arg, nullptr);
		}

		::System::Void BindCharacters(::UnityEngine::Timeline::TrackAsset* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP_BINDCHARACTERS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UnbindCharacters(::UnityEngine::Timeline::TrackAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP_UNBINDCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void OnLeave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP_ONLEAVE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _InitializeDirector_g__RegisterTracksMultipleUniqueIds|14_1(::System::String* str, ::System::Int32 arg, Il2CppObject&* arg2, ::UnityEngine::Timeline::TrackAsset* arg3)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, Il2CppObject&*, ::UnityEngine::Timeline::TrackAsset*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP__INITIALIZEDIRECTOR_G__REGISTERTRACKSMULTIPLEUNIQUEIDS|14_1_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void PlayBGM()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP_PLAYBGM_OFFSET))(nullptr);
		}

		::System::Void PlayInteraction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP_PLAYINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROP_.CTOR_OFFSET))(nullptr);
		}

	};

