#pragma once
#include "../unitysdk.h"

namespace FlatData { class ClearCheck; }

namespace FlatData
{
	inline static constexpr unsigned int ClearCheck_TypeDefinitionIndex = 9410;

	class ClearCheck : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ClearCheck* None; // 0x0
		::FlatData::ClearCheck* Success_Play; // 0x0
		::FlatData::ClearCheck* Success_Sweep; // 0x0
		::FlatData::ClearCheck* Fail_Timeout; // 0x0
		::FlatData::ClearCheck* Fail_PlayerGiveUp; // 0x0
		::FlatData::ClearCheck* Fail_Annihilation; // 0x0

	};
}

