#pragma once
#include "../unitysdk.h"

namespace FlatData { class MessagePopupLayout; }

namespace FlatData
{
	inline static constexpr unsigned int MessagePopupLayout_TypeDefinitionIndex = 9646;

	class MessagePopupLayout : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::MessagePopupLayout* TextOnly; // 0x0
		::FlatData::MessagePopupLayout* ImageBig; // 0x0
		::FlatData::MessagePopupLayout* ImageSmall; // 0x0
		::FlatData::MessagePopupLayout* UnlockCondition; // 0x0

	};
}

