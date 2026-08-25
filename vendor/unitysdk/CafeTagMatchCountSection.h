#pragma once
#include "unitysdk.h"

#define CAFETAGMATCHCOUNTSECTION_SET_MATCHCOUNTSTART_INCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1832B70)
#define CAFETAGMATCHCOUNTSECTION_GET_MATCHCOUNTSTART_INCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1832B80)
#define CAFETAGMATCHCOUNTSECTION_SET_MATCHCOUNTEND_EXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1832B90)
#define CAFETAGMATCHCOUNTSECTION_GET_MATCHCOUNTEND_EXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1832BA0)
#define CAFETAGMATCHCOUNTSECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x18329D0)
#define CAFETAGMATCHCOUNTSECTION_GET_BONUSWEIGHTPERMATCHEDTAG_OFFSET UNITYSDK_OFFSET(0x1832BB0)
#define CAFETAGMATCHCOUNTSECTION_SET_BONUSWEIGHTPERMATCHEDTAG_OFFSET UNITYSDK_OFFSET(0x1832BC0)

	inline static constexpr unsigned int CafeTagMatchCountSection_TypeDefinitionIndex = 15731;

	class CafeTagMatchCountSection : public Il2CppObject
	{
	public:
		::System::Int64 _MatchCountStart_Inclusive_k__BackingField; // 0x10
		::System::Int64 _MatchCountEnd_Exclusive_k__BackingField; // 0x18
		::System::Int32 _BonusWeightPerMatchedTag_k__BackingField; // 0x20

		::System::Void set_MatchCountStart_Inclusive(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFETAGMATCHCOUNTSECTION_SET_MATCHCOUNTSTART_INCLUSIVE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MatchCountStart_Inclusive()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETAGMATCHCOUNTSECTION_GET_MATCHCOUNTSTART_INCLUSIVE_OFFSET))(nullptr);
		}

		::System::Void set_MatchCountEnd_Exclusive(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFETAGMATCHCOUNTSECTION_SET_MATCHCOUNTEND_EXCLUSIVE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MatchCountEnd_Exclusive()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETAGMATCHCOUNTSECTION_GET_MATCHCOUNTEND_EXCLUSIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETAGMATCHCOUNTSECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_BonusWeightPerMatchedTag()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETAGMATCHCOUNTSECTION_GET_BONUSWEIGHTPERMATCHEDTAG_OFFSET))(nullptr);
		}

		::System::Void set_BonusWeightPerMatchedTag(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFETAGMATCHCOUNTSECTION_SET_BONUSWEIGHTPERMATCHEDTAG_OFFSET))(arg, nullptr);
		}

	};

