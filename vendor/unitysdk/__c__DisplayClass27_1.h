#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define <>C__DISPLAYCLASS27_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xE2ACD0)
#define <>C__DISPLAYCLASS27_1__FILTERFIRSTCLEARREWARDBYDISPLAYSEQUENCE_B__1_OFFSET UNITYSDK_OFFSET(0xE2ACE0)

	inline static constexpr unsigned int <>c__DisplayClass27_1_TypeDefinitionIndex = 10411;

	class <>c__DisplayClass27_1 : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelInfo* x; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS27_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _FilterFirstClearRewardByDisplaySequence_b__1(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS27_1__FILTERFIRSTCLEARREWARDBYDISPLAYSEQUENCE_B__1_OFFSET))(arg, nullptr);
		}

	};

