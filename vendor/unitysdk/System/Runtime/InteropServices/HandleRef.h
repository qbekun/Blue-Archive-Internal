#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_HANDLEREF_.CTOR_OFFSET UNITYSDK_OFFSET(0x9221E10)
#define SYSTEM_RUNTIME_INTEROPSERVICES_HANDLEREF_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9221E30)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int HandleRef_TypeDefinitionIndex = 24679;

	class HandleRef : public Il2CppObject
	{
	public:
		::System::Object* _wrapper; // 0x10
		::System::Int32 _handle; // 0x18

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_HANDLEREF_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Handle()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_HANDLEREF_GET_HANDLE_OFFSET))(nullptr);
		}

	};
}

