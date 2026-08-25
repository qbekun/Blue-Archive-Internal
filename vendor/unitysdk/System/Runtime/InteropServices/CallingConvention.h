#pragma once
#include "../../../unitysdk.h"

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int CallingConvention_TypeDefinitionIndex = 24710;

	class CallingConvention : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Runtime::InteropServices::CallingConvention* Winapi; // 0x0
		::System::Runtime::InteropServices::CallingConvention* Cdecl; // 0x0
		::System::Runtime::InteropServices::CallingConvention* StdCall; // 0x0
		::System::Runtime::InteropServices::CallingConvention* ThisCall; // 0x0
		::System::Runtime::InteropServices::CallingConvention* FastCall; // 0x0

	};
}

