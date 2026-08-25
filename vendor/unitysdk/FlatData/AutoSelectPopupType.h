#pragma once
#include "../unitysdk.h"

namespace FlatData { class AutoSelectPopupType; }

namespace FlatData
{
	inline static constexpr unsigned int AutoSelectPopupType_TypeDefinitionIndex = 9643;

	class AutoSelectPopupType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::AutoSelectPopupType* None; // 0x0
		::FlatData::AutoSelectPopupType* FavorItem; // 0x0
		::FlatData::AutoSelectPopupType* GrowthItem; // 0x0

	};
}

