#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace Newtonsoft::Json::Serialization { class JsonProperty&; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x94BDC10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x94CC9F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_ADDPROPERTY_OFFSET UNITYSDK_OFFSET(0x94BDE30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETCLOSESTMATCHPROPERTY_OFFSET UNITYSDK_OFFSET(0x94BE110)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_TRYGETPROPERTY_OFFSET UNITYSDK_OFFSET(0x94CCB00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x94CCA10)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonPropertyCollection_TypeDefinitionIndex = 31950;

	class JsonPropertyCollection : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::BaseOutputStream
	{
	public:
		::System::Type* _type; // 0x30
		Il2CppObject* _list; // 0x38

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetKeyForItem(::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			return (return (::System::String*(*)(::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETKEYFORITEM_OFFSET))(arg, nullptr);
		}

		::System::Void AddProperty(::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_ADDPROPERTY_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* GetClosestMatchProperty(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonProperty*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETCLOSESTMATCHPROPERTY_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetProperty(::System::String* str, ::Newtonsoft::Json::Serialization::JsonProperty&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::Newtonsoft::Json::Serialization::JsonProperty&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_TRYGETPROPERTY_OFFSET))(str, arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* GetProperty(::System::String* str, ::System::StringComparison* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonProperty*(*)(::System::String*, ::System::StringComparison*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTYCOLLECTION_GETPROPERTY_OFFSET))(str, arg, nullptr);
		}

	};
}

