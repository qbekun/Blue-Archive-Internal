#pragma once
#include "unitysdk.h"

#define READDATAHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x904D4A0)
#define READDATAHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9050300)

	inline static constexpr unsigned int ReadDataHandler_TypeDefinitionIndex = 37119;

	class ReadDataHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + READDATAHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + READDATAHANDLER_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

