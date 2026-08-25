#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputControlScheme; }

#define SCHEMEJSON_TOSCHEME_OFFSET UNITYSDK_OFFSET(0x9E935F0)
#define SCHEMEJSON_TOJSON_OFFSET UNITYSDK_OFFSET(0x9E938A0)
#define SCHEMEJSON_TOJSON_OFFSET UNITYSDK_OFFSET(0x9E93AD0)
#define SCHEMEJSON_TOSCHEMES_OFFSET UNITYSDK_OFFSET(0x9E93C10)

	inline static constexpr unsigned int SchemeJson_TypeDefinitionIndex = 28449;

	class SchemeJson : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::String* bindingGroup; // 0x18
		::Il2CppArray<::System::Object*>* devices; // 0x20

		::UnityEngine::InputSystem::InputControlScheme* ToScheme()
		{
			return (return (::UnityEngine::InputSystem::InputControlScheme*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEMEJSON_TOSCHEME_OFFSET))(nullptr);
		}

		SchemeJson* ToJson(::UnityEngine::InputSystem::InputControlScheme* arg)
		{
			return (return (SchemeJson*(*)(::UnityEngine::InputSystem::InputControlScheme*, ::PVOID))((::PBYTE)hIl2Cpp + SCHEMEJSON_TOJSON_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToJson(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCHEMEJSON_TOJSON_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToSchemes(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCHEMEJSON_TOSCHEMES_OFFSET))(arg, nullptr);
		}

	};

