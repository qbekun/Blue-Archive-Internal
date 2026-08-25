#pragma once
#include "unitysdk.h"

namespace FlatData { class TBGProbModifyCondition; }

#define TBGPROBMODIFY_GET_PROBMODIFYLIMIT_OFFSET UNITYSDK_OFFSET(0x190A630)
#define TBGPROBMODIFY_GET_PROBMODIFYCONDITION_OFFSET UNITYSDK_OFFSET(0x190A640)
#define TBGPROBMODIFY_SET_PROBMODIFYLIMIT_OFFSET UNITYSDK_OFFSET(0x190A650)
#define TBGPROBMODIFY_GET_PROBMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0x190A660)
#define TBGPROBMODIFY_SET_PROBMODIFYCONDITION_OFFSET UNITYSDK_OFFSET(0x190A670)
#define TBGPROBMODIFY_SET_PROBMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0x190A680)

	inline static constexpr unsigned int TBGProbModify_TypeDefinitionIndex = 16230;

	class TBGProbModify : public Il2CppObject
	{
	public:
		::FlatData::TBGProbModifyCondition* _ProbModifyCondition_k__BackingField; // 0x10
		::System::Int32 _ProbModifyValue_k__BackingField; // 0x14
		::System::Int32 _ProbModifyLimit_k__BackingField; // 0x18

		::System::Int32 get_ProbModifyLimit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGPROBMODIFY_GET_PROBMODIFYLIMIT_OFFSET))(nullptr);
		}

		::FlatData::TBGProbModifyCondition* get_ProbModifyCondition()
		{
			return (return (::FlatData::TBGProbModifyCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGPROBMODIFY_GET_PROBMODIFYCONDITION_OFFSET))(nullptr);
		}

		::System::Void set_ProbModifyLimit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TBGPROBMODIFY_SET_PROBMODIFYLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ProbModifyValue()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TBGPROBMODIFY_GET_PROBMODIFYVALUE_OFFSET))(nullptr);
		}

		::System::Void set_ProbModifyCondition(::FlatData::TBGProbModifyCondition* arg)
		{
			((::System::Void(*)(::FlatData::TBGProbModifyCondition*, ::PVOID))((::PBYTE)hIl2Cpp + TBGPROBMODIFY_SET_PROBMODIFYCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_ProbModifyValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TBGPROBMODIFY_SET_PROBMODIFYVALUE_OFFSET))(arg, nullptr);
		}

	};

