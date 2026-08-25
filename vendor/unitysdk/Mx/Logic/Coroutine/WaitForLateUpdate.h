#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_COROUTINE_WAITFORLATEUPDATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x141EE50)
#define MX_LOGIC_COROUTINE_WAITFORLATEUPDATE_SET_WAITCOUNT_OFFSET UNITYSDK_OFFSET(0x14252C0)
#define MX_LOGIC_COROUTINE_WAITFORLATEUPDATE_GET_WAITCOUNT_OFFSET UNITYSDK_OFFSET(0x14252D0)

namespace MX::Logic::Coroutine
{
	inline static constexpr unsigned int WaitForLateUpdate_TypeDefinitionIndex = 14827;

	class WaitForLateUpdate : public Il2CppObject
	{
	public:
		::System::Int32 _WaitCount_k__BackingField; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_WAITFORLATEUPDATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_WaitCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_WAITFORLATEUPDATE_SET_WAITCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_WaitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_COROUTINE_WAITFORLATEUPDATE_GET_WAITCOUNT_OFFSET))(nullptr);
		}

	};
}

