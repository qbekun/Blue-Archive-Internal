#pragma once
#include "../unitysdk.h"

namespace Mono { class RuntimeGPtrArrayHandle; }

#define MONO_SAFEGPTRARRAYHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91217E0)
#define MONO_SAFEGPTRARRAYHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9121800)
#define MONO_SAFEGPTRARRAYHANDLE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9121820)
#define MONO_SAFEGPTRARRAYHANDLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9121840)

namespace Mono
{
	inline static constexpr unsigned int SafeGPtrArrayHandle_TypeDefinitionIndex = 23590;

	class SafeGPtrArrayHandle : public Il2CppObject
	{
	public:
		::Mono::RuntimeGPtrArrayHandle* handle; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SAFEGPTRARRAYHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SAFEGPTRARRAYHANDLE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SAFEGPTRARRAYHANDLE_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int32 get_Item(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SAFEGPTRARRAYHANDLE_GET_ITEM_OFFSET))(arg, nullptr);
		}

	};
}

