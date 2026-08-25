#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class AntiAliasing; }

namespace MX::SaveData
{
	inline static constexpr unsigned int AntiAliasing_TypeDefinitionIndex = 20030;

	class AntiAliasing : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::AntiAliasing* Off; // 0x0
		::MX::SaveData::AntiAliasing* On; // 0x0

	};
}

