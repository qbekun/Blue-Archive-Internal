#pragma once
#include "unitysdk.h"

#define CLOSEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C03E20)
#define CLOSEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C03EE0)
#define CLOSEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C03EF0)
#define CLOSEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C03F20)

	inline static constexpr unsigned int CloseDelegate_TypeDefinitionIndex = 26531;

	class CloseDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDELEGATE_INVOKE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDELEGATE_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

