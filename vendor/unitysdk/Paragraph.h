#pragma once
#include "unitysdk.h"

#define PARAGRAPH_.CTOR_OFFSET UNITYSDK_OFFSET(0x2441BD0)

	inline static constexpr unsigned int Paragraph_TypeDefinitionIndex = 265;

	class Paragraph : public Il2CppObject
	{
	public:
		::System::String* text; // 0x10
		::Il2CppArray<::System::Object*>* lines; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAGRAPH_.CTOR_OFFSET))(nullptr);
		}

	};

