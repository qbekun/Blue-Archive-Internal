#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class DefaultSerializationBinder; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94C7350)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_GETTYPEFROMTYPENAMEKEY_OFFSET UNITYSDK_OFFSET(0x94C7420)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_GETGENERICTYPEFROMTYPENAME_OFFSET UNITYSDK_OFFSET(0x94C7890)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_GETTYPEBYNAME_OFFSET UNITYSDK_OFFSET(0x94C7B60)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_BINDTOTYPE_OFFSET UNITYSDK_OFFSET(0x94C7BC0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_BINDTONAME_OFFSET UNITYSDK_OFFSET(0x94C7C70)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94C7CF0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultSerializationBinder_TypeDefinitionIndex = 31922;

	class DefaultSerializationBinder : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Serialization::DefaultSerializationBinder* Instance; // 0x0
		Il2CppObject* _typeCache; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Type* GetTypeFromTypeNameKey(Il2CppObject* arg)
		{
			return (return (::System::Type*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_GETTYPEFROMTYPENAMEKEY_OFFSET))(arg, nullptr);
		}

		::System::Type* GetGenericTypeFromTypeName(::System::String* str, ::System::Reflection::Assembly* arg)
		{
			return (return (::System::Type*(*)(::System::String*, ::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_GETGENERICTYPEFROMTYPENAME_OFFSET))(str, arg, nullptr);
		}

		::System::Type* GetTypeByName(Il2CppObject* arg)
		{
			return (return (::System::Type*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_GETTYPEBYNAME_OFFSET))(arg, nullptr);
		}

		::System::Type* BindToType(::System::String* str, ::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_BINDTOTYPE_OFFSET))(str, str, nullptr);
		}

		::System::Void BindToName(::System::Type* arg, ::System::String&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_BINDTONAME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTSERIALIZATIONBINDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

