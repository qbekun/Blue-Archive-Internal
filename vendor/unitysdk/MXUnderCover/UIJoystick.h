#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace MXUnderCover { class PlayerInputAsset; }
class Type;
class UIBase;
namespace UnityEngine { class KeyCode; }
namespace UnityEngine { class Vector2; }

#define MXUNDERCOVER_UIJOYSTICK_AWAKE_OFFSET UNITYSDK_OFFSET(0xDCB7A0)
#define MXUNDERCOVER_UIJOYSTICK_UPDATE_OFFSET UNITYSDK_OFFSET(0xDCB7F0)
#define MXUNDERCOVER_UIJOYSTICK_ONPRESS_OFFSET UNITYSDK_OFFSET(0xDCBD10)
#define MXUNDERCOVER_UIJOYSTICK_.CTOR_OFFSET UNITYSDK_OFFSET(0xDCBED0)
#define MXUNDERCOVER_UIJOYSTICK_START_OFFSET UNITYSDK_OFFSET(0xDCBEE0)
#define MXUNDERCOVER_UIJOYSTICK_SET_ISQUICKSLOTOPENED_OFFSET UNITYSDK_OFFSET(0xDCBF50)
#define MXUNDERCOVER_UIJOYSTICK_GET_ISQUICKSLOTOPENED_OFFSET UNITYSDK_OFFSET(0xDCBF60)
#define MXUNDERCOVER_UIJOYSTICK_CLEAR_OFFSET UNITYSDK_OFFSET(0xDCBA90)
#define MXUNDERCOVER_UIJOYSTICK_ONDRAG_OFFSET UNITYSDK_OFFSET(0xDCBFE0)
#define MXUNDERCOVER_UIJOYSTICK_CANINPUT_OFFSET UNITYSDK_OFFSET(0xDCB9A0)
#define MXUNDERCOVER_UIJOYSTICK_PROCESSKEYBOARD_OFFSET UNITYSDK_OFFSET(0xDCBB50)
#define MXUNDERCOVER_UIJOYSTICK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDCC550)
#define MXUNDERCOVER_UIJOYSTICK_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xDCC560)
#define MXUNDERCOVER_UIJOYSTICK_SETINPUT_OFFSET UNITYSDK_OFFSET(0xDCBF70)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIJoystick_TypeDefinitionIndex = 10046;

	class UIJoystick : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* body; // 0x18
		::UnityEngine::Transform* direction; // 0x20
		::System::Single deadZoneDistance; // 0x28
		::System::Single maxEngageDistance; // 0x2C
		::MXUnderCover::PlayerInputAsset* inputAsset; // 0x30
		Type* inputType; // 0x38
		::System::Boolean _IsQuickSlotOpened_k__BackingField; // 0x3C
		UIBase* parentUI; // 0x40
		::System::Boolean processingInput; // 0x48
		::System::Int32 processingTouchId; // 0x4C
		::UnityEngine::KeyCode* lastHorizontalKey; // 0x50
		::UnityEngine::KeyCode* lastVerticalKey; // 0x54

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIJOYSTICK_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIJOYSTICK_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIJOYSTICK_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIJOYSTICK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIJOYSTICK_START_OFFSET))(nullptr);
		}

		::System::Void set_IsQuickSlotOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIJOYSTICK_SET_ISQUICKSLOTOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsQuickSlotOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIJOYSTICK_GET_ISQUICKSLOTOPENED_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIJOYSTICK_CLEAR_OFFSET))(nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIJOYSTICK_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIJOYSTICK_CANINPUT_OFFSET))(nullptr);
		}

		::System::Void ProcessKeyboard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIJOYSTICK_PROCESSKEYBOARD_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIJOYSTICK_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIJOYSTICK_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetInput(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIJOYSTICK_SETINPUT_OFFSET))(arg, nullptr);
		}

	};
}

