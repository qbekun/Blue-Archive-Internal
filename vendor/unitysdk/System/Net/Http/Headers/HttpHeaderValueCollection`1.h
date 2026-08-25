#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_GET_INVALIDVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_ADDINVALIDVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_FIND_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpHeaderValueCollection`1_TypeDefinitionIndex = 36683;

	class HttpHeaderValueCollection`1 : public Il2CppObject
	{
	public:
		Il2CppObject* list; // 0x0
		::System::Net::Http::Headers::HttpHeaders* headers; // 0x0
		::System::Net::Http::Headers::HeaderInfo* headerInfo; // 0x0
		Il2CppObject* invalidValues; // 0x0

		::System::Void .ctor(::System::Net::Http::Headers::HttpHeaders* arg, ::System::Net::Http::Headers::HeaderInfo* arg)
		{
			((::System::Void(*)(::System::Net::Http::Headers::HttpHeaders*, ::System::Net::Http::Headers::HeaderInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_GET_COUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_InvalidValues()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_GET_INVALIDVALUES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_ADDRANGE_OFFSET))(arg, nullptr);
		}

		::System::Void AddInvalidValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_ADDINVALIDVALUE_OFFSET))(str, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* Find(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERVALUECOLLECTION`1_FIND_OFFSET))(arg, nullptr);
		}

	};
}

