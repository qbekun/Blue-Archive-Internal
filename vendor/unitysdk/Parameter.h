#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Object; }

#define PARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1990190)
#define PARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1990210)
#define PARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x19902C0)
#define PARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1990350)
#define PARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x19905C0)
#define PARAMETER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x19905D0)

	inline static constexpr unsigned int Parameter_TypeDefinitionIndex = 101;

	class Parameter : public Il2CppObject
	{
	public:
		::UnityEngine::Object* obj; // 0x10
		::System::String* field; // 0x18
		::System::Object* mValue; // 0x20
		::System::Type* expectedType; // 0x28
		::System::Boolean cached; // 0x30
		::System::Reflection::PropertyInfo* propInfo; // 0x38
		::System::Reflection::FieldInfo* fieldInfo; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETER_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETER_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Type* get_type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETER_GET_TYPE_OFFSET))(nullptr);
		}

	};

