#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define MXFIELD_CORE_FIELDMATH_MOSTLYCLOSETO_OFFSET UNITYSDK_OFFSET(0xED7290)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldMath_TypeDefinitionIndex = 10951;

	class FieldMath : public Il2CppObject
	{
	public:
		::System::Boolean MostlyCloseTo(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2, ::System::Single arg3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDMATH_MOSTLYCLOSETO_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

