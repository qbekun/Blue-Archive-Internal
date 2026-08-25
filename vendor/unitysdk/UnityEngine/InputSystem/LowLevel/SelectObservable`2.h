#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SELECTOBSERVABLE`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SELECTOBSERVABLE`2_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int SelectObservable`2_TypeDefinitionIndex = 28830;

	class SelectObservable`2 : public Il2CppObject
	{
	public:
		Il2CppObject* m_Source; // 0x0
		Il2CppObject* m_Filter; // 0x0

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SELECTOBSERVABLE`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IDisposable* Subscribe(Il2CppObject* arg)
		{
			return (return (::System::IDisposable*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_SELECTOBSERVABLE`2_SUBSCRIBE_OFFSET))(arg, nullptr);
		}

	};
}

