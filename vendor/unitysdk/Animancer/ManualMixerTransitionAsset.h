#pragma once
#include "../unitysdk.h"

#define ANIMANCER_MANUALMIXERTRANSITIONASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C13B0)

namespace Animancer
{
	inline static constexpr unsigned int ManualMixerTransitionAsset_TypeDefinitionIndex = 35241;

	class ManualMixerTransitionAsset : public ::FlatData::ConstCommonExcelTable
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MANUALMIXERTRANSITIONASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

