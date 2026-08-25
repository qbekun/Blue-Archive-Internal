#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class PropertyName; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class IExposedPropertyTable; }

#define UNITYENGINE_EXPOSEDREFERENCE`1_RESOLVE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine
{
	inline static constexpr unsigned int ExposedReference`1_TypeDefinitionIndex = 30974;

	class ExposedReference`1 : public Il2CppObject
	{
	public:
		::UnityEngine::PropertyName* exposedName; // 0x0
		::UnityEngine::Object* defaultValue; // 0x0

		Il2CppObject* Resolve(::UnityEngine::IExposedPropertyTable* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::IExposedPropertyTable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPOSEDREFERENCE`1_RESOLVE_OFFSET))(arg, nullptr);
		}

	};
}

