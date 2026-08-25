#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_INTERNAL_EXCLUDEFROMDOCSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2501A0)

namespace UnityEngine::Internal
{
	inline static constexpr unsigned int ExcludeFromDocsAttribute_TypeDefinitionIndex = 31477;

	class ExcludeFromDocsAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_EXCLUDEFROMDOCSATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

