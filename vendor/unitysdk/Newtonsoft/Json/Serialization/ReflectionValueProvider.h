#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94E59D0)
#define NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x94E5A30)
#define NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x94E5C10)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ReflectionValueProvider_TypeDefinitionIndex = 31970;

	class ReflectionValueProvider : public Il2CppObject
	{
	public:
		::System::Reflection::MemberInfo* _memberInfo; // 0x10

		::System::Void .ctor(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER_GETVALUE_OFFSET))(arg, nullptr);
		}

	};
}

