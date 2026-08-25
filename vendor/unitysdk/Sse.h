#pragma once
#include "unitysdk.h"

#define SSE_GET_ISSSESUPPORTED_OFFSET UNITYSDK_OFFSET(0x9E35B30)
#define SSE_SHUFFLE_OFFSET UNITYSDK_OFFSET(0x9E36220)

	inline static constexpr unsigned int Sse_TypeDefinitionIndex = 37269;

	class Sse : public Il2CppObject
	{
	public:
		::System::Boolean get_IsSseSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SSE_GET_ISSSESUPPORTED_OFFSET))(nullptr);
		}

		::System::Int32 SHUFFLE(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SSE_SHUFFLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

