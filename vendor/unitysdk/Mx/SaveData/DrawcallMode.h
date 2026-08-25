#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class DrawcallMode; }

namespace MX::SaveData
{
	inline static constexpr unsigned int DrawcallMode_TypeDefinitionIndex = 20029;

	class DrawcallMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::DrawcallMode* SRPBatcher; // 0x0
		::MX::SaveData::DrawcallMode* DynamicBatching; // 0x0
		::MX::SaveData::DrawcallMode* Off; // 0x0

	};
}

