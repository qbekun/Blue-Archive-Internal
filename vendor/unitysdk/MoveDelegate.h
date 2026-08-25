#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

#define MOVEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x22F7D50)
#define MOVEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22F7DC0)
#define MOVEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x22F7E90)
#define MOVEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x22F7EA0)

	inline static constexpr unsigned int MoveDelegate_TypeDefinitionIndex = 209;

	class MoveDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(::UnityEngine::Vector2*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MOVEDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MOVEDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MOVEDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + MOVEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

