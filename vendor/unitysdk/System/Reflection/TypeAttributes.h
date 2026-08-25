#pragma once
#include "../../unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int TypeAttributes_TypeDefinitionIndex = 24890;

	class TypeAttributes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Reflection::TypeAttributes* VisibilityMask; // 0x0
		::System::Reflection::TypeAttributes* NotPublic; // 0x0
		::System::Reflection::TypeAttributes* Public; // 0x0
		::System::Reflection::TypeAttributes* NestedPublic; // 0x0
		::System::Reflection::TypeAttributes* NestedPrivate; // 0x0
		::System::Reflection::TypeAttributes* NestedFamily; // 0x0
		::System::Reflection::TypeAttributes* NestedAssembly; // 0x0
		::System::Reflection::TypeAttributes* NestedFamANDAssem; // 0x0
		::System::Reflection::TypeAttributes* NestedFamORAssem; // 0x0
		::System::Reflection::TypeAttributes* LayoutMask; // 0x0
		::System::Reflection::TypeAttributes* AutoLayout; // 0x0
		::System::Reflection::TypeAttributes* SequentialLayout; // 0x0
		::System::Reflection::TypeAttributes* ExplicitLayout; // 0x0
		::System::Reflection::TypeAttributes* ClassSemanticsMask; // 0x0
		::System::Reflection::TypeAttributes* Class; // 0x0
		::System::Reflection::TypeAttributes* Interface; // 0x0
		::System::Reflection::TypeAttributes* Abstract; // 0x0
		::System::Reflection::TypeAttributes* Sealed; // 0x0
		::System::Reflection::TypeAttributes* SpecialName; // 0x0
		::System::Reflection::TypeAttributes* Import; // 0x0
		::System::Reflection::TypeAttributes* Serializable; // 0x0
		::System::Reflection::TypeAttributes* WindowsRuntime; // 0x0
		::System::Reflection::TypeAttributes* StringFormatMask; // 0x0
		::System::Reflection::TypeAttributes* AnsiClass; // 0x0
		::System::Reflection::TypeAttributes* UnicodeClass; // 0x0
		::System::Reflection::TypeAttributes* AutoClass; // 0x0
		::System::Reflection::TypeAttributes* CustomFormatClass; // 0x0
		::System::Reflection::TypeAttributes* CustomFormatMask; // 0x0
		::System::Reflection::TypeAttributes* BeforeFieldInit; // 0x0
		::System::Reflection::TypeAttributes* RTSpecialName; // 0x0
		::System::Reflection::TypeAttributes* HasSecurity; // 0x0
		::System::Reflection::TypeAttributes* ReservedMask; // 0x0

	};
}

