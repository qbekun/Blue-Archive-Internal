#pragma once
#include "unitysdk.h"

#define RELEASEREADBUFFERDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB1880)
#define RELEASEREADBUFFERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9BB1950)
#define RELEASEREADBUFFERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9BB1960)
#define RELEASEREADBUFFERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9BB19D0)

	inline static constexpr unsigned int ReleaseReadBufferDelegate_TypeDefinitionIndex = 25420;

	class ReleaseReadBufferDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RELEASEREADBUFFERDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RELEASEREADBUFFERDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RELEASEREADBUFFERDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + RELEASEREADBUFFERDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

