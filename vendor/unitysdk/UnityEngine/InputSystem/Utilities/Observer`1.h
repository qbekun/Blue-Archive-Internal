#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVER`1_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVER`1_ONERROR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVER`1_ONNEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int Observer`1_TypeDefinitionIndex = 28940;

	class Observer`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_OnNext; // 0x0
		::System::Action* m_OnCompleted; // 0x0

		::System::Void OnCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVER`1_ONCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void OnError(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVER`1_ONERROR_OFFSET))(arg, nullptr);
		}

		::System::Void OnNext(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVER`1_ONNEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Action* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_OBSERVER`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

