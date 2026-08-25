#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class TypeNameHandling; }
namespace Newtonsoft::Json { class TypeNameAssemblyFormatHandling; }
namespace Newtonsoft::Json { class PreserveReferencesHandling; }
namespace Newtonsoft::Json { class ReferenceLoopHandling; }
namespace Newtonsoft::Json { class MissingMemberHandling; }
namespace Newtonsoft::Json { class ObjectCreationHandling; }
namespace Newtonsoft::Json { class NullValueHandling; }
namespace Newtonsoft::Json { class DefaultValueHandling; }
namespace Newtonsoft::Json { class ConstructorHandling; }
namespace Newtonsoft::Json { class MetadataPropertyHandling; }
namespace Newtonsoft::Json { class JsonConverterCollection; }
namespace Newtonsoft::Json::Serialization { class IContractResolver; }
namespace Newtonsoft::Json::Serialization { class ITraceWriter; }
namespace Newtonsoft::Json::Serialization { class ISerializationBinder; }
namespace Newtonsoft::Json::Serialization { class IReferenceResolver; }
namespace Newtonsoft::Json { class Formatting; }
namespace Newtonsoft::Json { class DateFormatHandling; }
namespace Newtonsoft::Json { class DateTimeZoneHandling; }
namespace Newtonsoft::Json { class DateParseHandling; }
namespace Newtonsoft::Json { class FloatParseHandling; }
namespace Newtonsoft::Json { class FloatFormatHandling; }
namespace Newtonsoft::Json { class StringEscapeHandling; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonSerializerSettings; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Serialization { class TraceJsonReader; }
namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json::Serialization { class ErrorEventArgs; }

#define NEWTONSOFT_JSON_JSONSERIALIZER_ADD_ERROR_OFFSET UNITYSDK_OFFSET(0x94584C0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_REMOVE_ERROR_OFFSET UNITYSDK_OFFSET(0x9458560)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_REFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x9458600)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_REFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x94586E0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_BINDER_OFFSET UNITYSDK_OFFSET(0x9458770)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_BINDER_OFFSET UNITYSDK_OFFSET(0x9458870)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_SERIALIZATIONBINDER_OFFSET UNITYSDK_OFFSET(0x9458970)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_SERIALIZATIONBINDER_OFFSET UNITYSDK_OFFSET(0x9458980)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x9458A10)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x9458A20)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x9458A30)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x9458A40)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x9458A50)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x9458A60)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_TYPENAMEASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x9458AD0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x9458AE0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_TYPENAMEASSEMBLYFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x9458B50)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEASSEMBLYFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x9458B60)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_PRESERVEREFERENCESHANDLING_OFFSET UNITYSDK_OFFSET(0x9458BD0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_PRESERVEREFERENCESHANDLING_OFFSET UNITYSDK_OFFSET(0x9458BE0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x9458C50)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x9458C60)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x9458CD0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x9458CE0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x9458D50)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x9458D60)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x9458DD0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x9458DE0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x9458E50)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x9458E60)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONSTRUCTORHANDLING_OFFSET UNITYSDK_OFFSET(0x9458ED0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONSTRUCTORHANDLING_OFFSET UNITYSDK_OFFSET(0x9458EE0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x9458F50)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x9458F60)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONVERTERS_OFFSET UNITYSDK_OFFSET(0x9458FD0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x9459060)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x9459070)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x9459150)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x9459160)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x9459180)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x94591B0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x9459210)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x9459240)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x94592A0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x9459300)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_DATEPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x9459360)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_DATEPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x94593C0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_FLOATPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x9459420)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_FLOATPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x9459450)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x94594B0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x94594E0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x9459540)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x9459570)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x94595D0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x9459620)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x9459650)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CULTURE_OFFSET UNITYSDK_OFFSET(0x94596C0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x94596E0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x94596F0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x94597B0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x94597F0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_ISCHECKADDITIONALCONTENTSET_OFFSET UNITYSDK_OFFSET(0x944E340)
#define NEWTONSOFT_JSON_JSONSERIALIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9459850)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATE_OFFSET UNITYSDK_OFFSET(0x94599C0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATE_OFFSET UNITYSDK_OFFSET(0x9459A10)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0x945A360)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0x944DC10)
#define NEWTONSOFT_JSON_JSONSERIALIZER_APPLYSERIALIZERSETTINGS_OFFSET UNITYSDK_OFFSET(0x9459A80)
#define NEWTONSOFT_JSON_JSONSERIALIZER_POPULATE_OFFSET UNITYSDK_OFFSET(0x945A730)
#define NEWTONSOFT_JSON_JSONSERIALIZER_POPULATE_OFFSET UNITYSDK_OFFSET(0x944E810)
#define NEWTONSOFT_JSON_JSONSERIALIZER_POPULATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x945A7B0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x945B420)
#define NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x945B440)
#define NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x944E4E0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x945B4C0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SETUPREADER_OFFSET UNITYSDK_OFFSET(0x945AA90)
#define NEWTONSOFT_JSON_JSONSERIALIZER_RESETREADER_OFFSET UNITYSDK_OFFSET(0x945B0E0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x945B7D0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x944DEE0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x945B890)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x945B860)
#define NEWTONSOFT_JSON_JSONSERIALIZER_CREATETRACEJSONREADER_OFFSET UNITYSDK_OFFSET(0x945B060)
#define NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x945B920)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GETREFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x9458670)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GETMATCHINGCONVERTER_OFFSET UNITYSDK_OFFSET(0x945BF90)
#define NEWTONSOFT_JSON_JSONSERIALIZER_GETMATCHINGCONVERTER_OFFSET UNITYSDK_OFFSET(0x945BFA0)
#define NEWTONSOFT_JSON_JSONSERIALIZER_ONERROR_OFFSET UNITYSDK_OFFSET(0x945C110)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonSerializer_TypeDefinitionIndex = 31708;

	class JsonSerializer : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::TypeNameHandling* _typeNameHandling; // 0x10
		::Newtonsoft::Json::TypeNameAssemblyFormatHandling* _typeNameAssemblyFormatHandling; // 0x14
		::Newtonsoft::Json::PreserveReferencesHandling* _preserveReferencesHandling; // 0x18
		::Newtonsoft::Json::ReferenceLoopHandling* _referenceLoopHandling; // 0x1C
		::Newtonsoft::Json::MissingMemberHandling* _missingMemberHandling; // 0x20
		::Newtonsoft::Json::ObjectCreationHandling* _objectCreationHandling; // 0x24
		::Newtonsoft::Json::NullValueHandling* _nullValueHandling; // 0x28
		::Newtonsoft::Json::DefaultValueHandling* _defaultValueHandling; // 0x2C
		::Newtonsoft::Json::ConstructorHandling* _constructorHandling; // 0x30
		::Newtonsoft::Json::MetadataPropertyHandling* _metadataPropertyHandling; // 0x34
		::Newtonsoft::Json::JsonConverterCollection* _converters; // 0x38
		::Newtonsoft::Json::Serialization::IContractResolver* _contractResolver; // 0x40
		::Newtonsoft::Json::Serialization::ITraceWriter* _traceWriter; // 0x48
		::System::Collections::IEqualityComparer* _equalityComparer; // 0x50
		::Newtonsoft::Json::Serialization::ISerializationBinder* _serializationBinder; // 0x58
		::System::Runtime::Serialization::StreamingContext* _context; // 0x60
		::Newtonsoft::Json::Serialization::IReferenceResolver* _referenceResolver; // 0x70
		Il2CppObject* _formatting; // 0x78
		Il2CppObject* _dateFormatHandling; // 0x80
		Il2CppObject* _dateTimeZoneHandling; // 0x88
		Il2CppObject* _dateParseHandling; // 0x90
		Il2CppObject* _floatFormatHandling; // 0x98
		Il2CppObject* _floatParseHandling; // 0xA0
		Il2CppObject* _stringEscapeHandling; // 0xA8
		::System::Globalization::CultureInfo* _culture; // 0xB0
		Il2CppObject* _maxDepth; // 0xB8
		::System::Boolean _maxDepthSet; // 0xC0
		Il2CppObject* _checkAdditionalContent; // 0xC1
		::System::String* _dateFormatString; // 0xC8
		::System::Boolean _dateFormatStringSet; // 0xD0
		Il2CppObject* Error; // 0xD8

		::System::Void add_Error(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_ADD_ERROR_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Error(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_REMOVE_ERROR_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::IReferenceResolver* get_ReferenceResolver()
		{
			return (return (::Newtonsoft::Json::Serialization::IReferenceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_REFERENCERESOLVER_OFFSET))(nullptr);
		}

		::System::Void set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::IReferenceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_REFERENCERESOLVER_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::SerializationBinder* get_Binder()
		{
			return (return (::System::Runtime::Serialization::SerializationBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_BINDER_OFFSET))(nullptr);
		}

		::System::Void set_Binder(::System::Runtime::Serialization::SerializationBinder* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationBinder*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_BINDER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::ISerializationBinder* get_SerializationBinder()
		{
			return (return (::Newtonsoft::Json::Serialization::ISerializationBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_SERIALIZATIONBINDER_OFFSET))(nullptr);
		}

		::System::Void set_SerializationBinder(::Newtonsoft::Json::Serialization::ISerializationBinder* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::ISerializationBinder*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_SERIALIZATIONBINDER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::ITraceWriter* get_TraceWriter()
		{
			return (return (::Newtonsoft::Json::Serialization::ITraceWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_TRACEWRITER_OFFSET))(nullptr);
		}

		::System::Void set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::ITraceWriter*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_TRACEWRITER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEqualityComparer* get_EqualityComparer()
		{
			return (return (::System::Collections::IEqualityComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_EQUALITYCOMPARER_OFFSET))(nullptr);
		}

		::System::Void set_EqualityComparer(::System::Collections::IEqualityComparer* arg)
		{
			((::System::Void(*)(::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_EQUALITYCOMPARER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::TypeNameHandling* get_TypeNameHandling()
		{
			return (return (::Newtonsoft::Json::TypeNameHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_TYPENAMEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::TypeNameHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEHANDLING_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle* get_TypeNameAssemblyFormat()
		{
			return (return (::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_TYPENAMEASSEMBLYFORMAT_OFFSET))(nullptr);
		}

		::System::Void set_TypeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEASSEMBLYFORMAT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::TypeNameAssemblyFormatHandling* get_TypeNameAssemblyFormatHandling()
		{
			return (return (::Newtonsoft::Json::TypeNameAssemblyFormatHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_TYPENAMEASSEMBLYFORMATHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_TypeNameAssemblyFormatHandling(::Newtonsoft::Json::TypeNameAssemblyFormatHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::TypeNameAssemblyFormatHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_TYPENAMEASSEMBLYFORMATHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::PreserveReferencesHandling* get_PreserveReferencesHandling()
		{
			return (return (::Newtonsoft::Json::PreserveReferencesHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_PRESERVEREFERENCESHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::PreserveReferencesHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_PRESERVEREFERENCESHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::ReferenceLoopHandling* get_ReferenceLoopHandling()
		{
			return (return (::Newtonsoft::Json::ReferenceLoopHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_REFERENCELOOPHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::ReferenceLoopHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_REFERENCELOOPHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::MissingMemberHandling* get_MissingMemberHandling()
		{
			return (return (::Newtonsoft::Json::MissingMemberHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_MISSINGMEMBERHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::MissingMemberHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_MISSINGMEMBERHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::NullValueHandling* get_NullValueHandling()
		{
			return (return (::Newtonsoft::Json::NullValueHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_NULLVALUEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::NullValueHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_NULLVALUEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DefaultValueHandling* get_DefaultValueHandling()
		{
			return (return (::Newtonsoft::Json::DefaultValueHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_DEFAULTVALUEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DefaultValueHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_DEFAULTVALUEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::ObjectCreationHandling* get_ObjectCreationHandling()
		{
			return (return (::Newtonsoft::Json::ObjectCreationHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_OBJECTCREATIONHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::ObjectCreationHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_OBJECTCREATIONHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::ConstructorHandling* get_ConstructorHandling()
		{
			return (return (::Newtonsoft::Json::ConstructorHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONSTRUCTORHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::ConstructorHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONSTRUCTORHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::MetadataPropertyHandling* get_MetadataPropertyHandling()
		{
			return (return (::Newtonsoft::Json::MetadataPropertyHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_METADATAPROPERTYHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::MetadataPropertyHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_METADATAPROPERTYHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonConverterCollection* get_Converters()
		{
			return (return (::Newtonsoft::Json::JsonConverterCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONVERTERS_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver()
		{
			return (return (::Newtonsoft::Json::Serialization::IContractResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONTRACTRESOLVER_OFFSET))(nullptr);
		}

		::System::Void set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::IContractResolver*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONTRACTRESOLVER_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::StreamingContext* get_Context()
		{
			return (return (::System::Runtime::Serialization::StreamingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_Context(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Formatting* get_Formatting()
		{
			return (return (::Newtonsoft::Json::Formatting*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_FORMATTING_OFFSET))(nullptr);
		}

		::System::Void set_Formatting(::Newtonsoft::Json::Formatting* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Formatting*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_FORMATTING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DateFormatHandling* get_DateFormatHandling()
		{
			return (return (::Newtonsoft::Json::DateFormatHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_DATEFORMATHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DateFormatHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_DATEFORMATHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DateTimeZoneHandling* get_DateTimeZoneHandling()
		{
			return (return (::Newtonsoft::Json::DateTimeZoneHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_DATETIMEZONEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DateTimeZoneHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_DATETIMEZONEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DateParseHandling* get_DateParseHandling()
		{
			return (return (::Newtonsoft::Json::DateParseHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_DATEPARSEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DateParseHandling(::Newtonsoft::Json::DateParseHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DateParseHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_DATEPARSEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::FloatParseHandling* get_FloatParseHandling()
		{
			return (return (::Newtonsoft::Json::FloatParseHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_FLOATPARSEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::FloatParseHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_FLOATPARSEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::FloatFormatHandling* get_FloatFormatHandling()
		{
			return (return (::Newtonsoft::Json::FloatFormatHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_FLOATFORMATHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::FloatFormatHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_FLOATFORMATHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::StringEscapeHandling* get_StringEscapeHandling()
		{
			return (return (::Newtonsoft::Json::StringEscapeHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_STRINGESCAPEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::StringEscapeHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_STRINGESCAPEHANDLING_OFFSET))(arg, nullptr);
		}

		::System::String* get_DateFormatString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_DATEFORMATSTRING_OFFSET))(nullptr);
		}

		::System::Void set_DateFormatString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_DATEFORMATSTRING_OFFSET))(str, nullptr);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return (return (::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_CULTURE_OFFSET))(nullptr);
		}

		::System::Void set_Culture(::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_CULTURE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MaxDepth()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_MAXDEPTH_OFFSET))(nullptr);
		}

		::System::Void set_MaxDepth(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_MAXDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CheckAdditionalContent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GET_CHECKADDITIONALCONTENT_OFFSET))(nullptr);
		}

		::System::Void set_CheckAdditionalContent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SET_CHECKADDITIONALCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCheckAdditionalContentSet()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_ISCHECKADDITIONALCONTENTSET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_.CTOR_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::JsonSerializer* Create()
		{
			return (return (::Newtonsoft::Json::JsonSerializer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_CREATE_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::JsonSerializer* Create(::Newtonsoft::Json::JsonSerializerSettings* arg)
		{
			return (return (::Newtonsoft::Json::JsonSerializer*(*)(::Newtonsoft::Json::JsonSerializerSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_CREATE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonSerializer* CreateDefault()
		{
			return (return (::Newtonsoft::Json::JsonSerializer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_CREATEDEFAULT_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::JsonSerializer* CreateDefault(::Newtonsoft::Json::JsonSerializerSettings* arg)
		{
			return (return (::Newtonsoft::Json::JsonSerializer*(*)(::Newtonsoft::Json::JsonSerializerSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_CREATEDEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Void ApplySerializerSettings(::Newtonsoft::Json::JsonSerializer* arg, ::Newtonsoft::Json::JsonSerializerSettings* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonSerializerSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_APPLYSERIALIZERSETTINGS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Populate(::System::IO::TextReader* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_POPULATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Populate(::Newtonsoft::Json::JsonReader* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_POPULATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PopulateInternal(::Newtonsoft::Json::JsonReader* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_POPULATEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Deserialize(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Object* Deserialize(::System::IO::TextReader* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::IO::TextReader*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Deserialize(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Object* Deserialize(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* DeserializeInternal(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_DESERIALIZEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetupReader(::Newtonsoft::Json::JsonReader* arg, ::System::Globalization::CultureInfo&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::System::Globalization::CultureInfo&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SETUPREADER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ResetReader(::Newtonsoft::Json::JsonReader* arg, ::System::Globalization::CultureInfo* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::System::Globalization::CultureInfo*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_RESETREADER_OFFSET))(arg, arg, arg, arg, arg, arg, str, nullptr);
		}

		::System::Void Serialize(::System::IO::TextWriter* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Serialize(::System::IO::TextWriter* arg, ::System::Object* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::IO::TextWriter*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Serialize(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::TraceJsonReader* CreateTraceJsonReader(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::TraceJsonReader*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_CREATETRACEJSONREADER_OFFSET))(arg, nullptr);
		}

		::System::Void SerializeInternal(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_SERIALIZEINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::IReferenceResolver* GetReferenceResolver()
		{
			return (return (::Newtonsoft::Json::Serialization::IReferenceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GETREFERENCERESOLVER_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::JsonConverter* GetMatchingConverter(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::JsonConverter*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GETMATCHINGCONVERTER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonConverter* GetMatchingConverter(Il2CppObject* arg, ::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::JsonConverter*(*)(Il2CppObject*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_GETMATCHINGCONVERTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnError(::Newtonsoft::Json::Serialization::ErrorEventArgs* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::ErrorEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZER_ONERROR_OFFSET))(arg, nullptr);
		}

	};
}

