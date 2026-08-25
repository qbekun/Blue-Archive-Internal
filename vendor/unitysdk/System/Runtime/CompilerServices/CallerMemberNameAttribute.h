#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLERMEMBERNAMEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9227720)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CallerMemberNameAttribute_TypeDefinitionIndex = 24738;

	class CallerMemberNameAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLERMEMBERNAMEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

