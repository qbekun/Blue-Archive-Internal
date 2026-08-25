#pragma once
#include "../unitysdk.h"

namespace Mono { class RuntimeGPtrArrayHandle&; }

#define MONO_RUNTIMEGPTRARRAYHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91213D0)
#define MONO_RUNTIMEGPTRARRAYHANDLE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x91213F0)
#define MONO_RUNTIMEGPTRARRAYHANDLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9121410)
#define MONO_RUNTIMEGPTRARRAYHANDLE_LOOKUP_OFFSET UNITYSDK_OFFSET(0x9121420)
#define MONO_RUNTIMEGPTRARRAYHANDLE_GPTRARRAYFREE_OFFSET UNITYSDK_OFFSET(0x9121490)
#define MONO_RUNTIMEGPTRARRAYHANDLE_DESTROYANDFREE_OFFSET UNITYSDK_OFFSET(0x91214A0)

namespace Mono
{
	inline static constexpr unsigned int RuntimeGPtrArrayHandle_TypeDefinitionIndex = 23575;

	class RuntimeGPtrArrayHandle : public Il2CppObject
	{
	public:
		::System::Object** value; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int32 get_Item(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 Lookup(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_LOOKUP_OFFSET))(arg, nullptr);
		}

		::System::Void GPtrArrayFree(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_GPTRARRAYFREE_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyAndFree(::Mono::RuntimeGPtrArrayHandle&* arg)
		{
			((::System::Void(*)(::Mono::RuntimeGPtrArrayHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGPTRARRAYHANDLE_DESTROYANDFREE_OFFSET))(arg, nullptr);
		}

	};
}

