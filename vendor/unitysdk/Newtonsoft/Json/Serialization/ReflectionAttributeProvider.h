#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONATTRIBUTEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E58B0)
#define NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONATTRIBUTEPROVIDER_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x94E5910)
#define NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONATTRIBUTEPROVIDER_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x94E5970)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ReflectionAttributeProvider_TypeDefinitionIndex = 31969;

	class ReflectionAttributeProvider : public Il2CppObject
	{
	public:
		::System::Object* _attributeProvider; // 0x10

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONATTRIBUTEPROVIDER_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAttributes(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONATTRIBUTEPROVIDER_GETATTRIBUTES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONATTRIBUTEPROVIDER_GETATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

	};
}

