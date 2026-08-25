#pragma once
#include "../unitysdk.h"

namespace FlatData { class CVCollectionType; }

namespace FlatData
{
	inline static constexpr unsigned int CVCollectionType_TypeDefinitionIndex = 9432;

	class CVCollectionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::CVCollectionType* CVNormal; // 0x0
		::FlatData::CVCollectionType* CVEvent; // 0x0
		::FlatData::CVCollectionType* CVEtc; // 0x0

	};
}

