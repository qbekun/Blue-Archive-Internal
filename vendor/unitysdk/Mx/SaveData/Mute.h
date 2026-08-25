#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class Mute; }

namespace MX::SaveData
{
	inline static constexpr unsigned int Mute_TypeDefinitionIndex = 20020;

	class Mute : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::Mute* On; // 0x0
		::MX::SaveData::Mute* Off; // 0x0

	};
}

