#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_CLEARGREADEFINDGIFTARGS_GET_CLEARCOUNT_OFFSET UNITYSDK_OFFSET(0x1273190)
#define MX_LOGIC_BATTLES_CLEARGREADEFINDGIFTARGS_SET_CLEARCOUNT_OFFSET UNITYSDK_OFFSET(0x12731A0)
#define MX_LOGIC_BATTLES_CLEARGREADEFINDGIFTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x12731B0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int ClearGreadeFindGiftArgs_TypeDefinitionIndex = 14040;

	class ClearGreadeFindGiftArgs : public Il2CppObject
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::Int32 _ClearCount_k__BackingField; // 0x18

		::System::Int32 get_ClearCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CLEARGREADEFINDGIFTARGS_GET_CLEARCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ClearCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CLEARGREADEFINDGIFTARGS_SET_CLEARCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CLEARGREADEFINDGIFTARGS_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

