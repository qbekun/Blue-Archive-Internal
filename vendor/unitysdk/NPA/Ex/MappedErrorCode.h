#pragma once
#include "../../unitysdk.h"

namespace NPA::Ex { class MappedErrorCode; }

#define NPA_EX_MAPPEDERRORCODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1D9C0)
#define NPA_EX_MAPPEDERRORCODE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D1D9D0)
#define NPA_EX_MAPPEDERRORCODE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D1D9F0)
#define NPA_EX_MAPPEDERRORCODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9D1DA10)
#define NPA_EX_MAPPEDERRORCODE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D1DA20)

namespace NPA::Ex
{
	inline static constexpr unsigned int MappedErrorCode_TypeDefinitionIndex = 25983;

	class MappedErrorCode : public Il2CppObject
	{
	public:
		::System::Int32 code; // 0x10
		::NPA::Ex::MappedErrorCode* OK; // 0x0
		::NPA::Ex::MappedErrorCode* NOT_SUPPORTED; // 0x4
		::NPA::Ex::MappedErrorCode* NOT_IMPLEMENTED; // 0x8

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MAPPEDERRORCODE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::NPA::Ex::MappedErrorCode* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::MappedErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MAPPEDERRORCODE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MAPPEDERRORCODE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Implicit(::NPA::Ex::MappedErrorCode* arg)
		{
			return (return (::System::Int32(*)(::NPA::Ex::MappedErrorCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MAPPEDERRORCODE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_MAPPEDERRORCODE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

