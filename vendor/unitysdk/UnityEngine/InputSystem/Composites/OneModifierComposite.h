#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputBindingCompositeContext&; }

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_READVALUE_OFFSET UNITYSDK_OFFSET(0x9E8C520)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_GET_VALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9E8C640)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x9E8C650)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_DETERMINEVALUETYPEANDSIZE_OFFSET UNITYSDK_OFFSET(0x9E8C660)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E8CB70)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E8CB80)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_MODIFIERISPRESSED_OFFSET UNITYSDK_OFFSET(0x9E8C5D0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x9E8CC10)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E8CC50)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int OneModifierComposite_TypeDefinitionIndex = 28969;

	class OneModifierComposite : public Il2CppObject
	{
	public:
		::System::Int32 modifier; // 0x10
		::System::Int32 binding; // 0x14
		::System::Boolean overrideModifiersNeedToBePressedFirst; // 0x18
		::System::Int32 m_ValueSizeInBytes; // 0x1C
		::System::Type* m_ValueType; // 0x20
		::System::Boolean m_BindingIsButton; // 0x28

		::System::Void ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_READVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_valueSizeInBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_GET_VALUESIZEINBYTES_OFFSET))(nullptr);
		}

		::System::Type* get_valueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Void DetermineValueTypeAndSize(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg, ::System::Int32 arg, ::System::Type&* arg, int32_t&* arg, bool&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::System::Int32, ::System::Type&*, int32_t&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_DETERMINEVALUETYPEANDSIZE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FinishSetup(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_FINISHSETUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean ModifierIsPressed(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_MODIFIERISPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Object* ReadValueAsObject(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_READVALUEASOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Single EvaluateMagnitude(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_ONEMODIFIERCOMPOSITE_EVALUATEMAGNITUDE_OFFSET))(arg, nullptr);
		}

	};
}

