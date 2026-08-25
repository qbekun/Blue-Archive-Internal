#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Schema { class UndefinedSchemaIdHandling; }
namespace Newtonsoft::Json::Serialization { class IContractResolver; }
namespace Newtonsoft::Json::Schema { class JsonSchemaResolver; }
namespace Newtonsoft::Json::Schema { class JsonSchema; }
namespace Newtonsoft::Json { class Required; }
namespace Newtonsoft::Json::Schema { class JsonSchemaType; }
namespace Newtonsoft::Json { class DefaultValueHandling; }
namespace Newtonsoft::Json::Serialization { class JsonObjectContract; }
namespace Newtonsoft::Json::Serialization { class JsonISerializableContract; }

#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GET_UNDEFINEDSCHEMAIDHANDLING_OFFSET UNITYSDK_OFFSET(0x94EF840)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_SET_UNDEFINEDSCHEMAIDHANDLING_OFFSET UNITYSDK_OFFSET(0x94EF850)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x94EF860)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_SET_CONTRACTRESOLVER_OFFSET UNITYSDK_OFFSET(0x94EF920)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GET_CURRENTSCHEMA_OFFSET UNITYSDK_OFFSET(0x94EF930)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_PUSH_OFFSET UNITYSDK_OFFSET(0x94EF940)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_POP_OFFSET UNITYSDK_OFFSET(0x94EFA80)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x94EFCA0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x94EFDD0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x94EFDF0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x94EFD10)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GETTITLE_OFFSET UNITYSDK_OFFSET(0x94F0D90)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x94F0E30)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x94F0F20)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GENERATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x94EFE60)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_ADDNULLTYPE_OFFSET UNITYSDK_OFFSET(0x94F11A0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_HASFLAG_OFFSET UNITYSDK_OFFSET(0x94F1860)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GENERATEOBJECTSCHEMA_OFFSET UNITYSDK_OFFSET(0x94F11B0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GENERATEISERIALIZABLECONTRACT_OFFSET UNITYSDK_OFFSET(0x94F1840)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_HASFLAG_OFFSET UNITYSDK_OFFSET(0x94F1030)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GETJSONSCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x94F16A0)
#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F1870)

namespace Newtonsoft::Json::Schema
{
	inline static constexpr unsigned int JsonSchemaGenerator_TypeDefinitionIndex = 31985;

	class JsonSchemaGenerator : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling* _UndefinedSchemaIdHandling_k__BackingField; // 0x10
		::Newtonsoft::Json::Serialization::IContractResolver* _contractResolver; // 0x18
		::Newtonsoft::Json::Schema::JsonSchemaResolver* _resolver; // 0x20
		Il2CppObject* _stack; // 0x28
		::Newtonsoft::Json::Schema::JsonSchema* _currentSchema; // 0x30

		::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling* get_UndefinedSchemaIdHandling()
		{
			return (return (::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GET_UNDEFINEDSCHEMAIDHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_UndefinedSchemaIdHandling(::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_SET_UNDEFINEDSCHEMAIDHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver()
		{
			return (return (::Newtonsoft::Json::Serialization::IContractResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GET_CONTRACTRESOLVER_OFFSET))(nullptr);
		}

		::System::Void set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::IContractResolver*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_SET_CONTRACTRESOLVER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* get_CurrentSchema()
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GET_CURRENTSCHEMA_OFFSET))(nullptr);
		}

		::System::Void Push(TypeSchema* arg)
		{
			((::System::Void(*)(TypeSchema*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_PUSH_OFFSET))(arg, nullptr);
		}

		TypeSchema* Pop()
		{
			return (return (TypeSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_POP_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* Generate(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GENERATE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* Generate(::System::Type* arg, ::Newtonsoft::Json::Schema::JsonSchemaResolver* arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::System::Type*, ::Newtonsoft::Json::Schema::JsonSchemaResolver*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GENERATE_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* Generate(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GENERATE_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* Generate(::System::Type* arg, ::Newtonsoft::Json::Schema::JsonSchemaResolver* arg, ::System::Boolean arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::System::Type*, ::Newtonsoft::Json::Schema::JsonSchemaResolver*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GENERATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* GetTitle(::System::Type* arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GETTITLE_OFFSET))(arg, nullptr);
		}

		::System::String* GetDescription(::System::Type* arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GETDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::String* GetTypeId(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GETTYPEID_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchema* GenerateInternal(::System::Type* arg, ::Newtonsoft::Json::Required* arg, ::System::Boolean arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchema*(*)(::System::Type*, ::Newtonsoft::Json::Required*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GENERATEINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchemaType* AddNullType(::Newtonsoft::Json::Schema::JsonSchemaType* arg, ::Newtonsoft::Json::Required* arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchemaType*(*)(::Newtonsoft::Json::Schema::JsonSchemaType*, ::Newtonsoft::Json::Required*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_ADDNULLTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasFlag(::Newtonsoft::Json::DefaultValueHandling* arg, ::Newtonsoft::Json::DefaultValueHandling* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::DefaultValueHandling*, ::Newtonsoft::Json::DefaultValueHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_HASFLAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GenerateObjectSchema(::System::Type* arg, ::Newtonsoft::Json::Serialization::JsonObjectContract* arg)
		{
			((::System::Void(*)(::System::Type*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GENERATEOBJECTSCHEMA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GenerateISerializableContract(::System::Type* arg, ::Newtonsoft::Json::Serialization::JsonISerializableContract* arg)
		{
			((::System::Void(*)(::System::Type*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GENERATEISERIALIZABLECONTRACT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasFlag(Il2CppObject* arg, ::Newtonsoft::Json::Schema::JsonSchemaType* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::Newtonsoft::Json::Schema::JsonSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_HASFLAG_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Schema::JsonSchemaType* GetJsonSchemaType(::System::Type* arg, ::Newtonsoft::Json::Required* arg)
		{
			return (return (::Newtonsoft::Json::Schema::JsonSchemaType*(*)(::System::Type*, ::Newtonsoft::Json::Required*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_GETJSONSCHEMATYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMAGENERATOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

