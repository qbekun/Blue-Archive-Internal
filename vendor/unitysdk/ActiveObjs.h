#pragma once
#include "unitysdk.h"

#define ACTIVEOBJS_AWAKE_OFFSET UNITYSDK_OFFSET(0xC86450)
#define ACTIVEOBJS_ACTIVE_OFFSET UNITYSDK_OFFSET(0xC86480)
#define ACTIVEOBJS_.CTOR_OFFSET UNITYSDK_OFFSET(0xC86650)

	inline static constexpr unsigned int ActiveObjs_TypeDefinitionIndex = 9077;

	class ActiveObjs : public Il2CppObject
	{
	public:
		Il2CppObject* activeObjs; // 0x18
		Il2CppObject* inActiveObjs; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVEOBJS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Active(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ACTIVEOBJS_ACTIVE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVEOBJS_.CTOR_OFFSET))(nullptr);
		}

	};

