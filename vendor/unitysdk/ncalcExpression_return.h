#pragma once
#include "unitysdk.h"

namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace Antlr::Runtime::Tree { class CommonTree; }

#define NCALCEXPRESSION_RETURN_GET_TREE_OFFSET UNITYSDK_OFFSET(0x2148030)
#define NCALCEXPRESSION_RETURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x2134560)
#define NCALCEXPRESSION_RETURN_SET_TREE_OFFSET UNITYSDK_OFFSET(0x2148040)

	inline static constexpr unsigned int ncalcExpression_return_TypeDefinitionIndex = 3934;

	class ncalcExpression_return : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Domain::LogicalExpression* value; // 0x20
		::Antlr::Runtime::Tree::CommonTree* tree; // 0x28

		::System::Object* get_Tree()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCEXPRESSION_RETURN_GET_TREE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCALCEXPRESSION_RETURN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Tree(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NCALCEXPRESSION_RETURN_SET_TREE_OFFSET))(arg, nullptr);
		}

	};

