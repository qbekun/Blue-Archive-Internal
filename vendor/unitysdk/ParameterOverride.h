#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputBinding; }
namespace UnityEngine::InputSystem::Utilities { class PrimitiveValue; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputBinding&; }

#define PARAMETEROVERRIDE_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x9E55710)
#define PARAMETEROVERRIDE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E4CD10)
#define PARAMETEROVERRIDE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E55930)
#define PARAMETEROVERRIDE_FIND_OFFSET UNITYSDK_OFFSET(0x9E4EEE0)
#define PARAMETEROVERRIDE_FIND_OFFSET UNITYSDK_OFFSET(0x9E559B0)
#define PARAMETEROVERRIDE_PICKMORESPECIFICONE_OFFSET UNITYSDK_OFFSET(0x9E55EF0)

	inline static constexpr unsigned int ParameterOverride_TypeDefinitionIndex = 28402;

	class ParameterOverride : public Il2CppObject
	{
	public:
		::System::String* objectRegistrationName; // 0x10
		::System::String* parameter; // 0x18
		::UnityEngine::InputSystem::InputBinding* bindingMask; // 0x20
		::UnityEngine::InputSystem::Utilities::PrimitiveValue* value; // 0x78

		::System::Type* get_objectType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETEROVERRIDE_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::InputSystem::InputBinding* arg, ::UnityEngine::InputSystem::Utilities::PrimitiveValue* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::InputSystem::InputBinding*, ::UnityEngine::InputSystem::Utilities::PrimitiveValue*, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETEROVERRIDE_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::UnityEngine::InputSystem::InputBinding* arg, ::UnityEngine::InputSystem::Utilities::PrimitiveValue* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::InputSystem::InputBinding*, ::UnityEngine::InputSystem::Utilities::PrimitiveValue*, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETEROVERRIDE_.CTOR_OFFSET))(str, str, arg, arg, nullptr);
		}

		Il2CppObject* Find(::UnityEngine::InputSystem::InputActionMap* arg, ::UnityEngine::InputSystem::InputBinding&* arg, ::System::String* str, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputActionMap*, ::UnityEngine::InputSystem::InputBinding&*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETEROVERRIDE_FIND_OFFSET))(arg, arg, str, str, nullptr);
		}

		Il2CppObject* Find(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::InputSystem::InputBinding&* arg, ::System::String* str, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::InputSystem::InputBinding&*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETEROVERRIDE_FIND_OFFSET))(arg, arg, arg, str, str, nullptr);
		}

		Il2CppObject* PickMoreSpecificOne(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETEROVERRIDE_PICKMORESPECIFICONE_OFFSET))(arg, arg, nullptr);
		}

	};

