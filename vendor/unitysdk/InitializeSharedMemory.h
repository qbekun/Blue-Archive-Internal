#pragma once
#include "unitysdk.h"

#define INITIALIZESHAREDMEMORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB0650)
#define INITIALIZESHAREDMEMORY_INVOKE_OFFSET UNITYSDK_OFFSET(0x9BB0720)
#define INITIALIZESHAREDMEMORY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9BB0730)
#define INITIALIZESHAREDMEMORY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9BB07B0)

	inline static constexpr unsigned int InitializeSharedMemory_TypeDefinitionIndex = 25409;

	class InitializeSharedMemory : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INITIALIZESHAREDMEMORY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::String* str, ::System::UInt64 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + INITIALIZESHAREDMEMORY_INVOKE_OFFSET))(str, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::UInt64 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INITIALIZESHAREDMEMORY_BEGININVOKE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + INITIALIZESHAREDMEMORY_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

