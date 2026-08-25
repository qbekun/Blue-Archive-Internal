#pragma once
#include "../unitysdk.h"

#define RUNTIMEINSPECTORNAMESPACE_TRANSFORMFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9579460)
#define RUNTIMEINSPECTORNAMESPACE_TRANSFORMFIELD_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x95795A0)
#define RUNTIMEINSPECTORNAMESPACE_TRANSFORMFIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x95795B0)
#define RUNTIMEINSPECTORNAMESPACE_TRANSFORMFIELD_GENERATEELEMENTS_OFFSET UNITYSDK_OFFSET(0x9579620)
#define RUNTIMEINSPECTORNAMESPACE_TRANSFORMFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x95796B0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int TransformField_TypeDefinitionIndex = 35675;

	class TransformField : public Il2CppObject
	{
	public:
		::System::Reflection::PropertyInfo* positionProp; // 0xB8
		::System::Reflection::PropertyInfo* rotationProp; // 0xC0
		::System::Reflection::PropertyInfo* scaleProp; // 0xC8

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TRANSFORMFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TRANSFORMFIELD_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TRANSFORMFIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TRANSFORMFIELD_GENERATEELEMENTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_TRANSFORMFIELD_.CTOR_OFFSET))(nullptr);
		}

	};
}

