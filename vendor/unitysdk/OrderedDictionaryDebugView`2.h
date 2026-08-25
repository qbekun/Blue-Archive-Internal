#pragma once
#include "unitysdk.h"

#define ORDEREDDICTIONARYDEBUGVIEW`2_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x000000)
#define ORDEREDDICTIONARYDEBUGVIEW`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int OrderedDictionaryDebugView`2_TypeDefinitionIndex = 3559;

	class OrderedDictionaryDebugView`2 : public Il2CppObject
	{
	public:
		Il2CppObject* dictionary; // 0x0

		::Il2CppArray<::System::Object*>* get_Items()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARYDEBUGVIEW`2_GET_ITEMS_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ORDEREDDICTIONARYDEBUGVIEW`2_.CTOR_OFFSET))(arg, nullptr);
		}

	};

