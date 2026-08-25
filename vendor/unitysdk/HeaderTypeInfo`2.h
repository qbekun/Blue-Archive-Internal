#pragma once
#include "unitysdk.h"

#define HEADERTYPEINFO`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define HEADERTYPEINFO`2_ADDTOCOLLECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define HEADERTYPEINFO`2_CREATECOLLECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define HEADERTYPEINFO`2_TOSTRINGCOLLECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define HEADERTYPEINFO`2_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int HeaderTypeInfo`2_TypeDefinitionIndex = 36678;

	class HeaderTypeInfo`2 : public Il2CppObject
	{
	public:
		Il2CppObject* parser; // 0x0

		::System::Void .ctor(::System::String* str, Il2CppObject* arg, ::System::Net::Http::Headers::HttpHeaderKind* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Net::Http::Headers::HttpHeaderKind*, ::PVOID))((::PBYTE)hIl2Cpp + HEADERTYPEINFO`2_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void AddToCollection(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + HEADERTYPEINFO`2_ADDTOCOLLECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* CreateCollection(::System::Net::Http::Headers::HttpHeaders* arg, ::System::Net::Http::Headers::HeaderInfo* arg)
		{
			return (return (::System::Object*(*)(::System::Net::Http::Headers::HttpHeaders*, ::System::Net::Http::Headers::HeaderInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HEADERTYPEINFO`2_CREATECOLLECTION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ToStringCollection(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + HEADERTYPEINFO`2_TOSTRINGCOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + HEADERTYPEINFO`2_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

	};

