#pragma once
#include "../unitysdk.h"

#define TMPRO_FASTACTION`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_FASTACTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_FASTACTION`1_CALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define TMPRO_FASTACTION`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace TMPro
{
	inline static constexpr unsigned int FastAction`1_TypeDefinitionIndex = 33600;

	class FastAction`1 : public Il2CppObject
	{
	public:
		Il2CppObject* delegates; // 0x0
		Il2CppObject* lookup; // 0x0

		::System::Void Remove(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Call(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION`1_CALL_OFFSET))(arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FASTACTION`1_ADD_OFFSET))(arg, nullptr);
		}

	};
}

