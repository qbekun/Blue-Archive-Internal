#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color32; }

#define ONCOLORCHANGEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x95570E0)
#define ONCOLORCHANGEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x95571B0)
#define ONCOLORCHANGEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x95571C0)
#define ONCOLORCHANGEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9557230)

	inline static constexpr unsigned int OnColorChangedDelegate_TypeDefinitionIndex = 35618;

	class OnColorChangedDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONCOLORCHANGEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Color32* arg)
		{
			((::System::Void(*)(::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + ONCOLORCHANGEDDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Color32* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::Color32*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ONCOLORCHANGEDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ONCOLORCHANGEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

