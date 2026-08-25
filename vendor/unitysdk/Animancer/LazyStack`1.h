#pragma once
#include "../unitysdk.h"

#define ANIMANCER_LAZYSTACK`1_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_LAZYSTACK`1_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_LAZYSTACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_LAZYSTACK`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_LAZYSTACK`1_INCREMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_LAZYSTACK`1_DECREMENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Animancer
{
	inline static constexpr unsigned int LazyStack`1_TypeDefinitionIndex = 35090;

	class LazyStack`1 : public Il2CppObject
	{
	public:
		Il2CppObject* Stack; // 0x0
		::System::Int32 _CurrentIndex; // 0x0
		Il2CppObject* _Current_k__BackingField; // 0x0

		Il2CppObject* get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LAZYSTACK`1_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_Current(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LAZYSTACK`1_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LAZYSTACK`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LAZYSTACK`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Increment()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LAZYSTACK`1_INCREMENT_OFFSET))(nullptr);
		}

		::System::Void Decrement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_LAZYSTACK`1_DECREMENT_OFFSET))(nullptr);
		}

	};
}

