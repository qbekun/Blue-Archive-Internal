#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputAction; }

#define UNITYENGINE_RENDERING_FREECAMERA_UPDATEINPUTS_OFFSET UNITYSDK_OFFSET(0x9FA5E40)
#define UNITYENGINE_RENDERING_FREECAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9FA6110)
#define UNITYENGINE_RENDERING_FREECAMERA_REGISTERINPUTS_OFFSET UNITYSDK_OFFSET(0x9FA6120)
#define UNITYENGINE_RENDERING_FREECAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0x9FA6970)
#define UNITYENGINE_RENDERING_FREECAMERA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FA6FC0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FreeCamera_TypeDefinitionIndex = 33882;

	class FreeCamera : public Il2CppObject
	{
	public:
		::System::Single k_MouseSensitivityMultiplier; // 0x0
		::System::Single m_LookSpeedController; // 0x18
		::System::Single m_LookSpeedMouse; // 0x1C
		::System::Single m_MoveSpeed; // 0x20
		::System::Single m_MoveSpeedIncrement; // 0x24
		::System::Single m_Turbo; // 0x28
		::UnityEngine::InputSystem::InputAction* lookAction; // 0x30
		::UnityEngine::InputSystem::InputAction* moveAction; // 0x38
		::UnityEngine::InputSystem::InputAction* speedAction; // 0x40
		::UnityEngine::InputSystem::InputAction* yMoveAction; // 0x48
		::System::Single inputRotateAxisX; // 0x50
		::System::Single inputRotateAxisY; // 0x54
		::System::Single inputChangeSpeed; // 0x58
		::System::Single inputVertical; // 0x5C
		::System::Single inputHorizontal; // 0x60
		::System::Single inputYAxis; // 0x64
		::System::Boolean leftShiftBoost; // 0x68
		::System::Boolean leftShift; // 0x69
		::System::Boolean fire1; // 0x6A

		::System::Void UpdateInputs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FREECAMERA_UPDATEINPUTS_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FREECAMERA_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void RegisterInputs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FREECAMERA_REGISTERINPUTS_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FREECAMERA_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FREECAMERA_.CTOR_OFFSET))(nullptr);
		}

	};
}

