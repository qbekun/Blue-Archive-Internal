#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Serialization { class JsonSerializerProxy; }
namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace Newtonsoft::Json::Serialization { class JsonPrimitiveContract; }
namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace Newtonsoft::Json::Serialization { class JsonContainerContract; }
namespace Newtonsoft::Json::Serialization { class JsonObjectContract; }
namespace Newtonsoft::Json::Serialization { class JsonStringContract; }
namespace Newtonsoft::Json::Serialization { class JsonContract&; }
namespace Newtonsoft::Json { class DefaultValueHandling; }
namespace Newtonsoft::Json { class PreserveReferencesHandling; }
namespace Newtonsoft::Json { class TypeNameHandling; }
namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json::Serialization { class JsonArrayContract; }
namespace Newtonsoft::Json::Serialization { class JsonISerializableContract; }
namespace Newtonsoft::Json::Serialization { class JsonDynamicContract; }
namespace Newtonsoft::Json::Serialization { class JsonDictionaryContract; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94DB630)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x94DB6C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETINTERNALSERIALIZER_OFFSET UNITYSDK_OFFSET(0x94DC4F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETCONTRACTSAFE_OFFSET UNITYSDK_OFFSET(0x94DB9B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETCONTRACT_OFFSET UNITYSDK_OFFSET(0x94DC660)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x94DC720)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x94DBE30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_RESOLVEISREFERENCE_OFFSET UNITYSDK_OFFSET(0x94DFD40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITEREFERENCE_OFFSET UNITYSDK_OFFSET(0x94DB9C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITEPROPERTY_OFFSET UNITYSDK_OFFSET(0x94DFE00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_CHECKFORCIRCULARREFERENCE_OFFSET UNITYSDK_OFFSET(0x94DFEE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEREFERENCE_OFFSET UNITYSDK_OFFSET(0x94DBBD0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETREFERENCE_OFFSET UNITYSDK_OFFSET(0x94E0340)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_TRYCONVERTTOSTRING_OFFSET UNITYSDK_OFFSET(0x94E0540)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZESTRING_OFFSET UNITYSDK_OFFSET(0x94DE510)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x94E0810)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x94E0A20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x94DD250)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_CALCULATEPROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x94E0DD0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEOBJECTSTART_OFFSET UNITYSDK_OFFSET(0x94E0C30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASCREATORPARAMETER_OFFSET UNITYSDK_OFFSET(0x94E1BE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEREFERENCEIDPROPERTY_OFFSET UNITYSDK_OFFSET(0x94E1C90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITETYPEPROPERTY_OFFSET UNITYSDK_OFFSET(0x94DCAC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x94DFED0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x94DFDF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x94E1ED0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZECONVERTABLE_OFFSET UNITYSDK_OFFSET(0x94DCD30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZELIST_OFFSET UNITYSDK_OFFSET(0x94DDAE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEMULTIDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x94DE2E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEMULTIDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x94E2280)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITESTARTARRAY_OFFSET UNITYSDK_OFFSET(0x94E1EE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEISERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x94DF850)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEDYNAMIC_OFFSET UNITYSDK_OFFSET(0x94DEFB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITEDYNAMICPROPERTY_OFFSET UNITYSDK_OFFSET(0x94E2810)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITETYPE_OFFSET UNITYSDK_OFFSET(0x94DC8A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x94DE590)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x94E1260)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HANDLEERROR_OFFSET UNITYSDK_OFFSET(0x94DC480)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x94E1740)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ISSPECIFIED_OFFSET UNITYSDK_OFFSET(0x94E1990)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerInternalWriter_TypeDefinitionIndex = 31958;

	class JsonSerializerInternalWriter : public Il2CppObject
	{
	public:
		::System::Type* _rootType; // 0x38
		::System::Int32 _rootLevel; // 0x40
		Il2CppObject* _serializeStack; // 0x48

		::System::Void .ctor(::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonSerializerProxy* GetInternalSerializer()
		{
			return (return (::Newtonsoft::Json::Serialization::JsonSerializerProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETINTERNALSERIALIZER_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonContract* GetContractSafe(::System::Object* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonContract*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETCONTRACTSAFE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonContract* GetContract(::System::Object* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonContract*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETCONTRACT_OFFSET))(arg, nullptr);
		}

		::System::Void SerializePrimitive(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::Serialization::JsonPrimitiveContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonPrimitiveContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEPRIMITIVE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SerializeValue(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEVALUE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* ResolveIsReference(::Newtonsoft::Json::Serialization::JsonContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_RESOLVEISREFERENCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ShouldWriteReference(::System::Object* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITEREFERENCE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ShouldWriteProperty(::System::Object* arg, ::Newtonsoft::Json::Serialization::JsonObjectContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITEPROPERTY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CheckForCircularReference(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_CHECKFORCIRCULARREFERENCE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteReference(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEREFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetReference(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETREFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryConvertToString(::System::Object* arg, ::System::Type* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Type*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_TRYCONVERTTOSTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SerializeString(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::Serialization::JsonStringContract* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonStringContract*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZESTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnSerializing(::Newtonsoft::Json::JsonWriter* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ONSERIALIZING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnSerialized(::Newtonsoft::Json::JsonWriter* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ONSERIALIZED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SerializeObject(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::Serialization::JsonObjectContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEOBJECT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CalculatePropertyValues(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContract&* arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContract&*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_CALCULATEPROPERTYVALUES_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteObjectStart(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEOBJECTSTART_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean HasCreatorParameter(::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASCREATORPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteReferenceIdProperty(::Newtonsoft::Json::JsonWriter* arg, ::System::Type* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEREFERENCEIDPROPERTY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteTypeProperty(::Newtonsoft::Json::JsonWriter* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITETYPEPROPERTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasFlag(::Newtonsoft::Json::DefaultValueHandling* arg, ::Newtonsoft::Json::DefaultValueHandling* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::DefaultValueHandling*, ::Newtonsoft::Json::DefaultValueHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasFlag(::Newtonsoft::Json::PreserveReferencesHandling* arg, ::Newtonsoft::Json::PreserveReferencesHandling* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::PreserveReferencesHandling*, ::Newtonsoft::Json::PreserveReferencesHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasFlag(::Newtonsoft::Json::TypeNameHandling* arg, ::Newtonsoft::Json::TypeNameHandling* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::TypeNameHandling*, ::Newtonsoft::Json::TypeNameHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SerializeConvertable(::Newtonsoft::Json::JsonWriter* arg, ::Newtonsoft::Json::JsonConverter* arg, ::System::Object* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::JsonConverter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZECONVERTABLE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SerializeList(::Newtonsoft::Json::JsonWriter* arg, ::System::Collections::IEnumerable* arg, ::Newtonsoft::Json::Serialization::JsonArrayContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Collections::IEnumerable*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZELIST_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SerializeMultidimensionalArray(::Newtonsoft::Json::JsonWriter* arg, ::System::Array* arg, ::Newtonsoft::Json::Serialization::JsonArrayContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Array*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEMULTIDIMENSIONALARRAY_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SerializeMultidimensionalArray(::Newtonsoft::Json::JsonWriter* arg, ::System::Array* arg, ::Newtonsoft::Json::Serialization::JsonArrayContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Array*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEMULTIDIMENSIONALARRAY_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean WriteStartArray(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::Serialization::JsonArrayContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITESTARTARRAY_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SerializeISerializable(::Newtonsoft::Json::JsonWriter* arg, ::System::Runtime::Serialization::ISerializable* arg, ::Newtonsoft::Json::Serialization::JsonISerializableContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Runtime::Serialization::ISerializable*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEISERIALIZABLE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SerializeDynamic(::Newtonsoft::Json::JsonWriter* arg, ::System::Dynamic::IDynamicMetaObjectProvider* arg, ::Newtonsoft::Json::Serialization::JsonDynamicContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Dynamic::IDynamicMetaObjectProvider*, ::Newtonsoft::Json::Serialization::JsonDynamicContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEDYNAMIC_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ShouldWriteDynamicProperty(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITEDYNAMICPROPERTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldWriteType(::Newtonsoft::Json::TypeNameHandling* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::TypeNameHandling*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITETYPE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SerializeDictionary(::Newtonsoft::Json::JsonWriter* arg, ::System::Collections::IDictionary* arg, ::Newtonsoft::Json::Serialization::JsonDictionaryContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::Newtonsoft::Json::Serialization::JsonContainerContract* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Collections::IDictionary*, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEDICTIONARY_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* GetPropertyName(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::Serialization::JsonContract* arg, bool&* arg)
		{
			return (return (::System::String*(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETPROPERTYNAME_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void HandleError(::Newtonsoft::Json::JsonWriter* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HANDLEERROR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSerialize(::Newtonsoft::Json::JsonWriter* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDSERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsSpecified(::Newtonsoft::Json::JsonWriter* arg, ::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ISSPECIFIED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

