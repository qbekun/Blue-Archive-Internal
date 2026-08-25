#pragma once
#include "../../unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int MonoPropertyInfo_TypeDefinitionIndex = 24920;

	class MonoPropertyInfo : public Il2CppObject
	{
	public:
		::System::Type* parent; // 0x10
		::System::Type* declaring_type; // 0x18
		::System::String* name; // 0x20
		::System::Reflection::MethodInfo* get_method; // 0x28
		::System::Reflection::MethodInfo* set_method; // 0x30
		::System::Reflection::PropertyAttributes* attrs; // 0x38

	};
}

