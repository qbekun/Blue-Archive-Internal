#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::JSON::LitJson { class JsonWriter; }
namespace BestHTTP::JSON::LitJson { class JsonReader; }
namespace BestHTTP::JSON::LitJson { class IJsonWrapper; }
namespace BestHTTP::JSON::LitJson { class WrapperFactory; }
namespace BestHTTP::JSON::LitJson { class ImporterFunc; }
namespace BestHTTP::JSON::LitJson { class JsonData; }

#define BESTHTTP_JSON_LITJSON_JSONMAPPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8A6C00)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_HASINTERFACE_OFFSET UNITYSDK_OFFSET(0x8A9730)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_GETPUBLICINSTANCEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x8A97D0)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_ADDARRAYMETADATA_OFFSET UNITYSDK_OFFSET(0x8A97F0)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_ADDOBJECTMETADATA_OFFSET UNITYSDK_OFFSET(0x8A9CF0)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_ADDTYPEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x8AA6F0)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_GETCONVOP_OFFSET UNITYSDK_OFFSET(0x8AAD60)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_READVALUE_OFFSET UNITYSDK_OFFSET(0x8AB670)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_READVALUE_OFFSET UNITYSDK_OFFSET(0x8ACE20)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_READSKIP_OFFSET UNITYSDK_OFFSET(0x8ACC60)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_REGISTERBASEEXPORTERS_OFFSET UNITYSDK_OFFSET(0x8A7210)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_REGISTERBASEIMPORTERS_OFFSET UNITYSDK_OFFSET(0x8A81D0)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_REGISTERIMPORTER_OFFSET UNITYSDK_OFFSET(0x8AD3D0)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x8AD600)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_TOJSON_OFFSET UNITYSDK_OFFSET(0x8AE890)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_TOJSON_OFFSET UNITYSDK_OFFSET(0x8AEB40)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x8AEBA0)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x8AEDA0)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x8AEDF0)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x8AF020)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x8AF290)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_TOWRAPPER_OFFSET UNITYSDK_OFFSET(0x8AD380)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_TOWRAPPER_OFFSET UNITYSDK_OFFSET(0x8AF1C0)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_REGISTEREXPORTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_REGISTERIMPORTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_UNREGISTEREXPORTERS_OFFSET UNITYSDK_OFFSET(0x8AF3D0)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_UNREGISTERIMPORTERS_OFFSET UNITYSDK_OFFSET(0x8AF4D0)
#define BESTHTTP_JSON_LITJSON_JSONMAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8AF5D0)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int JsonMapper_TypeDefinitionIndex = 23318;

	class JsonMapper : public Il2CppObject
	{
	public:
		::System::Int32 max_nesting_depth; // 0x0
		::System::IFormatProvider* datetime_format; // 0x8
		Il2CppObject* base_exporters_table; // 0x10
		Il2CppObject* custom_exporters_table; // 0x18
		Il2CppObject* base_importers_table; // 0x20
		Il2CppObject* custom_importers_table; // 0x28
		Il2CppObject* array_metadata; // 0x30
		::System::Object* array_metadata_lock; // 0x38
		Il2CppObject* conv_ops; // 0x40
		::System::Object* conv_ops_lock; // 0x48
		Il2CppObject* object_metadata; // 0x50
		::System::Object* object_metadata_lock; // 0x58
		Il2CppObject* type_properties; // 0x60
		::System::Object* type_properties_lock; // 0x68
		::BestHTTP::JSON::LitJson::JsonWriter* static_writer; // 0x70
		::System::Object* static_writer_lock; // 0x78

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean HasInterface(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_HASINTERFACE_OFFSET))(arg, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPublicInstanceProperties(::System::Type* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_GETPUBLICINSTANCEPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void AddArrayMetadata(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_ADDARRAYMETADATA_OFFSET))(arg, nullptr);
		}

		::System::Void AddObjectMetadata(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_ADDOBJECTMETADATA_OFFSET))(arg, nullptr);
		}

		::System::Void AddTypeProperties(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_ADDTYPEPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetConvOp(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_GETCONVOP_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ReadValue(::System::Type* arg, ::BestHTTP::JSON::LitJson::JsonReader* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::BestHTTP::JSON::LitJson::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_READVALUE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::JSON::LitJson::IJsonWrapper* ReadValue(::BestHTTP::JSON::LitJson::WrapperFactory* arg, ::BestHTTP::JSON::LitJson::JsonReader* arg)
		{
			return (return (::BestHTTP::JSON::LitJson::IJsonWrapper*(*)(::BestHTTP::JSON::LitJson::WrapperFactory*, ::BestHTTP::JSON::LitJson::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_READVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReadSkip(::BestHTTP::JSON::LitJson::JsonReader* arg)
		{
			((::System::Void(*)(::BestHTTP::JSON::LitJson::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_READSKIP_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterBaseExporters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_REGISTERBASEEXPORTERS_OFFSET))(nullptr);
		}

		::System::Void RegisterBaseImporters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_REGISTERBASEIMPORTERS_OFFSET))(nullptr);
		}

		::System::Void RegisterImporter(Il2CppObject* arg, ::System::Type* arg, ::System::Type* arg, ::BestHTTP::JSON::LitJson::ImporterFunc* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Type*, ::System::Type*, ::BestHTTP::JSON::LitJson::ImporterFunc*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_REGISTERIMPORTER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteValue(::System::Object* arg, ::BestHTTP::JSON::LitJson::JsonWriter* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::BestHTTP::JSON::LitJson::JsonWriter*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_WRITEVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* ToJson(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_TOJSON_OFFSET))(arg, nullptr);
		}

		::System::Void ToJson(::System::Object* arg, ::BestHTTP::JSON::LitJson::JsonWriter* arg)
		{
			((::System::Void(*)(::System::Object*, ::BestHTTP::JSON::LitJson::JsonWriter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_TOJSON_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::JSON::LitJson::JsonData* ToObject(::BestHTTP::JSON::LitJson::JsonReader* arg)
		{
			return (return (::BestHTTP::JSON::LitJson::JsonData*(*)(::BestHTTP::JSON::LitJson::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_TOOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Object* ToObject(::System::Type* arg, ::BestHTTP::JSON::LitJson::JsonReader* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::BestHTTP::JSON::LitJson::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_TOOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::JSON::LitJson::JsonData* ToObject(::System::IO::TextReader* arg)
		{
			return (return (::BestHTTP::JSON::LitJson::JsonData*(*)(::System::IO::TextReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_TOOBJECT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::JSON::LitJson::JsonData* ToObject(::System::String* str)
		{
			return (return (::BestHTTP::JSON::LitJson::JsonData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_TOOBJECT_OFFSET))(str, nullptr);
		}

		Il2CppObject* ToObject(::BestHTTP::JSON::LitJson::JsonReader* arg)
		{
			return (return (Il2CppObject*(*)(::BestHTTP::JSON::LitJson::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_TOOBJECT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ToObject(::System::IO::TextReader* arg)
		{
			return (return (Il2CppObject*(*)(::System::IO::TextReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_TOOBJECT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ToObject(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_TOOBJECT_OFFSET))(str, nullptr);
		}

		::System::Object* ToObject(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_TOOBJECT_OFFSET))(arg, str, nullptr);
		}

		::BestHTTP::JSON::LitJson::IJsonWrapper* ToWrapper(::BestHTTP::JSON::LitJson::WrapperFactory* arg, ::BestHTTP::JSON::LitJson::JsonReader* arg)
		{
			return (return (::BestHTTP::JSON::LitJson::IJsonWrapper*(*)(::BestHTTP::JSON::LitJson::WrapperFactory*, ::BestHTTP::JSON::LitJson::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_TOWRAPPER_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::JSON::LitJson::IJsonWrapper* ToWrapper(::BestHTTP::JSON::LitJson::WrapperFactory* arg, ::System::String* str)
		{
			return (return (::BestHTTP::JSON::LitJson::IJsonWrapper*(*)(::BestHTTP::JSON::LitJson::WrapperFactory*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_TOWRAPPER_OFFSET))(arg, str, nullptr);
		}

		::System::Void RegisterExporter(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_REGISTEREXPORTER_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterImporter(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_REGISTERIMPORTER_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterExporters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_UNREGISTEREXPORTERS_OFFSET))(nullptr);
		}

		::System::Void UnregisterImporters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_UNREGISTERIMPORTERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONMAPPER_.CTOR_OFFSET))(nullptr);
		}

	};
}

