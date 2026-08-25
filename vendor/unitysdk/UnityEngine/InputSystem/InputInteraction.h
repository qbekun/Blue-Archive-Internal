#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class TypeTable; }

#define UNITYENGINE_INPUTSYSTEM_INPUTINTERACTION_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x9E40460)
#define UNITYENGINE_INPUTSYSTEM_INPUTINTERACTION_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9E40550)
#define UNITYENGINE_INPUTSYSTEM_INPUTINTERACTION_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9E40650)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputInteraction_TypeDefinitionIndex = 28377;

	class InputInteraction : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Utilities::TypeTable* s_Interactions; // 0x0

		::System::Type* GetValueType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTINTERACTION_GETVALUETYPE_OFFSET))(arg, nullptr);
		}

		::System::String* GetDisplayName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTINTERACTION_GETDISPLAYNAME_OFFSET))(str, nullptr);
		}

		::System::String* GetDisplayName(::System::Type* arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTINTERACTION_GETDISPLAYNAME_OFFSET))(arg, nullptr);
		}

	};
}

