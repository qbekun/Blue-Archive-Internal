#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }
namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UIUCMainButtonController; }
namespace MXUnderCover { class UCButtonStateFlags; }
class IMessage;

#define MXUNDERCOVER_UIUCHUDBUTTON_GET_ISDRAGOVER_OFFSET UNITYSDK_OFFSET(0xDBFE50)
#define MXUNDERCOVER_UIUCHUDBUTTON_GET_PROCESSINGTOUCHID_OFFSET UNITYSDK_OFFSET(0xDBFE70)
#define MXUNDERCOVER_UIUCHUDBUTTON_ONDRAGOVER_OFFSET UNITYSDK_OFFSET(0xDBFE80)
#define MXUNDERCOVER_UIUCHUDBUTTON_ONDRAGSTART_OFFSET UNITYSDK_OFFSET(0xDBFE90)
#define MXUNDERCOVER_UIUCHUDBUTTON_RESETFLAG_OFFSET UNITYSDK_OFFSET(0xDBFEB0)
#define MXUNDERCOVER_UIUCHUDBUTTON_ONPRESSEND_OFFSET UNITYSDK_OFFSET(0xDBFEC0)
#define MXUNDERCOVER_UIUCHUDBUTTON_PROCESSPRESSANIM_OFFSET UNITYSDK_OFFSET(0xDBFF60)
#define MXUNDERCOVER_UIUCHUDBUTTON_SET_PROCESSINGTOUCHID_OFFSET UNITYSDK_OFFSET(0xDC0190)
#define MXUNDERCOVER_UIUCHUDBUTTON_RESETPRESS_OFFSET UNITYSDK_OFFSET(0xDC01A0)
#define MXUNDERCOVER_UIUCHUDBUTTON_ONDRAGOUTINTERNAL_OFFSET UNITYSDK_OFFSET(0xDC01D0)
#define MXUNDERCOVER_UIUCHUDBUTTON_GET_ISDRAGED_OFFSET UNITYSDK_OFFSET(0xDBFE60)
#define MXUNDERCOVER_UIUCHUDBUTTON_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0xDBFF50)
#define MXUNDERCOVER_UIUCHUDBUTTON_HANDLERESETMESSAGE_OFFSET UNITYSDK_OFFSET(0xDC01E0)
#define MXUNDERCOVER_UIUCHUDBUTTON_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDC0200)
#define MXUNDERCOVER_UIUCHUDBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0xDC0290)
#define MXUNDERCOVER_UIUCHUDBUTTON_ONPRESSINTERNAL_OFFSET UNITYSDK_OFFSET(0xDC03B0)
#define MXUNDERCOVER_UIUCHUDBUTTON_INIT_OFFSET UNITYSDK_OFFSET(0xDC03C0)
#define MXUNDERCOVER_UIUCHUDBUTTON_ONDESTROYINTERNAL_OFFSET UNITYSDK_OFFSET(0xDC0490)
#define MXUNDERCOVER_UIUCHUDBUTTON_SET_MAINBUTTONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xDC0540)
#define MXUNDERCOVER_UIUCHUDBUTTON_GET_ISDRAGOUT_OFFSET UNITYSDK_OFFSET(0xDC0550)
#define MXUNDERCOVER_UIUCHUDBUTTON_GET_MAINBUTTONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xDC0560)
#define MXUNDERCOVER_UIUCHUDBUTTON_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC0570)
#define MXUNDERCOVER_UIUCHUDBUTTON_ONDRAGOUT_OFFSET UNITYSDK_OFFSET(0xDC0620)
#define MXUNDERCOVER_UIUCHUDBUTTON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDC06B0)
#define MXUNDERCOVER_UIUCHUDBUTTON_ONPRESSSTART_OFFSET UNITYSDK_OFFSET(0xDC06D0)
#define MXUNDERCOVER_UIUCHUDBUTTON_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xDC06E0)
#define MXUNDERCOVER_UIUCHUDBUTTON_ONPRESS_OFFSET UNITYSDK_OFFSET(0xDC06F0)
#define MXUNDERCOVER_UIUCHUDBUTTON_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xDC0900)
#define MXUNDERCOVER_UIUCHUDBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xDC0910)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUCHUDButton_TypeDefinitionIndex = 10015;

	class UIUCHUDButton : public Il2CppObject
	{
	public:
		::System::Boolean PlaySound; // 0x18
		::System::String* SoundUniqueId; // 0x20
		Il2CppObject* onClick; // 0x28
		::UnityEngine::AnimationClip* pressClip; // 0x30
		::UnityEngine::Animation* anim; // 0x38
		::UnityEngine::Coroutine* downAnimCoroutine; // 0x40
		::UnityEngine::Coroutine* upAnimCoroutine; // 0x48
		::MXUnderCover::UCStage* _Stage_k__BackingField; // 0x50
		::MXUnderCover::UIUCMainButtonController* _MainButtonController_k__BackingField; // 0x58
		::System::Int32 _ProcessingTouchId_k__BackingField; // 0x60
		::MXUnderCover::UCButtonStateFlags* inputFlag; // 0x64
		::System::Boolean isPressReset; // 0x68

		::System::Boolean get_IsDragOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_GET_ISDRAGOVER_OFFSET))(nullptr);
		}

		::System::Int32 get_ProcessingTouchId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_GET_PROCESSINGTOUCHID_OFFSET))(nullptr);
		}

		::System::Void OnDragOver()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_ONDRAGOVER_OFFSET))(nullptr);
		}

		::System::Void OnDragStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_ONDRAGSTART_OFFSET))(nullptr);
		}

		::System::Void ResetFlag()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_RESETFLAG_OFFSET))(nullptr);
		}

		::System::Void OnPressEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_ONPRESSEND_OFFSET))(nullptr);
		}

		::System::Void ProcessPressAnim(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_PROCESSPRESSANIM_OFFSET))(arg, nullptr);
		}

		::System::Void set_ProcessingTouchId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_SET_PROCESSINGTOUCHID_OFFSET))(arg, nullptr);
		}

		::System::Void ResetPress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_RESETPRESS_OFFSET))(nullptr);
		}

		::System::Void OnDragOutInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_ONDRAGOUTINTERNAL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDraged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_GET_ISDRAGED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_GET_ISPRESSED_OFFSET))(nullptr);
		}

		::System::Void HandleResetMessage(IMessage* arg)
		{
			((::System::Void(*)(IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_HANDLERESETMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnPressInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_ONPRESSINTERNAL_OFFSET))(nullptr);
		}

		::System::Void Init(::MXUnderCover::UIUCMainButtonController* arg)
		{
			((::System::Void(*)(::MXUnderCover::UIUCMainButtonController*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroyInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_ONDESTROYINTERNAL_OFFSET))(nullptr);
		}

		::System::Void set_MainButtonController(::MXUnderCover::UIUCMainButtonController* arg)
		{
			((::System::Void(*)(::MXUnderCover::UIUCMainButtonController*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_SET_MAINBUTTONCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDragOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_GET_ISDRAGOUT_OFFSET))(nullptr);
		}

		::MXUnderCover::UIUCMainButtonController* get_MainButtonController()
		{
			return ((::MXUnderCover::UIUCMainButtonController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_GET_MAINBUTTONCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDragOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_ONDRAGOUT_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnPressStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_ONPRESSSTART_OFFSET))(nullptr);
		}

		::System::Void set_Stage(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_SET_STAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_ONPRESS_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::UCStage* get_Stage()
		{
			return ((::MXUnderCover::UCStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_GET_STAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCHUDBUTTON_.CTOR_OFFSET))(nullptr);
		}

	};
}

