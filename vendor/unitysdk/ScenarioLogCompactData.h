#pragma once
#include "unitysdk.h"

class ScenarioLogType;

	inline static constexpr unsigned int ScenarioLogCompactData_TypeDefinitionIndex = 1841;

	class ScenarioLogCompactData : public Il2CppObject
	{
	public:
		::System::Int64 Index; // 0x10
		ScenarioLogType* LogType; // 0x18
		::System::Int64 SelectionGroup; // 0x20

	};

