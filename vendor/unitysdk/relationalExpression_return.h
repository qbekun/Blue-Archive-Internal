#pragma once
#include "unitysdk.h"

namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace Antlr::Runtime::Tree { class CommonTree; }

#define RELATIONALEXPRESSION_RETURN_SET_TREE_OFFSET UNITYSDK_OFFSET(0x21486B0)
#define RELATIONALEXPRESSION_RETURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x213B300)
#define RELATIONALEXPRESSION_RETURN_GET_TREE_OFFSET UNITYSDK_OFFSET(0x2148770)

	inline static constexpr unsigned int relationalExpression_return_TypeDefinitionIndex = 3942;

	class relationalExpression_return : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Domain::LogicalExpression* value; // 0x20
		::Antlr::Runtime::Tree::CommonTree* tree; // 0x28

		::System::Void set_Tree(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RELATIONALEXPRESSION_RETURN_SET_TREE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RELATIONALEXPRESSION_RETURN_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* get_Tree()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RELATIONALEXPRESSION_RETURN_GET_TREE_OFFSET))(nullptr);
		}

	};

