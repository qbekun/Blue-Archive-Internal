#pragma once
#include "unitysdk.h"

#define OPENSHAREDMEMORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB0AC0)
#define OPENSHAREDMEMORY_INVOKE_OFFSET UNITYSDK_OFFSET(0x9BB0B90)
#define OPENSHAREDMEMORY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9BB0BA0)
#define OPENSHAREDMEMORY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9BB0C10)

	inline static constexpr unsigned int OpenSharedMemory_TypeDefinitionIndex = 25412;

	class OpenSharedMemory : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OPENSHAREDMEMORY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + OPENSHAREDMEMORY_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + OPENSHAREDMEMORY_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + OPENSHAREDMEMORY_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

