#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x981C7F0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x981ECB0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x981C7D0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_ADDINTERNAL_OFFSET UNITYSDK_OFFSET(0x981EDC0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_TRYADDWITHOUTVALIDATION_OFFSET UNITYSDK_OFFSET(0x980FB90)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_CHECKNAME_OFFSET UNITYSDK_OFFSET(0x981F6F0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_TRYCHECKNAME_OFFSET UNITYSDK_OFFSET(0x981F610)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x980F500)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x981F940)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_REMOVE_OFFSET UNITYSDK_OFFSET(0x981F9B0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETSINGLEHEADERSTRING_OFFSET UNITYSDK_OFFSET(0x98127A0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x981FA10)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_ADDORREMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETALLHEADERVALUES_OFFSET UNITYSDK_OFFSET(0x981FDB0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETKNOWNHEADERKIND_OFFSET UNITYSDK_OFFSET(0x98126A0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_SETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpHeaders_TypeDefinitionIndex = 36686;

	class HttpHeaders : public Il2CppObject
	{
	public:
		Il2CppObject* known_headers; // 0x0
		Il2CppObject* headers; // 0x10
		::System::Net::Http::Headers::HttpHeaderKind* HeaderKind; // 0x18
		Il2CppObject* connectionclose; // 0x1C
		Il2CppObject* transferEncodingChunked; // 0x1E

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::Http::Headers::HttpHeaderKind* arg)
		{
			((::System::Void(*)(::System::Net::Http::Headers::HttpHeaderKind*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddInternal(::System::String* str, Il2CppObject* arg, ::System::Net::Http::Headers::HeaderInfo* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject*, ::System::Net::Http::Headers::HeaderInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_ADDINTERNAL_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean TryAddWithoutValidation(::System::String* str, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_TRYADDWITHOUTVALIDATION_OFFSET))(str, arg, nullptr);
		}

		::System::Net::Http::Headers::HeaderInfo* CheckName(::System::String* str)
		{
			return (return (::System::Net::Http::Headers::HeaderInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_CHECKNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean TryCheckName(::System::String* str, ::System::Net::Http::Headers::HeaderInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Net::Http::Headers::HeaderInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_TRYCHECKNAME_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean Remove(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_REMOVE_OFFSET))(str, nullptr);
		}

		::System::String* GetSingleHeaderString(::System::String* str, Il2CppObject* arg)
		{
			return (return (::System::String*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETSINGLEHEADERSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void AddOrRemove(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_ADDORREMOVE_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* GetAllHeaderValues(HeaderBucket* arg, ::System::Net::Http::Headers::HeaderInfo* arg)
		{
			return (return (Il2CppObject*(*)(HeaderBucket*, ::System::Net::Http::Headers::HeaderInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETALLHEADERVALUES_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::Http::Headers::HttpHeaderKind* GetKnownHeaderKind(::System::String* str)
		{
			return (return (::System::Net::Http::Headers::HttpHeaderKind*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETKNOWNHEADERKIND_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetValue(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETVALUE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetValues(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_GETVALUES_OFFSET))(str, nullptr);
		}

		::System::Void SetValue(::System::String* str, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_SETVALUE_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

