#pragma once
#include "unitysdk.h"

#define IDENTITYTOKENCHANGED_.CTOR_OFFSET UNITYSDK_OFFSET(0xA49F0B0)
#define IDENTITYTOKENCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0xA49F180)

	inline static constexpr unsigned int IdentityTokenChanged_TypeDefinitionIndex = 38018;

	class IdentityTokenChanged : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + IDENTITYTOKENCHANGED_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + IDENTITYTOKENCHANGED_INVOKE_OFFSET))(str, nullptr);
		}

	};

