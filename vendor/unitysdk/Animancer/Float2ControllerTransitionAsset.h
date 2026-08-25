#pragma once
#include "../unitysdk.h"

#define ANIMANCER_FLOAT2CONTROLLERTRANSITIONASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C05F0)

namespace Animancer
{
	inline static constexpr unsigned int Float2ControllerTransitionAsset_TypeDefinitionIndex = 35231;

	class Float2ControllerTransitionAsset : public ::FlatData::ConstAudioExcelTable
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT2CONTROLLERTRANSITIONASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

