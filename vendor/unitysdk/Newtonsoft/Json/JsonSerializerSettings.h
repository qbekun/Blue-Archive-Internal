#pragma once
#include "../../unitysdk.h"

namespace Newtonsoft::Json { class ReferenceLoopHandling; }
namespace Newtonsoft::Json { class MissingMemberHandling; }
namespace Newtonsoft::Json { class NullValueHandling; }
namespace Newtonsoft::Json { class DefaultValueHandling; }
namespace Newtonsoft::Json { class ObjectCreationHandling; }
namespace Newtonsoft::Json { class PreserveReferencesHandling; }
namespace Newtonsoft::Json { class ConstructorHandling; }
namespace Newtonsoft::Json { class TypeNameHandling; }
namespace Newtonsoft::Json { class MetadataPropertyHandling; }
namespace Newtonsoft::Json { class Formatting; }
namespace Newtonsoft::Json { class DateFormatHandling; }
namespace Newtonsoft::Json { class DateTimeZoneHandling; }
namespace Newtonsoft::Json { class DateParseHandling; }
namespace Newtonsoft::Json { class FloatParseHandling; }
namespace Newtonsoft::Json { class FloatFormatHandling; }
namespace Newtonsoft::Json { class StringEscapeHandling; }
namespace Newtonsoft::Json { class TypeNameAssemblyFormatHandling; }
namespace Newtonsoft::Json::Serialization { class IContractResolver; }
namespace Newtonsoft::Json::Serialization { class ITraceWriter; }
namespace Newtonsoft::Json::Serialization { class ISerializationBinder; }
namespace Newtonsoft::Json::Serialization { class IReferenceResolver; }
namespace Newtonsoft::Json { class JsonSerializerSettings; }

#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x945A580)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x945C140)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x945A5B0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x945C1A0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x945A5E0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x945C200)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x945A610)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x945C260)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x945A640)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x945C2C0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONVERTERS_OFFSET UNITYSDK_OFFSET(0x945C320)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONVERTERS_OFFSET UNITYSDK_OFFSET(0x945C330)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_PRESERVEREFERENCESHANDLING_OFFSET UNITYSDK_OFFSET(0x945A550)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_PRESERVEREFERENCESHANDLING_OFFSET UNITYSDK_OFFSET(0x945C350)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x945A4C0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x945C3B0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x945A4F0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_METADATAPROPERTYHANDLING_OFFSET UNITYSDK_OFFSET(0x945C410)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TYPENAMEASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x945C470)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_TYPENAMEASSEMBLYFORMAT_OFFSET UNITYSDK_OFFSET(0x945C4A0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TYPENAMEASSEMBLYFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x945A520)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_TYPENAMEASSEMBLYFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x945C500)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONSTRUCTORHANDLING_OFFSET UNITYSDK_OFFSET(0x945A670)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONSTRUCTORHANDLING_OFFSET UNITYSDK_OFFSET(0x945C560)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x945C5C0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x945C5D0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x945C5F0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_EQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x945C600)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_REFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x945C620)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_REFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x945C640)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_REFERENCERESOLVERPROVIDER_OFFSET UNITYSDK_OFFSET(0x945C730)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_REFERENCERESOLVERPROVIDER_OFFSET UNITYSDK_OFFSET(0x945C740)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x945C760)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_TRACEWRITER_OFFSET UNITYSDK_OFFSET(0x945C770)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_BINDER_OFFSET UNITYSDK_OFFSET(0x945C790)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_BINDER_OFFSET UNITYSDK_OFFSET(0x945C850)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_SERIALIZATIONBINDER_OFFSET UNITYSDK_OFFSET(0x945C8E0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_SERIALIZATIONBINDER_OFFSET UNITYSDK_OFFSET(0x945C8F0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x945C910)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_ERROR_OFFSET UNITYSDK_OFFSET(0x945C920)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x945A6A0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x945C940)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x945C9D0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x945CA20)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x945CA40)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x945CAA0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x945CB60)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x945CB90)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x945CBF0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x945CC20)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x945CC80)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x945CCE0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DATEPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x945CD40)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DATEPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x945CDA0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x945CE00)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x945CE30)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_FLOATPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x945CE90)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_FLOATPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x945CEC0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x945CF20)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x945CF50)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x945CFB0)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CULTURE_OFFSET UNITYSDK_OFFSET(0x945D020)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x944E830)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CHECKADDITIONALCONTENT_OFFSET UNITYSDK_OFFSET(0x945D030)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x945D090)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x944D940)
#define NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x945D120)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonSerializerSettings_TypeDefinitionIndex = 31710;

	class JsonSerializerSettings : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::ReferenceLoopHandling* DefaultReferenceLoopHandling; // 0x0
		::Newtonsoft::Json::MissingMemberHandling* DefaultMissingMemberHandling; // 0x0
		::Newtonsoft::Json::NullValueHandling* DefaultNullValueHandling; // 0x0
		::Newtonsoft::Json::DefaultValueHandling* DefaultDefaultValueHandling; // 0x0
		::Newtonsoft::Json::ObjectCreationHandling* DefaultObjectCreationHandling; // 0x0
		::Newtonsoft::Json::PreserveReferencesHandling* DefaultPreserveReferencesHandling; // 0x0
		::Newtonsoft::Json::ConstructorHandling* DefaultConstructorHandling; // 0x0
		::Newtonsoft::Json::TypeNameHandling* DefaultTypeNameHandling; // 0x0
		::Newtonsoft::Json::MetadataPropertyHandling* DefaultMetadataPropertyHandling; // 0x0
		::System::Runtime::Serialization::StreamingContext* DefaultContext; // 0x0
		::Newtonsoft::Json::Formatting* DefaultFormatting; // 0x0
		::Newtonsoft::Json::DateFormatHandling* DefaultDateFormatHandling; // 0x0
		::Newtonsoft::Json::DateTimeZoneHandling* DefaultDateTimeZoneHandling; // 0x0
		::Newtonsoft::Json::DateParseHandling* DefaultDateParseHandling; // 0x0
		::Newtonsoft::Json::FloatParseHandling* DefaultFloatParseHandling; // 0x0
		::Newtonsoft::Json::FloatFormatHandling* DefaultFloatFormatHandling; // 0x0
		::Newtonsoft::Json::StringEscapeHandling* DefaultStringEscapeHandling; // 0x0
		::Newtonsoft::Json::TypeNameAssemblyFormatHandling* DefaultTypeNameAssemblyFormatHandling; // 0x0
		::System::Globalization::CultureInfo* DefaultCulture; // 0x10
		::System::Boolean DefaultCheckAdditionalContent; // 0x0
		::System::String* DefaultDateFormatString; // 0x0
		::System::Int32 DefaultMaxDepth; // 0x0
		Il2CppObject* _formatting; // 0x10
		Il2CppObject* _dateFormatHandling; // 0x18
		Il2CppObject* _dateTimeZoneHandling; // 0x20
		Il2CppObject* _dateParseHandling; // 0x28
		Il2CppObject* _floatFormatHandling; // 0x30
		Il2CppObject* _floatParseHandling; // 0x38
		Il2CppObject* _stringEscapeHandling; // 0x40
		::System::Globalization::CultureInfo* _culture; // 0x48
		Il2CppObject* _checkAdditionalContent; // 0x50
		Il2CppObject* _maxDepth; // 0x54
		::System::Boolean _maxDepthSet; // 0x5C
		::System::String* _dateFormatString; // 0x60
		::System::Boolean _dateFormatStringSet; // 0x68
		Il2CppObject* _typeNameAssemblyFormatHandling; // 0x6C
		Il2CppObject* _defaultValueHandling; // 0x74
		Il2CppObject* _preserveReferencesHandling; // 0x7C
		Il2CppObject* _nullValueHandling; // 0x84
		Il2CppObject* _objectCreationHandling; // 0x8C
		Il2CppObject* _missingMemberHandling; // 0x94
		Il2CppObject* _referenceLoopHandling; // 0x9C
		Il2CppObject* _context; // 0xA8
		Il2CppObject* _constructorHandling; // 0xC0
		Il2CppObject* _typeNameHandling; // 0xC8
		Il2CppObject* _metadataPropertyHandling; // 0xD0
		Il2CppObject* _Converters_k__BackingField; // 0xD8
		::Newtonsoft::Json::Serialization::IContractResolver* _ContractResolver_k__BackingField; // 0xE0
		::System::Collections::IEqualityComparer* _EqualityComparer_k__BackingField; // 0xE8
		Il2CppObject* _ReferenceResolverProvider_k__BackingField; // 0xF0
		::Newtonsoft::Json::Serialization::ITraceWriter* _TraceWriter_k__BackingField; // 0xF8
		::Newtonsoft::Json::Serialization::ISerializationBinder* _SerializationBinder_k__BackingField; // 0x100
		Il2CppObject* _Error_k__BackingField; // 0x108

		::Newtonsoft::Json::ReferenceLoopHandling* get_ReferenceLoopHandling()
		{
			return (return (::Newtonsoft::Json::ReferenceLoopHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_REFERENCELOOPHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::ReferenceLoopHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_REFERENCELOOPHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::MissingMemberHandling* get_MissingMemberHandling()
		{
			return (return (::Newtonsoft::Json::MissingMemberHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_MISSINGMEMBERHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::MissingMemberHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_MISSINGMEMBERHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::ObjectCreationHandling* get_ObjectCreationHandling()
		{
			return (return (::Newtonsoft::Json::ObjectCreationHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_OBJECTCREATIONHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::ObjectCreationHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_OBJECTCREATIONHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::NullValueHandling* get_NullValueHandling()
		{
			return (return (::Newtonsoft::Json::NullValueHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_NULLVALUEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::NullValueHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_NULLVALUEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DefaultValueHandling* get_DefaultValueHandling()
		{
			return (return (::Newtonsoft::Json::DefaultValueHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DEFAULTVALUEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DefaultValueHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DEFAULTVALUEHANDLING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Converters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONVERTERS_OFFSET))(nullptr);
		}

		::System::Void set_Converters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONVERTERS_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::PreserveReferencesHandling* get_PreserveReferencesHandling()
		{
			return (return (::Newtonsoft::Json::PreserveReferencesHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_PRESERVEREFERENCESHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::PreserveReferencesHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_PRESERVEREFERENCESHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::TypeNameHandling* get_TypeNameHandling()
		{
			return (return (::Newtonsoft::Json::TypeNameHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TYPENAMEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::TypeNameHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_TYPENAMEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::MetadataPropertyHandling* get_MetadataPropertyHandling()
		{
			return (return (::Newtonsoft::Json::MetadataPropertyHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_METADATAPROPERTYHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::MetadataPropertyHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_METADATAPROPERTYHANDLING_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle* get_TypeNameAssemblyFormat()
		{
			return (return (::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TYPENAMEASSEMBLYFORMAT_OFFSET))(nullptr);
		}

		::System::Void set_TypeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_TYPENAMEASSEMBLYFORMAT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::TypeNameAssemblyFormatHandling* get_TypeNameAssemblyFormatHandling()
		{
			return (return (::Newtonsoft::Json::TypeNameAssemblyFormatHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TYPENAMEASSEMBLYFORMATHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_TypeNameAssemblyFormatHandling(::Newtonsoft::Json::TypeNameAssemblyFormatHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::TypeNameAssemblyFormatHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_TYPENAMEASSEMBLYFORMATHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::ConstructorHandling* get_ConstructorHandling()
		{
			return (return (::Newtonsoft::Json::ConstructorHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONSTRUCTORHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::ConstructorHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONSTRUCTORHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver()
		{
			return (return (::Newtonsoft::Json::Serialization::IContractResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONTRACTRESOLVER_OFFSET))(nullptr);
		}

		::System::Void set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::IContractResolver*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONTRACTRESOLVER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEqualityComparer* get_EqualityComparer()
		{
			return (return (::System::Collections::IEqualityComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_EQUALITYCOMPARER_OFFSET))(nullptr);
		}

		::System::Void set_EqualityComparer(::System::Collections::IEqualityComparer* arg)
		{
			((::System::Void(*)(::System::Collections::IEqualityComparer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_EQUALITYCOMPARER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::IReferenceResolver* get_ReferenceResolver()
		{
			return (return (::Newtonsoft::Json::Serialization::IReferenceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_REFERENCERESOLVER_OFFSET))(nullptr);
		}

		::System::Void set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::IReferenceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_REFERENCERESOLVER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ReferenceResolverProvider()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_REFERENCERESOLVERPROVIDER_OFFSET))(nullptr);
		}

		::System::Void set_ReferenceResolverProvider(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_REFERENCERESOLVERPROVIDER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::ITraceWriter* get_TraceWriter()
		{
			return (return (::Newtonsoft::Json::Serialization::ITraceWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_TRACEWRITER_OFFSET))(nullptr);
		}

		::System::Void set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::ITraceWriter*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_TRACEWRITER_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::SerializationBinder* get_Binder()
		{
			return (return (::System::Runtime::Serialization::SerializationBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_BINDER_OFFSET))(nullptr);
		}

		::System::Void set_Binder(::System::Runtime::Serialization::SerializationBinder* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationBinder*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_BINDER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::ISerializationBinder* get_SerializationBinder()
		{
			return (return (::Newtonsoft::Json::Serialization::ISerializationBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_SERIALIZATIONBINDER_OFFSET))(nullptr);
		}

		::System::Void set_SerializationBinder(::Newtonsoft::Json::Serialization::ISerializationBinder* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::ISerializationBinder*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_SERIALIZATIONBINDER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Error()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_ERROR_OFFSET))(nullptr);
		}

		::System::Void set_Error(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_ERROR_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::StreamingContext* get_Context()
		{
			return (return (::System::Runtime::Serialization::StreamingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_Context(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::System::String* get_DateFormatString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DATEFORMATSTRING_OFFSET))(nullptr);
		}

		::System::Void set_DateFormatString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DATEFORMATSTRING_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_MaxDepth()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_MAXDEPTH_OFFSET))(nullptr);
		}

		::System::Void set_MaxDepth(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_MAXDEPTH_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Formatting* get_Formatting()
		{
			return (return (::Newtonsoft::Json::Formatting*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_FORMATTING_OFFSET))(nullptr);
		}

		::System::Void set_Formatting(::Newtonsoft::Json::Formatting* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Formatting*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_FORMATTING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DateFormatHandling* get_DateFormatHandling()
		{
			return (return (::Newtonsoft::Json::DateFormatHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DATEFORMATHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DateFormatHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DATEFORMATHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DateTimeZoneHandling* get_DateTimeZoneHandling()
		{
			return (return (::Newtonsoft::Json::DateTimeZoneHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DATETIMEZONEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DateTimeZoneHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DATETIMEZONEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::DateParseHandling* get_DateParseHandling()
		{
			return (return (::Newtonsoft::Json::DateParseHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_DATEPARSEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DateParseHandling(::Newtonsoft::Json::DateParseHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::DateParseHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_DATEPARSEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::FloatFormatHandling* get_FloatFormatHandling()
		{
			return (return (::Newtonsoft::Json::FloatFormatHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_FLOATFORMATHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::FloatFormatHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_FLOATFORMATHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::FloatParseHandling* get_FloatParseHandling()
		{
			return (return (::Newtonsoft::Json::FloatParseHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_FLOATPARSEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::FloatParseHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_FLOATPARSEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::StringEscapeHandling* get_StringEscapeHandling()
		{
			return (return (::Newtonsoft::Json::StringEscapeHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_STRINGESCAPEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::StringEscapeHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_STRINGESCAPEHANDLING_OFFSET))(arg, nullptr);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return (return (::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CULTURE_OFFSET))(nullptr);
		}

		::System::Void set_Culture(::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CULTURE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CheckAdditionalContent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_GET_CHECKADDITIONALCONTENT_OFFSET))(nullptr);
		}

		::System::Void set_CheckAdditionalContent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_SET_CHECKADDITIONALCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::JsonSerializerSettings* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonSerializerSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONSERIALIZERSETTINGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

