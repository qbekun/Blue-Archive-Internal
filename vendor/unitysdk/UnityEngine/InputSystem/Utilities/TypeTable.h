#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class InternedString; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_LOOKUPTYPEREGISTRATION_OFFSET UNITYSDK_OFFSET(0x9E8B7E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_FINDNAMEFORTYPE_OFFSET UNITYSDK_OFFSET(0x9E8B8F0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_GET_INTERNEDNAMES_OFFSET UNITYSDK_OFFSET(0x9E8BB60)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9E8BBB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_ADDTYPEREGISTRATION_OFFSET UNITYSDK_OFFSET(0x9E8BC20)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x9E8BD80)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int TypeTable_TypeDefinitionIndex = 28964;

	class TypeTable : public Il2CppObject
	{
	public:
		Il2CppObject* table; // 0x10

		::System::Type* LookupTypeRegistration(::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_LOOKUPTYPEREGISTRATION_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::InternedString* FindNameForType(::System::Type* arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::InternedString*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_FINDNAMEFORTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_internedNames()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_GET_INTERNEDNAMES_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void AddTypeRegistration(::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_ADDTYPEREGISTRATION_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* get_names()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE_GET_NAMES_OFFSET))(nullptr);
		}

	};
}

