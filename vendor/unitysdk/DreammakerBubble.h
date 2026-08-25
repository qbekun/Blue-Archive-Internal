#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class UILabel;
class DreamCharacter;
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }
namespace FlatData { class DialogCondition; }
namespace FlatData { class DreamMakerResult; }

#define DREAMMAKERBUBBLE_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xB8F5E0)
#define DREAMMAKERBUBBLE_INITFLOATER_OFFSET UNITYSDK_OFFSET(0xB8F5F0)
#define DREAMMAKERBUBBLE_SET_DEFAULTMONOLOGUEDURATION_OFFSET UNITYSDK_OFFSET(0xB8F6E0)
#define DREAMMAKERBUBBLE_STOPMONOLOGUEONEXIT_OFFSET UNITYSDK_OFFSET(0xB8F6F0)
#define DREAMMAKERBUBBLE_GET_DEFAULTMONOLOGUEDURATION_OFFSET UNITYSDK_OFFSET(0xB8F780)
#define DREAMMAKERBUBBLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB8F790)
#define DREAMMAKERBUBBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xB8F850)
#define DREAMMAKERBUBBLE_STOPMONOLOGUE_OFFSET UNITYSDK_OFFSET(0xB8F870)
#define DREAMMAKERBUBBLE_SET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0xB8F9E0)
#define DREAMMAKERBUBBLE_COSTOPMONOLOGUE_OFFSET UNITYSDK_OFFSET(0xB8F970)
#define DREAMMAKERBUBBLE_GETCURRENTCONDITION_OFFSET UNITYSDK_OFFSET(0xB8FA10)
#define DREAMMAKERBUBBLE_HIDEALL_OFFSET UNITYSDK_OFFSET(0xB8F7F0)
#define DREAMMAKERBUBBLE_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0xB8FF30)
#define DREAMMAKERBUBBLE_COPLAY_OFFSET UNITYSDK_OFFSET(0xB8FF40)
#define DREAMMAKERBUBBLE_PLAYMONOLOGUE_OFFSET UNITYSDK_OFFSET(0xB8ECD0)
#define DREAMMAKERBUBBLE_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xB900C0)
#define DREAMMAKERBUBBLE_PLAYEMOJI_OFFSET UNITYSDK_OFFSET(0xB900D0)

	inline static constexpr unsigned int DreammakerBubble_TypeDefinitionIndex = 560;

	class DreammakerBubble : public Il2CppObject
	{
	public:
		::System::Single emojiBubbleTime; // 0x18
		::UnityEngine::GameObject* SuccessGreatEmoticon; // 0x20
		::UnityEngine::Animation* SuccessGreatEmoticonAni; // 0x28
		::UnityEngine::GameObject* SuccessNormalEmoticon; // 0x30
		::UnityEngine::Animation* SuccessNormalEmoticonAni; // 0x38
		::UnityEngine::GameObject* FailnormalEmoticon; // 0x40
		::UnityEngine::Animation* FailnormalEmoticonAni; // 0x48
		::UnityEngine::GameObject* monologTextGameObject; // 0x50
		UILabel* monologTextLabel; // 0x58
		::UnityEngine::Animation* monologTextGameObjectAni; // 0x60
		DreamCharacter* dreamCharacter; // 0x68
		::UnityEngine::Animation* anim; // 0x70
		::System::Int64 _CharacterId_k__BackingField; // 0x78
		::System::Int64 _CostumeId_k__BackingField; // 0x80
		::System::Boolean isDisappearingNow; // 0x88
		::System::Boolean isEmojiBubbleOn; // 0x89
		::UnityEngine::Coroutine* monologueCoroutine; // 0x90
		::System::Single _DefaultMonologueDuration_k__BackingField; // 0x98

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void InitFloater(::UnityEngine::Transform* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_INITFLOATER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_DefaultMonologueDuration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_SET_DEFAULTMONOLOGUEDURATION_OFFSET))(arg, nullptr);
		}

		::System::Void StopMonologueOnExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_STOPMONOLOGUEONEXIT_OFFSET))(nullptr);
		}

		::System::Single get_DefaultMonologueDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_GET_DEFAULTMONOLOGUEDURATION_OFFSET))(nullptr);
		}

		::System::Void Initialize(DreamCharacter* arg)
		{
			((::System::Void(*)(DreamCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void StopMonologue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_STOPMONOLOGUE_OFFSET))(nullptr);
		}

		::System::Void set_CostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_SET_COSTUMEID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoStopMonologue()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_COSTOPMONOLOGUE_OFFSET))(nullptr);
		}

		::FlatData::DialogCondition* GetCurrentCondition()
		{
			return ((::FlatData::DialogCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_GETCURRENTCONDITION_OFFSET))(nullptr);
		}

		::System::Void HideAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_HIDEALL_OFFSET))(nullptr);
		}

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlay(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_COPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void PlayMonologue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_PLAYMONOLOGUE_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void PlayEmoji(::FlatData::DreamMakerResult* arg)
		{
			((::System::Void(*)(::FlatData::DreamMakerResult*, ::PVOID))((::PBYTE)hIl2Cpp + DREAMMAKERBUBBLE_PLAYEMOJI_OFFSET))(arg, nullptr);
		}

	};

