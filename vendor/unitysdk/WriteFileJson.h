#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputActionMap; }

#define WRITEFILEJSON_FROMMAPS_OFFSET UNITYSDK_OFFSET(0x9E446C0)
#define WRITEFILEJSON_FROMMAP_OFFSET UNITYSDK_OFFSET(0x9E4BAD0)

	inline static constexpr unsigned int WriteFileJson_TypeDefinitionIndex = 28396;

	class WriteFileJson : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* maps; // 0x10

		WriteFileJson* FromMaps(Il2CppObject* arg)
		{
			return (return (WriteFileJson*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WRITEFILEJSON_FROMMAPS_OFFSET))(arg, nullptr);
		}

		WriteFileJson* FromMap(::UnityEngine::InputSystem::InputActionMap* arg)
		{
			return (return (WriteFileJson*(*)(::UnityEngine::InputSystem::InputActionMap*, ::PVOID))((::PBYTE)hIl2Cpp + WRITEFILEJSON_FROMMAP_OFFSET))(arg, nullptr);
		}

	};

