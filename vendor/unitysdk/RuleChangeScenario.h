#pragma once
#include "unitysdk.h"

#define RULECHANGESCENARIO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9441B30)
#define RULECHANGESCENARIO_GET_CHANGEDRULES_OFFSET UNITYSDK_OFFSET(0x9442970)
#define RULECHANGESCENARIO_GET_STATICSEGMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9441BC0)
#define RULECHANGESCENARIO_ISBETTERTHAN_OFFSET UNITYSDK_OFFSET(0x9441C00)
#define RULECHANGESCENARIO_GETSUMOFSHAPEDURATIONSQUARES_OFFSET UNITYSDK_OFFSET(0x9442980)

	inline static constexpr unsigned int RuleChangeScenario_TypeDefinitionIndex = 36880;

	class RuleChangeScenario : public Il2CppObject
	{
	public:
		Il2CppObject* changedRules; // 0x10
		Il2CppObject* animation; // 0x18
		Il2CppObject* staticSegments; // 0x20

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RULECHANGESCENARIO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* get_ChangedRules()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RULECHANGESCENARIO_GET_CHANGEDRULES_OFFSET))(nullptr);
		}

		::System::Int32 get_StaticSegmentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RULECHANGESCENARIO_GET_STATICSEGMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean IsBetterThan(RuleChangeScenario* arg)
		{
			return (return (::System::Boolean(*)(RuleChangeScenario*, ::PVOID))((::PBYTE)hIl2Cpp + RULECHANGESCENARIO_ISBETTERTHAN_OFFSET))(arg, nullptr);
		}

		::System::Double GetSumOfShapeDurationSquares()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RULECHANGESCENARIO_GETSUMOFSHAPEDURATIONSQUARES_OFFSET))(nullptr);
		}

	};

