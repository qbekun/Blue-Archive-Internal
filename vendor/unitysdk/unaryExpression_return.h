#pragma once
#include "unitysdk.h"

namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace Antlr::Runtime::Tree { class CommonTree; }

#define UNARYEXPRESSION_RETURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x213F5C0)
#define UNARYEXPRESSION_RETURN_GET_TREE_OFFSET UNITYSDK_OFFSET(0x21489F0)
#define UNARYEXPRESSION_RETURN_SET_TREE_OFFSET UNITYSDK_OFFSET(0x2148A00)

	inline static constexpr unsigned int unaryExpression_return_TypeDefinitionIndex = 3946;

	class unaryExpression_return : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Domain::LogicalExpression* value; // 0x20
		::Antlr::Runtime::Tree::CommonTree* tree; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNARYEXPRESSION_RETURN_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* get_Tree()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNARYEXPRESSION_RETURN_GET_TREE_OFFSET))(nullptr);
		}

		::System::Void set_Tree(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNARYEXPRESSION_RETURN_SET_TREE_OFFSET))(arg, nullptr);
		}

	};

