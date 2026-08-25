#pragma once
#include "../../unitysdk.h"

namespace FlatData { class VoiceEvent; }
namespace MX::Data::Excel { class AudioAnimatorExcel; }
namespace MX::Data { class CharacterDialogInfoBase; }
namespace MX::Data::Excel { class OperatorExcel; }
namespace MX::Data { class CharacterDialogEmojiInfo; }
namespace MX::Data::Excel { class CharacterVoiceExcel; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace FlatData { class VoiceEvent&; }
namespace MX::Logic::BattleEntities { class BehaviorType; }
namespace MX::Logic::BattleEntities { class SkillSlot&; }
namespace MX::Audio { class AudioPlayInfo; }
namespace MX::Audio { class AudioSourceData; }
namespace UnityEngine { class Vector2Int; }
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class AnimationCurve; }

#define MX_AUDIO_AUDIOSERVICE_ALLSTOPAUDIOSOURCES_OFFSET UNITYSDK_OFFSET(0x1D3C3C0)
#define MX_AUDIO_AUDIOSERVICE_ALLPAUSEAUDIOSOURCES_OFFSET UNITYSDK_OFFSET(0x1D3C4F0)
#define MX_AUDIO_AUDIOSERVICE_SETALLPITCHAUDIOSOURCES_OFFSET UNITYSDK_OFFSET(0x1D3C700)
#define MX_AUDIO_AUDIOSERVICE_CREATECOMMONVOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D3CB10)
#define MX_AUDIO_AUDIOSERVICE_CHECKCHARACTERVOICE_OFFSET UNITYSDK_OFFSET(0x1D3D1C0)
#define MX_AUDIO_AUDIOSERVICE_CREATECOMMONVOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D3D670)
#define MX_AUDIO_AUDIOSERVICE_CREATECOMMONVOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D3D760)
#define MX_AUDIO_AUDIOSERVICE_CREATECOMMONVOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D3D7E0)
#define MX_AUDIO_AUDIOSERVICE_CREATESPECIFICVOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D3D8D0)
#define MX_AUDIO_AUDIOSERVICE_PLAYCOMMONVOICE_OFFSET UNITYSDK_OFFSET(0x1D3D9A0)
#define MX_AUDIO_AUDIOSERVICE_PLAYCOMMONVOICE_OFFSET UNITYSDK_OFFSET(0x1D3DB60)
#define MX_AUDIO_AUDIOSERVICE_PLAYSPECIFICVOICE_OFFSET UNITYSDK_OFFSET(0x1D3DBF0)
#define MX_AUDIO_AUDIOSERVICE_CREATEANIMATORAUDIOPLAYINFOS_OFFSET UNITYSDK_OFFSET(0x1D3DD40)
#define MX_AUDIO_AUDIOSERVICE_CREATEANIMATORVOICEPLAYINFOS_OFFSET UNITYSDK_OFFSET(0x1D3DDC0)
#define MX_AUDIO_AUDIOSERVICE_PLAYSIMPLEVOICE_OFFSET UNITYSDK_OFFSET(0x1D3DE60)
#define MX_AUDIO_AUDIOSERVICE_CREATESIMPLEVOICEPLAYINFOBYDIALOG_OFFSET UNITYSDK_OFFSET(0x1D3E390)
#define MX_AUDIO_AUDIOSERVICE_CREATESIMPLEVOICEPLAYINFOBYOPERATOR_OFFSET UNITYSDK_OFFSET(0x1D3E5A0)
#define MX_AUDIO_AUDIOSERVICE_CREATESIMPLEVOICEPLAYINFOBYDIALOGEMOJI_OFFSET UNITYSDK_OFFSET(0x1D3E790)
#define MX_AUDIO_AUDIOSERVICE_CO_CREATESIMPLEVOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D3E520)
#define MX_AUDIO_AUDIOSERVICE_CREATESIMPLEVOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D3DFA0)
#define MX_AUDIO_AUDIOSERVICE_CREATECHARACTERVOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D3D0A0)
#define MX_AUDIO_AUDIOSERVICE_CREATEANIMATORAUDIOTABLE_OFFSET UNITYSDK_OFFSET(0x1D3A850)
#define MX_AUDIO_AUDIOSERVICE_CREATEANIMATORVOICETABLE_OFFSET UNITYSDK_OFFSET(0x1D3A8D0)
#define MX_AUDIO_AUDIOSERVICE_CREATELOGICEFFECTVOICETABLE_OFFSET UNITYSDK_OFFSET(0x1D3A970)
#define MX_AUDIO_AUDIOSERVICE_CREATEBATTLECOMMONVOICETABLE_OFFSET UNITYSDK_OFFSET(0x1D3AA10)
#define MX_AUDIO_AUDIOSERVICE_CREATEBATTLECOMMONVOICETABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D3E8E0)
#define MX_AUDIO_AUDIOSERVICE_TRYCONVERTTOVOICEEVENT_OFFSET UNITYSDK_OFFSET(0x1D3B3A0)
#define MX_AUDIO_AUDIOSERVICE_CONVERTTOSKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1D3F1D0)
#define MX_AUDIO_AUDIOSERVICE_CONVERTTOAUDIOPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D3F200)
#define MX_AUDIO_AUDIOSERVICE_PLAYSPINEVOICE_OFFSET UNITYSDK_OFFSET(0x1D3F270)
#define MX_AUDIO_AUDIOSERVICE_CREATETIMELINEVOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D3F3F0)
#define MX_AUDIO_AUDIOSERVICE_CALCRANDOMPITCH_OFFSET UNITYSDK_OFFSET(0x1D3F560)
#define MX_AUDIO_AUDIOSERVICE_CALCRANDOMPITCH_OFFSET UNITYSDK_OFFSET(0x1D3F610)
#define MX_AUDIO_AUDIOSERVICE_COCHANGEVOLUMEWITHCURVE_OFFSET UNITYSDK_OFFSET(0x1D3F710)
#define MX_AUDIO_AUDIOSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3F7D0)

namespace MX::Audio
{
	inline static constexpr unsigned int AudioService_TypeDefinitionIndex = 20130;

	class AudioService : public Il2CppObject
	{
	public:
		::System::String* TagIgnoreModifyPitchByCode; // 0x0
		::Il2CppArray<::System::Object*>* battleCommonVoiceEvents; // 0x0
		Il2CppObject* skillToVoiceEvent; // 0x8
		::System::Single oneSemitonePitch; // 0x10

		::System::Void AllStopAudioSources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_ALLSTOPAUDIOSOURCES_OFFSET))(nullptr);
		}

		::System::Void AllPauseAudioSources(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_ALLPAUSEAUDIOSOURCES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetAllPitchAudioSources(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_SETALLPITCHAUDIOSOURCES_OFFSET))(arg, nullptr);
		}

		::System::Void CreateCommonVoicePlayInfo(::FlatData::VoiceEvent* arg, ::System::Int64 arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatData::VoiceEvent*, ::System::Int64, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATECOMMONVOICEPLAYINFO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CheckCharacterVoice(::FlatData::VoiceEvent* arg, CharacterObject* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::VoiceEvent*, CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CHECKCHARACTERVOICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateCommonVoicePlayInfo(::FlatData::VoiceEvent* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatData::VoiceEvent*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATECOMMONVOICEPLAYINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CreateCommonVoicePlayInfo(::FlatData::VoiceEvent* arg, ::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatData::VoiceEvent*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATECOMMONVOICEPLAYINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CreateCommonVoicePlayInfo(::FlatData::VoiceEvent* arg, CharacterObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatData::VoiceEvent*, CharacterObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATECOMMONVOICEPLAYINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CreateSpecificVoicePlayInfo(::System::UInt32 arg, ::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATESPECIFICVOICEPLAYINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PlayCommonVoice(::FlatData::VoiceEvent* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatData::VoiceEvent*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_PLAYCOMMONVOICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PlayCommonVoice(::FlatData::VoiceEvent* arg, CharacterObject* arg)
		{
			((::System::Void(*)(::FlatData::VoiceEvent*, CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_PLAYCOMMONVOICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PlaySpecificVoice(::System::UInt32 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_PLAYSPECIFICVOICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* CreateAnimatorAudioPlayInfos(::MX::Data::Excel::AudioAnimatorExcel* arg, Il2CppObject* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::MX::Data::Excel::AudioAnimatorExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATEANIMATORAUDIOPLAYINFOS_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* CreateAnimatorVoicePlayInfos(::MX::Data::Excel::AudioAnimatorExcel* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::MX::Data::Excel::AudioAnimatorExcel*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATEANIMATORVOICEPLAYINFOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PlaySimpleVoice(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_PLAYSIMPLEVOICE_OFFSET))(arg, nullptr);
		}

		::System::Void CreateSimpleVoicePlayInfoByDialog(::MX::Data::CharacterDialogInfoBase* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::CharacterDialogInfoBase*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATESIMPLEVOICEPLAYINFOBYDIALOG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateSimpleVoicePlayInfoByOperator(::MX::Data::Excel::OperatorExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::OperatorExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATESIMPLEVOICEPLAYINFOBYOPERATOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateSimpleVoicePlayInfoByDialogEmoji(::MX::Data::CharacterDialogEmojiInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::CharacterDialogEmojiInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATESIMPLEVOICEPLAYINFOBYDIALOGEMOJI_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* co_CreateSimpleVoicePlayInfo(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CO_CREATESIMPLEVOICEPLAYINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateSimpleVoicePlayInfo(::System::UInt32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::UInt32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATESIMPLEVOICEPLAYINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateCharacterVoicePlayInfo(::MX::Data::Excel::CharacterVoiceExcel* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterVoiceExcel*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATECHARACTERVOICEPLAYINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* CreateAnimatorAudioTable(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATEANIMATORAUDIOTABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* CreateAnimatorVoiceTable(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATEANIMATORVOICETABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* CreateLogicEffectVoiceTable(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg, Il2CppObject* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATELOGICEFFECTVOICETABLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* CreateBattleCommonVoiceTable(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATEBATTLECOMMONVOICETABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CreateBattleCommonVoiceTableInternal(::FlatData::VoiceEvent* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::FlatData::VoiceEvent*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATEBATTLECOMMONVOICETABLEINTERNAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryConvertToVoiceEvent(::MX::Logic::BattleEntities::SkillSlot* arg, ::System::Boolean arg, ::FlatData::VoiceEvent&* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::FlatData::VoiceEvent&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_TRYCONVERTTOVOICEEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ConvertToSkillSlot(::MX::Logic::BattleEntities::BehaviorType* arg, ::MX::Logic::BattleEntities::SkillSlot&* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::BattleEntities::BehaviorType*, ::MX::Logic::BattleEntities::SkillSlot&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CONVERTTOSKILLSLOT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Audio::AudioPlayInfo* ConvertToAudioPlayInfo(::MX::Audio::AudioSourceData* arg)
		{
			return (return (::MX::Audio::AudioPlayInfo*(*)(::MX::Audio::AudioSourceData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CONVERTTOAUDIOPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void PlaySpineVoice(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_PLAYSPINEVOICE_OFFSET))(str, nullptr);
		}

		::System::Void CreateTimelineVoicePlayInfo(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CREATETIMELINEVOICEPLAYINFO_OFFSET))(str, arg, nullptr);
		}

		::System::Single CalcRandomPitch(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CALCRANDOMPITCH_OFFSET))(arg, arg, nullptr);
		}

		::System::Single CalcRandomPitch(::UnityEngine::Vector2Int* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Vector2Int*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_CALCRANDOMPITCH_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoChangeVolumeWithCurve(::UnityEngine::AudioSource* arg, ::UnityEngine::AnimationCurve* arg, ::System::Single arg, ::System::Single arg, ::System::Action* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::UnityEngine::AudioSource*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_COCHANGEVOLUMEWITHCURVE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOSERVICE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

