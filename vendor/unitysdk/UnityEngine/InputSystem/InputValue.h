#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_INPUTVALUE_GET_OFFSET UNITYSDK_OFFSET(0x9F16FF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTVALUE_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTVALUE_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x9F17050)
#define UNITYENGINE_INPUTSYSTEM_INPUTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F170B0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputValue_TypeDefinitionIndex = 28558;

	class InputValue : public Il2CppObject
	{
	public:
		Il2CppObject* m_Context; // 0x10

		::System::Object* Get()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTVALUE_GET_OFFSET))(nullptr);
		}

		Il2CppObject* Get()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTVALUE_GET_OFFSET))(nullptr);
		}

		::System::Boolean get_isPressed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTVALUE_GET_ISPRESSED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTVALUE_.CTOR_OFFSET))(nullptr);
		}

	};
}

