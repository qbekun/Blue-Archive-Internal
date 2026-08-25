#pragma once
#include "../../../unitysdk.h"

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int LocalBuilder_TypeDefinitionIndex = 24935;

	class LocalBuilder : public Il2CppObject
	{
	public:
		::System::String* name; // 0x20
		::System::Reflection::Emit::ILGenerator* ilgen; // 0x28
		::System::Int32 startOffset; // 0x30
		::System::Int32 endOffset; // 0x34

	};
}

