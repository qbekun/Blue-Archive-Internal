#pragma once
#include "unitysdk.h"

#define XDRENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x98D83D0)

	inline static constexpr unsigned int XdrEntry_TypeDefinitionIndex = 28116;

	class XdrEntry : public Il2CppObject
	{
	public:
		Token* _Name; // 0x10
		::Il2CppArray<::System::Object*>* _NextStates; // 0x18
		::Il2CppArray<::System::Object*>* _Attributes; // 0x20
		XdrInitFunction* _InitFunc; // 0x28
		XdrBeginChildFunction* _BeginChildFunc; // 0x30
		XdrEndChildFunction* _EndChildFunc; // 0x38
		::System::Boolean _AllowText; // 0x40

		::System::Void .ctor(Token* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, XdrInitFunction* arg, XdrBeginChildFunction* arg, XdrEndChildFunction* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Token*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, XdrInitFunction*, XdrBeginChildFunction*, XdrEndChildFunction*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + XDRENTRY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};

