#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class JsonPropertyCollection; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONDYNAMICCONTRACT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x94CAB10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDYNAMICCONTRACT_GET_PROPERTYNAMERESOLVER_OFFSET UNITYSDK_OFFSET(0x94CAB20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDYNAMICCONTRACT_SET_PROPERTYNAMERESOLVER_OFFSET UNITYSDK_OFFSET(0x94CAB30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDYNAMICCONTRACT_CREATECALLSITEGETTER_OFFSET UNITYSDK_OFFSET(0x94CAB50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDYNAMICCONTRACT_CREATECALLSITESETTER_OFFSET UNITYSDK_OFFSET(0x94CAC60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDYNAMICCONTRACT_.CTOR_OFFSET UNITYSDK_OFFSET(0x94C4310)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDYNAMICCONTRACT_TRYGETMEMBER_OFFSET UNITYSDK_OFFSET(0x94CAD70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDYNAMICCONTRACT_TRYSETMEMBER_OFFSET UNITYSDK_OFFSET(0x94CAEA0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonDynamicContract_TypeDefinitionIndex = 31943;

	class JsonDynamicContract : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Serialization::JsonPropertyCollection* _Properties_k__BackingField; // 0xC0
		Il2CppObject* _PropertyNameResolver_k__BackingField; // 0xC8
		Il2CppObject* _callSiteGetters; // 0xD0
		Il2CppObject* _callSiteSetters; // 0xD8

		::Newtonsoft::Json::Serialization::JsonPropertyCollection* get_Properties()
		{
			return (return (::Newtonsoft::Json::Serialization::JsonPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDYNAMICCONTRACT_GET_PROPERTIES_OFFSET))(nullptr);
		}

		Il2CppObject* get_PropertyNameResolver()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDYNAMICCONTRACT_GET_PROPERTYNAMERESOLVER_OFFSET))(nullptr);
		}

		::System::Void set_PropertyNameResolver(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDYNAMICCONTRACT_SET_PROPERTYNAMERESOLVER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateCallSiteGetter(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDYNAMICCONTRACT_CREATECALLSITEGETTER_OFFSET))(str, nullptr);
		}

		Il2CppObject* CreateCallSiteSetter(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDYNAMICCONTRACT_CREATECALLSITESETTER_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDYNAMICCONTRACT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetMember(::System::Dynamic::IDynamicMetaObjectProvider* arg, ::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::Dynamic::IDynamicMetaObjectProvider*, ::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDYNAMICCONTRACT_TRYGETMEMBER_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean TrySetMember(::System::Dynamic::IDynamicMetaObjectProvider* arg, ::System::String* str, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Dynamic::IDynamicMetaObjectProvider*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDYNAMICCONTRACT_TRYSETMEMBER_OFFSET))(arg, str, arg, nullptr);
		}

	};
}

