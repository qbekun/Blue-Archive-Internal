#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Shader; }
namespace UnityEngine { class Material; }

#define SHADERPRESETDATA_GET_SHADER_OFFSET UNITYSDK_OFFSET(0x20DBEF0)
#define SHADERPRESETDATA_GET_KEYWORDS_OFFSET UNITYSDK_OFFSET(0x20DBF00)
#define SHADERPRESETDATA_APPLY_OFFSET UNITYSDK_OFFSET(0x20DBF10)
#define SHADERPRESETDATA_APPLY_OFFSET UNITYSDK_OFFSET(0x20DC140)
#define SHADERPRESETDATA_READ_OFFSET UNITYSDK_OFFSET(0x20DC190)
#define SHADERPRESETDATA_APPLY_OFFSET UNITYSDK_OFFSET(0x20DCA90)
#define SHADERPRESETDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x20DCB70)

	inline static constexpr unsigned int ShaderPresetData_TypeDefinitionIndex = 3748;

	class ShaderPresetData : public Il2CppObject
	{
	public:
		::UnityEngine::Shader* shader; // 0x18
		::Il2CppArray<::System::Object*>* keywords; // 0x20
		::Il2CppArray<::System::Object*>* floats; // 0x28
		::Il2CppArray<::System::Object*>* vectors; // 0x30
		::Il2CppArray<::System::Object*>* colors; // 0x38
		::Il2CppArray<::System::Object*>* textures; // 0x40

		::UnityEngine::Shader* get_Shader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERPRESETDATA_GET_SHADER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Keywords()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERPRESETDATA_GET_KEYWORDS_OFFSET))(nullptr);
		}

		::System::Void Apply(::UnityEngine::Material* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHADERPRESETDATA_APPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Apply(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHADERPRESETDATA_APPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Read(::UnityEngine::Material* arg, ::System::Object[]&* arg2, ::System::Object[]&* arg3)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::System::Object[]&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERPRESETDATA_READ_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Apply(::UnityEngine::Material* arg, ::Il2CppArray<::System::Object*>* arg2, ::Il2CppArray<::System::Object*>* arg3)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHADERPRESETDATA_APPLY_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERPRESETDATA_.CTOR_OFFSET))(nullptr);
		}

	};

