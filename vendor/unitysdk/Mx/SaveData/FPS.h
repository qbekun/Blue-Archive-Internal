#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class FPS; }

namespace MX::SaveData
{
	inline static constexpr unsigned int FPS_TypeDefinitionIndex = 20025;

	class FPS : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::FPS* High; // 0x0
		::MX::SaveData::FPS* Normal; // 0x0

	};
}

