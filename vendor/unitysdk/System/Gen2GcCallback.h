#pragma once
#include "../unitysdk.h"

#define SYSTEM_GEN2GCCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x933D250)
#define SYSTEM_GEN2GCCALLBACK_REGISTER_OFFSET UNITYSDK_OFFSET(0x933D260)
#define SYSTEM_GEN2GCCALLBACK_SETUP_OFFSET UNITYSDK_OFFSET(0x933D2E0)
#define SYSTEM_GEN2GCCALLBACK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x933D320)

namespace System
{
	inline static constexpr unsigned int Gen2GcCallback_TypeDefinitionIndex = 23742;

	class Gen2GcCallback : public Il2CppObject
	{
	public:
		Il2CppObject* _callback; // 0x10
		::System::Runtime::InteropServices::GCHandle* _weakTargetObj; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GEN2GCCALLBACK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Register(Il2CppObject* arg, ::System::Object* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GEN2GCCALLBACK_REGISTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Setup(Il2CppObject* arg, ::System::Object* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GEN2GCCALLBACK_SETUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GEN2GCCALLBACK_FINALIZE_OFFSET))(nullptr);
		}

	};
}

