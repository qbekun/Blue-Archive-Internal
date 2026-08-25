#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Yoga { class YogaNode; }

#define UNITYENGINE_YOGA_BASELINEFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA44BF60)
#define UNITYENGINE_YOGA_BASELINEFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xA44C070)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int BaselineFunction_TypeDefinitionIndex = 37343;

	class BaselineFunction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_BASELINEFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Invoke(::UnityEngine::Yoga::YogaNode* arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_BASELINEFUNCTION_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

