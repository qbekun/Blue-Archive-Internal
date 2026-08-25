#pragma once
#include "../unitysdk.h"

namespace FlatData { class ProductionStep; }

namespace FlatData
{
	inline static constexpr unsigned int ProductionStep_TypeDefinitionIndex = 9429;

	class ProductionStep : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ProductionStep* ToDo; // 0x0
		::FlatData::ProductionStep* Doing; // 0x0
		::FlatData::ProductionStep* Complete; // 0x0
		::FlatData::ProductionStep* Release; // 0x0

	};
}

