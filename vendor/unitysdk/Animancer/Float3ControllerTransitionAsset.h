#pragma once
#include "../unitysdk.h"

#define ANIMANCER_FLOAT3CONTROLLERTRANSITIONASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C08E0)

namespace Animancer
{
	inline static constexpr unsigned int Float3ControllerTransitionAsset_TypeDefinitionIndex = 35234;

	class Float3ControllerTransitionAsset : public ::FlatData::ConstAudioExcel
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FLOAT3CONTROLLERTRANSITIONASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

