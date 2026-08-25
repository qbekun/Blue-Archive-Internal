#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_COOKIECONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A596A0)
#define SYSTEM_NET_COOKIECONTAINER_ADDREMOVEDOMAIN_OFFSET UNITYSDK_OFFSET(0x9A597B0)
#define SYSTEM_NET_COOKIECONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x9A59910)
#define SYSTEM_NET_COOKIECONTAINER_AGECOOKIES_OFFSET UNITYSDK_OFFSET(0x9A5AA40)
#define SYSTEM_NET_COOKIECONTAINER_EXPIRECOLLECTION_OFFSET UNITYSDK_OFFSET(0x9A5CDF0)
#define SYSTEM_NET_COOKIECONTAINER_ISLOCALDOMAIN_OFFSET UNITYSDK_OFFSET(0x9A5CFE0)
#define SYSTEM_NET_COOKIECONTAINER_COOKIECUTTER_OFFSET UNITYSDK_OFFSET(0x9A5D4C0)
#define SYSTEM_NET_COOKIECONTAINER_INTERNALGETCOOKIES_OFFSET UNITYSDK_OFFSET(0x9A5DC90)
#define SYSTEM_NET_COOKIECONTAINER_BUILDCOOKIECOLLECTIONFROMDOMAINMATCHES_OFFSET UNITYSDK_OFFSET(0x9A5E1B0)
#define SYSTEM_NET_COOKIECONTAINER_MERGEUPDATECOLLECTIONS_OFFSET UNITYSDK_OFFSET(0x9A5EC00)
#define SYSTEM_NET_COOKIECONTAINER_GETCOOKIEHEADER_OFFSET UNITYSDK_OFFSET(0x9A5EE50)
#define SYSTEM_NET_COOKIECONTAINER_GETCOOKIEHEADER_OFFSET UNITYSDK_OFFSET(0x9A5EF10)
#define SYSTEM_NET_COOKIECONTAINER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A5F2F0)

namespace System::Net
{
	inline static constexpr unsigned int CookieContainer_TypeDefinitionIndex = 29737;

	class CookieContainer : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* HeaderInfo; // 0x0
		::System::Collections::Hashtable* m_domainTable; // 0x10
		::System::Int32 m_maxCookieSize; // 0x18
		::System::Int32 m_maxCookies; // 0x1C
		::System::Int32 m_maxCookiesPerDomain; // 0x20
		::System::Int32 m_count; // 0x24
		::System::String* m_fqdnMyDomain; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddRemoveDomain(::System::String* str, ::System::Net::PathList* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Net::PathList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_ADDREMOVEDOMAIN_OFFSET))(str, arg, nullptr);
		}

		::System::Void Add(::System::Net::Cookie* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Net::Cookie*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AgeCookies(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_AGECOOKIES_OFFSET))(str, nullptr);
		}

		::System::Int32 ExpireCollection(::System::Net::CookieCollection* arg)
		{
			return (return (::System::Int32(*)(::System::Net::CookieCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_EXPIRECOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLocalDomain(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_ISLOCALDOMAIN_OFFSET))(str, nullptr);
		}

		::System::Net::CookieCollection* CookieCutter(::System::Uri* arg, ::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Net::CookieCollection*(*)(::System::Uri*, ::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_COOKIECUTTER_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Net::CookieCollection* InternalGetCookies(::System::Uri* arg)
		{
			return (return (::System::Net::CookieCollection*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_INTERNALGETCOOKIES_OFFSET))(arg, nullptr);
		}

		::System::Void BuildCookieCollectionFromDomainMatches(::System::Uri* arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Net::CookieCollection* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::Boolean, ::System::Int32, ::System::Net::CookieCollection*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_BUILDCOOKIECOLLECTIONFROMDOMAINMATCHES_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MergeUpdateCollections(::System::Net::CookieCollection* arg, ::System::Net::CookieCollection* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Net::CookieCollection*, ::System::Net::CookieCollection*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_MERGEUPDATECOLLECTIONS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* GetCookieHeader(::System::Uri* arg)
		{
			return (return (::System::String*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_GETCOOKIEHEADER_OFFSET))(arg, nullptr);
		}

		::System::String* GetCookieHeader(::System::Uri* arg, ::System::String&* arg)
		{
			return (return (::System::String*(*)(::System::Uri*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_GETCOOKIEHEADER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIECONTAINER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

