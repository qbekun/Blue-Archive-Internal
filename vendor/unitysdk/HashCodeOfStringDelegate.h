#pragma once
#include "unitysdk.h"

#define HASHCODEOFSTRINGDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x99CA4F0)
#define HASHCODEOFSTRINGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x99CAAF0)

	inline static constexpr unsigned int HashCodeOfStringDelegate_TypeDefinitionIndex = 27836;

	class HashCodeOfStringDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HASHCODEOFSTRINGDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::String* str, ::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + HASHCODEOFSTRINGDELEGATE_INVOKE_OFFSET))(str, arg, arg, nullptr);
		}

	};

