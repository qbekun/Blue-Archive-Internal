#pragma once
#include "../unitysdk.h"

namespace System
{
	inline static constexpr unsigned int GenericUriParserOptions_TypeDefinitionIndex = 29168;

	class GenericUriParserOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::GenericUriParserOptions* Default; // 0x0
		::System::GenericUriParserOptions* GenericAuthority; // 0x0
		::System::GenericUriParserOptions* AllowEmptyAuthority; // 0x0
		::System::GenericUriParserOptions* NoUserInfo; // 0x0
		::System::GenericUriParserOptions* NoPort; // 0x0
		::System::GenericUriParserOptions* NoQuery; // 0x0
		::System::GenericUriParserOptions* NoFragment; // 0x0
		::System::GenericUriParserOptions* DontConvertPathBackslashes; // 0x0
		::System::GenericUriParserOptions* DontCompressPath; // 0x0
		::System::GenericUriParserOptions* DontUnescapePathDotsAndSlashes; // 0x0
		::System::GenericUriParserOptions* Idn; // 0x0
		::System::GenericUriParserOptions* IriParsing; // 0x0

	};
}

