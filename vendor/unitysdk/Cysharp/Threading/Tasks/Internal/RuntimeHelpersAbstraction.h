#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_RUNTIMEHELPERSABSTRACTION_ISWELLKNOWNNOREFERENCECONTAINSTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_RUNTIMEHELPERSABSTRACTION_WELLKNOWNNOREFERENCECONTAINSTYPEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x9DF3080)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int RuntimeHelpersAbstraction_TypeDefinitionIndex = 36134;

	class RuntimeHelpersAbstraction : public Il2CppObject
	{
	public:
		::System::Boolean IsWellKnownNoReferenceContainsType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_RUNTIMEHELPERSABSTRACTION_ISWELLKNOWNNOREFERENCECONTAINSTYPE_OFFSET))(nullptr);
		}

		::System::Boolean WellKnownNoReferenceContainsTypeInitialize(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_RUNTIMEHELPERSABSTRACTION_WELLKNOWNNOREFERENCECONTAINSTYPEINITIALIZE_OFFSET))(arg, nullptr);
		}

	};
}

