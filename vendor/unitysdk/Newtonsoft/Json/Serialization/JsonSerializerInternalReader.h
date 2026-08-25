#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace Newtonsoft::Json::Serialization { class JsonSerializerProxy; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace Newtonsoft::Json::Serialization { class JsonContainerContract; }
namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json::Linq { class JTokenReader; }
namespace Newtonsoft::Json::Serialization { class JsonContract&; }
namespace Newtonsoft::Json::Serialization { class JsonArrayContract; }
namespace Newtonsoft::Json { class JsonConverter&; }
namespace Newtonsoft::Json { class DefaultValueHandling; }
namespace Newtonsoft::Json::Serialization { class JsonObjectContract; }
namespace Newtonsoft::Json::Serialization { class JsonDictionaryContract; }
namespace Newtonsoft::Json::Serialization { class JsonISerializableContract; }
namespace Newtonsoft::Json::Serialization { class JsonDynamicContract; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94CD310)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATE_OFFSET UNITYSDK_OFFSET(0x94CD320)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETCONTRACTSAFE_OFFSET UNITYSDK_OFFSET(0x94CFC50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETCONTRACT_OFFSET UNITYSDK_OFFSET(0x94CFCC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94CFD70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETINTERNALSERIALIZER_OFFSET UNITYSDK_OFFSET(0x94D0BB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEJTOKEN_OFFSET UNITYSDK_OFFSET(0x94D0C30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEJOBJECT_OFFSET UNITYSDK_OFFSET(0x94D10A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x94D06C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_COERCEEMPTYSTRINGTONULL_OFFSET UNITYSDK_OFFSET(0x94D2E30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETEXPECTEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x94D2F40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x94D01C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEOBJECT_OFFSET UNITYSDK_OFFSET(0x94D1530)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READMETADATAPROPERTIESTOKEN_OFFSET UNITYSDK_OFFSET(0x94D3000)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READMETADATAPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94D37B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_RESOLVETYPENAME_OFFSET UNITYSDK_OFFSET(0x94D53A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENSUREARRAYCONTRACT_OFFSET UNITYSDK_OFFSET(0x94D59D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATELIST_OFFSET UNITYSDK_OFFSET(0x94D2050)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HASNODEFINEDTYPE_OFFSET UNITYSDK_OFFSET(0x94D3E20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENSURETYPE_OFFSET UNITYSDK_OFFSET(0x94D2860)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x94D66B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CALCULATEPROPERTYDETAILS_OFFSET UNITYSDK_OFFSET(0x94D6CD0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ADDREFERENCE_OFFSET UNITYSDK_OFFSET(0x94D7590)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x94D7580)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SHOULDSETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x94D7420)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWLIST_OFFSET UNITYSDK_OFFSET(0x94D5B40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWDICTIONARY_OFFSET UNITYSDK_OFFSET(0x94D41B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x94D7950)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x94D7B80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x94CDFE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEMULTIDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x94D5E40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_THROWUNEXPECTEDENDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x94D7DB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATELIST_OFFSET UNITYSDK_OFFSET(0x94CD8B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEISERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x94D4CE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEISERIALIZABLEITEM_OFFSET UNITYSDK_OFFSET(0x94CB200)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEDYNAMIC_OFFSET UNITYSDK_OFFSET(0x94D4450)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEOBJECTUSINGCREATORWITHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x94D7F30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_DESERIALIZECONVERTABLE_OFFSET UNITYSDK_OFFSET(0x94D0260)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_RESOLVEPROPERTYANDCREATORVALUES_OFFSET UNITYSDK_OFFSET(0x94D9F90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWOBJECT_OFFSET UNITYSDK_OFFSET(0x94D3EF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEOBJECT_OFFSET UNITYSDK_OFFSET(0x94CEEE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SHOULDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94DB180)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CHECKPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x94D1430)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETEXTENSIONDATA_OFFSET UNITYSDK_OFFSET(0x94DAF50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READEXTENSIONDATAVALUE_OFFSET UNITYSDK_OFFSET(0x94DAEA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENDPROCESSPROPERTY_OFFSET UNITYSDK_OFFSET(0x94DA9E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETPROPERTYPRESENCE_OFFSET UNITYSDK_OFFSET(0x94DB3D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HANDLEERROR_OFFSET UNITYSDK_OFFSET(0x94D0B40)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerInternalReader_TypeDefinitionIndex = 31957;

	class JsonSerializerInternalReader : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Populate(::Newtonsoft::Json::JsonReader* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATE_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonContract* GetContractSafe(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETCONTRACTSAFE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonContract* GetContract(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETCONTRACT_OFFSET))(arg, nullptr);
		}

		::System::Object* Deserialize(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_DESERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonSerializerProxy* GetInternalSerializer()
		{
			return (return (::Newtonsoft::Json::Serialization::JsonSerializerProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETINTERNALSERIALIZER_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* CreateJToken(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEJTOKEN_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* CreateJObject(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEJOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Object* CreateValueInternal(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEVALUEINTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CoerceEmptyStringToNull(::System::Type* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_COERCEEMPTYSTRINGTONULL_OFFSET))(arg, arg, str, nullptr);
		}

		::System::String* GetExpectedDescription(::Newtonsoft::Json::Serialization::JsonContract* arg)
		{
			return (return (::System::String*(*)(::Newtonsoft::Json::Serialization::JsonContract*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETEXPECTEDDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonConverter* GetConverter(::Newtonsoft::Json::Serialization::JsonContract* arg, ::Newtonsoft::Json::JsonConverter* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			return (return (::Newtonsoft::Json::JsonConverter*(*)(::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::JsonConverter*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETCONVERTER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* CreateObject(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEOBJECT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ReadMetadataPropertiesToken(::Newtonsoft::Json::Linq::JTokenReader* arg, ::System::Type&* arg, ::Newtonsoft::Json::Serialization::JsonContract&* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::Object* arg, ::System::Object&* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JTokenReader*, ::System::Type&*, ::Newtonsoft::Json::Serialization::JsonContract&*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::System::Object&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READMETADATAPROPERTIESTOKEN_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ReadMetadataProperties(::Newtonsoft::Json::JsonReader* arg, ::System::Type&* arg, ::Newtonsoft::Json::Serialization::JsonContract&* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::Object* arg, ::System::Object&* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::JsonReader*, ::System::Type&*, ::Newtonsoft::Json::Serialization::JsonContract&*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::System::Object&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READMETADATAPROPERTIES_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ResolveTypeName(::Newtonsoft::Json::JsonReader* arg, ::System::Type&* arg, ::Newtonsoft::Json::Serialization::JsonContract&* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::String* str)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::System::Type&*, ::Newtonsoft::Json::Serialization::JsonContract&*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_RESOLVETYPENAME_OFFSET))(arg, arg, arg, arg, arg, arg, str, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonArrayContract* EnsureArrayContract(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonArrayContract*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENSUREARRAYCONTRACT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* CreateList(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::Object* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATELIST_OFFSET))(arg, arg, arg, arg, arg, str, nullptr);
		}

		::System::Boolean HasNoDefinedType(::Newtonsoft::Json::Serialization::JsonContract* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Serialization::JsonContract*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HASNODEFINEDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Object* EnsureType(::Newtonsoft::Json::JsonReader* arg, ::System::Object* arg, ::System::Globalization::CultureInfo* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Object*, ::System::Globalization::CultureInfo*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENSURETYPE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean SetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::JsonConverter* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::JsonReader* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonConverter*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETPROPERTYVALUE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CalculatePropertyDetails(::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::JsonConverter&* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::JsonReader* arg, ::System::Object* arg, bool&* arg, ::System::Object&* arg, ::Newtonsoft::Json::Serialization::JsonContract&* arg, bool&* arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonConverter&*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::System::Object*, bool&*, ::System::Object&*, ::Newtonsoft::Json::Serialization::JsonContract&*, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CALCULATEPROPERTYDETAILS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AddReference(::Newtonsoft::Json::JsonReader* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ADDREFERENCE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean HasFlag(::Newtonsoft::Json::DefaultValueHandling* arg, ::Newtonsoft::Json::DefaultValueHandling* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::DefaultValueHandling*, ::Newtonsoft::Json::DefaultValueHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HASFLAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonObjectContract* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SHOULDSETPROPERTYVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Collections::IList* CreateNewList(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonArrayContract* arg, bool&* arg)
		{
			return (return (::System::Collections::IList*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWLIST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Collections::IDictionary* CreateNewDictionary(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonDictionaryContract* arg, bool&* arg)
		{
			return (return (::System::Collections::IDictionary*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWDICTIONARY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnDeserializing(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ONDESERIALIZING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnDeserialized(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ONDESERIALIZED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* PopulateDictionary(::System::Collections::IDictionary* arg, ::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonDictionaryContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::System::Collections::IDictionary*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEDICTIONARY_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Object* PopulateMultidimensionalArray(::System::Collections::IList* arg, ::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonArrayContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::System::Collections::IList*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEMULTIDIMENSIONALARRAY_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Void ThrowUnexpectedEndException(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_THROWUNEXPECTEDENDEXCEPTION_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Object* PopulateList(::System::Collections::IList* arg, ::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonArrayContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::System::Collections::IList*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATELIST_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Object* CreateISerializable(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonISerializableContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEISERIALIZABLE_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Object* CreateISerializableItem(::Newtonsoft::Json::Linq::JToken* arg, ::System::Type* arg, ::Newtonsoft::Json::Serialization::JsonISerializableContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::Linq::JToken*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEISERIALIZABLEITEM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* CreateDynamic(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonDynamicContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonDynamicContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEDYNAMIC_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Object* CreateObjectUsingCreatorWithParameters(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonObjectContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, Il2CppObject* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEOBJECTUSINGCREATORWITHPARAMETERS_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Object* DeserializeConvertable(::Newtonsoft::Json::JsonConverter* arg, ::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonConverter*, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_DESERIALIZECONVERTABLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* ResolvePropertyAndCreatorValues(::Newtonsoft::Json::Serialization::JsonObjectContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_RESOLVEPROPERTYANDCREATORVALUES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* CreateNewObject(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonObjectContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::String* str, bool&* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWOBJECT_OFFSET))(arg, arg, arg, arg, str, arg, nullptr);
		}

		::System::Object* PopulateObject(::System::Object* arg, ::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonObjectContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::System::Object*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEOBJECT_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Boolean ShouldDeserialize(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SHOULDDESERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CheckPropertyName(::Newtonsoft::Json::JsonReader* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::JsonReader*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CHECKPROPERTYNAME_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetExtensionData(::Newtonsoft::Json::Serialization::JsonObjectContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::JsonReader* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETEXTENSIONDATA_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::System::Object* ReadExtensionDataValue(::Newtonsoft::Json::Serialization::JsonObjectContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READEXTENSIONDATAVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndProcessProperty(::System::Object* arg, ::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonObjectContract* arg, ::System::Int32 arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, PropertyPresence* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::System::Int32, ::Newtonsoft::Json::Serialization::JsonProperty*, PropertyPresence*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENDPROCESSPROPERTY_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SetPropertyPresence(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonProperty*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETPROPERTYPRESENCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void HandleError(::Newtonsoft::Json::JsonReader* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HANDLEERROR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

