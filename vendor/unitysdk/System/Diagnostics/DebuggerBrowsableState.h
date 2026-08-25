#pragma once
#include "../../unitysdk.h"

namespace System::Diagnostics
{
	inline static constexpr unsigned int DebuggerBrowsableState_TypeDefinitionIndex = 25026;

	class DebuggerBrowsableState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Diagnostics::DebuggerBrowsableState* Never; // 0x0
		::System::Diagnostics::DebuggerBrowsableState* Collapsed; // 0x0
		::System::Diagnostics::DebuggerBrowsableState* RootHidden; // 0x0

	};
}

