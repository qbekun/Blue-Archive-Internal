#pragma once
#include "../unitysdk.h"

namespace System
{
	inline static constexpr unsigned int UriSyntaxFlags_TypeDefinitionIndex = 29190;

	class UriSyntaxFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::UriSyntaxFlags* None; // 0x0
		::System::UriSyntaxFlags* MustHaveAuthority; // 0x0
		::System::UriSyntaxFlags* OptionalAuthority; // 0x0
		::System::UriSyntaxFlags* MayHaveUserInfo; // 0x0
		::System::UriSyntaxFlags* MayHavePort; // 0x0
		::System::UriSyntaxFlags* MayHavePath; // 0x0
		::System::UriSyntaxFlags* MayHaveQuery; // 0x0
		::System::UriSyntaxFlags* MayHaveFragment; // 0x0
		::System::UriSyntaxFlags* AllowEmptyHost; // 0x0
		::System::UriSyntaxFlags* AllowUncHost; // 0x0
		::System::UriSyntaxFlags* AllowDnsHost; // 0x0
		::System::UriSyntaxFlags* AllowIPv4Host; // 0x0
		::System::UriSyntaxFlags* AllowIPv6Host; // 0x0
		::System::UriSyntaxFlags* AllowAnInternetHost; // 0x0
		::System::UriSyntaxFlags* AllowAnyOtherHost; // 0x0
		::System::UriSyntaxFlags* FileLikeUri; // 0x0
		::System::UriSyntaxFlags* MailToLikeUri; // 0x0
		::System::UriSyntaxFlags* V1_UnknownUri; // 0x0
		::System::UriSyntaxFlags* SimpleUserSyntax; // 0x0
		::System::UriSyntaxFlags* BuiltInSyntax; // 0x0
		::System::UriSyntaxFlags* ParserSchemeOnly; // 0x0
		::System::UriSyntaxFlags* AllowDOSPath; // 0x0
		::System::UriSyntaxFlags* PathIsRooted; // 0x0
		::System::UriSyntaxFlags* ConvertPathSlashes; // 0x0
		::System::UriSyntaxFlags* CompressPath; // 0x0
		::System::UriSyntaxFlags* CanonicalizeAsFilePath; // 0x0
		::System::UriSyntaxFlags* UnEscapeDotsAndSlashes; // 0x0
		::System::UriSyntaxFlags* AllowIdn; // 0x0
		::System::UriSyntaxFlags* AllowIriParsing; // 0x0

	};
}

