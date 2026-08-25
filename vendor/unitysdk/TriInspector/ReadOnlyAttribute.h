#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_READONLYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF340)

namespace TriInspector
{
	inline static constexpr unsigned int ReadOnlyAttribute_TypeDefinitionIndex = 37848;

	class ReadOnlyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_READONLYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

