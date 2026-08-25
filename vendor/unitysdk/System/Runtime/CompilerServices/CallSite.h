#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B3200)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE_GET_BINDER_OFFSET UNITYSDK_OFFSET(0x96B3230)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE_CREATE_OFFSET UNITYSDK_OFFSET(0x96B3240)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CallSite_TypeDefinitionIndex = 33519;

	class CallSite : public Il2CppObject
	{
	public:
		Il2CppObject* s_siteCtors; // 0x0
		::System::Runtime::CompilerServices::CallSiteBinder* _binder; // 0x10
		::System::Boolean _match; // 0x18

		::System::Void .ctor(::System::Runtime::CompilerServices::CallSiteBinder* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::CallSiteBinder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Runtime::CompilerServices::CallSiteBinder* get_Binder()
		{
			return (return (::System::Runtime::CompilerServices::CallSiteBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE_GET_BINDER_OFFSET))(nullptr);
		}

		::System::Runtime::CompilerServices::CallSite* Create(::System::Type* arg, ::System::Runtime::CompilerServices::CallSiteBinder* arg)
		{
			return (return (::System::Runtime::CompilerServices::CallSite*(*)(::System::Type*, ::System::Runtime::CompilerServices::CallSiteBinder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLSITE_CREATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

