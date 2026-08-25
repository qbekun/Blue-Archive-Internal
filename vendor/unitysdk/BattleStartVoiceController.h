#pragma once
#include "unitysdk.h"

class Oc9f989cd0ec86a7994f7db906d6d9dfd4f8c9be285f80227c388947f1bd955b5;
class Type;
namespace FlatData { class VoiceEvent; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define BATTLESTARTVOICECONTROLLER_SET_SEQUENCETYPE_OFFSET UNITYSDK_OFFSET(0x204A7C0)
#define BATTLESTARTVOICECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204A7D0)
#define BATTLESTARTVOICECONTROLLER_GET_CHARACTERTYPE_OFFSET UNITYSDK_OFFSET(0x204A7E0)
#define BATTLESTARTVOICECONTROLLER_SET_CHARACTERTYPE_OFFSET UNITYSDK_OFFSET(0x204A7F0)
#define BATTLESTARTVOICECONTROLLER_GET_SEQUENCETYPE_OFFSET UNITYSDK_OFFSET(0x204A800)
#define BATTLESTARTVOICECONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0x204A810)
#define BATTLESTARTVOICECONTROLLER_PLAYBYBATTLESTART_OFFSET UNITYSDK_OFFSET(0x204ABD0)
#define BATTLESTARTVOICECONTROLLER_PLAYBYBATTLEEND_OFFSET UNITYSDK_OFFSET(0x204AF10)
#define BATTLESTARTVOICECONTROLLER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x204B900)

	inline static constexpr unsigned int BattleStartVoiceController_TypeDefinitionIndex = 3290;

	class BattleStartVoiceController : public Il2CppObject
	{
	public:
		Oc9f989cd0ec86a7994f7db906d6d9dfd4f8c9be285f80227c388947f1bd955b5* _CharacterType_k__BackingField; // 0x10
		Type* _SequenceType_k__BackingField; // 0x14

		::System::Void set_SequenceType(Type* arg)
		{
			((::System::Void(*)(Type*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESTARTVOICECONTROLLER_SET_SEQUENCETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLESTARTVOICECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		Oc9f989cd0ec86a7994f7db906d6d9dfd4f8c9be285f80227c388947f1bd955b5* get_CharacterType()
		{
			return ((Oc9f989cd0ec86a7994f7db906d6d9dfd4f8c9be285f80227c388947f1bd955b5*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLESTARTVOICECONTROLLER_GET_CHARACTERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CharacterType(Oc9f989cd0ec86a7994f7db906d6d9dfd4f8c9be285f80227c388947f1bd955b5* arg)
		{
			((::System::Void(*)(Oc9f989cd0ec86a7994f7db906d6d9dfd4f8c9be285f80227c388947f1bd955b5*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESTARTVOICECONTROLLER_SET_CHARACTERTYPE_OFFSET))(arg, nullptr);
		}

		Type* get_SequenceType()
		{
			return ((Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLESTARTVOICECONTROLLER_GET_SEQUENCETYPE_OFFSET))(nullptr);
		}

		::System::Void Play(::FlatData::VoiceEvent* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::FlatData::VoiceEvent*, ::MX::Logic::BattleEntities::EntityId*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESTARTVOICECONTROLLER_PLAY_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void PlayByBattleStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLESTARTVOICECONTROLLER_PLAYBYBATTLESTART_OFFSET))(nullptr);
		}

		::System::Void PlayByBattleEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLESTARTVOICECONTROLLER_PLAYBYBATTLEEND_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + BATTLESTARTVOICECONTROLLER_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

	};

