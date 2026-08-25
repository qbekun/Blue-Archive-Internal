#pragma once
#include "../unitysdk.h"

#define ANIMANCER_FLOAT1CONTROLLERTRANSITIONASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C0380)

namespace Animancer
{
	inline static constexpr unsigned int Float1ControllerTransitionAsset_TypeDefinitionIndex = 35228;

	class Float1ControllerTransitionAsset : public ::FlatData::ConstArenaExcel
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT1CONTROLLERTRANSITIONASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

