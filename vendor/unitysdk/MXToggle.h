#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class BoxCollider; }
class UIDragScrollView;
class MXToggleState;
namespace UnityEngine { class GameObject; }
class MXToggle;

#define MXTOGGLE_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x205A160)
#define MXTOGGLE_GET_TOGGLESTATE_OFFSET UNITYSDK_OFFSET(0x205A170)
#define MXTOGGLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x205A180)
#define MXTOGGLE_ONDRAGOVER_OFFSET UNITYSDK_OFFSET(0x205A190)
#define MXTOGGLE_SETTABCONTROLLER_OFFSET UNITYSDK_OFFSET(0x205A360)
#define MXTOGGLE_ONTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x205A370)
#define MXTOGGLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x205A4E0)
#define MXTOGGLE_GET_CANTAB_OFFSET UNITYSDK_OFFSET(0x205A570)
#define MXTOGGLE_SETDISABLE_OFFSET UNITYSDK_OFFSET(0x205A580)
#define MXTOGGLE_GET_TABINDEX_OFFSET UNITYSDK_OFFSET(0x205A860)
#define MXTOGGLE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x205A830)
#define MXTOGGLE_GET_ISINIT_OFFSET UNITYSDK_OFFSET(0x205A870)
#define MXTOGGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x205A880)
#define MXTOGGLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x205A8D0)
#define MXTOGGLE_ONPRESS_OFFSET UNITYSDK_OFFSET(0x205AB50)
#define MXTOGGLE_SET_TOGGLESTATE_OFFSET UNITYSDK_OFFSET(0x205AF50)
#define MXTOGGLE_SETVALUEWITHOUTEVENTPROPAGATION_OFFSET UNITYSDK_OFFSET(0x205AF60)
#define MXTOGGLE_SET_CANTAB_OFFSET UNITYSDK_OFFSET(0x205AF70)
#define MXTOGGLE_ONDRAGOUT_OFFSET UNITYSDK_OFFSET(0x205AF90)
#define MXTOGGLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x205A8E0)
#define MXTOGGLE_SET_TABINDEX_OFFSET UNITYSDK_OFFSET(0x205B170)

	inline static constexpr unsigned int MXToggle_TypeDefinitionIndex = 3361;

	class MXToggle : public Il2CppObject
	{
	public:
		::System::Boolean _value; // 0x18
		Il2CppObject* OnChanged; // 0x20
		Il2CppObject* Activate; // 0x28
		Il2CppObject* Deactivate; // 0x30
		Il2CppObject* Disable; // 0x38
		::System::String* SoundUniqueId; // 0x40
		::UnityEngine::AnimationClip* Clip; // 0x48
		::System::Boolean init; // 0x50
		::System::Boolean usingTab; // 0x51
		::UnityEngine::Animation* anim; // 0x58
		::UnityEngine::Coroutine* downAnimCoroutine; // 0x60
		::UnityEngine::Coroutine* upAnimCoroutine; // 0x68
		::UnityEngine::BoxCollider* boxCollider; // 0x70
		UIDragScrollView* dragScrollView; // 0x78
		::System::Boolean canTrigger; // 0x80
		::System::Int32 dragOverCount; // 0x84
		Il2CppObject* _CanTab_k__BackingField; // 0x88
		::System::Int32 _TabIndex_k__BackingField; // 0x90
		MXToggleState* _ToggleState_k__BackingField; // 0x94

		::UnityEngine::BoxCollider* get_Collider()
		{
			return ((::UnityEngine::BoxCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_GET_COLLIDER_OFFSET))(nullptr);
		}

		MXToggleState* get_ToggleState()
		{
			return ((MXToggleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_GET_TOGGLESTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_Value()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void OnDragOver(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_ONDRAGOVER_OFFSET))(arg, nullptr);
		}

		::System::Void SetTabController(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_SETTABCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Void OnToggleChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_ONTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_ONENABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_CanTab()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_GET_CANTAB_OFFSET))(nullptr);
		}

		::System::Void SetDisable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_SETDISABLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_GET_TABINDEX_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_GET_ISINIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ToggleState(MXToggleState* arg)
		{
			((::System::Void(*)(MXToggleState*, ::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_SET_TOGGLESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValueWithoutEventPropagation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_SETVALUEWITHOUTEVENTPROPAGATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_CanTab(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_SET_CANTAB_OFFSET))(arg, nullptr);
		}

		::System::Void OnDragOut(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_ONDRAGOUT_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_TabIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXTOGGLE_SET_TABINDEX_OFFSET))(arg, nullptr);
		}

	};

