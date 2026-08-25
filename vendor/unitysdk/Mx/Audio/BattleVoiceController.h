#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }
namespace MX::Audio { class VoiceSourceObject; }
namespace MX::Audio { class VoicePlayInfo; }
namespace UnityEngine { class AudioSource; }

#define MX_AUDIO_BATTLEVOICECONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D37900)
#define MX_AUDIO_BATTLEVOICECONTROLLER_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x1D37A80)
#define MX_AUDIO_BATTLEVOICECONTROLLER_SET_NEXTBESTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D38180)
#define MX_AUDIO_BATTLEVOICECONTROLLER_SET_BATTLE_OFFSET UNITYSDK_OFFSET(0x1D38190)
#define MX_AUDIO_BATTLEVOICECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D381A0)
#define MX_AUDIO_BATTLEVOICECONTROLLER_SET_CURRENTBESTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D38200)
#define MX_AUDIO_BATTLEVOICECONTROLLER_GET_NEXTBESTPRIORITYENTITY_OFFSET UNITYSDK_OFFSET(0x1D38210)
#define MX_AUDIO_BATTLEVOICECONTROLLER_GET_VOICESOURCELIST_OFFSET UNITYSDK_OFFSET(0x1D38220)
#define MX_AUDIO_BATTLEVOICECONTROLLER_PLAYMOVETOFORMATIONBEACON_OFFSET UNITYSDK_OFFSET(0x1D38230)
#define MX_AUDIO_BATTLEVOICECONTROLLER_UPDATEBESTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D38660)
#define MX_AUDIO_BATTLEVOICECONTROLLER_SET_PLAYINGLIST_OFFSET UNITYSDK_OFFSET(0x1D38720)
#define MX_AUDIO_BATTLEVOICECONTROLLER_GET_PLAYINGLIST_OFFSET UNITYSDK_OFFSET(0x1D38730)
#define MX_AUDIO_BATTLEVOICECONTROLLER_GET_SAMEVOICEINFOTABLE_OFFSET UNITYSDK_OFFSET(0x1D38740)
#define MX_AUDIO_BATTLEVOICECONTROLLER_ONSTOPED_OFFSET UNITYSDK_OFFSET(0x1D38750)
#define MX_AUDIO_BATTLEVOICECONTROLLER_GET_BATTLESTARTVOICEPLAY_OFFSET UNITYSDK_OFFSET(0x1D387C0)
#define MX_AUDIO_BATTLEVOICECONTROLLER_GET_PLAYLIST_OFFSET UNITYSDK_OFFSET(0x1D387D0)
#define MX_AUDIO_BATTLEVOICECONTROLLER_GET_BATTLEENDVOICEPLAY_OFFSET UNITYSDK_OFFSET(0x1D387E0)
#define MX_AUDIO_BATTLEVOICECONTROLLER_SET_NEXTBESTPRIORITYENTITY_OFFSET UNITYSDK_OFFSET(0x1D387F0)
#define MX_AUDIO_BATTLEVOICECONTROLLER_SET_BATTLESTARTVOICEPLAY_OFFSET UNITYSDK_OFFSET(0x1D38800)
#define MX_AUDIO_BATTLEVOICECONTROLLER_ANIMATORSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x1D38810)
#define MX_AUDIO_BATTLEVOICECONTROLLER_SET_VOICESOURCELIST_OFFSET UNITYSDK_OFFSET(0x1D38820)
#define MX_AUDIO_BATTLEVOICECONTROLLER_ADDVOICESOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D38830)
#define MX_AUDIO_BATTLEVOICECONTROLLER_GET_CURRENTBESTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D38A60)
#define MX_AUDIO_BATTLEVOICECONTROLLER_ANYPLAYING_OFFSET UNITYSDK_OFFSET(0x1D38A70)
#define MX_AUDIO_BATTLEVOICECONTROLLER_SET_TURNDOUNWVOLUMERATE_OFFSET UNITYSDK_OFFSET(0x1D38C30)
#define MX_AUDIO_BATTLEVOICECONTROLLER_GET_NEXTBESTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D38C40)
#define MX_AUDIO_BATTLEVOICECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D38C50)
#define MX_AUDIO_BATTLEVOICECONTROLLER_SET_PLAYLIST_OFFSET UNITYSDK_OFFSET(0x1D393B0)
#define MX_AUDIO_BATTLEVOICECONTROLLER_GET_BATTLE_OFFSET UNITYSDK_OFFSET(0x1D393C0)
#define MX_AUDIO_BATTLEVOICECONTROLLER_ISVOICESOURCE_OFFSET UNITYSDK_OFFSET(0x1D393D0)
#define MX_AUDIO_BATTLEVOICECONTROLLER_SET_BATTLEENDVOICEPLAY_OFFSET UNITYSDK_OFFSET(0x1D39590)
#define MX_AUDIO_BATTLEVOICECONTROLLER_GET_TURNDOUNWVOLUMERATE_OFFSET UNITYSDK_OFFSET(0x1D395A0)
#define MX_AUDIO_BATTLEVOICECONTROLLER_ONPLAYED_OFFSET UNITYSDK_OFFSET(0x1D395B0)
#define MX_AUDIO_BATTLEVOICECONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D396B0)
#define MX_AUDIO_BATTLEVOICECONTROLLER_SET_SAMEVOICEINFOTABLE_OFFSET UNITYSDK_OFFSET(0x1D39850)
#define MX_AUDIO_BATTLEVOICECONTROLLER_ADDPLAYLIST_OFFSET UNITYSDK_OFFSET(0x1D38070)

namespace MX::Audio
{
	inline static constexpr unsigned int BattleVoiceController_TypeDefinitionIndex = 20096;

	class BattleVoiceController : public ::ToyWebViewShared::Messages::NotifyConnect
	{
	public:
		::System::Int32 _CurrentBestPriority_k__BackingField; // 0x20
		::System::Int32 _NextBestPriority_k__BackingField; // 0x24
		EntityVisual* _NextBestPriorityEntity_k__BackingField; // 0x28
		::System::Single _TurnDounwVolumeRate_k__BackingField; // 0x30
		Il2CppObject* _PlayingList_k__BackingField; // 0x38
		Il2CppObject* _PlayList_k__BackingField; // 0x40
		Il2CppObject* _VoiceSourceList_k__BackingField; // 0x48
		Il2CppObject* _SameVoiceInfoTable_k__BackingField; // 0x50
		::MX::Logic::Battles::Battle* _Battle_k__BackingField; // 0x58
		::System::Boolean _BattleStartVoicePlay_k__BackingField; // 0x60
		::System::Boolean _BattleEndVoicePlay_k__BackingField; // 0x61
		::System::Int64 BattleStartVoiceCharacterId; // 0x68
		::System::Int32 PlayBeaconCommandFrame; // 0x70

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_NextBestPriority(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_SET_NEXTBESTPRIORITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_Battle(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_SET_BATTLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CurrentBestPriority(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_SET_CURRENTBESTPRIORITY_OFFSET))(arg, nullptr);
		}

		EntityVisual* get_NextBestPriorityEntity()
		{
			return (return (EntityVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_GET_NEXTBESTPRIORITYENTITY_OFFSET))(nullptr);
		}

		Il2CppObject* get_VoiceSourceList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_GET_VOICESOURCELIST_OFFSET))(nullptr);
		}

		::System::Void PlayMoveToFormationBeacon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_PLAYMOVETOFORMATIONBEACON_OFFSET))(nullptr);
		}

		::System::Void UpdateBestPriority()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_UPDATEBESTPRIORITY_OFFSET))(nullptr);
		}

		::System::Void set_PlayingList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_SET_PLAYINGLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PlayingList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_GET_PLAYINGLIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_SameVoiceInfoTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_GET_SAMEVOICEINFOTABLE_OFFSET))(nullptr);
		}

		::System::Void OnStoped(::MX::Audio::VoiceSourceObject* arg)
		{
			((::System::Void(*)(::MX::Audio::VoiceSourceObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_ONSTOPED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_BattleStartVoicePlay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_GET_BATTLESTARTVOICEPLAY_OFFSET))(nullptr);
		}

		Il2CppObject* get_PlayList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_GET_PLAYLIST_OFFSET))(nullptr);
		}

		::System::Boolean get_BattleEndVoicePlay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_GET_BATTLEENDVOICEPLAY_OFFSET))(nullptr);
		}

		::System::Void set_NextBestPriorityEntity(EntityVisual* arg)
		{
			((::System::Void(*)(EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_SET_NEXTBESTPRIORITYENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattleStartVoicePlay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_SET_BATTLESTARTVOICEPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void AnimatorStateChanged(EntityVisual* arg, ::MX::Audio::VoicePlayInfo* arg)
		{
			((::System::Void(*)(EntityVisual*, ::MX::Audio::VoicePlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_ANIMATORSTATECHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_VoiceSourceList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_SET_VOICESOURCELIST_OFFSET))(arg, nullptr);
		}

		::System::Void AddVoiceSourceObject(::MX::Audio::VoiceSourceObject* arg)
		{
			((::System::Void(*)(::MX::Audio::VoiceSourceObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_ADDVOICESOURCEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentBestPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_GET_CURRENTBESTPRIORITY_OFFSET))(nullptr);
		}

		::System::Boolean AnyPlaying()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_ANYPLAYING_OFFSET))(nullptr);
		}

		::System::Void set_TurnDounwVolumeRate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_SET_TURNDOUNWVOLUMERATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NextBestPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_GET_NEXTBESTPRIORITY_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void set_PlayList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_SET_PLAYLIST_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Battle* get_Battle()
		{
			return (return (::MX::Logic::Battles::Battle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_GET_BATTLE_OFFSET))(nullptr);
		}

		::System::Boolean IsVoiceSource(::UnityEngine::AudioSource* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_ISVOICESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattleEndVoicePlay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_SET_BATTLEENDVOICEPLAY_OFFSET))(arg, nullptr);
		}

		::System::Single get_TurnDounwVolumeRate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_GET_TURNDOUNWVOLUMERATE_OFFSET))(nullptr);
		}

		::System::Void OnPlayed(::MX::Audio::VoiceSourceObject* arg)
		{
			((::System::Void(*)(::MX::Audio::VoiceSourceObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_ONPLAYED_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SameVoiceInfoTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_SET_SAMEVOICEINFOTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddPlayList(EntityVisual* arg, ::MX::Audio::VoicePlayInfo* arg)
		{
			((::System::Void(*)(EntityVisual*, ::MX::Audio::VoicePlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BATTLEVOICECONTROLLER_ADDPLAYLIST_OFFSET))(arg, arg, nullptr);
		}

	};
}

