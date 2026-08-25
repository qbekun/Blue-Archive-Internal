#pragma once
#include "unitysdk.h"

namespace MX::Core::Expressions::Domain { class LogicalExpression; }
namespace Antlr::Runtime::Tree { class CommonTree; }

#define ADDITIVEEXPRESSION_RETURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x213CF80)
#define ADDITIVEEXPRESSION_RETURN_SET_TREE_OFFSET UNITYSDK_OFFSET(0x2148850)
#define ADDITIVEEXPRESSION_RETURN_GET_TREE_OFFSET UNITYSDK_OFFSET(0x2148910)

	inline static constexpr unsigned int additiveExpression_return_TypeDefinitionIndex = 3944;

	class additiveExpression_return : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Domain::LogicalExpression* value; // 0x20
		::Antlr::Runtime::Tree::CommonTree* tree; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIVEEXPRESSION_RETURN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Tree(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ADDITIVEEXPRESSION_RETURN_SET_TREE_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Tree()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDITIVEEXPRESSION_RETURN_GET_TREE_OFFSET))(nullptr);
		}

	};

