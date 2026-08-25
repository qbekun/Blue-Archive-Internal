#pragma once
#include "unitysdk.h"

#define ONVALUECHANGEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9580170)
#define ONVALUECHANGEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9580180)
#define ONVALUECHANGEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x957D950)
#define ONVALUECHANGEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9580190)

	inline static constexpr unsigned int OnValueChangedDelegate_TypeDefinitionIndex = 35684;

	class OnValueChangedDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONVALUECHANGEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void Invoke(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ONVALUECHANGEDDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONVALUECHANGEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Single, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONVALUECHANGEDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

