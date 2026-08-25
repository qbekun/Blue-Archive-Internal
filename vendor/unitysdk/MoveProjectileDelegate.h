#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class Battle; }

#define MOVEPROJECTILEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11B3740)
#define MOVEPROJECTILEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x11B3770)
#define MOVEPROJECTILEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x11A8720)
#define MOVEPROJECTILEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11B3780)

	inline static constexpr unsigned int MoveProjectileDelegate_TypeDefinitionIndex = 13326;

	class MoveProjectileDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::MX::Logic::Battles::Battle* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(::MX::Logic::Battles::Battle*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MOVEPROJECTILEDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Invoke(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MOVEPROJECTILEDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MOVEPROJECTILEDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + MOVEPROJECTILEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

