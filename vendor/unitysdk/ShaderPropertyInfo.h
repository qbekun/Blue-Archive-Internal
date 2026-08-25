#pragma once
#include "unitysdk.h"

class ShaderPropertyInfo;
namespace UnityEngine { class Material; }

#define SHADERPROPERTYINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x20DCC20)
#define SHADERPROPERTYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DCC50)
#define SHADERPROPERTYINFO_APPLYVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ShaderPropertyInfo_TypeDefinitionIndex = 3750;

	class ShaderPropertyInfo : public Il2CppObject
	{
	public:
		::System::Int32 ShaderPropertyIndex; // 0x10
		::System::String* PropertyName; // 0x18
		::System::Boolean IsHidden; // 0x20

		::System::Int32 CompareTo(ShaderPropertyInfo* arg)
		{
			return ((::System::Int32(*)(ShaderPropertyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERPROPERTYINFO_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERPROPERTYINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ApplyValue(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERPROPERTYINFO_APPLYVALUE_OFFSET))(arg, nullptr);
		}

	};

