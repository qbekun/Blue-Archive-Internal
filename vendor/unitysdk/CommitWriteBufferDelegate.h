#pragma once
#include "unitysdk.h"

#define COMMITWRITEBUFFERDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB1510)
#define COMMITWRITEBUFFERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9BB15E0)
#define COMMITWRITEBUFFERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9BB15F0)
#define COMMITWRITEBUFFERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9BB1690)

	inline static constexpr unsigned int CommitWriteBufferDelegate_TypeDefinitionIndex = 25418;

	class CommitWriteBufferDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMMITWRITEBUFFERDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMMITWRITEBUFFERDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + COMMITWRITEBUFFERDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + COMMITWRITEBUFFERDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

