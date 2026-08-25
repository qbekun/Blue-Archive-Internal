#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_OFFSET UNITYSDK_OFFSET(0xA21CFB0)
#define UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_OFFSET UNITYSDK_OFFSET(0xA21CF60)

namespace UnityEngine
{
	inline static constexpr unsigned int HashUnsafeUtilities_TypeDefinitionIndex = 31079;

	class HashUnsafeUtilities : public Il2CppObject
	{
	public:
		::System::Void ComputeHash128(::System::Object** arg, ::System::UInt64 arg, ::System::Object** arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::UInt64, ::System::Object**, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ComputeHash128(::System::Object** arg, ::System::UInt64 arg, ::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::System::UInt64, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HASHUNSAFEUTILITIES_COMPUTEHASH128_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

