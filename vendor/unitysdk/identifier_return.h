#pragma once
#include "unitysdk.h"

namespace MX::Core::Expressions::Domain { class Identifier; }
namespace Antlr::Runtime::Tree { class CommonTree; }

#define IDENTIFIER_RETURN_GET_TREE_OFFSET UNITYSDK_OFFSET(0x2148C60)
#define IDENTIFIER_RETURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x2143E70)
#define IDENTIFIER_RETURN_SET_TREE_OFFSET UNITYSDK_OFFSET(0x2148C70)

	inline static constexpr unsigned int identifier_return_TypeDefinitionIndex = 3949;

	class identifier_return : public Il2CppObject
	{
	public:
		::MX::Core::Expressions::Domain::Identifier* value; // 0x20
		::Antlr::Runtime::Tree::CommonTree* tree; // 0x28

		::System::Object* get_Tree()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDENTIFIER_RETURN_GET_TREE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDENTIFIER_RETURN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Tree(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + IDENTIFIER_RETURN_SET_TREE_OFFSET))(arg, nullptr);
		}

	};

