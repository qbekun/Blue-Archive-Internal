#pragma once
#include "unitysdk.h"

namespace FlatBuffers { class ByteBuffer; }

#define DELEGATEGETROOTAS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define DELEGATEGETROOTAS_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define DELEGATEGETROOTAS_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define DELEGATEGETROOTAS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int DelegateGetRootAs_TypeDefinitionIndex = 16537;

	class DelegateGetRootAs : public Il2CppObject
	{
	public:
		Il2CppObject* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (Il2CppObject*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATEGETROOTAS_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Invoke(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATEGETROOTAS_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATEGETROOTAS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::FlatBuffers::ByteBuffer* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::FlatBuffers::ByteBuffer*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATEGETROOTAS_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

