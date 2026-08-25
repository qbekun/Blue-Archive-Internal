#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9227F80)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsByRefLikeAttribute_TypeDefinitionIndex = 24756;

	class IsByRefLikeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISBYREFLIKEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

