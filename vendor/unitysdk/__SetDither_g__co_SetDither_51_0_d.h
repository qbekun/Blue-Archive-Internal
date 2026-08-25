#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }
class DitherMaterialInfo;

#define <<SETDITHER>G__CO_SETDITHER|51_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xD91800)
#define <<SETDITHER>G__CO_SETDITHER|51_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xD91820)
#define <<SETDITHER>G__CO_SETDITHER|51_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD91830)
#define <<SETDITHER>G__CO_SETDITHER|51_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD91DC0)
#define <<SETDITHER>G__CO_SETDITHER|51_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xD91DD0)
#define <<SETDITHER>G__CO_SETDITHER|51_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD91E20)

	inline static constexpr unsigned int <<SetDither>g__co_SetDither|51_0>d_TypeDefinitionIndex = 9713;

	class <<SetDither>g__co_SetDither|51_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCEntity* __4__this; // 0x20
		DitherMaterialInfo* _resource_5__2; // 0x28
		::System::Single _elapsedTime_5__3; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<SETDITHER>G__CO_SETDITHER|51_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETDITHER>G__CO_SETDITHER|51_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETDITHER>G__CO_SETDITHER|51_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETDITHER>G__CO_SETDITHER|51_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETDITHER>G__CO_SETDITHER|51_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<SETDITHER>G__CO_SETDITHER|51_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

