#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_SHOWININSPECTORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF4E0)

namespace TriInspector
{
	inline static constexpr unsigned int ShowInInspectorAttribute_TypeDefinitionIndex = 37855;

	class ShowInInspectorAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_SHOWININSPECTORATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

