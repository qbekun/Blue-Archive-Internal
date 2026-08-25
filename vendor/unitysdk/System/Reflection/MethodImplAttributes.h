#pragma once
#include "../../unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int MethodImplAttributes_TypeDefinitionIndex = 24867;

	class MethodImplAttributes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Reflection::MethodImplAttributes* CodeTypeMask; // 0x0
		::System::Reflection::MethodImplAttributes* IL; // 0x0
		::System::Reflection::MethodImplAttributes* Native; // 0x0
		::System::Reflection::MethodImplAttributes* OPTIL; // 0x0
		::System::Reflection::MethodImplAttributes* Runtime; // 0x0
		::System::Reflection::MethodImplAttributes* ManagedMask; // 0x0
		::System::Reflection::MethodImplAttributes* Unmanaged; // 0x0
		::System::Reflection::MethodImplAttributes* Managed; // 0x0
		::System::Reflection::MethodImplAttributes* ForwardRef; // 0x0
		::System::Reflection::MethodImplAttributes* PreserveSig; // 0x0
		::System::Reflection::MethodImplAttributes* InternalCall; // 0x0
		::System::Reflection::MethodImplAttributes* Synchronized; // 0x0
		::System::Reflection::MethodImplAttributes* NoInlining; // 0x0
		::System::Reflection::MethodImplAttributes* AggressiveInlining; // 0x0
		::System::Reflection::MethodImplAttributes* NoOptimization; // 0x0
		::System::Reflection::MethodImplAttributes* MaxMethodImplVal; // 0x0
		::System::Reflection::MethodImplAttributes* SecurityMitigations; // 0x0

	};
}

