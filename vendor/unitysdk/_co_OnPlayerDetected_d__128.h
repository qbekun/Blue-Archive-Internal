#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UCPlayer; }
namespace MXUnderCover { class UCEntity; }

#define <CO_ONPLAYERDETECTED>D__128_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB6CE0)
#define <CO_ONPLAYERDETECTED>D__128_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDBA220)
#define <CO_ONPLAYERDETECTED>D__128_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDBA230)
#define <CO_ONPLAYERDETECTED>D__128_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBAC80)
#define <CO_ONPLAYERDETECTED>D__128_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDBAC90)
#define <CO_ONPLAYERDETECTED>D__128_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBACE0)

	inline static constexpr unsigned int <co_OnPlayerDetected>d__128_TypeDefinitionIndex = 9984;

	class <co_OnPlayerDetected>d__128 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCStage* __4__this; // 0x20
		::System::Int32 decreaseValue; // 0x28
		::MXUnderCover::UCPlayer* player; // 0x30
		::MXUnderCover::UCEntity* entity; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_ONPLAYERDETECTED>D__128_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ONPLAYERDETECTED>D__128_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ONPLAYERDETECTED>D__128_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ONPLAYERDETECTED>D__128_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ONPLAYERDETECTED>D__128_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_ONPLAYERDETECTED>D__128_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

