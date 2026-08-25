#pragma once
#include "../unitysdk.h"

#define ANIMANCER_CONTROLLERTRANSITIONASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C00D0)

namespace Animancer
{
	inline static constexpr unsigned int ControllerTransitionAsset_TypeDefinitionIndex = 35224;

	class ControllerTransitionAsset : public ::FlatData::ConstArenaExcelTable
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CONTROLLERTRANSITIONASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

