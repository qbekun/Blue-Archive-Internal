#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class ShaderQuality; }

namespace MX::SaveData
{
	inline static constexpr unsigned int ShaderQuality_TypeDefinitionIndex = 20031;

	class ShaderQuality : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::ShaderQuality* Normal; // 0x0
		::MX::SaveData::ShaderQuality* Low; // 0x0

	};
}

