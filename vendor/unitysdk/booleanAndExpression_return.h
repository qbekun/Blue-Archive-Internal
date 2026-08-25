#pragma once
#include "unitysdk.h"

namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace Antlr::Runtime::Tree { class CommonTree; }

#define BOOLEANANDEXPRESSION_RETURN_GET_TREE_OFFSET UNITYSDK_OFFSET(0x21482A0)
#define BOOLEANANDEXPRESSION_RETURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x2136D00)
#define BOOLEANANDEXPRESSION_RETURN_SET_TREE_OFFSET UNITYSDK_OFFSET(0x21482B0)

	inline static constexpr unsigned int booleanAndExpression_return_TypeDefinitionIndex = 3937;

	class booleanAndExpression_return : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Domain::LogicalExpression* value; // 0x20
		::Antlr::Runtime::Tree::CommonTree* tree; // 0x28

		::System::Object* get_Tree()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOLEANANDEXPRESSION_RETURN_GET_TREE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOLEANANDEXPRESSION_RETURN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Tree(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BOOLEANANDEXPRESSION_RETURN_SET_TREE_OFFSET))(arg, nullptr);
		}

	};

