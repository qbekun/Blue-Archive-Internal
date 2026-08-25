#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_DRAWWITHTRIINSPECTORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE930)

namespace TriInspector
{
	inline static constexpr unsigned int DrawWithTriInspectorAttribute_TypeDefinitionIndex = 37820;

	class DrawWithTriInspectorAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DRAWWITHTRIINSPECTORATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

