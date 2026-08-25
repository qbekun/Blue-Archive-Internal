#pragma once
#include "../unitysdk.h"

namespace System
{
	inline static constexpr unsigned int TypeNameFormatFlags_TypeDefinitionIndex = 23935;

	class TypeNameFormatFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::TypeNameFormatFlags* FormatBasic; // 0x0
		::System::TypeNameFormatFlags* FormatNamespace; // 0x0
		::System::TypeNameFormatFlags* FormatFullInst; // 0x0
		::System::TypeNameFormatFlags* FormatAssembly; // 0x0
		::System::TypeNameFormatFlags* FormatSignature; // 0x0
		::System::TypeNameFormatFlags* FormatNoVersion; // 0x0
		::System::TypeNameFormatFlags* FormatAngleBrackets; // 0x0
		::System::TypeNameFormatFlags* FormatStubInfo; // 0x0
		::System::TypeNameFormatFlags* FormatGenericParam; // 0x0
		::System::TypeNameFormatFlags* FormatSerialization; // 0x0

	};
}

