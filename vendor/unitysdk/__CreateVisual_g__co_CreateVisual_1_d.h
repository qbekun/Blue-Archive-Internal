#pragma once
#include "unitysdk.h"

class <>c__DisplayClass16_0;
namespace MXUnderCover { class UCSectionModel; }
namespace MXUnderCover { class UCSectionVisual; }

#define <<CREATEVISUAL>G__CO_CREATEVISUAL|1>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xDADED0)
#define <<CREATEVISUAL>G__CO_CREATEVISUAL|1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDADEF0)
#define <<CREATEVISUAL>G__CO_CREATEVISUAL|1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDADF00)
#define <<CREATEVISUAL>G__CO_CREATEVISUAL|1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDADFF0)
#define <<CREATEVISUAL>G__CO_CREATEVISUAL|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDAE000)
#define <<CREATEVISUAL>G__CO_CREATEVISUAL|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDAE050)

	inline static constexpr unsigned int <<CreateVisual>g__co_CreateVisual|1>d_TypeDefinitionIndex = 9913;

	class <<CreateVisual>g__co_CreateVisual|1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass16_0* __4__this; // 0x20
		::MXUnderCover::UCSectionModel* model; // 0x28
		Il2CppObject* op; // 0x30
		::MXUnderCover::UCSectionVisual* _visual_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<CREATEVISUAL>G__CO_CREATEVISUAL|1>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CREATEVISUAL>G__CO_CREATEVISUAL|1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CREATEVISUAL>G__CO_CREATEVISUAL|1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CREATEVISUAL>G__CO_CREATEVISUAL|1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CREATEVISUAL>G__CO_CREATEVISUAL|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CREATEVISUAL>G__CO_CREATEVISUAL|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

