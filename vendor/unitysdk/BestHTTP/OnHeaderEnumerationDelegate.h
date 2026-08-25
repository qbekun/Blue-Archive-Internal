#pragma once
#include "../unitysdk.h"

#define BESTHTTP_ONHEADERENUMERATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x4DCC00)
#define BESTHTTP_ONHEADERENUMERATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x4DCC40)
#define BESTHTTP_ONHEADERENUMERATIONDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DCC50)
#define BESTHTTP_ONHEADERENUMERATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x4DCD20)

namespace BestHTTP
{
	inline static constexpr unsigned int OnHeaderEnumerationDelegate_TypeDefinitionIndex = 21307;

	class OnHeaderEnumerationDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::System::String* str, Il2CppObject* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, Il2CppObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONHEADERENUMERATIONDELEGATE_BEGININVOKE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONHEADERENUMERATIONDELEGATE_INVOKE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONHEADERENUMERATIONDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_ONHEADERENUMERATIONDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

