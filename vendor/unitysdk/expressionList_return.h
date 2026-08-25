#pragma once
#include "unitysdk.h"

namespace Antlr::Runtime::Tree { class CommonTree; }

#define EXPRESSIONLIST_RETURN_GET_TREE_OFFSET UNITYSDK_OFFSET(0x2148D30)
#define EXPRESSIONLIST_RETURN_SET_TREE_OFFSET UNITYSDK_OFFSET(0x2148D40)
#define EXPRESSIONLIST_RETURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x2144A80)

	inline static constexpr unsigned int expressionList_return_TypeDefinitionIndex = 3950;

	class expressionList_return : public Il2CppObject
	{
	public:
		Il2CppObject* value; // 0x20
		::Antlr::Runtime::Tree::CommonTree* tree; // 0x28

		::System::Object* get_Tree()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONLIST_RETURN_GET_TREE_OFFSET))(nullptr);
		}

		::System::Void set_Tree(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONLIST_RETURN_SET_TREE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONLIST_RETURN_.CTOR_OFFSET))(nullptr);
		}

	};

