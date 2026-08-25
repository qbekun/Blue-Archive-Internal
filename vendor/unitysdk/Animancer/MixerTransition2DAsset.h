#pragma once
#include "../unitysdk.h"

#define ANIMANCER_MIXERTRANSITION2DASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C1430)

namespace Animancer
{
	inline static constexpr unsigned int MixerTransition2DAsset_TypeDefinitionIndex = 35245;

	class MixerTransition2DAsset : public ::FlatData::ConstCommonExcel
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERTRANSITION2DASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

