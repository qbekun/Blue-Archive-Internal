#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class Resolution; }

namespace MX::SaveData
{
	inline static constexpr unsigned int Resolution_TypeDefinitionIndex = 20024;

	class Resolution : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::Resolution* VeryHigh; // 0x0
		::MX::SaveData::Resolution* High; // 0x0
		::MX::SaveData::Resolution* Normal; // 0x0
		::MX::SaveData::Resolution* Low; // 0x0

	};
}

