#pragma once
#include "unitysdk.h"

#define CMPXSLT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9946DC0)
#define CMPXSLT_INVOKE_OFFSET UNITYSDK_OFFSET(0x9946E90)

	inline static constexpr unsigned int cmpXslt_TypeDefinitionIndex = 28280;

	class cmpXslt : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CMPXSLT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(Op* arg, ::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(Op*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CMPXSLT_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

