#pragma once
#include "unitysdk.h"

#define XSDENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x992FF00)

	inline static constexpr unsigned int XsdEntry_TypeDefinitionIndex = 28233;

	class XsdEntry : public Il2CppObject
	{
	public:
		Token* Name; // 0x10
		State* CurrentState; // 0x14
		::Il2CppArray<::System::Object*>* NextStates; // 0x18
		::Il2CppArray<::System::Object*>* Attributes; // 0x20
		XsdInitFunction* InitFunc; // 0x28
		XsdEndChildFunction* EndChildFunc; // 0x30
		::System::Boolean ParseContent; // 0x38

		::System::Void .ctor(Token* arg, State* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, XsdInitFunction* arg, XsdEndChildFunction* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Token*, State*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, XsdInitFunction*, XsdEndChildFunction*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + XSDENTRY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};

