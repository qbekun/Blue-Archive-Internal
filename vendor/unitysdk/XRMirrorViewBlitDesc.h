#pragma once
#include "unitysdk.h"

#define XRMIRRORVIEWBLITDESC_GETBLITPARAMETER_OFFSET UNITYSDK_OFFSET(0xA4AC5F0)
#define XRMIRRORVIEWBLITDESC_GETBLITPARAMETER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA4AC640)

	inline static constexpr unsigned int XRMirrorViewBlitDesc_TypeDefinitionIndex = 37604;

	class XRMirrorViewBlitDesc : public Il2CppObject
	{
	public:
		::System::Int32 displaySubsystemInstance; // 0x10
		::System::Boolean nativeBlitAvailable; // 0x18
		::System::Boolean nativeBlitInvalidStates; // 0x19
		::System::Int32 blitParamsCount; // 0x1C

		::System::Void GetBlitParameter(::System::Int32 arg, XRBlitParams&* arg)
		{
			((::System::Void(*)(::System::Int32, XRBlitParams&*, ::PVOID))((::PBYTE)hIl2Cpp + XRMIRRORVIEWBLITDESC_GETBLITPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetBlitParameter_Injected(XRMirrorViewBlitDesc&* arg, ::System::Int32 arg, XRBlitParams&* arg)
		{
			((::System::Void(*)(XRMirrorViewBlitDesc&*, ::System::Int32, XRBlitParams&*, ::PVOID))((::PBYTE)hIl2Cpp + XRMIRRORVIEWBLITDESC_GETBLITPARAMETER_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};

