#pragma once
#include "unitysdk.h"

#define NATIVESERVERNAMEFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9ABB920)
#define NATIVESERVERNAMEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x9ABD310)

	inline static constexpr unsigned int NativeServerNameFunc_TypeDefinitionIndex = 29118;

	class NativeServerNameFunc : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NATIVESERVERNAMEFUNC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NATIVESERVERNAMEFUNC_INVOKE_OFFSET))(arg, nullptr);
		}

	};

