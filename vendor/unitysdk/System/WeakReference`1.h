#pragma once
#include "../unitysdk.h"

#define SYSTEM_WEAKREFERENCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_WEAKREFERENCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_WEAKREFERENCE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_WEAKREFERENCE`1_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_WEAKREFERENCE`1_SETTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_WEAKREFERENCE`1_TRYGETTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_WEAKREFERENCE`1_FINALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int WeakReference`1_TypeDefinitionIndex = 24015;

	class WeakReference`1 : public Il2CppObject
	{
	public:
		::System::Runtime::InteropServices::GCHandle* handle; // 0x0
		::System::Boolean trackResurrection; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE`1_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetTarget(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE`1_SETTARGET_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetTarget(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE`1_TRYGETTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEAKREFERENCE`1_FINALIZE_OFFSET))(nullptr);
		}

	};
}

