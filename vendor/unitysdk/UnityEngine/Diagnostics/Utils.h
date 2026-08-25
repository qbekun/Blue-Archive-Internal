#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Diagnostics { class ForcedCrashCategory; }

#define UNITYENGINE_DIAGNOSTICS_UTILS_FORCECRASH_OFFSET UNITYSDK_OFFSET(0xA26DE90)

namespace UnityEngine::Diagnostics
{
	inline static constexpr unsigned int Utils_TypeDefinitionIndex = 31624;

	class Utils : public Il2CppObject
	{
	public:
		::System::Void ForceCrash(::UnityEngine::Diagnostics::ForcedCrashCategory* arg)
		{
			((::System::Void(*)(::UnityEngine::Diagnostics::ForcedCrashCategory*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DIAGNOSTICS_UTILS_FORCECRASH_OFFSET))(arg, nullptr);
		}

	};
}

