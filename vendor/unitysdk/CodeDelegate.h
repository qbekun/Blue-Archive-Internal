#pragma once
#include "unitysdk.h"

#define CODEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C04290)
#define CODEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C04360)
#define CODEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C04370)
#define CODEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C043E0)

	inline static constexpr unsigned int CodeDelegate_TypeDefinitionIndex = 26536;

	class CodeDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CODEDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 Invoke(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CODEDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CODEDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::UInt32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + CODEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

