#pragma once
#include "../unitysdk.h"

#define SYSTEM_URIPARSER_GET_SCHEMENAME_OFFSET UNITYSDK_OFFSET(0x9AD4B70)
#define SYSTEM_URIPARSER_GET_DEFAULTPORT_OFFSET UNITYSDK_OFFSET(0x9AD4B80)
#define SYSTEM_URIPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD4B90)
#define SYSTEM_URIPARSER_ONNEWURI_OFFSET UNITYSDK_OFFSET(0x9AD4C50)
#define SYSTEM_URIPARSER_INITIALIZEANDVALIDATE_OFFSET UNITYSDK_OFFSET(0x9AD4C60)
#define SYSTEM_URIPARSER_RESOLVE_OFFSET UNITYSDK_OFFSET(0x9AD4C90)
#define SYSTEM_URIPARSER_ISBASEOF_OFFSET UNITYSDK_OFFSET(0x9AD4E80)
#define SYSTEM_URIPARSER_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x9AD4EB0)
#define SYSTEM_URIPARSER_GET_SHOULDUSELEGACYV2QUIRKS_OFFSET UNITYSDK_OFFSET(0x9AD4A00)
#define SYSTEM_URIPARSER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9AD5100)
#define SYSTEM_URIPARSER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9AD5DD0)
#define SYSTEM_URIPARSER_NOTANY_OFFSET UNITYSDK_OFFSET(0x9AD0660)
#define SYSTEM_URIPARSER_INFACT_OFFSET UNITYSDK_OFFSET(0x9AD0610)
#define SYSTEM_URIPARSER_ISALLSET_OFFSET UNITYSDK_OFFSET(0x9AD5E30)
#define SYSTEM_URIPARSER_ISFULLMATCH_OFFSET UNITYSDK_OFFSET(0x9AD5DE0)
#define SYSTEM_URIPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD4BF0)
#define SYSTEM_URIPARSER_FINDORFETCHASUNKNOWNV1SYNTAX_OFFSET UNITYSDK_OFFSET(0x9AD5E80)
#define SYSTEM_URIPARSER_GETSYNTAX_OFFSET UNITYSDK_OFFSET(0x9AD0500)
#define SYSTEM_URIPARSER_GET_ISSIMPLE_OFFSET UNITYSDK_OFFSET(0x9AD6210)
#define SYSTEM_URIPARSER_INTERNALONNEWURI_OFFSET UNITYSDK_OFFSET(0x9AD6220)
#define SYSTEM_URIPARSER_INTERNALVALIDATE_OFFSET UNITYSDK_OFFSET(0x9AD6280)
#define SYSTEM_URIPARSER_INTERNALRESOLVE_OFFSET UNITYSDK_OFFSET(0x9AD62A0)
#define SYSTEM_URIPARSER_INTERNALISBASEOF_OFFSET UNITYSDK_OFFSET(0x9AD62C0)
#define SYSTEM_URIPARSER_INTERNALGETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x9AD62E0)

namespace System
{
	inline static constexpr unsigned int UriParser_TypeDefinitionIndex = 29187;

	class UriParser : public Il2CppObject
	{
	public:
		::System::UriSyntaxFlags* SchemeOnlyFlags; // 0x0
		Il2CppObject* m_Table; // 0x0
		Il2CppObject* m_TempTable; // 0x8
		::System::UriSyntaxFlags* m_Flags; // 0x10
		::System::UriSyntaxFlags* m_UpdatableFlags; // 0x14
		::System::Boolean m_UpdatableFlagsUsed; // 0x18
		::System::UriSyntaxFlags* c_UpdatableFlags; // 0x0
		::System::Int32 m_Port; // 0x1C
		::System::String* m_Scheme; // 0x20
		::System::Int32 NoDefaultPort; // 0x0
		::System::Int32 c_InitialTableSize; // 0x0
		::System::UriParser* HttpUri; // 0x10
		::System::UriParser* HttpsUri; // 0x18
		::System::UriParser* WsUri; // 0x20
		::System::UriParser* WssUri; // 0x28
		::System::UriParser* FtpUri; // 0x30
		::System::UriParser* FileUri; // 0x38
		::System::UriParser* GopherUri; // 0x40
		::System::UriParser* NntpUri; // 0x48
		::System::UriParser* NewsUri; // 0x50
		::System::UriParser* MailToUri; // 0x58
		::System::UriParser* UuidUri; // 0x60
		::System::UriParser* TelnetUri; // 0x68
		::System::UriParser* LdapUri; // 0x70
		::System::UriParser* NetTcpUri; // 0x78
		::System::UriParser* NetPipeUri; // 0x80
		::System::UriParser* VsMacrosUri; // 0x88
		UriQuirksVersion* s_QuirksVersion; // 0x90
		::System::Int32 c_MaxCapacity; // 0x0
		::System::UriSyntaxFlags* UnknownV1SyntaxFlags; // 0x0
		::System::UriSyntaxFlags* HttpSyntaxFlags; // 0x94
		::System::UriSyntaxFlags* FtpSyntaxFlags; // 0x0
		::System::UriSyntaxFlags* FileSyntaxFlags; // 0x98
		::System::UriSyntaxFlags* VsmacrosSyntaxFlags; // 0x0
		::System::UriSyntaxFlags* GopherSyntaxFlags; // 0x0
		::System::UriSyntaxFlags* NewsSyntaxFlags; // 0x0
		::System::UriSyntaxFlags* NntpSyntaxFlags; // 0x0
		::System::UriSyntaxFlags* TelnetSyntaxFlags; // 0x0
		::System::UriSyntaxFlags* LdapSyntaxFlags; // 0x0
		::System::UriSyntaxFlags* MailtoSyntaxFlags; // 0x0
		::System::UriSyntaxFlags* NetPipeSyntaxFlags; // 0x0
		::System::UriSyntaxFlags* NetTcpSyntaxFlags; // 0x0

		::System::String* get_SchemeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_SCHEMENAME_OFFSET))(nullptr);
		}

		::System::Int32 get_DefaultPort()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_DEFAULTPORT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_.CTOR_OFFSET))(nullptr);
		}

		::System::UriParser* OnNewUri()
		{
			return (return (::System::UriParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ONNEWURI_OFFSET))(nullptr);
		}

		::System::Void InitializeAndValidate(::System::Uri* arg, ::System::UriFormatException&* arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::UriFormatException&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INITIALIZEANDVALIDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* Resolve(::System::Uri* arg, ::System::Uri* arg, ::System::UriFormatException&* arg)
		{
			return (return (::System::String*(*)(::System::Uri*, ::System::Uri*, ::System::UriFormatException&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_RESOLVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsBaseOf(::System::Uri* arg, ::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ISBASEOF_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetComponents(::System::Uri* arg, ::System::UriComponents* arg, ::System::UriFormat* arg)
		{
			return (return (::System::String*(*)(::System::Uri*, ::System::UriComponents*, ::System::UriFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GETCOMPONENTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_ShouldUseLegacyV2Quirks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_SHOULDUSELEGACYV2QUIRKS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_.CCTOR_OFFSET))(nullptr);
		}

		::System::UriSyntaxFlags* get_Flags()
		{
			return (return (::System::UriSyntaxFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::Boolean NotAny(::System::UriSyntaxFlags* arg)
		{
			return (return (::System::Boolean(*)(::System::UriSyntaxFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_NOTANY_OFFSET))(arg, nullptr);
		}

		::System::Boolean InFact(::System::UriSyntaxFlags* arg)
		{
			return (return (::System::Boolean(*)(::System::UriSyntaxFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INFACT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAllSet(::System::UriSyntaxFlags* arg)
		{
			return (return (::System::Boolean(*)(::System::UriSyntaxFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ISALLSET_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFullMatch(::System::UriSyntaxFlags* arg, ::System::UriSyntaxFlags* arg)
		{
			return (return (::System::Boolean(*)(::System::UriSyntaxFlags*, ::System::UriSyntaxFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ISFULLMATCH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UriSyntaxFlags* arg)
		{
			((::System::Void(*)(::System::UriSyntaxFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::UriParser* FindOrFetchAsUnknownV1Syntax(::System::String* str)
		{
			return (return (::System::UriParser*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_FINDORFETCHASUNKNOWNV1SYNTAX_OFFSET))(str, nullptr);
		}

		::System::UriParser* GetSyntax(::System::String* str)
		{
			return (return (::System::UriParser*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GETSYNTAX_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsSimple()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_ISSIMPLE_OFFSET))(nullptr);
		}

		::System::UriParser* InternalOnNewUri()
		{
			return (return (::System::UriParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALONNEWURI_OFFSET))(nullptr);
		}

		::System::Void InternalValidate(::System::Uri* arg, ::System::UriFormatException&* arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::UriFormatException&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALVALIDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* InternalResolve(::System::Uri* arg, ::System::Uri* arg, ::System::UriFormatException&* arg)
		{
			return (return (::System::String*(*)(::System::Uri*, ::System::Uri*, ::System::UriFormatException&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALRESOLVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean InternalIsBaseOf(::System::Uri* arg, ::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALISBASEOF_OFFSET))(arg, arg, nullptr);
		}

		::System::String* InternalGetComponents(::System::Uri* arg, ::System::UriComponents* arg, ::System::UriFormat* arg)
		{
			return (return (::System::String*(*)(::System::Uri*, ::System::UriComponents*, ::System::UriFormat*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALGETCOMPONENTS_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

