#pragma once
#include "../unitysdk.h"

namespace NPA
{
	inline static constexpr unsigned int NXPDLCProductDefinition_TypeDefinitionIndex = 25760;

	class NXPDLCProductDefinition : public Il2CppObject
	{
	public:
		::System::String* DLCId; // 0x10
		::System::String* DLCType; // 0x18
		::System::String* DLCName; // 0x20
		::System::String* DLCCurrency; // 0x28
		::System::String* DLCPrice; // 0x30

	};
}

