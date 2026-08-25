#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_LAZYINITIALIZER_ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_LAZYINITIALIZER_ENSUREINITIALIZEDCORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_LAZYINITIALIZER_ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_LAZYINITIALIZER_ENSUREINITIALIZEDCORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_LAZYINITIALIZER_ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_LAZYINITIALIZER_ENSUREINITIALIZEDCORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_LAZYINITIALIZER_ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_LAZYINITIALIZER_ENSUREINITIALIZEDCORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_THREADING_LAZYINITIALIZER_ENSURELOCKINITIALIZED_OFFSET UNITYSDK_OFFSET(0x93D74A0)

namespace System::Threading
{
	inline static constexpr unsigned int LazyInitializer_TypeDefinitionIndex = 24037;

	class LazyInitializer : public Il2CppObject
	{
	public:
		Il2CppObject* EnsureInitialized(Il2CppObject&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LAZYINITIALIZER_ENSUREINITIALIZED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* EnsureInitializedCore(Il2CppObject&* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LAZYINITIALIZER_ENSUREINITIALIZEDCORE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* EnsureInitialized(Il2CppObject&* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LAZYINITIALIZER_ENSUREINITIALIZED_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EnsureInitializedCore(Il2CppObject&* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LAZYINITIALIZER_ENSUREINITIALIZEDCORE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EnsureInitialized(Il2CppObject&* arg, bool&* arg, ::System::Object&* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, bool&*, ::System::Object&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LAZYINITIALIZER_ENSUREINITIALIZED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* EnsureInitializedCore(Il2CppObject&* arg, bool&* arg, ::System::Object&* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, bool&*, ::System::Object&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LAZYINITIALIZER_ENSUREINITIALIZEDCORE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* EnsureInitialized(Il2CppObject&* arg, ::System::Object&* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, ::System::Object&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LAZYINITIALIZER_ENSUREINITIALIZED_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* EnsureInitializedCore(Il2CppObject&* arg, ::System::Object&* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, ::System::Object&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LAZYINITIALIZER_ENSUREINITIALIZEDCORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* EnsureLockInitialized(::System::Object&* arg)
		{
			return (return (::System::Object*(*)(::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_LAZYINITIALIZER_ENSURELOCKINITIALIZED_OFFSET))(arg, nullptr);
		}

	};
}

