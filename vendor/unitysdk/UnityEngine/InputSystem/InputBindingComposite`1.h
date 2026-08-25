#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputBindingCompositeContext&; }

#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE`1_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE`1_GET_VALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE`1_READVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE`1_READVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE`1_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputBindingComposite`1_TypeDefinitionIndex = 28436;

	class InputBindingComposite`1 : public Il2CppObject
	{
	public:
		::System::Type* get_valueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE`1_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_valueSizeInBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE`1_GET_VALUESIZEINBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE`1_READVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE`1_READVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ReadValueAsObject(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE`1_READVALUEASOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

