#pragma once
#include "unitysdk.h"

class UpdateCondition;

	inline static constexpr unsigned int UpdateCondition_TypeDefinitionIndex = 117;

	class UpdateCondition : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		UpdateCondition* OnStart; // 0x0
		UpdateCondition* OnUpdate; // 0x0
		UpdateCondition* OnLateUpdate; // 0x0
		UpdateCondition* OnFixedUpdate; // 0x0

	};

