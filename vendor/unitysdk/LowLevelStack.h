#pragma once
#include "unitysdk.h"

#define LOWLEVELSTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x93C6100)
#define LOWLEVELSTACK_POP_OFFSET UNITYSDK_OFFSET(0x93C6CF0)
#define LOWLEVELSTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x93C7270)
#define LOWLEVELSTACK_CLEAR_OFFSET UNITYSDK_OFFSET(0x93C6150)

	inline static constexpr unsigned int LowLevelStack_TypeDefinitionIndex = 23993;

	class LowLevelStack : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _arr; // 0x10
		::System::Int32 _count; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOWLEVELSTACK_.CTOR_OFFSET))(nullptr);
		}

		FormatParam* Pop()
		{
			return (return (FormatParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOWLEVELSTACK_POP_OFFSET))(nullptr);
		}

		::System::Void Push(FormatParam* arg)
		{
			((::System::Void(*)(FormatParam*, ::PVOID))((::PBYTE)hIl2Cpp + LOWLEVELSTACK_PUSH_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOWLEVELSTACK_CLEAR_OFFSET))(nullptr);
		}

	};

