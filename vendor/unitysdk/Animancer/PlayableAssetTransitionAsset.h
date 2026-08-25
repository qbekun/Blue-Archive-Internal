#pragma once
#include "../unitysdk.h"

#define ANIMANCER_PLAYABLEASSETTRANSITIONASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C16C0)

namespace Animancer
{
	inline static constexpr unsigned int PlayableAssetTransitionAsset_TypeDefinitionIndex = 35249;

	class PlayableAssetTransitionAsset : public ::FlatData::ConstConquestExcelTable
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_PLAYABLEASSETTRANSITIONASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

