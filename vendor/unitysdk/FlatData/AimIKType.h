#pragma once
#include "../unitysdk.h"

namespace FlatData { class AimIKType; }

namespace FlatData
{
	inline static constexpr unsigned int AimIKType_TypeDefinitionIndex = 9398;

	class AimIKType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::AimIKType* None; // 0x0
		::FlatData::AimIKType* OneHandRight; // 0x0
		::FlatData::AimIKType* OneHandLeft; // 0x0
		::FlatData::AimIKType* TwoHandRight; // 0x0
		::FlatData::AimIKType* TwoHandLeft; // 0x0
		::FlatData::AimIKType* Tripod; // 0x0
		::FlatData::AimIKType* Dual; // 0x0
		::FlatData::AimIKType* Max; // 0x0

	};
}

