#pragma once
#include "../../unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int PInfo_TypeDefinitionIndex = 24921;

	class PInfo : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Reflection::PInfo* Attributes; // 0x0
		::System::Reflection::PInfo* GetMethod; // 0x0
		::System::Reflection::PInfo* SetMethod; // 0x0
		::System::Reflection::PInfo* ReflectedType; // 0x0
		::System::Reflection::PInfo* DeclaringType; // 0x0
		::System::Reflection::PInfo* Name; // 0x0

	};
}

