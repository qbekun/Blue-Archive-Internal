#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundCommandActivateMovingArea; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Coroutine { class WaitForPreUpdate; }

#define <COACTIVATEMOVINGAREA>D__30_.CTOR_OFFSET UNITYSDK_OFFSET(0x12B2D80)
#define <COACTIVATEMOVINGAREA>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x12B7790)
#define <COACTIVATEMOVINGAREA>D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12B77A0)
#define <COACTIVATEMOVINGAREA>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12B7960)
#define <COACTIVATEMOVINGAREA>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x12B7970)
#define <COACTIVATEMOVINGAREA>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12B79C0)

	inline static constexpr unsigned int <CoActivateMovingArea>d__30_TypeDefinitionIndex = 14131;

	class <CoActivateMovingArea>d__30 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Battles::GroundCommandActivateMovingArea* __4__this; // 0x20
		::MX::Logic::Battles::Battle* battle; // 0x28
		::System::Int32 _currentPlayCount_5__2; // 0x30
		::System::Int32 _frame_5__3; // 0x34
		::MX::Logic::Coroutine::WaitForPreUpdate* _waitForPreUpdate_5__4; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COACTIVATEMOVINGAREA>D__30_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COACTIVATEMOVINGAREA>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COACTIVATEMOVINGAREA>D__30_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COACTIVATEMOVINGAREA>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COACTIVATEMOVINGAREA>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COACTIVATEMOVINGAREA>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

