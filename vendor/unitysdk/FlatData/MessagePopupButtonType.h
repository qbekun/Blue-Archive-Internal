#pragma once
#include "../unitysdk.h"

namespace FlatData { class MessagePopupButtonType; }

namespace FlatData
{
	inline static constexpr unsigned int MessagePopupButtonType_TypeDefinitionIndex = 9648;

	class MessagePopupButtonType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::MessagePopupButtonType* Accept; // 0x0
		::FlatData::MessagePopupButtonType* Cancel; // 0x0
		::FlatData::MessagePopupButtonType* Command; // 0x0

	};
}

