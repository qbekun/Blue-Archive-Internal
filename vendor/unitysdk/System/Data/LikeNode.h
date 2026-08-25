#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_LIKENODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x975A490)
#define SYSTEM_DATA_LIKENODE_EVAL_OFFSET UNITYSDK_OFFSET(0x975A500)
#define SYSTEM_DATA_LIKENODE_ANALYZEPATTERN_OFFSET UNITYSDK_OFFSET(0x975AAA0)

namespace System::Data
{
	inline static constexpr unsigned int LikeNode_TypeDefinitionIndex = 32248;

	class LikeNode : public Il2CppObject
	{
	public:
		::System::Int32 _kind; // 0x30
		::System::String* _pattern; // 0x38

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::Int32 arg, ::System::Data::ExpressionNode* arg, ::System::Data::ExpressionNode* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Int32, ::System::Data::ExpressionNode*, ::System::Data::ExpressionNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LIKENODE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* Eval(::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg)
		{
			return (return (::System::Object*(*)(::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LIKENODE_EVAL_OFFSET))(arg, arg, nullptr);
		}

		::System::String* AnalyzePattern(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LIKENODE_ANALYZEPATTERN_OFFSET))(str, nullptr);
		}

	};
}

