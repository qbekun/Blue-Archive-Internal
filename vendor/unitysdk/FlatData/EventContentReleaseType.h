#pragma once
#include "../unitysdk.h"

namespace FlatData { class EventContentReleaseType; }

namespace FlatData
{
	inline static constexpr unsigned int EventContentReleaseType_TypeDefinitionIndex = 9483;

	class EventContentReleaseType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::EventContentReleaseType* None; // 0x0
		::FlatData::EventContentReleaseType* Permanent; // 0x0
		::FlatData::EventContentReleaseType* MainStory; // 0x0
		::FlatData::EventContentReleaseType* PermanentSpecialOperate; // 0x0
		::FlatData::EventContentReleaseType* PermanentConquest; // 0x0

	};
}

