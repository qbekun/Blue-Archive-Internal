#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputBindingCompositeContext&; }

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_MODIFIERSAREPRESSED_OFFSET UNITYSDK_OFFSET(0x9E8CCE0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x9E8CD90)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_GET_VALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9E8CDA0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E8CDB0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x9E8CDF0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_READVALUE_OFFSET UNITYSDK_OFFSET(0x9E8CE40)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E8CEA0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E8CF30)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int TwoModifiersComposite_TypeDefinitionIndex = 28970;

	class TwoModifiersComposite : public Il2CppObject
	{
	public:
		::System::Int32 modifier1; // 0x10
		::System::Int32 modifier2; // 0x14
		::System::Int32 binding; // 0x18
		::System::Boolean overrideModifiersNeedToBePressedFirst; // 0x1C
		::System::Int32 m_ValueSizeInBytes; // 0x20
		::System::Type* m_ValueType; // 0x28
		::System::Boolean m_BindingIsButton; // 0x30

		::System::Boolean ModifiersArePressed(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_MODIFIERSAREPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Type* get_valueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_valueSizeInBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_GET_VALUESIZEINBYTES_OFFSET))(nullptr);
		}

		::System::Single EvaluateMagnitude(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_EVALUATEMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::System::Object* ReadValueAsObject(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_READVALUEASOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_READVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FinishSetup(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_FINISHSETUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_TWOMODIFIERSCOMPOSITE_.CTOR_OFFSET))(nullptr);
		}

	};
}

