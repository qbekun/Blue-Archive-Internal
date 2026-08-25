#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TileData_TypeDefinitionIndex = 32803;

	class TileData : public Il2CppObject
	{
	public:
		::System::UInt32 tileID; // 0x10
		::System::UInt32 listBitMask; // 0x14
		::System::UInt32 relLightOffset; // 0x18
		::System::UInt32 unused; // 0x1C

	};
}

