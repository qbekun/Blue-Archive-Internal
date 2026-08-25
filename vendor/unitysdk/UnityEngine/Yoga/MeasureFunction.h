#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Yoga { class YogaSize; }
namespace UnityEngine::Yoga { class YogaNode; }
namespace UnityEngine::Yoga { class YogaMeasureMode; }

#define UNITYENGINE_YOGA_MEASUREFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA44C1D0)
#define UNITYENGINE_YOGA_MEASUREFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xA44C2E0)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int MeasureFunction_TypeDefinitionIndex = 37345;

	class MeasureFunction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_MEASUREFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Yoga::YogaSize* Invoke(::UnityEngine::Yoga::YogaNode* arg, ::System::Single arg, ::UnityEngine::Yoga::YogaMeasureMode* arg, ::System::Single arg, ::UnityEngine::Yoga::YogaMeasureMode* arg)
		{
			return (return (::UnityEngine::Yoga::YogaSize*(*)(::UnityEngine::Yoga::YogaNode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode*, ::System::Single, ::UnityEngine::Yoga::YogaMeasureMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_MEASUREFUNCTION_INVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

