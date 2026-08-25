#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONBINDERADAPTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E5EF0)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONBINDERADAPTER_BINDTOTYPE_OFFSET UNITYSDK_OFFSET(0x94E5F20)
#define NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONBINDERADAPTER_BINDTONAME_OFFSET UNITYSDK_OFFSET(0x94E5F50)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int SerializationBinderAdapter_TypeDefinitionIndex = 31971;

	class SerializationBinderAdapter : public Il2CppObject
	{
	public:
		::System::Runtime::Serialization::SerializationBinder* SerializationBinder; // 0x10

		::System::Void .ctor(::System::Runtime::Serialization::SerializationBinder* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationBinder*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONBINDERADAPTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Type* BindToType(::System::String* str, ::System::String* str)
		{
			return (return (::System::Type*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONBINDERADAPTER_BINDTOTYPE_OFFSET))(str, str, nullptr);
		}

		::System::Void BindToName(::System::Type* arg, ::System::String&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_SERIALIZATIONBINDERADAPTER_BINDTONAME_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

