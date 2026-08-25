#pragma once
#include "unitysdk.h"

namespace Antlr::Runtime::Tree { class CommonTree; }

#define ARGUMENTS_RETURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x2144A90)
#define ARGUMENTS_RETURN_SET_TREE_OFFSET UNITYSDK_OFFSET(0x2148E00)
#define ARGUMENTS_RETURN_GET_TREE_OFFSET UNITYSDK_OFFSET(0x2148EC0)

	inline static constexpr unsigned int arguments_return_TypeDefinitionIndex = 3951;

	class arguments_return : public Il2CppObject
	{
	public:
		Il2CppObject* value; // 0x20
		::Antlr::Runtime::Tree::CommonTree* tree; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARGUMENTS_RETURN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Tree(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ARGUMENTS_RETURN_SET_TREE_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Tree()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARGUMENTS_RETURN_GET_TREE_OFFSET))(nullptr);
		}

	};

