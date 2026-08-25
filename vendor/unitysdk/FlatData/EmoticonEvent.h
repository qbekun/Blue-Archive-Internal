#pragma once
#include "../unitysdk.h"

namespace FlatData { class EmoticonEvent; }

namespace FlatData
{
	inline static constexpr unsigned int EmoticonEvent_TypeDefinitionIndex = 9368;

	class EmoticonEvent : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::EmoticonEvent* CoverEnter; // 0x0
		::FlatData::EmoticonEvent* ShelterEnter; // 0x0
		::FlatData::EmoticonEvent* Panic; // 0x0
		::FlatData::EmoticonEvent* NearlyDead; // 0x0
		::FlatData::EmoticonEvent* Reload; // 0x0
		::FlatData::EmoticonEvent* Found; // 0x0
		::FlatData::EmoticonEvent* GetBeacon; // 0x0
		::FlatData::EmoticonEvent* Warning; // 0x0

	};
}

