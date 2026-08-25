#pragma once
#include "unitysdk.h"

#define NODE_GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NODE_GET_PREV_OFFSET UNITYSDK_OFFSET(0x000000)
#define NODE_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Node_TypeDefinitionIndex = 32819;

	class Node : public Il2CppObject
	{
	public:
		Il2CppObject* _key; // 0x0
		Il2CppObject* _prev; // 0x0
		Il2CppObject* _next; // 0x0

		Il2CppObject* get_Key()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODE_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Prev()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODE_GET_PREV_OFFSET))(nullptr);
		}

		Il2CppObject* get_Next()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODE_GET_NEXT_OFFSET))(nullptr);
		}

	};

