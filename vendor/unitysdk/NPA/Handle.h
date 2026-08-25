#pragma once
#include "../unitysdk.h"

namespace NPA { class Handle; }

#define NPA_HANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BBD220)
#define NPA_HANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBD280)
#define NPA_HANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9BBD2E0)
#define NPA_HANDLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9BBD2F0)

namespace NPA
{
	inline static constexpr unsigned int Handle_TypeDefinitionIndex = 25529;

	class Handle : public Il2CppObject
	{
	public:
		::System::Int32 _handle; // 0x10
		::System::Boolean _disposed; // 0x18

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_HANDLE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_HANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Implicit(::NPA::Handle* arg)
		{
			return (return (::System::Int32(*)(::NPA::Handle*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_HANDLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Implicit(::NPA::Handle* arg)
		{
			return (return (::System::Boolean(*)(::NPA::Handle*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_HANDLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

