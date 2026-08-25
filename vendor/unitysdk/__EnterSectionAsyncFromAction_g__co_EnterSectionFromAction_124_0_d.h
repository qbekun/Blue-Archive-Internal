#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UCSectionSetting; }
namespace MXUnderCover { class UCEntity; }

#define <<ENTERSECTIONASYNCFROMACTION>G__CO_ENTERSECTIONFROMACTION|124_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB5F20)
#define <<ENTERSECTIONASYNCFROMACTION>G__CO_ENTERSECTIONFROMACTION|124_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDBCC00)
#define <<ENTERSECTIONASYNCFROMACTION>G__CO_ENTERSECTIONFROMACTION|124_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDBCC10)
#define <<ENTERSECTIONASYNCFROMACTION>G__CO_ENTERSECTIONFROMACTION|124_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBCE70)
#define <<ENTERSECTIONASYNCFROMACTION>G__CO_ENTERSECTIONFROMACTION|124_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDBCE80)
#define <<ENTERSECTIONASYNCFROMACTION>G__CO_ENTERSECTIONFROMACTION|124_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBCED0)

	inline static constexpr unsigned int <<EnterSectionAsyncFromAction>g__co_EnterSectionFromAction|124_0>d_TypeDefinitionIndex = 9993;

	class <<EnterSectionAsyncFromAction>g__co_EnterSectionFromAction|124_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCStage* __4__this; // 0x20
		::MXUnderCover::UCSectionSetting* sectionSetting; // 0x28
		::MXUnderCover::UCEntity* entity; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ENTERSECTIONASYNCFROMACTION>G__CO_ENTERSECTIONFROMACTION|124_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ENTERSECTIONASYNCFROMACTION>G__CO_ENTERSECTIONFROMACTION|124_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ENTERSECTIONASYNCFROMACTION>G__CO_ENTERSECTIONFROMACTION|124_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ENTERSECTIONASYNCFROMACTION>G__CO_ENTERSECTIONFROMACTION|124_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ENTERSECTIONASYNCFROMACTION>G__CO_ENTERSECTIONFROMACTION|124_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ENTERSECTIONASYNCFROMACTION>G__CO_ENTERSECTIONFROMACTION|124_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

