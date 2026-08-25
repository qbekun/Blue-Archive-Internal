#pragma once
#include "unitysdk.h"

#define GAMEENDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE530)
#define GAMEENDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE540)
#define GAMEENDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE550)
#define GAMEENDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE5C0)

	inline static constexpr unsigned int GameEndDelegate_TypeDefinitionIndex = 20414;

	class GameEndDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + GAMEENDDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEENDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Boolean, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GAMEENDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GAMEENDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

