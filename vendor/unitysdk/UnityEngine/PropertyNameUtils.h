#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class PropertyName; }
namespace UnityEngine { class PropertyName&; }

#define UNITYENGINE_PROPERTYNAMEUTILS_PROPERTYNAMEFROMSTRING_OFFSET UNITYSDK_OFFSET(0xA22CBF0)
#define UNITYENGINE_PROPERTYNAMEUTILS_PROPERTYNAMEFROMSTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0xA22CC40)

namespace UnityEngine
{
	inline static constexpr unsigned int PropertyNameUtils_TypeDefinitionIndex = 31122;

	class PropertyNameUtils : public Il2CppObject
	{
	public:
		::UnityEngine::PropertyName* PropertyNameFromString(::System::String* str)
		{
			return (return (::UnityEngine::PropertyName*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAMEUTILS_PROPERTYNAMEFROMSTRING_OFFSET))(str, nullptr);
		}

		::System::Void PropertyNameFromString_Injected(::System::String* str, ::UnityEngine::PropertyName&* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::PropertyName&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAMEUTILS_PROPERTYNAMEFROMSTRING_INJECTED_OFFSET))(str, arg, nullptr);
		}

	};
}

