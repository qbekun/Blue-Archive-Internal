#pragma once
#include "unitysdk.h"

#define BYSUBJECTFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AC1AC0)
#define BYSUBJECTFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x9AC1D90)

	inline static constexpr unsigned int BySubjectFunc_TypeDefinitionIndex = 29134;

	class BySubjectFunc : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BYSUBJECTFUNC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BYSUBJECTFUNC_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

