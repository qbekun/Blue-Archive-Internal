#pragma once
#include "unitysdk.h"

#define UNMANAGEDREADORWRITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B8AAA0)
#define UNMANAGEDREADORWRITE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B8B660)

	inline static constexpr unsigned int UnmanagedReadOrWrite_TypeDefinitionIndex = 29631;

	class UnmanagedReadOrWrite : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNMANAGEDREADORWRITE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNMANAGEDREADORWRITE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

