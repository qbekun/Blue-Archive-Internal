#pragma once
#include "unitysdk.h"

#define CLOSESHAREDMEMORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB0C40)
#define CLOSESHAREDMEMORY_INVOKE_OFFSET UNITYSDK_OFFSET(0x9BB0D10)
#define CLOSESHAREDMEMORY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9BB0D20)
#define CLOSESHAREDMEMORY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9BB0D90)

	inline static constexpr unsigned int CloseSharedMemory_TypeDefinitionIndex = 25413;

	class CloseSharedMemory : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CLOSESHAREDMEMORY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CLOSESHAREDMEMORY_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSESHAREDMEMORY_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSESHAREDMEMORY_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

