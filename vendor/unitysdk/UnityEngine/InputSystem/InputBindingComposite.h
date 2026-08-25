#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class TypeTable; }
namespace UnityEngine::InputSystem { class InputBindingCompositeContext&; }

#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_CALLFINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E62150)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E6BEB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GETPARTNAMES_OFFSET UNITYSDK_OFFSET(0x9E6BEC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GET_VALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GETEXPECTEDCONTROLLAYOUTNAME_OFFSET UNITYSDK_OFFSET(0x9E6BF70)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_READVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GETDISPLAYFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x9E6C110)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9E6C220)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_READVALUEASOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9E6C230)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9E6C240)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputBindingComposite_TypeDefinitionIndex = 28435;

	class InputBindingComposite : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Utilities::TypeTable* s_Composites; // 0x0

		::System::Void CallFinishSetup(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_CALLFINISHSETUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetPartNames(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GETPARTNAMES_OFFSET))(str, nullptr);
		}

		::System::Int32 get_valueSizeInBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GET_VALUESIZEINBYTES_OFFSET))(nullptr);
		}

		::System::String* GetExpectedControlLayoutName(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GETEXPECTEDCONTROLLAYOUTNAME_OFFSET))(str, str, nullptr);
		}

		::System::Void ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_READVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetDisplayFormatString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GETDISPLAYFORMATSTRING_OFFSET))(str, nullptr);
		}

		::System::Single EvaluateMagnitude(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_EVALUATEMAGNITUDE_OFFSET))(arg, nullptr);
		}

		::System::Type* get_valueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Object* ReadValueAsObject(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_READVALUEASOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup(::UnityEngine::InputSystem::InputBindingCompositeContext&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputBindingCompositeContext&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_FINISHSETUP_OFFSET))(arg, nullptr);
		}

		::System::Type* GetValueType(::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGCOMPOSITE_GETVALUETYPE_OFFSET))(str, nullptr);
		}

	};
}

