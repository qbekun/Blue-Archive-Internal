#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_HIDEMONOSCRIPTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCEF10)

namespace TriInspector
{
	inline static constexpr unsigned int HideMonoScriptAttribute_TypeDefinitionIndex = 37835;

	class HideMonoScriptAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_HIDEMONOSCRIPTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

