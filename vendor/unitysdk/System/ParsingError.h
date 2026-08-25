#pragma once
#include "../unitysdk.h"

namespace System
{
	inline static constexpr unsigned int ParsingError_TypeDefinitionIndex = 29181;

	class ParsingError : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::ParsingError* None; // 0x0
		::System::ParsingError* BadFormat; // 0x0
		::System::ParsingError* BadScheme; // 0x0
		::System::ParsingError* BadAuthority; // 0x0
		::System::ParsingError* EmptyUriString; // 0x0
		::System::ParsingError* LastRelativeUriOkErrIndex; // 0x0
		::System::ParsingError* SchemeLimit; // 0x0
		::System::ParsingError* SizeLimit; // 0x0
		::System::ParsingError* MustRootedPath; // 0x0
		::System::ParsingError* BadHostName; // 0x0
		::System::ParsingError* NonEmptyHost; // 0x0
		::System::ParsingError* BadPort; // 0x0
		::System::ParsingError* BadAuthorityTerminator; // 0x0
		::System::ParsingError* CannotCreateRelative; // 0x0

	};
}

