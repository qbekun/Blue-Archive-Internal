#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_YOGA_YOGACONSTANTS_ISUNDEFINED_OFFSET UNITYSDK_OFFSET(0xA44C910)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int YogaConstants_TypeDefinitionIndex = 37349;

	class YogaConstants : public Il2CppObject
	{
	public:
		::System::Boolean IsUndefined(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONSTANTS_ISUNDEFINED_OFFSET))(arg, nullptr);
		}

	};
}

