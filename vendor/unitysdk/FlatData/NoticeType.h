#pragma once
#include "../unitysdk.h"

namespace FlatData { class NoticeType; }

namespace FlatData
{
	inline static constexpr unsigned int NoticeType_TypeDefinitionIndex = 9501;

	class NoticeType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::NoticeType* None; // 0x0
		::FlatData::NoticeType* Notice; // 0x0
		::FlatData::NoticeType* Event; // 0x0

	};
}

