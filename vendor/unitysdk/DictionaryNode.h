#pragma once
#include "unitysdk.h"

#define DICTIONARYNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B80410)

	inline static constexpr unsigned int DictionaryNode_TypeDefinitionIndex = 29564;

	class DictionaryNode : public Il2CppObject
	{
	public:
		::System::Object* key; // 0x10
		::System::Object* value; // 0x18
		DictionaryNode* next; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICTIONARYNODE_.CTOR_OFFSET))(nullptr);
		}

	};

