#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int COPYFILE2_EXTENDED_PARAMETERS_TypeDefinitionIndex = 23535;

	class COPYFILE2_EXTENDED_PARAMETERS : public Il2CppObject
	{
	public:
		::System::UInt32 dwSize; // 0x10
		::System::UInt32 dwCopyFlags; // 0x14
		::System::Int32 pfCancel; // 0x18
		::System::Int32 pProgressRoutine; // 0x20
		::System::Int32 pvCallbackContext; // 0x28

	};

