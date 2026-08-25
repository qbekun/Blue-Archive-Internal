#pragma once
#include "../../../unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int StateUnion_TypeDefinitionIndex = 28105;

	class StateUnion : public Il2CppObject
	{
	public:
		::System::Int32 State; // 0x10
		::System::Int32 AllElementsRequired; // 0x10
		::System::Int32 CurPosIndex; // 0x10
		::System::Int32 NumberOfRunningPos; // 0x10

	};
}

