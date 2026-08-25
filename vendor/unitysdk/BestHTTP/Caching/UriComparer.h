#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_CACHING_URICOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x921EC0)
#define BESTHTTP_CACHING_URICOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x921ED0)
#define BESTHTTP_CACHING_URICOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x921F50)

namespace BestHTTP::Caching
{
	inline static constexpr unsigned int UriComparer_TypeDefinitionIndex = 23472;

	class UriComparer : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_URICOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Uri* arg, ::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_URICOMPARER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(::System::Uri* arg)
		{
			return (return (::System::Int32(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_URICOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

	};
}

