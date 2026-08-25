#pragma once
#include "../../unitysdk.h"

#define ANTLR_RUNTIME_RULERETURNSCOPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4C6240)
#define ANTLR_RUNTIME_RULERETURNSCOPE_GET_START_OFFSET UNITYSDK_OFFSET(0x4C7500)
#define ANTLR_RUNTIME_RULERETURNSCOPE_SET_START_OFFSET UNITYSDK_OFFSET(0x4C7510)
#define ANTLR_RUNTIME_RULERETURNSCOPE_GET_STOP_OFFSET UNITYSDK_OFFSET(0x4C7570)
#define ANTLR_RUNTIME_RULERETURNSCOPE_SET_STOP_OFFSET UNITYSDK_OFFSET(0x4C7580)
#define ANTLR_RUNTIME_RULERETURNSCOPE_GET_TREE_OFFSET UNITYSDK_OFFSET(0x4C75E0)
#define ANTLR_RUNTIME_RULERETURNSCOPE_SET_TREE_OFFSET UNITYSDK_OFFSET(0x4C75F0)

namespace Antlr::Runtime
{
	inline static constexpr unsigned int RuleReturnScope_TypeDefinitionIndex = 37394;

	class RuleReturnScope : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RULERETURNSCOPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* get_Start()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RULERETURNSCOPE_GET_START_OFFSET))(nullptr);
		}

		::System::Void set_Start(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RULERETURNSCOPE_SET_START_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Stop()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RULERETURNSCOPE_GET_STOP_OFFSET))(nullptr);
		}

		::System::Void set_Stop(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RULERETURNSCOPE_SET_STOP_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Tree()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RULERETURNSCOPE_GET_TREE_OFFSET))(nullptr);
		}

		::System::Void set_Tree(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANTLR_RUNTIME_RULERETURNSCOPE_SET_TREE_OFFSET))(arg, nullptr);
		}

	};
}

