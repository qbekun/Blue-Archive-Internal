#pragma once
#include "unitysdk.h"

class CGOrientation;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace MX::GameLogic::DBModel { class EventContentCollectionDB; }

#define UIEVENTCOLLECTIONCGOBJECT_SET_ISUNLOCKANIMATIONSEEN_OFFSET UNITYSDK_OFFSET(0x24A3940)
#define UIEVENTCOLLECTIONCGOBJECT_CO_PLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x24A3950)
#define UIEVENTCOLLECTIONCGOBJECT_REMOVE_FOCUSED_OFFSET UNITYSDK_OFFSET(0x24A39E0)
#define UIEVENTCOLLECTIONCGOBJECT_ONCLICKFOCUSBUTTON_OFFSET UNITYSDK_OFFSET(0x24A3A80)
#define UIEVENTCOLLECTIONCGOBJECT_SETUI_OFFSET UNITYSDK_OFFSET(0x24A0420)
#define UIEVENTCOLLECTIONCGOBJECT_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x24A3AB0)
#define UIEVENTCOLLECTIONCGOBJECT_CO_PLAYINOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x24A31C0)
#define UIEVENTCOLLECTIONCGOBJECT_GETRESETEDANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x24A3AE0)
#define UIEVENTCOLLECTIONCGOBJECT_ADD_FOCUSED_OFFSET UNITYSDK_OFFSET(0x24A07B0)
#define UIEVENTCOLLECTIONCGOBJECT__SETDATA_B__27_0_OFFSET UNITYSDK_OFFSET(0x24A3BE0)
#define UIEVENTCOLLECTIONCGOBJECT_SETDATA_OFFSET UNITYSDK_OFFSET(0x24A3C00)
#define UIEVENTCOLLECTIONCGOBJECT_GET_ISOPENED_OFFSET UNITYSDK_OFFSET(0x24A3E40)
#define UIEVENTCOLLECTIONCGOBJECT_GET_ISUNLOCKANIMATIONSEEN_OFFSET UNITYSDK_OFFSET(0x24A3E50)
#define UIEVENTCOLLECTIONCGOBJECT_SET_ISOPENED_OFFSET UNITYSDK_OFFSET(0x24A3E60)
#define UIEVENTCOLLECTIONCGOBJECT_PLAYUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x24A1220)
#define UIEVENTCOLLECTIONCGOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x24A3E70)
#define UIEVENTCOLLECTIONCGOBJECT_GET_ORIENTATION_OFFSET UNITYSDK_OFFSET(0x24A40F0)
#define UIEVENTCOLLECTIONCGOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A4100)

	inline static constexpr unsigned int UIEventCollectionCGObject_TypeDefinitionIndex = 5795;

	class UIEventCollectionCGObject : public Il2CppObject
	{
	public:
		::System::Int64 uniqueId; // 0x18
		CGOrientation* orientation; // 0x20
		::UnityEngine::GameObject* thumbnailRoot; // 0x28
		MXButton* focusButton; // 0x30
		::Il2CppArray<::System::Object*>* animatedWidgets; // 0x38
		::UnityEngine::Animation* cgAnimation; // 0x40
		::System::Int32 inOutAnimationIndex; // 0x48
		::System::Int32 unlockAnimationIndex; // 0x4C
		::Il2CppArray<::System::Object*>* animationClipNames; // 0x50
		::System::Int64 eventContentId; // 0x58
		Il2CppObject* Focused; // 0x60
		::System::Boolean _IsOpened_k__BackingField; // 0x68
		::System::Boolean _IsUnlockAnimationSeen_k__BackingField; // 0x69

		::System::Void set_IsUnlockAnimationSeen(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_SET_ISUNLOCKANIMATIONSEEN_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayUnlockAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_CO_PLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void remove_Focused(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_REMOVE_FOCUSED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickFocusButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_ONCLICKFOCUSBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_SETUI_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayInOutAnimation(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_CO_PLAYINOUTANIMATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationState* GetResetedAnimationState(::System::Int32 arg)
		{
			return ((::UnityEngine::AnimationState*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_GETRESETEDANIMATIONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void add_Focused(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_ADD_FOCUSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetData_b__27_0(::MX::GameLogic::DBModel::EventContentCollectionDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EventContentCollectionDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT__SETDATA_B__27_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_GET_ISOPENED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUnlockAnimationSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_GET_ISUNLOCKANIMATIONSEEN_OFFSET))(nullptr);
		}

		::System::Void set_IsOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_SET_ISOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void PlayUnlockAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_PLAYUNLOCKANIMATION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_AWAKE_OFFSET))(nullptr);
		}

		CGOrientation* get_Orientation()
		{
			return ((CGOrientation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_GET_ORIENTATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCOLLECTIONCGOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};

