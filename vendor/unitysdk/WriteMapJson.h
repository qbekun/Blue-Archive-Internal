#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionMap; }

#define WRITEMAPJSON_FROMMAP_OFFSET UNITYSDK_OFFSET(0x9E4C760)

	inline static constexpr unsigned int WriteMapJson_TypeDefinitionIndex = 28395;

	class WriteMapJson : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::String* id; // 0x18
		::Il2CppArray<::System::Object*>* actions; // 0x20
		::Il2CppArray<::System::Object*>* bindings; // 0x28

		WriteMapJson* FromMap(::UnityEngine::InputSystem::InputActionMap* arg)
		{
			return (return (WriteMapJson*(*)(::UnityEngine::InputSystem::InputActionMap*, ::PVOID))((::PBYTE)hIl2Cpp + WRITEMAPJSON_FROMMAP_OFFSET))(arg, nullptr);
		}

	};

