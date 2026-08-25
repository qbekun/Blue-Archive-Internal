#pragma once
#include "unitysdk.h"

#define ATTRINFO_SET_OFFSET UNITYSDK_OFFSET(0x9849840)
#define ATTRINFO_SET_OFFSET UNITYSDK_OFFSET(0x9849F30)
#define ATTRINFO_GETLOCALNAMEANDNAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x984A990)
#define ATTRINFO_GETLOCALNAMEANDNAMESPACEURIANDHASH_OFFSET UNITYSDK_OFFSET(0x984AA70)
#define ATTRINFO_MATCHNS_OFFSET UNITYSDK_OFFSET(0x984A9D0)
#define ATTRINFO_MATCHHASHNS_OFFSET UNITYSDK_OFFSET(0x984AAE0)
#define ATTRINFO_ADJUSTPOSITION_OFFSET UNITYSDK_OFFSET(0x9848620)

	inline static constexpr unsigned int AttrInfo_TypeDefinitionIndex = 27619;

	class AttrInfo : public Il2CppObject
	{
	public:
		QName* name; // 0x10
		::System::String* val; // 0x28
		::System::Int32 contentPos; // 0x30
		::System::Int32 hashCode; // 0x34
		::System::Int32 prevHash; // 0x38

		::System::Void Set(QName* arg, ::System::String* str)
		{
			((::System::Void(*)(QName*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRINFO_SET_OFFSET))(arg, str, nullptr);
		}

		::System::Void Set(QName* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(QName*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ATTRINFO_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetLocalnameAndNamespaceUri(::System::String&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRINFO_GETLOCALNAMEANDNAMESPACEURI_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetLocalnameAndNamespaceUriAndHash(::System::Xml::SecureStringHasher* arg, ::System::String&* arg, ::System::String&* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::SecureStringHasher*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRINFO_GETLOCALNAMEANDNAMESPACEURIANDHASH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MatchNS(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRINFO_MATCHNS_OFFSET))(str, str, nullptr);
		}

		::System::Boolean MatchHashNS(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRINFO_MATCHHASHNS_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void AdjustPosition(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ATTRINFO_ADJUSTPOSITION_OFFSET))(arg, nullptr);
		}

	};

