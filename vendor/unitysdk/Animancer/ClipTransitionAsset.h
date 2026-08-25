#pragma once
#include "../unitysdk.h"

#define ANIMANCER_CLIPTRANSITIONASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BE7D0)

namespace Animancer
{
	inline static constexpr unsigned int ClipTransitionAsset_TypeDefinitionIndex = 35219;

	class ClipTransitionAsset : public ::FlatData::ConquestStepExcel
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CLIPTRANSITIONASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

