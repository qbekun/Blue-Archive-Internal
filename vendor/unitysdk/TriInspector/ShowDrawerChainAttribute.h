#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_SHOWDRAWERCHAINATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF3E0)

namespace TriInspector
{
	inline static constexpr unsigned int ShowDrawerChainAttribute_TypeDefinitionIndex = 37852;

	class ShowDrawerChainAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_SHOWDRAWERCHAINATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

