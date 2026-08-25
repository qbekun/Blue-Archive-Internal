#pragma once
#include "unitysdk.h"

namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace Antlr::Runtime::Tree { class CommonTree; }

#define BITWISEOREXPRESSION_RETURN_SET_TREE_OFFSET UNITYSDK_OFFSET(0x2148370)
#define BITWISEOREXPRESSION_RETURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x2137840)
#define BITWISEOREXPRESSION_RETURN_GET_TREE_OFFSET UNITYSDK_OFFSET(0x2148430)

	inline static constexpr unsigned int bitwiseOrExpression_return_TypeDefinitionIndex = 3938;

	class bitwiseOrExpression_return : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Domain::LogicalExpression* value; // 0x20
		::Antlr::Runtime::Tree::CommonTree* tree; // 0x28

		::System::Void set_Tree(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BITWISEOREXPRESSION_RETURN_SET_TREE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BITWISEOREXPRESSION_RETURN_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* get_Tree()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BITWISEOREXPRESSION_RETURN_GET_TREE_OFFSET))(nullptr);
		}

	};

