#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_HIDELABELATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCEF00)

namespace TriInspector
{
	inline static constexpr unsigned int HideLabelAttribute_TypeDefinitionIndex = 37834;

	class HideLabelAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_HIDELABELATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

