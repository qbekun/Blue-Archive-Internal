#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Animation; }
class UILabel;
class UISprite;
class TweenPosition;
namespace UnityEngine { class Color; }
class FloatingUIPositionComponent;
namespace FlatData { class BubbleType; }
class CafeCharacter;
class UICafe;
namespace UnityEngine { class Coroutine; }
class UIWidget;
namespace MX::Core::Math { class IRandomService; }
namespace UnityEngine { class Transform; }

#define CAFECHARACTERBUBBLE_GET_FLOATINGUI_OFFSET UNITYSDK_OFFSET(0x225BE60)
#define CAFECHARACTERBUBBLE_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x225BE70)
#define CAFECHARACTERBUBBLE_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x225BE80)
#define CAFECHARACTERBUBBLE_GET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x225BE90)
#define CAFECHARACTERBUBBLE_SET_COSTUMEID_OFFSET UNITYSDK_OFFSET(0x225BEA0)
#define CAFECHARACTERBUBBLE_GET_BUBBLETYPE_OFFSET UNITYSDK_OFFSET(0x225BEB0)
#define CAFECHARACTERBUBBLE_SET_BUBBLETYPE_OFFSET UNITYSDK_OFFSET(0x225BEC0)
#define CAFECHARACTERBUBBLE_GET_ISIDLE_OFFSET UNITYSDK_OFFSET(0x225BED0)
#define CAFECHARACTERBUBBLE_GET_ISCHARACTERVISIBLE_OFFSET UNITYSDK_OFFSET(0x225BEE0)
#define CAFECHARACTERBUBBLE_GET_CANSTARTMONOLOGUE_OFFSET UNITYSDK_OFFSET(0x225BF70)
#define CAFECHARACTERBUBBLE_GET_ISFIRSTFAVOR_OFFSET UNITYSDK_OFFSET(0x225BFC0)
#define CAFECHARACTERBUBBLE_SET_ISFIRSTFAVOR_OFFSET UNITYSDK_OFFSET(0x225BFD0)
#define CAFECHARACTERBUBBLE_GET_HASINTERACTIONDIALOG_OFFSET UNITYSDK_OFFSET(0x225BFE0)
#define CAFECHARACTERBUBBLE_SET_HASINTERACTIONDIALOG_OFFSET UNITYSDK_OFFSET(0x225BFF0)
#define CAFECHARACTERBUBBLE_GET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x225C000)
#define CAFECHARACTERBUBBLE_SET_CHARACTER_OFFSET UNITYSDK_OFFSET(0x225C010)
#define CAFECHARACTERBUBBLE_GET_UICAFE_OFFSET UNITYSDK_OFFSET(0x225C030)
#define CAFECHARACTERBUBBLE_SET_UICAFE_OFFSET UNITYSDK_OFFSET(0x225C040)
#define CAFECHARACTERBUBBLE_GET_TAGCOUNT_OFFSET UNITYSDK_OFFSET(0x225C060)
#define CAFECHARACTERBUBBLE_SET_TAGCOUNT_OFFSET UNITYSDK_OFFSET(0x225C070)
#define CAFECHARACTERBUBBLE_GET_DEFAULTMONOLOGUEDURATION_OFFSET UNITYSDK_OFFSET(0x225C080)
#define CAFECHARACTERBUBBLE_SET_DEFAULTMONOLOGUEDURATION_OFFSET UNITYSDK_OFFSET(0x225C090)
#define CAFECHARACTERBUBBLE_GET_ORDEREDWIDGETS_OFFSET UNITYSDK_OFFSET(0x225C0A0)
#define CAFECHARACTERBUBBLE_GET_WAITDURATION_OFFSET UNITYSDK_OFFSET(0x225C150)
#define CAFECHARACTERBUBBLE_SET_WAITDURATION_OFFSET UNITYSDK_OFFSET(0x225C160)
#define CAFECHARACTERBUBBLE_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x225C170)
#define CAFECHARACTERBUBBLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x225C180)
#define CAFECHARACTERBUBBLE_HIDEALL_OFFSET UNITYSDK_OFFSET(0x225C470)
#define CAFECHARACTERBUBBLE_ONEDITSTART_OFFSET UNITYSDK_OFFSET(0x225C6E0)
#define CAFECHARACTERBUBBLE_GET_CURRENTBUBBLEANI_OFFSET UNITYSDK_OFFSET(0x225C700)
#define CAFECHARACTERBUBBLE_GET_CURRENTBUBBLEGO_OFFSET UNITYSDK_OFFSET(0x225C740)
#define CAFECHARACTERBUBBLE_PLAYANI_OFFSET UNITYSDK_OFFSET(0x225C780)
#define CAFECHARACTERBUBBLE_GET_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0x225C9E0)
#define CAFECHARACTERBUBBLE_SET_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0x225C9F0)
#define CAFECHARACTERBUBBLE_PLAYANI_OFFSET UNITYSDK_OFFSET(0x225C7D0)
#define CAFECHARACTERBUBBLE_ONPLAYANIEND_OFFSET UNITYSDK_OFFSET(0x225CA00)
#define CAFECHARACTERBUBBLE_WAIT_OFFSET UNITYSDK_OFFSET(0x225CAA0)
#define CAFECHARACTERBUBBLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x225CB40)
#define CAFECHARACTERBUBBLE_SHOWONOPEN_OFFSET UNITYSDK_OFFSET(0x225CF10)
#define CAFECHARACTERBUBBLE_SHOW_OFFSET UNITYSDK_OFFSET(0x225CFB0)
#define CAFECHARACTERBUBBLE_SETFLOATINGUI_OFFSET UNITYSDK_OFFSET(0x225CC50)
#define CAFECHARACTERBUBBLE_ONUNLOAD_OFFSET UNITYSDK_OFFSET(0x225D770)
#define CAFECHARACTERBUBBLE_HANDLEOBJECTS_OFFSET UNITYSDK_OFFSET(0x225D100)
#define CAFECHARACTERBUBBLE_SETORDERBYFLOATERDISTANCE_OFFSET UNITYSDK_OFFSET(0x225D7E0)
#define CAFECHARACTERBUBBLE_ONPRESENTHOVERED_OFFSET UNITYSDK_OFFSET(0x225D8B0)
#define CAFECHARACTERBUBBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x225DA50)
#define CAFECHARACTERBUBBLE__WAIT_G__WAITANDPLAYFALSE|84_0_OFFSET UNITYSDK_OFFSET(0x225DAE0)
#define CAFECHARACTERBUBBLE__HANDLEOBJECTS_B__90_0_OFFSET UNITYSDK_OFFSET(0x225DB70)

	inline static constexpr unsigned int CafeCharacterBubble_TypeDefinitionIndex = 4562;

	class CafeCharacterBubble : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* favorGo; // 0x18
		::UnityEngine::Animation* favorAni; // 0x20
		::UnityEngine::GameObject* emoticonGo; // 0x28
		::UnityEngine::Animation* emoticonAni; // 0x30
		Il2CppObject* normalEmoticons; // 0x38
		::UnityEngine::GameObject* rewardEmoticon; // 0x40
		::UnityEngine::GameObject* monologueGo; // 0x48
		::UnityEngine::Animation* monologueAni; // 0x50
		UILabel* monologueLabel; // 0x58
		UISprite* monologueBg; // 0x60
		Il2CppObject* giftEmoticons; // 0x68
		TweenPosition* focusTween; // 0x70
		::UnityEngine::Color* focusTint; // 0x78
		FloatingUIPositionComponent* floatingUI; // 0x88
		::System::Int64 _CharacterId_k__BackingField; // 0x90
		::System::Int64 _CostumeId_k__BackingField; // 0x98
		::FlatData::BubbleType* _BubbleType_k__BackingField; // 0xA0
		::System::Boolean _IsFirstFavor_k__BackingField; // 0xA4
		::System::Boolean _HasInteractionDialog_k__BackingField; // 0xA5
		CafeCharacter* _Character_k__BackingField; // 0xA8
		UICafe* _UICafe_k__BackingField; // 0xB0
		::System::Int32 _TagCount_k__BackingField; // 0xB8
		::System::Single _DefaultMonologueDuration_k__BackingField; // 0xBC
		::UnityEngine::Coroutine* currentCoroutine; // 0xC0
		Il2CppObject* orderesWidgets; // 0xC8
		UIWidget* emoticonBubbleWidget; // 0xD0
		::System::Single _WaitDuration_k__BackingField; // 0xD8
		::MX::Core::Math::IRandomService* _random_k__BackingField; // 0xE0
		::System::Boolean _playForward_k__BackingField; // 0xE8

		FloatingUIPositionComponent* get_FloatingUI()
		{
			return ((FloatingUIPositionComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_FLOATINGUI_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CostumeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_COSTUMEID_OFFSET))(nullptr);
		}

		::System::Void set_CostumeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_SET_COSTUMEID_OFFSET))(arg, nullptr);
		}

		::FlatData::BubbleType* get_BubbleType()
		{
			return ((::FlatData::BubbleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_BUBBLETYPE_OFFSET))(nullptr);
		}

		::System::Void set_BubbleType(::FlatData::BubbleType* arg)
		{
			((::System::Void(*)(::FlatData::BubbleType*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_SET_BUBBLETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsIdle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_ISIDLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCharacterVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_ISCHARACTERVISIBLE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanStartMonologue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_CANSTARTMONOLOGUE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsFirstFavor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_ISFIRSTFAVOR_OFFSET))(nullptr);
		}

		::System::Void set_IsFirstFavor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_SET_ISFIRSTFAVOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasInteractionDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_HASINTERACTIONDIALOG_OFFSET))(nullptr);
		}

		::System::Void set_HasInteractionDialog(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_SET_HASINTERACTIONDIALOG_OFFSET))(arg, nullptr);
		}

		CafeCharacter* get_Character()
		{
			return ((CafeCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_CHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_Character(CafeCharacter* arg)
		{
			((::System::Void(*)(CafeCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_SET_CHARACTER_OFFSET))(arg, nullptr);
		}

		UICafe* get_UICafe()
		{
			return ((UICafe*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_UICAFE_OFFSET))(nullptr);
		}

		::System::Void set_UICafe(UICafe* arg)
		{
			((::System::Void(*)(UICafe*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_SET_UICAFE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TagCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_TAGCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_TagCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_SET_TAGCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Single get_DefaultMonologueDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_DEFAULTMONOLOGUEDURATION_OFFSET))(nullptr);
		}

		::System::Void set_DefaultMonologueDuration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_SET_DEFAULTMONOLOGUEDURATION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OrderedWidgets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_ORDEREDWIDGETS_OFFSET))(nullptr);
		}

		::System::Single get_WaitDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_WAITDURATION_OFFSET))(nullptr);
		}

		::System::Void set_WaitDuration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_SET_WAITDURATION_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::IRandomService* get_random()
		{
			return ((::MX::Core::Math::IRandomService*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_RANDOM_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void HideAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_HIDEALL_OFFSET))(nullptr);
		}

		::System::Void OnEditStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_ONEDITSTART_OFFSET))(nullptr);
		}

		::UnityEngine::Animation* get_currentBubbleAni()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_CURRENTBUBBLEANI_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_currentBubbleGo()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_CURRENTBUBBLEGO_OFFSET))(nullptr);
		}

		::System::Void PlayAni(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_PLAYANI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_playForward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_GET_PLAYFORWARD_OFFSET))(nullptr);
		}

		::System::Void set_playForward(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_SET_PLAYFORWARD_OFFSET))(arg, nullptr);
		}

		::System::Void PlayAni(::UnityEngine::Animation* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Animation*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_PLAYANI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnPlayAniEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_ONPLAYANIEND_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Wait(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_WAIT_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(CafeCharacter* arg, ::FlatData::BubbleType* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(CafeCharacter*, ::FlatData::BubbleType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ShowOnOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_SHOWONOPEN_OFFSET))(nullptr);
		}

		::System::Void Show(::FlatData::BubbleType* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatData::BubbleType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_SHOW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetFloatingUI(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_SETFLOATINGUI_OFFSET))(arg, nullptr);
		}

		::System::Void OnUnload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_ONUNLOAD_OFFSET))(nullptr);
		}

		::System::Void HandleObjects()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_HANDLEOBJECTS_OFFSET))(nullptr);
		}

		::System::Void SetOrderByFloaterDistance(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_SETORDERBYFLOATERDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPresentHovered(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_ONPRESENTHOVERED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _Wait_g__WaitAndPlayFalse|84_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE__WAIT_G__WAITANDPLAYFALSE|84_0_OFFSET))(nullptr);
		}

		::System::Void _HandleObjects_b__90_0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECHARACTERBUBBLE__HANDLEOBJECTS_B__90_0_OFFSET))(arg, nullptr);
		}

	};

