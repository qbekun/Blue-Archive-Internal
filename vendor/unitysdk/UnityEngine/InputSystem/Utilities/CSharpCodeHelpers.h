#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_ISEMPTYORPROPERNAMESPACENAME_OFFSET UNITYSDK_OFFSET(0x9E7E700)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_MAKEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9E7E7C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_ISEMPTYORPROPERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9E7E9D0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_ISPROPERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9E7EA00)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_MAKETYPENAME_OFFSET UNITYSDK_OFFSET(0x9E7EB00)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int CSharpCodeHelpers_TypeDefinitionIndex = 28914;

	class CSharpCodeHelpers : public Il2CppObject
	{
	public:
		::System::Boolean IsEmptyOrProperNamespaceName(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_ISEMPTYORPROPERNAMESPACENAME_OFFSET))(str, nullptr);
		}

		::System::String* MakeIdentifier(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_MAKEIDENTIFIER_OFFSET))(str, str, nullptr);
		}

		::System::Boolean IsEmptyOrProperIdentifier(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_ISEMPTYORPROPERIDENTIFIER_OFFSET))(str, nullptr);
		}

		::System::Boolean IsProperIdentifier(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_ISPROPERIDENTIFIER_OFFSET))(str, nullptr);
		}

		::System::String* MakeTypeName(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_CSHARPCODEHELPERS_MAKETYPENAME_OFFSET))(str, str, nullptr);
		}

	};
}

