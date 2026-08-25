#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class AudioPlayer; }
namespace MX::Audio { class VoicePlayer; }
namespace UnityEngine { class Animator; }
namespace FlatData { class VoiceEvent; }
namespace MX::Logic::BattleEntities { class SkillSlot; }

#define MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_CHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1D39C30)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_CHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1D39C40)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_ANIMATORSTATEAUDIOTABLE_OFFSET UNITYSDK_OFFSET(0x1D39C50)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_ANIMATORSTATEAUDIOTABLE_OFFSET UNITYSDK_OFFSET(0x1D39C60)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_ANIMATORSTATEVOICETABLE_OFFSET UNITYSDK_OFFSET(0x1D39C70)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_ANIMATORSTATEVOICETABLE_OFFSET UNITYSDK_OFFSET(0x1D39C80)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_FORMANIMATORSTATEAUDIOTABLE_OFFSET UNITYSDK_OFFSET(0x1D39C90)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_FORMANIMATORSTATEAUDIOTABLE_OFFSET UNITYSDK_OFFSET(0x1D39CA0)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_FORMANIMATORSTATEVOICETABLE_OFFSET UNITYSDK_OFFSET(0x1D39CB0)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_FORMANIMATORSTATEVOICETABLE_OFFSET UNITYSDK_OFFSET(0x1D39CC0)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_LOGICEFFECTVOICES_OFFSET UNITYSDK_OFFSET(0x1D39CD0)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_LOGICEFFECTVOICES_OFFSET UNITYSDK_OFFSET(0x1D39CE0)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_LOGICEFFECTSELFVOICES_OFFSET UNITYSDK_OFFSET(0x1D39CF0)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_LOGICEFFECTSELFVOICES_OFFSET UNITYSDK_OFFSET(0x1D39D00)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_BATTLECOMMONVOICES_OFFSET UNITYSDK_OFFSET(0x1D39D10)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_BATTLECOMMONVOICES_OFFSET UNITYSDK_OFFSET(0x1D39D20)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_ENTITYVISUAL_OFFSET UNITYSDK_OFFSET(0x1D39D30)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_ENTITYVISUAL_OFFSET UNITYSDK_OFFSET(0x1D39D40)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x1D39D50)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x1D39D60)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D39D70)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D39E70)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_RELEASEADDRESSABLE_OFFSET UNITYSDK_OFFSET(0x1D3AAB0)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_ONPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1D3AF30)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_ONPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1D3AF90)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_PLAYBATTLECOMMONVOICE_OFFSET UNITYSDK_OFFSET(0x1D384A0)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_PLAYVOICEBYSKILLUSE_OFFSET UNITYSDK_OFFSET(0x1D3B220)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_ISPLAYERCHARACTER_OFFSET UNITYSDK_OFFSET(0x1D3B460)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_ONTSS_OFFSET UNITYSDK_OFFSET(0x1D3B590)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_ALLSTOPIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1D3B6B0)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B780)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_3_OFFSET UNITYSDK_OFFSET(0x1D3B790)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_4_OFFSET UNITYSDK_OFFSET(0x1D3B800)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_5_OFFSET UNITYSDK_OFFSET(0x1D3B870)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_6_OFFSET UNITYSDK_OFFSET(0x1D3B8E0)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_7_OFFSET UNITYSDK_OFFSET(0x1D3B950)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_8_OFFSET UNITYSDK_OFFSET(0x1D3B9C0)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_0_OFFSET UNITYSDK_OFFSET(0x1D3BA30)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_1_OFFSET UNITYSDK_OFFSET(0x1D3BAA0)
#define MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_2_OFFSET UNITYSDK_OFFSET(0x1D3BB10)

namespace MX::Audio
{
	inline static constexpr unsigned int EntityAudioController_TypeDefinitionIndex = 20097;

	class EntityAudioController : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterVoiceGroupId_k__BackingField; // 0x18
		::MX::Audio::AudioPlayer* AudioPlayer; // 0x20
		::MX::Audio::VoicePlayer* VoicePlayer; // 0x28
		Il2CppObject* _AnimatorStateAudioTable_k__BackingField; // 0x30
		Il2CppObject* _AnimatorStateVoiceTable_k__BackingField; // 0x38
		Il2CppObject* _FormAnimatorStateAudioTable_k__BackingField; // 0x40
		Il2CppObject* _FormAnimatorStateVoiceTable_k__BackingField; // 0x48
		Il2CppObject* _LogicEffectVoices_k__BackingField; // 0x50
		Il2CppObject* _LogicEffectSelfVoices_k__BackingField; // 0x58
		Il2CppObject* _BattleCommonVoices_k__BackingField; // 0x60
		EntityVisual* _EntityVisual_k__BackingField; // 0x68
		::UnityEngine::Animator* _Animator_k__BackingField; // 0x70

		::System::Int64 get_CharacterVoiceGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_CHARACTERVOICEGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterVoiceGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_CHARACTERVOICEGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AnimatorStateAudioTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_ANIMATORSTATEAUDIOTABLE_OFFSET))(nullptr);
		}

		::System::Void set_AnimatorStateAudioTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_ANIMATORSTATEAUDIOTABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AnimatorStateVoiceTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_ANIMATORSTATEVOICETABLE_OFFSET))(nullptr);
		}

		::System::Void set_AnimatorStateVoiceTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_ANIMATORSTATEVOICETABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FormAnimatorStateAudioTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_FORMANIMATORSTATEAUDIOTABLE_OFFSET))(nullptr);
		}

		::System::Void set_FormAnimatorStateAudioTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_FORMANIMATORSTATEAUDIOTABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FormAnimatorStateVoiceTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_FORMANIMATORSTATEVOICETABLE_OFFSET))(nullptr);
		}

		::System::Void set_FormAnimatorStateVoiceTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_FORMANIMATORSTATEVOICETABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_LogicEffectVoices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_LOGICEFFECTVOICES_OFFSET))(nullptr);
		}

		::System::Void set_LogicEffectVoices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_LOGICEFFECTVOICES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_LogicEffectSelfVoices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_LOGICEFFECTSELFVOICES_OFFSET))(nullptr);
		}

		::System::Void set_LogicEffectSelfVoices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_LOGICEFFECTSELFVOICES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_BattleCommonVoices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_BATTLECOMMONVOICES_OFFSET))(nullptr);
		}

		::System::Void set_BattleCommonVoices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_BATTLECOMMONVOICES_OFFSET))(arg, nullptr);
		}

		EntityVisual* get_EntityVisual()
		{
			return (return (EntityVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_ENTITYVISUAL_OFFSET))(nullptr);
		}

		::System::Void set_EntityVisual(EntityVisual* arg)
		{
			((::System::Void(*)(EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_ENTITYVISUAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return (return (::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_GET_ANIMATOR_OFFSET))(nullptr);
		}

		::System::Void set_Animator(::UnityEngine::Animator* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_SET_ANIMATOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseAddressable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_RELEASEADDRESSABLE_OFFSET))(nullptr);
		}

		::System::Void OnPlayAnimation(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_ONPLAYANIMATION_OFFSET))(str, arg, nullptr);
		}

		::System::Void OnPlayAnimation(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_ONPLAYANIMATION_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void PlayBattleCommonVoice(::FlatData::VoiceEvent* arg)
		{
			((::System::Void(*)(::FlatData::VoiceEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_PLAYBATTLECOMMONVOICE_OFFSET))(arg, nullptr);
		}

		::System::Void PlayVoiceBySkillUse(::MX::Logic::BattleEntities::SkillSlot* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillSlot*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_PLAYVOICEBYSKILLUSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsPlayerCharacter()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_ISPLAYERCHARACTER_OFFSET))(nullptr);
		}

		::System::Void OnTSS()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_ONTSS_OFFSET))(nullptr);
		}

		::System::Void AllStopImmediate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_ALLSTOPIMMEDIATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Initialize_b__43_3(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_3_OFFSET))(arg, nullptr);
		}

		::System::Void _Initialize_b__43_4(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_4_OFFSET))(arg, nullptr);
		}

		::System::Void _Initialize_b__43_5(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_5_OFFSET))(arg, nullptr);
		}

		::System::Void _Initialize_b__43_6(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_6_OFFSET))(arg, nullptr);
		}

		::System::Void _Initialize_b__43_7(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_7_OFFSET))(arg, nullptr);
		}

		::System::Void _Initialize_b__43_8(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_8_OFFSET))(arg, nullptr);
		}

		::System::Void _Initialize_b__43_0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_0_OFFSET))(arg, nullptr);
		}

		::System::Void _Initialize_b__43_1(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_1_OFFSET))(arg, nullptr);
		}

		::System::Void _Initialize_b__43_2(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_ENTITYAUDIOCONTROLLER__INITIALIZE_B__43_2_OFFSET))(arg, nullptr);
		}

	};
}

