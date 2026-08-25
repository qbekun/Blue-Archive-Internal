#pragma once
#include "../unitysdk.h"

#define ANIMANCER_LINEARMIXERTRANSITIONASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C0C50)

namespace Animancer
{
	inline static constexpr unsigned int LinearMixerTransitionAsset_TypeDefinitionIndex = 35237;

	class LinearMixerTransitionAsset : public ::FlatData::ConstCombatExcel
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LINEARMIXERTRANSITIONASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

