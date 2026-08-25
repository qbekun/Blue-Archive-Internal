#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_ENDFINDGIFTARGS_SET_CLEARCOUNT_OFFSET UNITYSDK_OFFSET(0x1273220)
#define MX_LOGIC_BATTLES_ENDFINDGIFTARGS_GET_CLEARCOUNT_OFFSET UNITYSDK_OFFSET(0x1273230)
#define MX_LOGIC_BATTLES_ENDFINDGIFTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1273240)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int EndFindGiftArgs_TypeDefinitionIndex = 14041;

	class EndFindGiftArgs : public Il2CppObject
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::Int32 _ClearCount_k__BackingField; // 0x18

		::System::Void set_ClearCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ENDFINDGIFTARGS_SET_CLEARCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ClearCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ENDFINDGIFTARGS_GET_CLEARCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ENDFINDGIFTARGS_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

