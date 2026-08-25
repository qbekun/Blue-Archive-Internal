#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_CANCELLATIONCALLBACKCOREWORKARGUMENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x93DBED0)

namespace System::Threading
{
	inline static constexpr unsigned int CancellationCallbackCoreWorkArguments_TypeDefinitionIndex = 24064;

	class CancellationCallbackCoreWorkArguments : public Il2CppObject
	{
	public:
		Il2CppObject* _currArrayFragment; // 0x10
		::System::Int32 _currArrayIndex; // 0x18

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONCALLBACKCOREWORKARGUMENTS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

