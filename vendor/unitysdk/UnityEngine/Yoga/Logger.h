#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Yoga { class YogaConfig; }
namespace UnityEngine::Yoga { class YogaNode; }
namespace UnityEngine::Yoga { class YogaLogLevel; }

#define UNITYENGINE_YOGA_LOGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA44C090)
#define UNITYENGINE_YOGA_LOGGER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA44C1A0)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int Logger_TypeDefinitionIndex = 37344;

	class Logger : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_LOGGER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Yoga::YogaConfig* arg, ::UnityEngine::Yoga::YogaNode* arg, ::UnityEngine::Yoga::YogaLogLevel* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Yoga::YogaConfig*, ::UnityEngine::Yoga::YogaNode*, ::UnityEngine::Yoga::YogaLogLevel*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_LOGGER_INVOKE_OFFSET))(arg, arg, arg, str, nullptr);
		}

	};
}

