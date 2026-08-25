#pragma once
#include "../unitysdk.h"

namespace FlatData { class SpoilerPopupType; }

namespace FlatData
{
	inline static constexpr unsigned int SpoilerPopupType_TypeDefinitionIndex = 9491;

	class SpoilerPopupType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::SpoilerPopupType* None; // 0x0
		::FlatData::SpoilerPopupType* Default; // 0x0
		::FlatData::SpoilerPopupType* Warning; // 0x0
		::FlatData::SpoilerPopupType* WarningNoGo; // 0x0

	};
}

