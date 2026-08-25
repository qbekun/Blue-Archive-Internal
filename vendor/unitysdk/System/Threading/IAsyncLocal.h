#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_IASYNCLOCAL_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading
{
	inline static constexpr unsigned int IAsyncLocal_TypeDefinitionIndex = 24033;

	class IAsyncLocal : public Il2CppObject
	{
	public:
		::System::Void OnValueChanged(::System::Object* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_IASYNCLOCAL_ONVALUECHANGED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

