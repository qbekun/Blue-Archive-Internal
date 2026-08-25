#pragma once
#include "../../unitysdk.h"

#define MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F4BF0)

namespace Microsoft::CodeAnalysis
{
	inline static constexpr unsigned int EmbeddedAttribute_TypeDefinitionIndex = 7;

	class EmbeddedAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CODEANALYSIS_EMBEDDEDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

