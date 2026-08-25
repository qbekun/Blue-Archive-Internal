#pragma once
#include "unitysdk.h"

#define INITIALIZATIONOPTIONS_OPTIMIZEBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x289F680)
#define INITIALIZATIONOPTIONS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x289F690)

	inline static constexpr unsigned int InitializationOptions_TypeDefinitionIndex = 37975;

	class InitializationOptions : public Il2CppObject
	{
	public:
		InitializationOptions* defaultOptions; // 0x0
		::System::Int32 androidAudioTrackCount; // 0x10
		::System::Int32 androidBufferSize; // 0x14
		::System::Boolean preserveOnMinimize; // 0x18

		::System::Int32 OptimizeBufferSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INITIALIZATIONOPTIONS_OPTIMIZEBUFFERSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INITIALIZATIONOPTIONS_.CCTOR_OFFSET))(nullptr);
		}

	};

