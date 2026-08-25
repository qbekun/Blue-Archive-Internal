#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class MGSManager; }

#define <<EXITGAME>G__COEXIT|88_1>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x14791E0)
#define <<EXITGAME>G__COEXIT|88_1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x147CC40)
#define <<EXITGAME>G__COEXIT|88_1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x147CC50)
#define <<EXITGAME>G__COEXIT|88_1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x147CD90)
#define <<EXITGAME>G__COEXIT|88_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x147CDA0)
#define <<EXITGAME>G__COEXIT|88_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x147CDF0)

	inline static constexpr unsigned int <<ExitGame>g__CoExit|88_1>d_TypeDefinitionIndex = 15165;

	class <<ExitGame>g__CoExit|88_1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::MinigameShooting::MGSManager* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<EXITGAME>G__COEXIT|88_1>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<EXITGAME>G__COEXIT|88_1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<EXITGAME>G__COEXIT|88_1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<EXITGAME>G__COEXIT|88_1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<EXITGAME>G__COEXIT|88_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<EXITGAME>G__COEXIT|88_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

