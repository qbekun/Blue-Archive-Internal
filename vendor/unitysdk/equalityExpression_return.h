#pragma once
#include "unitysdk.h"

namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace Antlr::Runtime::Tree { class CommonTree; }

#define EQUALITYEXPRESSION_RETURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x213A070)
#define EQUALITYEXPRESSION_RETURN_GET_TREE_OFFSET UNITYSDK_OFFSET(0x21485E0)
#define EQUALITYEXPRESSION_RETURN_SET_TREE_OFFSET UNITYSDK_OFFSET(0x21485F0)

	inline static constexpr unsigned int equalityExpression_return_TypeDefinitionIndex = 3941;

	class equalityExpression_return : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Domain::LogicalExpression* value; // 0x20
		::Antlr::Runtime::Tree::CommonTree* tree; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALITYEXPRESSION_RETURN_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* get_Tree()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUALITYEXPRESSION_RETURN_GET_TREE_OFFSET))(nullptr);
		}

		::System::Void set_Tree(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + EQUALITYEXPRESSION_RETURN_SET_TREE_OFFSET))(arg, nullptr);
		}

	};

