#pragma once
#include "unitysdk.h"

class ActionType;

	inline static constexpr unsigned int ActionType_TypeDefinitionIndex = 6400;

	class ActionType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		ActionType* SetActive; // 0x0
		ActionType* ChangeColor; // 0x0
		ActionType* TextureChange; // 0x0
		ActionType* PlayAnimation; // 0x0
		ActionType* MaterialChange; // 0x0
		ActionType* BoolValueChange; // 0x0

	};

