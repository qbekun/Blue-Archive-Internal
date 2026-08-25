#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonSerializerSettings; }

#define MX_CORE_SERVICES_JSONSERVICE_SERIALIZEPLAINOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_SERIALIZEPLAINOBJECTDEFAULTVALUEINCLUDE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_SERIALIZEPLAINOBJECTPOPULATEDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_DESERIALIZEPLAINOBJECT_OFFSET UNITYSDK_OFFSET(0x10159E0)
#define MX_CORE_SERVICES_JSONSERVICE_DESERIALIZEPLAINOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_DESERIALIZEPLAINOBJECTDEFAULTVALUEINCLUDE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_DESERIALIZEPLAINOBJECTPOPULATEDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_SERIALIZECLASS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_DESERIALIZECLASS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_DESERIALIZECLASS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_DESERIALIZEPLAINOBJECTFROMFILE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_DESERIALIZECLASSFROMFILE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_DESERIALIZEFROMFILE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_SERIALIZENEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1015A40)
#define MX_CORE_SERVICES_JSONSERVICE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CORE_SERVICES_JSONSERVICE_ISVALIDJSON_OFFSET UNITYSDK_OFFSET(0x1015B50)
#define MX_CORE_SERVICES_JSONSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1015D40)

namespace MX::Core::Services
{
	inline static constexpr unsigned int JsonService_TypeDefinitionIndex = 12779;

	class JsonService : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::JsonSerializerSettings* PlainObjectSerializeSetting; // 0x0
		::Newtonsoft::Json::JsonSerializerSettings* PlainObjectSerializeSettingPopulateDefaultValue; // 0x8
		::Newtonsoft::Json::JsonSerializerSettings* PlainObjectDefaultValueIncludeSerializeSetting; // 0x10
		::Newtonsoft::Json::JsonSerializerSettings* DataWithAbstractClassSerializeSetting; // 0x18
		::Newtonsoft::Json::JsonSerializerSettings* DefaultSerializeSetting; // 0x20

		::System::String* SerializePlainObject(Il2CppObject* arg)
		{
			return ((::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_SERIALIZEPLAINOBJECT_OFFSET))(arg, nullptr);
		}

		::System::String* SerializePlainObjectDefaultValueInclude(Il2CppObject* arg)
		{
			return ((::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_SERIALIZEPLAINOBJECTDEFAULTVALUEINCLUDE_OFFSET))(arg, nullptr);
		}

		::System::String* SerializePlainObjectPopulateDefaultValue(Il2CppObject* arg)
		{
			return ((::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_SERIALIZEPLAINOBJECTPOPULATEDEFAULTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* DeserializePlainObject(::System::Type* arg, ::System::String* str)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_DESERIALIZEPLAINOBJECT_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* DeserializePlainObject(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_DESERIALIZEPLAINOBJECT_OFFSET))(str, nullptr);
		}

		Il2CppObject* DeserializePlainObjectDefaultValueInclude(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_DESERIALIZEPLAINOBJECTDEFAULTVALUEINCLUDE_OFFSET))(str, nullptr);
		}

		Il2CppObject* DeserializePlainObjectPopulateDefaultValue(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_DESERIALIZEPLAINOBJECTPOPULATEDEFAULTVALUE_OFFSET))(str, nullptr);
		}

		::System::String* SerializeClass(Il2CppObject* arg)
		{
			return ((::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_SERIALIZECLASS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* DeserializeClass(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_DESERIALIZECLASS_OFFSET))(str, nullptr);
		}

		Il2CppObject* DeserializeClass(::System::Type* arg, ::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_DESERIALIZECLASS_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* DeserializePlainObjectFromFile(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_DESERIALIZEPLAINOBJECTFROMFILE_OFFSET))(str, nullptr);
		}

		Il2CppObject* DeserializeClassFromFile(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_DESERIALIZECLASSFROMFILE_OFFSET))(str, nullptr);
		}

		Il2CppObject* DeserializeFromFile(::System::String* str, ::Newtonsoft::Json::JsonSerializerSettings* arg)
		{
			return ((Il2CppObject*(*)(::System::String*, ::Newtonsoft::Json::JsonSerializerSettings*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_DESERIALIZEFROMFILE_OFFSET))(str, arg, nullptr);
		}

		::System::String* Serialize(Il2CppObject* arg)
		{
			return ((::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_SERIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Deserialize(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_DESERIALIZE_OFFSET))(str, nullptr);
		}

		::System::String* Serialize(Il2CppObject* arg, ::Newtonsoft::Json::JsonSerializerSettings* arg2)
		{
			return ((::System::String*(*)(Il2CppObject*, ::Newtonsoft::Json::JsonSerializerSettings*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* SerializeNew(Il2CppObject* arg, ::Newtonsoft::Json::JsonSerializerSettings* arg2)
		{
			return ((::System::String*(*)(Il2CppObject*, ::Newtonsoft::Json::JsonSerializerSettings*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_SERIALIZENEW_OFFSET))(arg, arg2, nullptr);
		}

		::System::Object* Deserialize(::System::Type* arg, ::System::String* str, ::Newtonsoft::Json::JsonSerializerSettings* arg2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*, ::Newtonsoft::Json::JsonSerializerSettings*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_DESERIALIZE_OFFSET))(arg, str, arg2, nullptr);
		}

		Il2CppObject* Deserialize(::System::String* str, ::Newtonsoft::Json::JsonSerializerSettings* arg)
		{
			return ((Il2CppObject*(*)(::System::String*, ::Newtonsoft::Json::JsonSerializerSettings*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_DESERIALIZE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsValidJson(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_ISVALIDJSON_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_JSONSERVICE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

