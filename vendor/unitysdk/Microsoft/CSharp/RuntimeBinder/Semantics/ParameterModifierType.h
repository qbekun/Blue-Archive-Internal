#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PARAMETERMODIFIERTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90DA260)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PARAMETERMODIFIERTYPE_GET_ISOUT_OFFSET UNITYSDK_OFFSET(0x90DA2A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PARAMETERMODIFIERTYPE_GET_PARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x90DA2B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PARAMETERMODIFIERTYPE_GET_ASSOCIATEDSYSTEMTYPE_OFFSET UNITYSDK_OFFSET(0x90DA2C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PARAMETERMODIFIERTYPE_GET_BASEORPARAMETERORELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x90DA310)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ParameterModifierType_TypeDefinitionIndex = 34596;

	class ParameterModifierType : public Il2CppObject
	{
	public:
		::System::Boolean _IsOut_k__BackingField; // 0x18
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* _ParameterType_k__BackingField; // 0x20

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PARAMETERMODIFIERTYPE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsOut()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PARAMETERMODIFIERTYPE_GET_ISOUT_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* get_ParameterType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PARAMETERMODIFIERTYPE_GET_PARAMETERTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_AssociatedSystemType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PARAMETERMODIFIERTYPE_GET_ASSOCIATEDSYSTEMTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* get_BaseOrParameterOrElementType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PARAMETERMODIFIERTYPE_GET_BASEORPARAMETERORELEMENTTYPE_OFFSET))(nullptr);
		}

	};
}

