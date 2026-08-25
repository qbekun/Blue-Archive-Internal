#pragma once
#include "unitysdk.h"

#define PROPERTYINFOCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10391C0)
#define PROPERTYINFOCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x1039200)
#define PROPERTYINFOCOLLECTION_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1039230)

	inline static constexpr unsigned int PropertyInfoCollection_TypeDefinitionIndex = 12839;

	class PropertyInfoCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::MemoryOutputStream
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPERTYINFOCOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::String* GetKeyForItem(::System::Reflection::PropertyInfo* arg)
		{
			return ((::System::String*(*)(::System::Reflection::PropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYINFOCOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, ::System::Reflection::PropertyInfo&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Reflection::PropertyInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + PROPERTYINFOCOLLECTION_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

	};

