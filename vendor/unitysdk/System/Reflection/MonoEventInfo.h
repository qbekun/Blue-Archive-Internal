#pragma once
#include "../../unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int MonoEventInfo_TypeDefinitionIndex = 24911;

	class MonoEventInfo : public Il2CppObject
	{
	public:
		::System::Type* declaring_type; // 0x10
		::System::Type* reflected_type; // 0x18
		::System::String* name; // 0x20
		::System::Reflection::MethodInfo* add_method; // 0x28
		::System::Reflection::MethodInfo* remove_method; // 0x30
		::System::Reflection::MethodInfo* raise_method; // 0x38
		::System::Reflection::EventAttributes* attrs; // 0x40
		::Il2CppArray<::System::Object*>* other_methods; // 0x48

	};
}

