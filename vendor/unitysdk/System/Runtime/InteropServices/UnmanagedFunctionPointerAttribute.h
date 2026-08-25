#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_UNMANAGEDFUNCTIONPOINTERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222B40)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int UnmanagedFunctionPointerAttribute_TypeDefinitionIndex = 24690;

	class UnmanagedFunctionPointerAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Runtime::InteropServices::CallingConvention* m_callingConvention; // 0x10
		::System::Runtime::InteropServices::CharSet* CharSet; // 0x14

		::System::Void .ctor(::System::Runtime::InteropServices::CallingConvention* arg)
		{
			((::System::Void(*)(::System::Runtime::InteropServices::CallingConvention*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_UNMANAGEDFUNCTIONPOINTERATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

