#pragma once
#include "unitysdk.h"

#define INSPECTEDOBJECTCHANGINGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9567930)
#define INSPECTEDOBJECTCHANGINGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9567970)
#define INSPECTEDOBJECTCHANGINGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9567980)
#define INSPECTEDOBJECTCHANGINGDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9567990)

	inline static constexpr unsigned int InspectedObjectChangingDelegate_TypeDefinitionIndex = 35638;

	class InspectedObjectChangingDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::System::Object* arg, ::System::Object* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Object*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INSPECTEDOBJECTCHANGINGDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Object*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + INSPECTEDOBJECTCHANGINGDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Object* Invoke(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INSPECTEDOBJECTCHANGINGDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INSPECTEDOBJECTCHANGINGDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

