#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Principal
{
	inline static constexpr unsigned int WindowsAccountType_TypeDefinitionIndex = 24415;

	class WindowsAccountType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Principal::WindowsAccountType* Normal; // 0x0
		::System::Security::Principal::WindowsAccountType* Guest; // 0x0
		::System::Security::Principal::WindowsAccountType* System; // 0x0
		::System::Security::Principal::WindowsAccountType* Anonymous; // 0x0

	};
}

