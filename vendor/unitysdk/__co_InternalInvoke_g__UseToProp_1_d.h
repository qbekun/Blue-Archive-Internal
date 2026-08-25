#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCPropEntity; }
class <>c__DisplayClass4_0;

#define <<CO_INTERNALINVOKE>G__USETOPROP|1>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA0D80)
#define <<CO_INTERNALINVOKE>G__USETOPROP|1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA0F90)
#define <<CO_INTERNALINVOKE>G__USETOPROP|1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDA0FA0)
#define <<CO_INTERNALINVOKE>G__USETOPROP|1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA10F0)
#define <<CO_INTERNALINVOKE>G__USETOPROP|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDA1100)
#define <<CO_INTERNALINVOKE>G__USETOPROP|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDA1150)

	inline static constexpr unsigned int <<co_InternalInvoke>g__UseToProp|1>d_TypeDefinitionIndex = 9833;

	class <<co_InternalInvoke>g__UseToProp|1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCPropEntity* target; // 0x20
		<>c__DisplayClass4_0* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<CO_INTERNALINVOKE>G__USETOPROP|1>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_INTERNALINVOKE>G__USETOPROP|1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_INTERNALINVOKE>G__USETOPROP|1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_INTERNALINVOKE>G__USETOPROP|1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_INTERNALINVOKE>G__USETOPROP|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_INTERNALINVOKE>G__USETOPROP|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

