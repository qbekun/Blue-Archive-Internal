#pragma once
#include "unitysdk.h"

namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace Antlr::Runtime::Tree { class CommonTree; }

#define LOGICALEXPRESSION_RETURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x2135300)
#define LOGICALEXPRESSION_RETURN_GET_TREE_OFFSET UNITYSDK_OFFSET(0x2148100)
#define LOGICALEXPRESSION_RETURN_SET_TREE_OFFSET UNITYSDK_OFFSET(0x2148110)

	inline static constexpr unsigned int logicalExpression_return_TypeDefinitionIndex = 3935;

	class logicalExpression_return : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Domain::LogicalExpression* value; // 0x20
		::Antlr::Runtime::Tree::CommonTree* tree; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICALEXPRESSION_RETURN_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* get_Tree()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICALEXPRESSION_RETURN_GET_TREE_OFFSET))(nullptr);
		}

		::System::Void set_Tree(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICALEXPRESSION_RETURN_SET_TREE_OFFSET))(arg, nullptr);
		}

	};

