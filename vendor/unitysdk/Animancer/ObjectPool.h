#pragma once
#include "../unitysdk.h"

#define ANIMANCER_OBJECTPOOL_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL_ACQUIRELIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL_ACQUIRESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_OBJECTPOOL_ACQUIRESTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x48E280)
#define ANIMANCER_OBJECTPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x48E300)
#define ANIMANCER_OBJECTPOOL_RELEASETOSTRING_OFFSET UNITYSDK_OFFSET(0x48E380)

namespace Animancer
{
	inline static constexpr unsigned int ObjectPool_TypeDefinitionIndex = 35095;

	class ObjectPool : public Il2CppObject
	{
	public:
		::System::String* NotClearError; // 0x0

		Il2CppObject* Acquire()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL_ACQUIRE_OFFSET))(nullptr);
		}

		::System::Void Acquire(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL_ACQUIRE_OFFSET))(arg, nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void Release(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL_RELEASE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AcquireList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL_ACQUIRELIST_OFFSET))(nullptr);
		}

		::System::Void Acquire(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL_ACQUIRE_OFFSET))(arg, nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void Release(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL_RELEASE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AcquireSet()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL_ACQUIRESET_OFFSET))(nullptr);
		}

		::System::Void Acquire(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL_ACQUIRE_OFFSET))(arg, nullptr);
		}

		::System::Void Release(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void Release(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Text::StringBuilder* AcquireStringBuilder()
		{
			return (return (::System::Text::StringBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL_ACQUIRESTRINGBUILDER_OFFSET))(nullptr);
		}

		::System::Void Release(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::String* ReleaseToString(::System::Text::StringBuilder* arg)
		{
			return (return (::System::String*(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_OBJECTPOOL_RELEASETOSTRING_OFFSET))(arg, nullptr);
		}

	};
}

