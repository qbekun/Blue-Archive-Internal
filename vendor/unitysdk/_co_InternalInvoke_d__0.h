#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }
class Polymorph;
namespace MXUnderCover { class UCPlayer; }
namespace MXUnderCover::Animation { class UCPlayerAniController; }
class CoroutineAsyncOperation;

#define <CO_INTERNALINVOKE>D__0_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA4F40)
#define <CO_INTERNALINVOKE>D__0_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA4F80)
#define <CO_INTERNALINVOKE>D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDA4F90)
#define <CO_INTERNALINVOKE>D__0_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA52F0)
#define <CO_INTERNALINVOKE>D__0_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDA5300)
#define <CO_INTERNALINVOKE>D__0_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA5350)

	inline static constexpr unsigned int <co_InternalInvoke>d__0_TypeDefinitionIndex = 9850;

	class <co_InternalInvoke>d__0 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCEntity* entity; // 0x20
		Polymorph* __4__this; // 0x28
		::MXUnderCover::UCPlayer* _player_5__2; // 0x30
		::MXUnderCover::Animation::UCPlayerAniController* _aniController_5__3; // 0x38
		CoroutineAsyncOperation* _aniChangeOperation_5__4; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__0_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__0_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__0_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__0_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__0_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INTERNALINVOKE>D__0_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

