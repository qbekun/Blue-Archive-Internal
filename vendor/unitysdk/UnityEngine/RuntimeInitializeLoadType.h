#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RuntimeInitializeLoadType; }

namespace UnityEngine
{
	inline static constexpr unsigned int RuntimeInitializeLoadType_TypeDefinitionIndex = 31160;

	class RuntimeInitializeLoadType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::RuntimeInitializeLoadType* AfterSceneLoad; // 0x0
		::UnityEngine::RuntimeInitializeLoadType* BeforeSceneLoad; // 0x0
		::UnityEngine::RuntimeInitializeLoadType* AfterAssembliesLoaded; // 0x0
		::UnityEngine::RuntimeInitializeLoadType* BeforeSplashScreen; // 0x0
		::UnityEngine::RuntimeInitializeLoadType* SubsystemRegistration; // 0x0

	};
}

