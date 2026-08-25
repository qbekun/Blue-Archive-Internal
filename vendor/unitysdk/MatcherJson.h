#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Layouts { class InputDeviceMatcher; }

#define MATCHERJSON_FROMMATCHER_OFFSET UNITYSDK_OFFSET(0x9E75400)
#define MATCHERJSON_TOMATCHER_OFFSET UNITYSDK_OFFSET(0x9E75860)

	inline static constexpr unsigned int MatcherJson_TypeDefinitionIndex = 28873;

	class MatcherJson : public Il2CppObject
	{
	public:
		::System::String* interface; // 0x10
		::Il2CppArray<::System::Object*>* interfaces; // 0x18
		::System::String* deviceClass; // 0x20
		::Il2CppArray<::System::Object*>* deviceClasses; // 0x28
		::System::String* manufacturer; // 0x30
		::Il2CppArray<::System::Object*>* manufacturers; // 0x38
		::System::String* product; // 0x40
		::Il2CppArray<::System::Object*>* products; // 0x48
		::System::String* version; // 0x50
		::Il2CppArray<::System::Object*>* versions; // 0x58
		::Il2CppArray<::System::Object*>* capabilities; // 0x60

		MatcherJson* FromMatcher(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* arg)
		{
			return (return (MatcherJson*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*, ::PVOID))((::PBYTE)hIl2Cpp + MATCHERJSON_FROMMATCHER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher* ToMatcher()
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + MATCHERJSON_TOMATCHER_OFFSET))(nullptr);
		}

	};

