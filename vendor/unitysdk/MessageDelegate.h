#pragma once
#include "unitysdk.h"

#define MESSAGEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C04410)
#define MESSAGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C044E0)
#define MESSAGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C044F0)
#define MESSAGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C04560)

	inline static constexpr unsigned int MessageDelegate_TypeDefinitionIndex = 26537;

	class MessageDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MESSAGEDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MESSAGEDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MESSAGEDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + MESSAGEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

