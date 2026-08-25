#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int NewInferenceResult_TypeDefinitionIndex = 34515;

	class NewInferenceResult : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		NewInferenceResult* InferenceFailed; // 0x0
		NewInferenceResult* MadeProgress; // 0x0
		NewInferenceResult* NoProgress; // 0x0
		NewInferenceResult* Success; // 0x0

	};

