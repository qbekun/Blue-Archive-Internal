#pragma once
#include "unitysdk.h"

namespace Spine { class Animation; }

#define ONCLIPAPPLIEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9608500)
#define ONCLIPAPPLIEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9608550)
#define ONCLIPAPPLIEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9608660)
#define ONCLIPAPPLIEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9608670)

	inline static constexpr unsigned int OnClipAppliedDelegate_TypeDefinitionIndex = 35309;

	class OnClipAppliedDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::Spine::Animation* arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::Animation*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ONCLIPAPPLIEDDELEGATE_INVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONCLIPAPPLIEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONCLIPAPPLIEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Animation* arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Boolean arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Spine::Animation*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONCLIPAPPLIEDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};

