#pragma once
#include "unitysdk.h"

#define HANDLEMESSAGEWITHLOCALECODEDEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C37B20)
#define HANDLEMESSAGEWITHLOCALECODEDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C37BF0)
#define HANDLEMESSAGEWITHLOCALECODEDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C37C10)
#define HANDLEMESSAGEWITHLOCALECODEDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C37C50)

	inline static constexpr unsigned int HandleMessageWithLocaleCodeDel_TypeDefinitionIndex = 26776;

	class HandleMessageWithLocaleCodeDel : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HANDLEMESSAGEWITHLOCALECODEDEL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + HANDLEMESSAGEWITHLOCALECODEDEL_INVOKE_OFFSET))(str, str, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::String* str, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + HANDLEMESSAGEWITHLOCALECODEDEL_BEGININVOKE_OFFSET))(str, str, str, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + HANDLEMESSAGEWITHLOCALECODEDEL_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

