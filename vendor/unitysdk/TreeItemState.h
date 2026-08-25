#pragma once
#include "unitysdk.h"

#define TREEITEMSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3DB800)

	inline static constexpr unsigned int TreeItemState_TypeDefinitionIndex = 30441;

	class TreeItemState : public Il2CppObject
	{
	public:
		::System::Int32 parentId; // 0x10
		::System::Int32 childIndex; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TREEITEMSTATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

