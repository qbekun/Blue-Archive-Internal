#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AF2960)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AF2990)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AF29D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AF2A10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AF2A50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_USEOPTIONR_OFFSET UNITYSDK_OFFSET(0x9AF2A90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REVERSELEFT_OFFSET UNITYSDK_OFFSET(0x9AF2AA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEREP_OFFSET UNITYSDK_OFFSET(0x9AF2B00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCE_OFFSET UNITYSDK_OFFSET(0x9AF2B20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_STRIPENATION_OFFSET UNITYSDK_OFFSET(0x9AF37A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEGROUP_OFFSET UNITYSDK_OFFSET(0x9AF35F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEREP_OFFSET UNITYSDK_OFFSET(0x9AF33F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCESET_OFFSET UNITYSDK_OFFSET(0x9AF3660)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEALTERNATION_OFFSET UNITYSDK_OFFSET(0x9AF2BF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCECONCATENATION_OFFSET UNITYSDK_OFFSET(0x9AF3010)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEQUANTIFIER_OFFSET UNITYSDK_OFFSET(0x9AF3910)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x9AF3A30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILD_OFFSET UNITYSDK_OFFSET(0x9AF38C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x9AF3880)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_TYPE_OFFSET UNITYSDK_OFFSET(0x9AF3B60)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexNode_TypeDefinitionIndex = 29229;

	class RegexNode : public Il2CppObject
	{
	public:
		::System::Int32 NType; // 0x10
		Il2CppObject* Children; // 0x18
		::System::String* Str; // 0x20
		::System::Char Ch; // 0x28
		::System::Int32 M; // 0x2C
		::System::Int32 N; // 0x30
		::System::Text::RegularExpressions::RegexOptions* Options; // 0x34
		::System::Text::RegularExpressions::RegexNode* Next; // 0x38

		::System::Void .ctor(::System::Int32 arg, ::System::Text::RegularExpressions::RegexOptions* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Text::RegularExpressions::RegexOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Text::RegularExpressions::RegexOptions* arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Text::RegularExpressions::RegexOptions*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Text::RegularExpressions::RegexOptions* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::Text::RegularExpressions::RegexOptions*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Text::RegularExpressions::RegexOptions* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Text::RegularExpressions::RegexOptions*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Text::RegularExpressions::RegexOptions* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Text::RegularExpressions::RegexOptions*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean UseOptionR()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_USEOPTIONR_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::RegexNode* ReverseLeft()
		{
			return (return (::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REVERSELEFT_OFFSET))(nullptr);
		}

		::System::Void MakeRep(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEREP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Text::RegularExpressions::RegexNode* Reduce()
		{
			return (return (::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCE_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::RegexNode* StripEnation(::System::Int32 arg)
		{
			return (return (::System::Text::RegularExpressions::RegexNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_STRIPENATION_OFFSET))(arg, nullptr);
		}

		::System::Text::RegularExpressions::RegexNode* ReduceGroup()
		{
			return (return (::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEGROUP_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::RegexNode* ReduceRep()
		{
			return (return (::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEREP_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::RegexNode* ReduceSet()
		{
			return (return (::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCESET_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::RegexNode* ReduceAlternation()
		{
			return (return (::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEALTERNATION_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::RegexNode* ReduceConcatenation()
		{
			return (return (::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCECONCATENATION_OFFSET))(nullptr);
		}

		::System::Text::RegularExpressions::RegexNode* MakeQuantifier(::System::Boolean arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Text::RegularExpressions::RegexNode*(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEQUANTIFIER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddChild(::System::Text::RegularExpressions::RegexNode* arg)
		{
			((::System::Void(*)(::System::Text::RegularExpressions::RegexNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_ADDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Text::RegularExpressions::RegexNode* Child(::System::Int32 arg)
		{
			return (return (::System::Text::RegularExpressions::RegexNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILD_OFFSET))(arg, nullptr);
		}

		::System::Int32 ChildCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILDCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 Type()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_TYPE_OFFSET))(nullptr);
		}

	};
}

