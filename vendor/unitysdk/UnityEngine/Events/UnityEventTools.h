#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_EVENTS_UNITYEVENTTOOLS_TIDYASSEMBLYTYPENAME_OFFSET UNITYSDK_OFFSET(0xA248980)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEventTools_TypeDefinitionIndex = 31282;

	class UnityEventTools : public Il2CppObject
	{
	public:
		::System::String* TidyAssemblyTypeName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENTTOOLS_TIDYASSEMBLYTYPENAME_OFFSET))(str, nullptr);
		}

	};
}

