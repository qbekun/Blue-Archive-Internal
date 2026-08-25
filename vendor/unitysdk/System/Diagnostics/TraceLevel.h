#pragma once
#include "../../unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceLevel_TypeDefinitionIndex = 29247;

	class TraceLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Diagnostics::TraceLevel* Off; // 0x0
		::System::Diagnostics::TraceLevel* Error; // 0x0
		::System::Diagnostics::TraceLevel* Warning; // 0x0
		::System::Diagnostics::TraceLevel* Info; // 0x0
		::System::Diagnostics::TraceLevel* Verbose; // 0x0

	};
}

