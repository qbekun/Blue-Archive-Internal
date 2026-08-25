#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_AS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_GETGENERICTYPEARGUMENTFROMHIERARCHY_OFFSET UNITYSDK_OFFSET(0x9E8AD50)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_GETNICETYPENAME_OFFSET UNITYSDK_OFFSET(0x9E8B1C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_ISINT_OFFSET UNITYSDK_OFFSET(0x9E8B620)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9E8B630)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int TypeHelpers_TypeDefinitionIndex = 28962;

	class TypeHelpers : public Il2CppObject
	{
	public:
		Il2CppObject* As(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_AS_OFFSET))(arg, nullptr);
		}

		::System::Type* GetGenericTypeArgumentFromHierarchy(::System::Type* arg, ::System::Type* arg, ::System::Int32 arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::System::Type*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_GETGENERICTYPEARGUMENTFROMHIERARCHY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetNiceTypeName(::System::Type* arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_GETNICETYPENAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInt(::System::TypeCode* arg)
		{
			return (return (::System::Boolean(*)(::System::TypeCode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_ISINT_OFFSET))(arg, nullptr);
		}

		::System::Type* GetValueType(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Type*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPEHELPERS_GETVALUETYPE_OFFSET))(arg, nullptr);
		}

	};
}

