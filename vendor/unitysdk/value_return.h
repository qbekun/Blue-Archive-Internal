#pragma once
#include "unitysdk.h"

namespace MX::Core::Expressions::Domain { class ValueExpression; }
namespace Antlr::Runtime::Tree { class CommonTree; }

#define VALUE_RETURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x2143E60)
#define VALUE_RETURN_SET_TREE_OFFSET UNITYSDK_OFFSET(0x2148B90)
#define VALUE_RETURN_GET_TREE_OFFSET UNITYSDK_OFFSET(0x2148C50)

	inline static constexpr unsigned int value_return_TypeDefinitionIndex = 3948;

	class value_return : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Domain::ValueExpression* value; // 0x20
		::Antlr::Runtime::Tree::CommonTree* tree; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUE_RETURN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Tree(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + VALUE_RETURN_SET_TREE_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Tree()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUE_RETURN_GET_TREE_OFFSET))(nullptr);
		}

	};

