#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class JsonSerializerInternalReader; }
namespace Newtonsoft::Json::Serialization { class JsonSerializerInternalWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json::Serialization { class IReferenceResolver; }
namespace Newtonsoft::Json::Serialization { class ITraceWriter; }
namespace Newtonsoft::Json { class JsonConverterCollection; }
namespace Newtonsoft::Json { class DefaultValueHandling; }
namespace Newtonsoft::Json::Serialization { class IContractResolver; }
namespace Newtonsoft::Json { class MissingMemberHandling; }
namespace Newtonsoft::Json { class NullValueHandling; }
namespace Newtonsoft::Json { class ObjectCreationHandling; }
namespace Newtonsoft::Json { class ReferenceLoopHandling; }
namespace Newtonsoft::Json { class PreserveReferencesHandling; }
namespace Newtonsoft::Json { class TypeNameHandling; }
namespace Newtonsoft::Json { class MetadataPropertyHandling; }
namespace Newtonsoft::Json { class TypeNameAssemblyFormatHandling; }
namespace Newtonsoft::Json { class ConstructorHandling; }
namespace Newtonsoft::Json::Serialization { class ISerializationBinder; }
namespace Newtonsoft::Json { class Formatting; }
namespace Newtonsoft::Json { class DateFormatHandling; }
namespace Newtonsoft::Json { class DateTimeZoneHandling; }
namespace Newtonsoft::Json { class DateParseHandling; }
namespace Newtonsoft::Json { class FloatFormatHandling; }
namespace Newtonsoft::Json { class FloatParseHandling; }
namespace Newtonsoft::Json { class StringEscapeHandling; }
namespace Newtonsoft::Json::Serialization { class JsonSerializerInternalBase; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonWriter; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_ADD_ERROR_OFFSET UNITYSDK_OFFSET(0x94E28B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_REMOVE_ERROR_OFFSET UNITYSDK_OFFSET(0x94E28E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_REFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x94E2910)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_REFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x94E2940)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x94E2970)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x94E29A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x94E29D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x94E2A00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONVERTERS_OFFSET UNITYSDK_OFFSET(0x94E2A30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2A60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2A90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x94E2AC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x94E2AF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2B20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2B50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2B80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2BB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2BE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2C10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2C40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2C70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_PRESERVEREFERENCESHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2CA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_PRESERVEREFERENCESHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2CD0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2D00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2D30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2D60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2D90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_TYPENAMEASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x94E2DC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TYPENAMEASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x94E2DF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_TYPENAMEASSEMBLYFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2E20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TYPENAMEASSEMBLYFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2E50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONSTRUCTORHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2E80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CONSTRUCTORHANDLING_OFFSET UNITYSDK_OFFSET(0x94E2EB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_BINDER_OFFSET UNITYSDK_OFFSET(0x94E2EE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_BINDER_OFFSET UNITYSDK_OFFSET(0x94E2F10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_SERIALIZATIONBINDER_OFFSET UNITYSDK_OFFSET(0x94E2F40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_SERIALIZATIONBINDER_OFFSET UNITYSDK_OFFSET(0x94E2F70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x94E2FA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x94E2FE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x94E3020)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x94E3050)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x94E3080)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x94E30B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x94E30E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x94E3110)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DATEPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x94E3140)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DATEPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x94E3170)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x94E31A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x94E31D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_FLOATPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x94E3200)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_FLOATPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x94E3230)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x94E3260)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x94E3290)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x94E32C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x94E32F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x94E3320)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CULTURE_OFFSET UNITYSDK_OFFSET(0x94E3350)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x94E3380)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x94E33B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x94E33E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x94E3410)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GETINTERNALSERIALIZER_OFFSET UNITYSDK_OFFSET(0x94E3440)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E3460)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94DC5D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_DESERIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x94E34F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_POPULATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x94E3540)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SERIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x94E3580)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerProxy_TypeDefinitionIndex = 31959;

	class JsonSerializerProxy : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* _serializerReader; // 0xE0
		::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* _serializerWriter; // 0xE8
		::Newtonsoft::Json::JsonSerializer* _serializer; // 0xF0

		::System::Void add_Error(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_ADD_ERROR_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Error(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_REMOVE_ERROR_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::IReferenceResolver* get_ReferenceResolver()
		{
			return (return (::Newtonsoft::Json::Serialization::IReferenceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_REFERENCERESOLVER_OFFSET))(nullptr);
		}

		::System::Void set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::IReferenceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_REFERENCERESOLVER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::ITraceWriter* get_TraceWriter()
		{
			return (return (::Newtonsoft::Json::Serialization::ITraceWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_TRACEWRITER_OFFSET))(nullptr);
		}

		::System::Void set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::ITraceWriter*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TRACEWRITER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEqualityComparer* get_EqualityComparer()
		{
			return (return (::System::Collections::IEqualityComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_EQUALITYCOMPARER_OFFSET))(nullptr);
		}

		::System::Void set_EqualityComparer(::System::Collections::IEqualityComparer* arg)
		{
			((::System::Void(*)(::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_EQUALITYCOMPARER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonConverterCollection* get_Converters()
		{
			return (return (::Newtonsoft::Json::JsonConverterCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONVERTERS_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::DefaultValueHandling* get_DefaultValueHandling()
		{
			return (return (::Newtonsoft::Json::DefaultValueHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DEFAULTVALUEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DefaultValueHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DEFAULTVALUEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver()
		{
			return (return (::Newtonsoft::Json::Serialization::IContractResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONTRACTRESOLVER_OFFSET))(nullptr);
		}

		::System::Void set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::IContractResolver*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CONTRACTRESOLVER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::MissingMemberHandling* get_MissingMemberHandling()
		{
			return (return (::Newtonsoft::Json::MissingMemberHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_MISSINGMEMBERHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::MissingMemberHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_MISSINGMEMBERHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::NullValueHandling* get_NullValueHandling()
		{
			return (return (::Newtonsoft::Json::NullValueHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_NULLVALUEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::NullValueHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_NULLVALUEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::ObjectCreationHandling* get_ObjectCreationHandling()
		{
			return (return (::Newtonsoft::Json::ObjectCreationHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_OBJECTCREATIONHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::ObjectCreationHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_OBJECTCREATIONHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::ReferenceLoopHandling* get_ReferenceLoopHandling()
		{
			return (return (::Newtonsoft::Json::ReferenceLoopHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_REFERENCELOOPHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::ReferenceLoopHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_REFERENCELOOPHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::PreserveReferencesHandling* get_PreserveReferencesHandling()
		{
			return (return (::Newtonsoft::Json::PreserveReferencesHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_PRESERVEREFERENCESHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::PreserveReferencesHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_PRESERVEREFERENCESHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::TypeNameHandling* get_TypeNameHandling()
		{
			return (return (::Newtonsoft::Json::TypeNameHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_TYPENAMEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::TypeNameHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TYPENAMEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::MetadataPropertyHandling* get_MetadataPropertyHandling()
		{
			return (return (::Newtonsoft::Json::MetadataPropertyHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_METADATAPROPERTYHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::MetadataPropertyHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_METADATAPROPERTYHANDLING_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle* get_TypeNameAssemblyFormat()
		{
			return (return (::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_TYPENAMEASSEMBLYFORMAT_OFFSET))(nullptr);
		}

		::System::Void set_TypeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TYPENAMEASSEMBLYFORMAT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::TypeNameAssemblyFormatHandling* get_TypeNameAssemblyFormatHandling()
		{
			return (return (::Newtonsoft::Json::TypeNameAssemblyFormatHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_TYPENAMEASSEMBLYFORMATHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_TypeNameAssemblyFormatHandling(::Newtonsoft::Json::TypeNameAssemblyFormatHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::TypeNameAssemblyFormatHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_TYPENAMEASSEMBLYFORMATHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::ConstructorHandling* get_ConstructorHandling()
		{
			return (return (::Newtonsoft::Json::ConstructorHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONSTRUCTORHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::ConstructorHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CONSTRUCTORHANDLING_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::SerializationBinder* get_Binder()
		{
			return (return (::System::Runtime::Serialization::SerializationBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_BINDER_OFFSET))(nullptr);
		}

		::System::Void set_Binder(::System::Runtime::Serialization::SerializationBinder* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationBinder*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_BINDER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::ISerializationBinder* get_SerializationBinder()
		{
			return (return (::Newtonsoft::Json::Serialization::ISerializationBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_SERIALIZATIONBINDER_OFFSET))(nullptr);
		}

		::System::Void set_SerializationBinder(::Newtonsoft::Json::Serialization::ISerializationBinder* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::ISerializationBinder*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_SERIALIZATIONBINDER_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::StreamingContext* get_Context()
		{
			return (return (::System::Runtime::Serialization::StreamingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_Context(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Formatting* get_Formatting()
		{
			return (return (::Newtonsoft::Json::Formatting*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_FORMATTING_OFFSET))(nullptr);
		}

		::System::Void set_Formatting(::Newtonsoft::Json::Formatting* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Formatting*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_FORMATTING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DateFormatHandling* get_DateFormatHandling()
		{
			return (return (::Newtonsoft::Json::DateFormatHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DATEFORMATHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DateFormatHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DATEFORMATHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DateTimeZoneHandling* get_DateTimeZoneHandling()
		{
			return (return (::Newtonsoft::Json::DateTimeZoneHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DATETIMEZONEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DateTimeZoneHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DATETIMEZONEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DateParseHandling* get_DateParseHandling()
		{
			return (return (::Newtonsoft::Json::DateParseHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DATEPARSEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DateParseHandling(::Newtonsoft::Json::DateParseHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DateParseHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DATEPARSEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::FloatFormatHandling* get_FloatFormatHandling()
		{
			return (return (::Newtonsoft::Json::FloatFormatHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_FLOATFORMATHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::FloatFormatHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_FLOATFORMATHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::FloatParseHandling* get_FloatParseHandling()
		{
			return (return (::Newtonsoft::Json::FloatParseHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_FLOATPARSEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::FloatParseHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_FLOATPARSEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::StringEscapeHandling* get_StringEscapeHandling()
		{
			return (return (::Newtonsoft::Json::StringEscapeHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_STRINGESCAPEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::StringEscapeHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_STRINGESCAPEHANDLING_OFFSET))(arg, nullptr);
		}

		::System::String* get_DateFormatString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_DATEFORMATSTRING_OFFSET))(nullptr);
		}

		::System::Void set_DateFormatString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_DATEFORMATSTRING_OFFSET))(str, nullptr);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return (return (::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CULTURE_OFFSET))(nullptr);
		}

		::System::Void set_Culture(::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CULTURE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MaxDepth()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_MAXDEPTH_OFFSET))(nullptr);
		}

		::System::Void set_MaxDepth(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_MAXDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CheckAdditionalContent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GET_CHECKADDITIONALCONTENT_OFFSET))(nullptr);
		}

		::System::Void set_CheckAdditionalContent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SET_CHECKADDITIONALCONTENT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonSerializerInternalBase* GetInternalSerializer()
		{
			return (return (::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_GETINTERNALSERIALIZER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* DeserializeInternal(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_DESERIALIZEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PopulateInternal(::Newtonsoft::Json::JsonReader* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_POPULATEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SerializeInternal(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERPROXY_SERIALIZEINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

