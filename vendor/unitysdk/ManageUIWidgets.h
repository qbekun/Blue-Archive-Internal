#pragma once
#include "unitysdk.h"

#define MANAGEUIWIDGETS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x25F00A0)
#define MANAGEUIWIDGETS_.CTOR_OFFSET UNITYSDK_OFFSET(0x25EB810)
#define MANAGEUIWIDGETS_INVOKE_OFFSET UNITYSDK_OFFSET(0x25F00B0)
#define MANAGEUIWIDGETS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x25F00C0)

	inline static constexpr unsigned int ManageUIWidgets_TypeDefinitionIndex = 6417;

	class ManageUIWidgets : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + MANAGEUIWIDGETS_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MANAGEUIWIDGETS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MANAGEUIWIDGETS_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(Il2CppObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MANAGEUIWIDGETS_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

