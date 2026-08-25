#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_GETNEWLINE_OFFSET UNITYSDK_OFFSET(0x8CB2B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_EQUALSIGNORECASE_OFFSET UNITYSDK_OFFSET(0x8CB2C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_GETENVIRONMENTVARIABLE_OFFSET UNITYSDK_OFFSET(0x8CB410)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_CREATENOTIMPLEMENTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x8BDF20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_CREATEARRAYLIST_OFFSET UNITYSDK_OFFSET(0x8BD890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_CREATEARRAYLIST_OFFSET UNITYSDK_OFFSET(0x8CB4C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_CREATEARRAYLIST_OFFSET UNITYSDK_OFFSET(0x8C4E20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_CREATEARRAYLIST_OFFSET UNITYSDK_OFFSET(0x8CB520)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_CREATEHASHTABLE_OFFSET UNITYSDK_OFFSET(0x8CB860)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_CREATEHASHTABLE_OFFSET UNITYSDK_OFFSET(0x8CB8B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_CREATEHASHTABLE_OFFSET UNITYSDK_OFFSET(0x8CB910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_TOLOWERINVARIANT_OFFSET UNITYSDK_OFFSET(0x8CB970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_TOUPPERINVARIANT_OFFSET UNITYSDK_OFFSET(0x8C65E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BBFE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CB9F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_INDEXOF_OFFSET UNITYSDK_OFFSET(0x8CBA20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_LASTINDEXOF_OFFSET UNITYSDK_OFFSET(0x8CBAD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x8CBB80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_ENDSWITH_OFFSET UNITYSDK_OFFSET(0x8CBC30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x8CBCE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x8CBD20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8CBD30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities
{
	inline static constexpr unsigned int Platform_TypeDefinitionIndex = 21573;

	class Platform : public Il2CppObject
	{
	public:
		::System::Globalization::CompareInfo* InvariantCompareInfo; // 0x0
		::System::String* NewLine; // 0x8

		::System::String* GetNewLine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_GETNEWLINE_OFFSET))(nullptr);
		}

		::System::Boolean EqualsIgnoreCase(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_EQUALSIGNORECASE_OFFSET))(str, str, nullptr);
		}

		::System::String* GetEnvironmentVariable(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_GETENVIRONMENTVARIABLE_OFFSET))(str, nullptr);
		}

		::System::Exception* CreateNotImplementedException(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_CREATENOTIMPLEMENTEDEXCEPTION_OFFSET))(str, nullptr);
		}

		::System::Collections::IList* CreateArrayList()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_CREATEARRAYLIST_OFFSET))(nullptr);
		}

		::System::Collections::IList* CreateArrayList(::System::Int32 arg)
		{
			return (return (::System::Collections::IList*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_CREATEARRAYLIST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* CreateArrayList(::System::Collections::ICollection* arg)
		{
			return (return (::System::Collections::IList*(*)(::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_CREATEARRAYLIST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* CreateArrayList(::System::Collections::IEnumerable* arg)
		{
			return (return (::System::Collections::IList*(*)(::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_CREATEARRAYLIST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IDictionary* CreateHashtable()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_CREATEHASHTABLE_OFFSET))(nullptr);
		}

		::System::Collections::IDictionary* CreateHashtable(::System::Int32 arg)
		{
			return (return (::System::Collections::IDictionary*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_CREATEHASHTABLE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IDictionary* CreateHashtable(::System::Collections::IDictionary* arg)
		{
			return (return (::System::Collections::IDictionary*(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_CREATEHASHTABLE_OFFSET))(arg, nullptr);
		}

		::System::String* ToLowerInvariant(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_TOLOWERINVARIANT_OFFSET))(str, nullptr);
		}

		::System::String* ToUpperInvariant(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_TOUPPERINVARIANT_OFFSET))(str, nullptr);
		}

		::System::Void Dispose(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::IO::TextWriter* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOf(::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_INDEXOF_OFFSET))(str, str, nullptr);
		}

		::System::Int32 LastIndexOf(::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_LASTINDEXOF_OFFSET))(str, str, nullptr);
		}

		::System::Boolean StartsWith(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_STARTSWITH_OFFSET))(str, str, nullptr);
		}

		::System::Boolean EndsWith(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_ENDSWITH_OFFSET))(str, str, nullptr);
		}

		::System::String* GetTypeName(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_GETTYPENAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_PLATFORM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

