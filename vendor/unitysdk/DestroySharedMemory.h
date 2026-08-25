#pragma once
#include "unitysdk.h"

#define DESTROYSHAREDMEMORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB07E0)
#define DESTROYSHAREDMEMORY_INVOKE_OFFSET UNITYSDK_OFFSET(0x9BB08B0)
#define DESTROYSHAREDMEMORY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9BB08C0)
#define DESTROYSHAREDMEMORY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9BB0930)

	inline static constexpr unsigned int DestroySharedMemory_TypeDefinitionIndex = 25410;

	class DestroySharedMemory : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DESTROYSHAREDMEMORY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DESTROYSHAREDMEMORY_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DESTROYSHAREDMEMORY_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + DESTROYSHAREDMEMORY_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

