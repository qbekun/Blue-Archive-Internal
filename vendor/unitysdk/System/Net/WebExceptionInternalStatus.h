#pragma once
#include "../../unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int WebExceptionInternalStatus_TypeDefinitionIndex = 29696;

	class WebExceptionInternalStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::WebExceptionInternalStatus* RequestFatal; // 0x0
		::System::Net::WebExceptionInternalStatus* ServicePointFatal; // 0x0
		::System::Net::WebExceptionInternalStatus* Recoverable; // 0x0
		::System::Net::WebExceptionInternalStatus* Isolated; // 0x0

	};
}

