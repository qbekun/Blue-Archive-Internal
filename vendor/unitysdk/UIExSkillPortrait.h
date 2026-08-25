#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
class UITexture;
class UILabel;
class EntityVisual;
class IPortraitSpineCharacter;
namespace UnityEngine { class Coroutine; }

#define UIEXSKILLPORTRAIT_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x24D1040)
#define UIEXSKILLPORTRAIT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24D1050)
#define UIEXSKILLPORTRAIT_SET_FORMINDEX_OFFSET UNITYSDK_OFFSET(0x24D10C0)
#define UIEXSKILLPORTRAIT_GET_SKILLNAMEKEY_OFFSET UNITYSDK_OFFSET(0x24D10D0)
#define UIEXSKILLPORTRAIT_GET_FORMINDEX_OFFSET UNITYSDK_OFFSET(0x24D10E0)
#define UIEXSKILLPORTRAIT_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x24D10F0)
#define UIEXSKILLPORTRAIT_GET_PLAYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x24D1100)
#define UIEXSKILLPORTRAIT_TRYREPLAY_OFFSET UNITYSDK_OFFSET(0x24D0DB0)
#define UIEXSKILLPORTRAIT_COPLAY_OFFSET UNITYSDK_OFFSET(0x24D11F0)
#define UIEXSKILLPORTRAIT_UNLOADSPINECHARACTER_OFFSET UNITYSDK_OFFSET(0x24D1110)
#define UIEXSKILLPORTRAIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24D1280)
#define UIEXSKILLPORTRAIT_SET_SKILLNAMEKEY_OFFSET UNITYSDK_OFFSET(0x24D12E0)
#define UIEXSKILLPORTRAIT_PLAY_OFFSET UNITYSDK_OFFSET(0x24D0850)
#define UIEXSKILLPORTRAIT_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x24D12F0)
#define UIEXSKILLPORTRAIT_GET_ENTITYVISUAL_OFFSET UNITYSDK_OFFSET(0x24D1380)
#define UIEXSKILLPORTRAIT_COLOADSPINECHARACTER_OFFSET UNITYSDK_OFFSET(0x24D1390)
#define UIEXSKILLPORTRAIT_SET_ENTITYVISUAL_OFFSET UNITYSDK_OFFSET(0x24D1420)

	inline static constexpr unsigned int UIExSkillPortrait_TypeDefinitionIndex = 5951;

	class UIExSkillPortrait : public Il2CppObject
	{
	public:
		::System::String* SkillDialogPrefix; // 0x0
		::System::Int32 MaxDialogNumber; // 0x0
		::System::Int32 SpineSortingOrder; // 0x0
		::System::Int32 ExSkillLayer; // 0x0
		::UnityEngine::Animation* myAnimation; // 0x18
		::UnityEngine::Transform* spineParent; // 0x20
		UITexture* maskTexture; // 0x28
		UILabel* skillNameLabel; // 0x30
		EntityVisual* _EntityVisual_k__BackingField; // 0x38
		::System::Int64 _CharacterId_k__BackingField; // 0x40
		::System::Int32 _FormIndex_k__BackingField; // 0x48
		::System::String* _SkillNameKey_k__BackingField; // 0x50
		IPortraitSpineCharacter* portraitSpineCharacter; // 0x58
		::UnityEngine::Coroutine* playCoroutine; // 0x60

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_FormIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_SET_FORMINDEX_OFFSET))(arg, nullptr);
		}

		::System::String* get_SkillNameKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_GET_SKILLNAMEKEY_OFFSET))(nullptr);
		}

		::System::Int32 get_FormIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_GET_FORMINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::UnityEngine::Coroutine* get_PlayCoroutine()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_GET_PLAYCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void TryReplay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_TRYREPLAY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_COPLAY_OFFSET))(nullptr);
		}

		::System::Void UnloadSpineCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_UNLOADSPINECHARACTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SkillNameKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_SET_SKILLNAMEKEY_OFFSET))(str, nullptr);
		}

		::System::Void Play(EntityVisual* arg, ::System::String* str, ::System::Int32 arg2)
		{
			((::System::Void(*)(EntityVisual*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_PLAY_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* PlayAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_PLAYANIMATION_OFFSET))(nullptr);
		}

		EntityVisual* get_EntityVisual()
		{
			return ((EntityVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_GET_ENTITYVISUAL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoLoadSpineCharacter()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_COLOADSPINECHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_EntityVisual(EntityVisual* arg)
		{
			((::System::Void(*)(EntityVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UIEXSKILLPORTRAIT_SET_ENTITYVISUAL_OFFSET))(arg, nullptr);
		}

	};

