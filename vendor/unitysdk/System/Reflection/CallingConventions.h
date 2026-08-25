#pragma once
#include "../../unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int CallingConventions_TypeDefinitionIndex = 24846;

	class CallingConventions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Reflection::CallingConventions* Standard; // 0x0
		::System::Reflection::CallingConventions* VarArgs; // 0x0
		::System::Reflection::CallingConventions* Any; // 0x0
		::System::Reflection::CallingConventions* HasThis; // 0x0
		::System::Reflection::CallingConventions* ExplicitThis; // 0x0

	};
}

