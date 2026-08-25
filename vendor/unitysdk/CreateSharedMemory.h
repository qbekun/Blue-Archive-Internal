#pragma once
#include "unitysdk.h"

#define CREATESHAREDMEMORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB0940)
#define CREATESHAREDMEMORY_INVOKE_OFFSET UNITYSDK_OFFSET(0x9BB0A10)
#define CREATESHAREDMEMORY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9BB0A20)
#define CREATESHAREDMEMORY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9BB0A90)

	inline static constexpr unsigned int CreateSharedMemory_TypeDefinitionIndex = 25411;

	class CreateSharedMemory : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CREATESHAREDMEMORY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CREATESHAREDMEMORY_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CREATESHAREDMEMORY_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + CREATESHAREDMEMORY_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

