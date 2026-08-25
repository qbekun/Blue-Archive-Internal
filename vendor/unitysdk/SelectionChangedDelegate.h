#pragma once
#include "unitysdk.h"

#define SELECTIONCHANGEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x95603F0)
#define SELECTIONCHANGEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9560400)
#define SELECTIONCHANGEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9560510)
#define SELECTIONCHANGEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9560540)

	inline static constexpr unsigned int SelectionChangedDelegate_TypeDefinitionIndex = 35622;

	class SelectionChangedDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTIONCHANGEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SELECTIONCHANGEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(Il2CppObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTIONCHANGEDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SELECTIONCHANGEDDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

