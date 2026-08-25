#pragma once
#include "unitysdk.h"

#define TRY_00000A45$POSTFIXBURSTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E37940)
#define TRY_00000A45$POSTFIXBURSTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E37A10)

	inline static constexpr unsigned int Try_00000A45$PostfixBurstDelegate_TypeDefinitionIndex = 37001;

	class Try_00000A45$PostfixBurstDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TRY_00000A45$POSTFIXBURSTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, Block&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, Block&*, ::PVOID))((::PBYTE)hIl2Cpp + TRY_00000A45$POSTFIXBURSTDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

