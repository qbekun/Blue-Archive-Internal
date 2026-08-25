#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class BlackBoardSumBulletTypeDamagedEffect; }
namespace MX::Logic::Coroutine { class WaitForLateUpdate; }

#define <CHECKEXPIRED>D__17_.CTOR_OFFSET UNITYSDK_OFFSET(0x140A430)
#define <CHECKEXPIRED>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x140A890)
#define <CHECKEXPIRED>D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x140A8A0)
#define <CHECKEXPIRED>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x140A9E0)
#define <CHECKEXPIRED>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x140A9F0)
#define <CHECKEXPIRED>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x140AA40)

	inline static constexpr unsigned int <CheckExpired>d__17_TypeDefinitionIndex = 14700;

	class <CheckExpired>d__17 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Skills::LogicEffects::BlackBoardSumBulletTypeDamagedEffect* __4__this; // 0x20
		::MX::Logic::Coroutine::WaitForLateUpdate* _waitForLateUpdate_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CHECKEXPIRED>D__17_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKEXPIRED>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKEXPIRED>D__17_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKEXPIRED>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKEXPIRED>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKEXPIRED>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

