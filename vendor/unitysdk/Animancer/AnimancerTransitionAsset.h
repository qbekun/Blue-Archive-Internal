#pragma once
#include "../unitysdk.h"

#define ANIMANCER_ANIMANCERTRANSITIONASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BE300)

namespace Animancer
{
	inline static constexpr unsigned int AnimancerTransitionAsset_TypeDefinitionIndex = 35212;

	class AnimancerTransitionAsset : public ::FlatData::ConstCombatExcelTable
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_ANIMANCERTRANSITIONASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

