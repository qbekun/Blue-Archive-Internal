#pragma once
#include "../../unitysdk.h"

namespace Unity::Collections { class NativeArrayOptions; }

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeArrayOptions_TypeDefinitionIndex = 30900;

	class NativeArrayOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Unity::Collections::NativeArrayOptions* UninitializedMemory; // 0x0
		::Unity::Collections::NativeArrayOptions* ClearMemory; // 0x0

	};
}

