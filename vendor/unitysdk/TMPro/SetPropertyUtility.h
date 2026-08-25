#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color&; }
namespace UnityEngine { class Color; }

#define TMPRO_SETPROPERTYUTILITY_SETCOLOR_OFFSET UNITYSDK_OFFSET(0xA16D730)
#define TMPRO_SETPROPERTYUTILITY_SETCLASS_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_SETPROPERTYUTILITY_SETEQUATABLESTRUCT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_SETPROPERTYUTILITY_SETSTRUCT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace TMPro
{
	inline static constexpr unsigned int SetPropertyUtility_TypeDefinitionIndex = 33694;

	class SetPropertyUtility : public Il2CppObject
	{
	public:
		::System::Boolean SetColor(::UnityEngine::Color&* arg, ::UnityEngine::Color* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Color&*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SETPROPERTYUTILITY_SETCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetClass(Il2CppObject&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SETPROPERTYUTILITY_SETCLASS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetEquatableStruct(Il2CppObject&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SETPROPERTYUTILITY_SETEQUATABLESTRUCT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SetStruct(Il2CppObject&* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_SETPROPERTYUTILITY_SETSTRUCT_OFFSET))(arg, arg, nullptr);
		}

	};
}

