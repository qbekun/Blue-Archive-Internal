#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Object; }
namespace UnityEngine { class PropertyName; }

#define UNITYENGINE_IEXPOSEDPROPERTYTABLE_GETREFERENCEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine
{
	inline static constexpr unsigned int IExposedPropertyTable_TypeDefinitionIndex = 30975;

	class IExposedPropertyTable : public Il2CppObject
	{
	public:
		::UnityEngine::Object* GetReferenceValue(::UnityEngine::PropertyName* arg, bool&* arg)
		{
			return (return (::UnityEngine::Object*(*)(::UnityEngine::PropertyName*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_IEXPOSEDPROPERTYTABLE_GETREFERENCEVALUE_OFFSET))(arg, arg, nullptr);
		}

	};
}

