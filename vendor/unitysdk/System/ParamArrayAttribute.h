#pragma once
#include "../unitysdk.h"

#define SYSTEM_PARAMARRAYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x936EB80)

namespace System
{
	inline static constexpr unsigned int ParamArrayAttribute_TypeDefinitionIndex = 23816;

	class ParamArrayAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMARRAYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

