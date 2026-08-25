#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_COROUTINE_WAITFORPREUPDATE_GET_WAITCOUNT_OFFSET UNITYSDK_OFFSET(0x1425460)
#define MX_LOGIC_COROUTINE_WAITFORPREUPDATE_SET_WAITCOUNT_OFFSET UNITYSDK_OFFSET(0x1425470)
#define MX_LOGIC_COROUTINE_WAITFORPREUPDATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x14252A0)

namespace MX::Logic::Coroutine
{
	inline static constexpr unsigned int WaitForPreUpdate_TypeDefinitionIndex = 14829;

	class WaitForPreUpdate : public Il2CppObject
	{
	public:
		::System::Int32 _WaitCount_k__BackingField; // 0x10

		::System::Int32 get_WaitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_WAITFORPREUPDATE_GET_WAITCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_WaitCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_WAITFORPREUPDATE_SET_WAITCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_WAITFORPREUPDATE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

