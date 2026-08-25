#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_RUNTIMEINFORMATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9223540)
#define SYSTEM_RUNTIME_INTEROPSERVICES_RUNTIMEINFORMATION_GETRUNTIMEARCHITECTURE_OFFSET UNITYSDK_OFFSET(0x9223CD0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_RUNTIMEINFORMATION_GETOSNAME_OFFSET UNITYSDK_OFFSET(0x9223CE0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_RUNTIMEINFORMATION_ISOSPLATFORM_OFFSET UNITYSDK_OFFSET(0x9223CF0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int RuntimeInformation_TypeDefinitionIndex = 24712;

	class RuntimeInformation : public Il2CppObject
	{
	public:
		::System::Runtime::InteropServices::Architecture* _osArchitecture; // 0x0
		::System::Runtime::InteropServices::Architecture* _processArchitecture; // 0x4
		::System::Runtime::InteropServices::OSPlatform* _osPlatform; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_RUNTIMEINFORMATION_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* GetRuntimeArchitecture()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_RUNTIMEINFORMATION_GETRUNTIMEARCHITECTURE_OFFSET))(nullptr);
		}

		::System::String* GetOSName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_RUNTIMEINFORMATION_GETOSNAME_OFFSET))(nullptr);
		}

		::System::Boolean IsOSPlatform(::System::Runtime::InteropServices::OSPlatform* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::InteropServices::OSPlatform*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_RUNTIMEINFORMATION_ISOSPLATFORM_OFFSET))(arg, nullptr);
		}

	};
}

