#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }

#define CACHE_FINDORLOADLAYOUT_OFFSET UNITYSDK_OFFSET(0x9E6CDD0)
#define CACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0x9E6D000)

	inline static constexpr unsigned int Cache_TypeDefinitionIndex = 28863;

	class Cache : public Il2CppObject
	{
	public:
		Il2CppObject* table; // 0x10

		::UnityEngine::InputSystem::Layouts::InputControlLayout* FindOrLoadLayout(::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CACHE_FINDORLOADLAYOUT_OFFSET))(str, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACHE_CLEAR_OFFSET))(nullptr);
		}

	};

