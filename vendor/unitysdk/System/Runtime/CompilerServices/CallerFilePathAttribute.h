#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLERFILEPATHATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9227710)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CallerFilePathAttribute_TypeDefinitionIndex = 24737;

	class CallerFilePathAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLERFILEPATHATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

