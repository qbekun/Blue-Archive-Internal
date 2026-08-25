#pragma once
#include "../unitysdk.h"

#define SYSTEM_MONOASYNCCALL_.CTOR_OFFSET UNITYSDK_OFFSET(0x93B88B0)

namespace System
{
	inline static constexpr unsigned int MonoAsyncCall_TypeDefinitionIndex = 23978;

	class MonoAsyncCall : public Il2CppObject
	{
	public:
		::System::Object* msg; // 0x10
		::System::Int32 cb_method; // 0x18
		::System::Object* cb_target; // 0x20
		::System::Object* state; // 0x28
		::System::Object* res; // 0x30
		::System::Object* out_args; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOASYNCCALL_.CTOR_OFFSET))(nullptr);
		}

	};
}

