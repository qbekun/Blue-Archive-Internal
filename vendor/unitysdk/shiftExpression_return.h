#pragma once
#include "unitysdk.h"

namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace Antlr::Runtime::Tree { class CommonTree; }

#define SHIFTEXPRESSION_RETURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x213C140)
#define SHIFTEXPRESSION_RETURN_SET_TREE_OFFSET UNITYSDK_OFFSET(0x2148780)
#define SHIFTEXPRESSION_RETURN_GET_TREE_OFFSET UNITYSDK_OFFSET(0x2148840)

	inline static constexpr unsigned int shiftExpression_return_TypeDefinitionIndex = 3943;

	class shiftExpression_return : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Domain::LogicalExpression* value; // 0x20
		::Antlr::Runtime::Tree::CommonTree* tree; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHIFTEXPRESSION_RETURN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Tree(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SHIFTEXPRESSION_RETURN_SET_TREE_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Tree()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHIFTEXPRESSION_RETURN_GET_TREE_OFFSET))(nullptr);
		}

	};

