#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Vector3; }
class UILabel;
namespace UnityEngine { class GameObject; }
class Trigger;
class EventDelegate;

#define MXBUTTON_SETBUTTONLABEL_OFFSET UNITYSDK_OFFSET(0x20580D0)
#define MXBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x2058150)
#define MXBUTTON_SET_TRIGGERONSWIPE_OFFSET UNITYSDK_OFFSET(0x20582F0)
#define MXBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x2058300)
#define MXBUTTON_CO_LONGPRESSSTOPWATCH_OFFSET UNITYSDK_OFFSET(0x2058570)
#define MXBUTTON_ONPRESS_OFFSET UNITYSDK_OFFSET(0x2058620)
#define MXBUTTON_GET_ISCOLLIDERENABLED_OFFSET UNITYSDK_OFFSET(0x2058F20)
#define MXBUTTON__ONDRAGOVER_B__40_0_OFFSET UNITYSDK_OFFSET(0x2059290)
#define MXBUTTON_STOPCURRENTLONGPRESSSTOPWATCHCOROUTINE_OFFSET UNITYSDK_OFFSET(0x2059010)
#define MXBUTTON_PLAYDOWNANIMATION_OFFSET UNITYSDK_OFFSET(0x20592A0)
#define MXBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20593D0)
#define MXBUTTON_ONDRAGOVER_OFFSET UNITYSDK_OFFSET(0x2059460)
#define MXBUTTON_REMOVEDELEGATE_OFFSET UNITYSDK_OFFSET(0x2059590)
#define MXBUTTON_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2059600)
#define MXBUTTON__ONPRESS_B__38_0_OFFSET UNITYSDK_OFFSET(0x2059610)
#define MXBUTTON_SET_CANTRIGGER_OFFSET UNITYSDK_OFFSET(0x2059620)
#define MXBUTTON_EXECUTETRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x2059030)
#define MXBUTTON_ADDDELEGATE_OFFSET UNITYSDK_OFFSET(0x2059630)
#define MXBUTTON_ONDRAGOUT_OFFSET UNITYSDK_OFFSET(0x20596F0)
#define MXBUTTON_GET_TRIGGERONSWIPE_OFFSET UNITYSDK_OFFSET(0x2059870)
#define MXBUTTON_GET_CANTRIGGER_OFFSET UNITYSDK_OFFSET(0x2059880)
#define MXBUTTON__ONDRAGOUT_B__39_0_OFFSET UNITYSDK_OFFSET(0x2059890)
#define MXBUTTON_PLAYUPANIMATION_OFFSET UNITYSDK_OFFSET(0x20598A0)
#define MXBUTTON_MANUALTRIGGEREXECUTE_OFFSET UNITYSDK_OFFSET(0x20599B0)

	inline static constexpr unsigned int MXButton_TypeDefinitionIndex = 3355;

	class MXButton : public Il2CppObject
	{
	public:
		MXButton* current; // 0x0
		::System::Single LONG_PRESS_DURATION; // 0x18
		::System::Boolean PlaySound; // 0x1C
		::System::String* SoundUniqueId; // 0x20
		::UnityEngine::AnimationClip* Clip; // 0x28
		Il2CppObject* onClick; // 0x30
		Il2CppObject* onLongPress; // 0x38
		Il2CppObject* onPress; // 0x40
		::Il2CppArray<::System::Object*>* triggerEvents; // 0x48
		::UnityEngine::Coroutine* longPressCoroutine; // 0x50
		::UnityEngine::Animation* anim; // 0x58
		::UnityEngine::Coroutine* downAnimCoroutine; // 0x60
		::UnityEngine::Coroutine* upAnimCoroutine; // 0x68
		::UnityEngine::Vector3* positionAtPress; // 0x70
		::System::Boolean _TriggerOnSwipe_k__BackingField; // 0x7C
		::UnityEngine::Vector3* touchBeganPos; // 0x80
		::UnityEngine::Vector3* touchEndedPos; // 0x8C
		UILabel* label; // 0x98
		Il2CppObject* contentBlockTypes; // 0xA0
		::System::Boolean _CanTrigger_k__BackingField; // 0xA8

		::System::Void SetButtonLabel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_SETBUTTONLABEL_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TriggerOnSwipe(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_SET_TRIGGERONSWIPE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_LongPressStopWatch(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_CO_LONGPRESSSTOPWATCH_OFFSET))(arg, nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isColliderEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_GET_ISCOLLIDERENABLED_OFFSET))(nullptr);
		}

		::System::Void _OnDragOver_b__40_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON__ONDRAGOVER_B__40_0_OFFSET))(nullptr);
		}

		::System::Void StopCurrentLongPressStopWatchCoroutine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_STOPCURRENTLONGPRESSSTOPWATCHCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void PlayDownAnimation(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_PLAYDOWNANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDragOver(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_ONDRAGOVER_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveDelegate(Trigger* arg, EventDelegate* arg2)
		{
			((::System::Void(*)(Trigger*, EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_REMOVEDELEGATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void _OnPress_b__38_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON__ONPRESS_B__38_0_OFFSET))(nullptr);
		}

		::System::Void set_CanTrigger(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_SET_CANTRIGGER_OFFSET))(arg, nullptr);
		}

		::System::Void ExecuteTriggerEvent(Trigger* arg)
		{
			((::System::Void(*)(Trigger*, ::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_EXECUTETRIGGEREVENT_OFFSET))(arg, nullptr);
		}

		::System::Void AddDelegate(Trigger* arg, EventDelegate* arg2)
		{
			((::System::Void(*)(Trigger*, EventDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_ADDDELEGATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDragOut(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_ONDRAGOUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_TriggerOnSwipe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_GET_TRIGGERONSWIPE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_GET_CANTRIGGER_OFFSET))(nullptr);
		}

		::System::Void _OnDragOut_b__39_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON__ONDRAGOUT_B__39_0_OFFSET))(nullptr);
		}

		::System::Void PlayUpAnimation(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_PLAYUPANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void ManualTriggerExecute(Trigger* arg)
		{
			((::System::Void(*)(Trigger*, ::PVOID))((::PBYTE)hIl2Cpp + MXBUTTON_MANUALTRIGGEREXECUTE_OFFSET))(arg, nullptr);
		}

	};

