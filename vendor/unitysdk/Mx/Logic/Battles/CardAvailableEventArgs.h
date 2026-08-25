#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_CARDAVAILABLEEVENTARGS_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x126FB90)
#define MX_LOGIC_BATTLES_CARDAVAILABLEEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126FBA0)
#define MX_LOGIC_BATTLES_CARDAVAILABLEEVENTARGS_SET_CARDID_OFFSET UNITYSDK_OFFSET(0x126FBF0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CardAvailableEventArgs_TypeDefinitionIndex = 14029;

	class CardAvailableEventArgs : public Il2CppObject
	{
	public:
		::System::Int32 _CardId_k__BackingField; // 0x10

		::System::Int32 get_CardId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARDAVAILABLEEVENTARGS_GET_CARDID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARDAVAILABLEEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_CardId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CARDAVAILABLEEVENTARGS_SET_CARDID_OFFSET))(arg, nullptr);
		}

	};
}

