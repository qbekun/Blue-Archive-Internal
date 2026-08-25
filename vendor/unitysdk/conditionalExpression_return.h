#pragma once
#include "unitysdk.h"

namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace Antlr::Runtime::Tree { class CommonTree; }

#define CONDITIONALEXPRESSION_RETURN_SET_TREE_OFFSET UNITYSDK_OFFSET(0x21481D0)
#define CONDITIONALEXPRESSION_RETURN_GET_TREE_OFFSET UNITYSDK_OFFSET(0x2148290)
#define CONDITIONALEXPRESSION_RETURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x2136000)

	inline static constexpr unsigned int conditionalExpression_return_TypeDefinitionIndex = 3936;

	class conditionalExpression_return : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Domain::LogicalExpression* value; // 0x20
		::Antlr::Runtime::Tree::CommonTree* tree; // 0x28

		::System::Void set_Tree(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CONDITIONALEXPRESSION_RETURN_SET_TREE_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Tree()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDITIONALEXPRESSION_RETURN_GET_TREE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDITIONALEXPRESSION_RETURN_.CTOR_OFFSET))(nullptr);
		}

	};

