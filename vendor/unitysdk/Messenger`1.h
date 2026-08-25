#pragma once
#include "unitysdk.h"

#define MESSENGER`1_ATTACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MESSENGER`1_ATTACHIFNOTEXISTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MESSENGER`1_DETACH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MESSENGER`1_BROADCAST_OFFSET UNITYSDK_OFFSET(0x000000)
#define MESSENGER`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MESSENGER`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MESSENGER`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MESSENGER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Messenger`1_TypeDefinitionIndex = 9177;

	class Messenger`1 : public Il2CppObject
	{
	public:
		Il2CppObject* subscribers; // 0x0
		::System::Object* lockObject; // 0x0

		::System::Void Attach(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MESSENGER`1_ATTACH_OFFSET))(arg, nullptr);
		}

		::System::Void AttachIfNotExists(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MESSENGER`1_ATTACHIFNOTEXISTS_OFFSET))(arg, nullptr);
		}

		::System::Void Detach(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MESSENGER`1_DETACH_OFFSET))(arg, nullptr);
		}

		::System::Void Broadcast(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MESSENGER`1_BROADCAST_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSENGER`1_CONTAINS_OFFSET))(nullptr);
		}

		::System::Boolean Contains(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MESSENGER`1_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSENGER`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSENGER`1_.CTOR_OFFSET))(nullptr);
		}

	};

