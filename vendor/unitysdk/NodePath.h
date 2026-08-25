#pragma once
#include "unitysdk.h"

#define NODEPATH_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int NodePath_TypeDefinitionIndex = 32283;

	class NodePath : public Il2CppObject
	{
	public:
		::System::Int32 _nodeID; // 0x0
		::System::Int32 _mainTreeNodeID; // 0x0

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NODEPATH_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

