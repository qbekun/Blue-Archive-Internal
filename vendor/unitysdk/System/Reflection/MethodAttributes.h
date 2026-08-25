#pragma once
#include "../../unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int MethodAttributes_TypeDefinitionIndex = 24865;

	class MethodAttributes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Reflection::MethodAttributes* MemberAccessMask; // 0x0
		::System::Reflection::MethodAttributes* PrivateScope; // 0x0
		::System::Reflection::MethodAttributes* Private; // 0x0
		::System::Reflection::MethodAttributes* FamANDAssem; // 0x0
		::System::Reflection::MethodAttributes* Assembly; // 0x0
		::System::Reflection::MethodAttributes* Family; // 0x0
		::System::Reflection::MethodAttributes* FamORAssem; // 0x0
		::System::Reflection::MethodAttributes* Public; // 0x0
		::System::Reflection::MethodAttributes* Static; // 0x0
		::System::Reflection::MethodAttributes* Final; // 0x0
		::System::Reflection::MethodAttributes* Virtual; // 0x0
		::System::Reflection::MethodAttributes* HideBySig; // 0x0
		::System::Reflection::MethodAttributes* CheckAccessOnOverride; // 0x0
		::System::Reflection::MethodAttributes* VtableLayoutMask; // 0x0
		::System::Reflection::MethodAttributes* ReuseSlot; // 0x0
		::System::Reflection::MethodAttributes* NewSlot; // 0x0
		::System::Reflection::MethodAttributes* Abstract; // 0x0
		::System::Reflection::MethodAttributes* SpecialName; // 0x0
		::System::Reflection::MethodAttributes* PinvokeImpl; // 0x0
		::System::Reflection::MethodAttributes* UnmanagedExport; // 0x0
		::System::Reflection::MethodAttributes* RTSpecialName; // 0x0
		::System::Reflection::MethodAttributes* HasSecurity; // 0x0
		::System::Reflection::MethodAttributes* RequireSecObject; // 0x0
		::System::Reflection::MethodAttributes* ReservedMask; // 0x0

	};
}

