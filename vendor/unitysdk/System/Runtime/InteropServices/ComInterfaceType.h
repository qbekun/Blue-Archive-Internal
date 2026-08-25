#pragma once
#include "../../../unitysdk.h"

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ComInterfaceType_TypeDefinitionIndex = 24691;

	class ComInterfaceType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Runtime::InteropServices::ComInterfaceType* InterfaceIsDual; // 0x0
		::System::Runtime::InteropServices::ComInterfaceType* InterfaceIsIUnknown; // 0x0
		::System::Runtime::InteropServices::ComInterfaceType* InterfaceIsIDispatch; // 0x0
		::System::Runtime::InteropServices::ComInterfaceType* InterfaceIsIInspectable; // 0x0

	};
}

