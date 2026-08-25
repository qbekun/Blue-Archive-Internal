#pragma once
#include "../unitysdk.h"

namespace NPA { class PlayStationStoreIconPosition; }

namespace NPA
{
	inline static constexpr unsigned int PlayStationStoreIconPosition_TypeDefinitionIndex = 25756;

	class PlayStationStoreIconPosition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::PlayStationStoreIconPosition* Center; // 0x0
		::NPA::PlayStationStoreIconPosition* Left; // 0x0
		::NPA::PlayStationStoreIconPosition* Right; // 0x0

	};
}

