#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MXFIELD_INPUTCONTROL_TOUCHFIELD_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xEC3530)
#define MXFIELD_INPUTCONTROL_TOUCHFIELD_START_OFFSET UNITYSDK_OFFSET(0xEC3540)
#define MXFIELD_INPUTCONTROL_TOUCHFIELD_UPDATE_OFFSET UNITYSDK_OFFSET(0xEC3550)
#define MXFIELD_INPUTCONTROL_TOUCHFIELD_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xEC3660)
#define MXFIELD_INPUTCONTROL_TOUCHFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC3690)

namespace MXField::InputControl
{
	inline static constexpr unsigned int TouchField_TypeDefinitionIndex = 10860;

	class TouchField : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* TouchDist; // 0x18
		::UnityEngine::Vector2* PointerOld; // 0x20
		::System::Int32 PointerId; // 0x28
		::System::Boolean Pressed; // 0x2C

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_INPUTCONTROL_TOUCHFIELD_ONPOINTERUP_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_INPUTCONTROL_TOUCHFIELD_START_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_INPUTCONTROL_TOUCHFIELD_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_INPUTCONTROL_TOUCHFIELD_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_INPUTCONTROL_TOUCHFIELD_.CTOR_OFFSET))(nullptr);
		}

	};
}

