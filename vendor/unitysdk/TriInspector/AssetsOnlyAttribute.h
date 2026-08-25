#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_ASSETSONLYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE2C0)

namespace TriInspector
{
	inline static constexpr unsigned int AssetsOnlyAttribute_TypeDefinitionIndex = 37807;

	class AssetsOnlyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_ASSETSONLYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

