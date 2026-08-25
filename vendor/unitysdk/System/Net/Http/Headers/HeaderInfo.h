#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x981C700)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_CREATESINGLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_CREATEMULTI_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_CREATECOLLECTION_OFFSET UNITYSDK_OFFSET(0x981C740)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_GET_CUSTOMTOSTRING_OFFSET UNITYSDK_OFFSET(0x981C760)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_SET_CUSTOMTOSTRING_OFFSET UNITYSDK_OFFSET(0x981C770)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_GET_SEPARATOR_OFFSET UNITYSDK_OFFSET(0x981C780)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_ADDTOCOLLECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_CREATECOLLECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_TOSTRINGCOLLECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HEADERS_HEADERINFO_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HeaderInfo_TypeDefinitionIndex = 36680;

	class HeaderInfo : public Il2CppObject
	{
	public:
		::System::Boolean AllowsMany; // 0x10
		::System::Net::Http::Headers::HttpHeaderKind* HeaderKind; // 0x14
		::System::String* Name; // 0x18
		Il2CppObject* _CustomToString_k__BackingField; // 0x20

		::System::Void .ctor(::System::String* str, ::System::Net::Http::Headers::HttpHeaderKind* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Net::Http::Headers::HttpHeaderKind*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Net::Http::Headers::HeaderInfo* CreateSingle(::System::String* str, Il2CppObject* arg, ::System::Net::Http::Headers::HttpHeaderKind* arg, Il2CppObject* arg)
		{
			return (return (::System::Net::Http::Headers::HeaderInfo*(*)(::System::String*, Il2CppObject*, ::System::Net::Http::Headers::HttpHeaderKind*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_CREATESINGLE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Net::Http::Headers::HeaderInfo* CreateMulti(::System::String* str, Il2CppObject* arg, ::System::Net::Http::Headers::HttpHeaderKind* arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Net::Http::Headers::HeaderInfo*(*)(::System::String*, Il2CppObject*, ::System::Net::Http::Headers::HttpHeaderKind*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_CREATEMULTI_OFFSET))(str, arg, arg, arg, str, nullptr);
		}

		::System::Object* CreateCollection(::System::Net::Http::Headers::HttpHeaders* arg)
		{
			return (return (::System::Object*(*)(::System::Net::Http::Headers::HttpHeaders*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_CREATECOLLECTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CustomToString()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_GET_CUSTOMTOSTRING_OFFSET))(nullptr);
		}

		::System::Void set_CustomToString(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_SET_CUSTOMTOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* get_Separator()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_GET_SEPARATOR_OFFSET))(nullptr);
		}

		::System::Void AddToCollection(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_ADDTOCOLLECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* CreateCollection(::System::Net::Http::Headers::HttpHeaders* arg, ::System::Net::Http::Headers::HeaderInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Net::Http::Headers::HttpHeaders*, ::System::Net::Http::Headers::HeaderInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_CREATECOLLECTION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ToStringCollection(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_TOSTRINGCOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HEADERINFO_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

	};
}

