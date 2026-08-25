#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Diagnostics { class ForcedCrashCategory; }

namespace UnityEngine::Diagnostics
{
	inline static constexpr unsigned int ForcedCrashCategory_TypeDefinitionIndex = 31623;

	class ForcedCrashCategory : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Diagnostics::ForcedCrashCategory* AccessViolation; // 0x0
		::UnityEngine::Diagnostics::ForcedCrashCategory* FatalError; // 0x0
		::UnityEngine::Diagnostics::ForcedCrashCategory* Abort; // 0x0
		::UnityEngine::Diagnostics::ForcedCrashCategory* PureVirtualFunction; // 0x0
		::UnityEngine::Diagnostics::ForcedCrashCategory* MonoAbort; // 0x0

	};
}

