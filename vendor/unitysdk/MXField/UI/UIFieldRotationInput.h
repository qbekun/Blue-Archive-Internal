#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Touch; }

#define MXFIELD_UI_UIFIELDROTATIONINPUT_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xEA6350)
#define MXFIELD_UI_UIFIELDROTATIONINPUT_SET_SPEED_OFFSET UNITYSDK_OFFSET(0xEA6360)
#define MXFIELD_UI_UIFIELDROTATIONINPUT_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xEA6370)
#define MXFIELD_UI_UIFIELDROTATIONINPUT_SET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xEA6380)
#define MXFIELD_UI_UIFIELDROTATIONINPUT_GET_DELTA_OFFSET UNITYSDK_OFFSET(0xEA6390)
#define MXFIELD_UI_UIFIELDROTATIONINPUT_SET_DELTA_OFFSET UNITYSDK_OFFSET(0xEA63A0)
#define MXFIELD_UI_UIFIELDROTATIONINPUT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0xEA61B0)
#define MXFIELD_UI_UIFIELDROTATIONINPUT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0xEA6240)
#define MXFIELD_UI_UIFIELDROTATIONINPUT_PROCESSINPUT_OFFSET UNITYSDK_OFFSET(0xEA6120)
#define MXFIELD_UI_UIFIELDROTATIONINPUT_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0xEA4D60)
#define MXFIELD_UI_UIFIELDROTATIONINPUT_ISMYTOUCH_OFFSET UNITYSDK_OFFSET(0xEA6060)
#define MXFIELD_UI_UIFIELDROTATIONINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA63B0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldRotationInput_TypeDefinitionIndex = 10752;

	class UIFieldRotationInput : public Il2CppObject
	{
	public:
		::System::Single _Speed_k__BackingField; // 0x18
		::System::Boolean _IsActivated_k__BackingField; // 0x1C
		::UnityEngine::Vector3* lastPosition; // 0x20
		::UnityEngine::Vector2* _Delta_k__BackingField; // 0x2C
		::System::Int32 touchId; // 0x34

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDROTATIONINPUT_GET_SPEED_OFFSET))(nullptr);
		}

		::System::Void set_Speed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDROTATIONINPUT_SET_SPEED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDROTATIONINPUT_GET_ISACTIVATED_OFFSET))(nullptr);
		}

		::System::Void set_IsActivated(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDROTATIONINPUT_SET_ISACTIVATED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Delta()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDROTATIONINPUT_GET_DELTA_OFFSET))(nullptr);
		}

		::System::Void set_Delta(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDROTATIONINPUT_SET_DELTA_OFFSET))(arg, nullptr);
		}

		::System::Void Activate(::UnityEngine::Touch* arg)
		{
			((::System::Void(*)(::UnityEngine::Touch*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDROTATIONINPUT_ACTIVATE_OFFSET))(arg, nullptr);
		}

		::System::Void Activate(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDROTATIONINPUT_ACTIVATE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessInput(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDROTATIONINPUT_PROCESSINPUT_OFFSET))(arg, nullptr);
		}

		::System::Void Deactivate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDROTATIONINPUT_DEACTIVATE_OFFSET))(nullptr);
		}

		::System::Boolean IsMyTouch(::UnityEngine::Touch* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::Touch*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDROTATIONINPUT_ISMYTOUCH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDROTATIONINPUT_.CTOR_OFFSET))(nullptr);
		}

	};
}

