#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }

#define LAYOUTJSON_TOLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F6B7C0)
#define LAYOUTJSON_FROMLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F6B200)

	inline static constexpr unsigned int LayoutJson_TypeDefinitionIndex = 28855;

	class LayoutJson : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::String* extend; // 0x18
		::Il2CppArray<::System::Object*>* extendMultiple; // 0x20
		::System::String* format; // 0x28
		::System::String* beforeRender; // 0x30
		::System::String* runInBackground; // 0x38
		::Il2CppArray<::System::Object*>* commonUsages; // 0x40
		::System::String* displayName; // 0x48
		::System::String* description; // 0x50
		::System::String* type; // 0x58
		::System::String* variant; // 0x60
		::System::Boolean isGenericTypeOfDevice; // 0x68
		::System::Boolean hideInUI; // 0x69
		::Il2CppArray<::System::Object*>* controls; // 0x70

		::UnityEngine::InputSystem::Layouts::InputControlLayout* ToLayout()
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYOUTJSON_TOLAYOUT_OFFSET))(nullptr);
		}

		LayoutJson* FromLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* arg)
		{
			return (return (LayoutJson*(*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::PVOID))((::PBYTE)hIl2Cpp + LAYOUTJSON_FROMLAYOUT_OFFSET))(arg, nullptr);
		}

	};

