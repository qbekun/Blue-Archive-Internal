#pragma once
#include "unitysdk.h"

#define TRY_00000A53$POSTFIXBURSTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E383C0)
#define TRY_00000A53$POSTFIXBURSTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E383D0)

	inline static constexpr unsigned int Try_00000A53$PostfixBurstDelegate_TypeDefinitionIndex = 37004;

	class Try_00000A53$PostfixBurstDelegate : public Il2CppObject
	{
	public:
		::System::Int32 Invoke(::System::Int32 arg, Block&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, Block&*, ::PVOID))((::PBYTE)hIl2Cpp + TRY_00000A53$POSTFIXBURSTDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TRY_00000A53$POSTFIXBURSTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

