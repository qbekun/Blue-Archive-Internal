#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET8_OFFSET UNITYSDK_OFFSET(0x9FCD8F0)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET16_OFFSET UNITYSDK_OFFSET(0x9FCDDA0)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET8_OFFSET UNITYSDK_OFFSET(0x9FCD8B0)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET128_OFFSET UNITYSDK_OFFSET(0x9FCECF0)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET128_OFFSET UNITYSDK_OFFSET(0x9FCEC90)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET256_OFFSET UNITYSDK_OFFSET(0x9FCF4B0)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET64_OFFSET UNITYSDK_OFFSET(0x9FCE740)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET32_OFFSET UNITYSDK_OFFSET(0x9FCE290)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET64_OFFSET UNITYSDK_OFFSET(0x9FCE700)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET16_OFFSET UNITYSDK_OFFSET(0x9FCDD60)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET32_OFFSET UNITYSDK_OFFSET(0x9FCE260)
#define UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET256_OFFSET UNITYSDK_OFFSET(0x9FCF5B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArrayUtilities_TypeDefinitionIndex = 34050;

	class BitArrayUtilities : public Il2CppObject
	{
	public:
		::System::Void Set8(::System::UInt32 arg, uint8_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, uint8_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET8_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Set16(::System::UInt32 arg, uint16_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, uint16_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET16_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Get8(::System::UInt32 arg, ::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET8_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Set128(::System::UInt32 arg, uint64_t&* arg, uint64_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, uint64_t&*, uint64_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET128_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Get128(::System::UInt32 arg, ::System::UInt64 arg, ::System::UInt64 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET128_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Get256(::System::UInt32 arg, ::System::UInt64 arg, ::System::UInt64 arg, ::System::UInt64 arg, ::System::UInt64 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET256_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Set64(::System::UInt32 arg, uint64_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, uint64_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET64_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Set32(::System::UInt32 arg, uint32_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, uint32_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET32_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Get64(::System::UInt32 arg, ::System::UInt64 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET64_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Get16(::System::UInt32 arg, ::System::UInt16 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET16_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Get32(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_GET32_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Set256(::System::UInt32 arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, uint64_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, uint64_t&*, uint64_t&*, uint64_t&*, uint64_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAYUTILITIES_SET256_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

