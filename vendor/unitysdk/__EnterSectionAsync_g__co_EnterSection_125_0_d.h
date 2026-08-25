#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCSectionSetting; }
namespace MXUnderCover { class UCEntity; }
namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UCPlayerModel; }
namespace MXUnderCover { class UCSectionModel; }

#define <<ENTERSECTIONASYNC>G__CO_ENTERSECTION|125_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB7DA0)
#define <<ENTERSECTIONASYNC>G__CO_ENTERSECTION|125_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDBCEE0)
#define <<ENTERSECTIONASYNC>G__CO_ENTERSECTION|125_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDBCEF0)
#define <<ENTERSECTIONASYNC>G__CO_ENTERSECTION|125_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBD4C0)
#define <<ENTERSECTIONASYNC>G__CO_ENTERSECTION|125_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDBD4D0)
#define <<ENTERSECTIONASYNC>G__CO_ENTERSECTION|125_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBD520)

	inline static constexpr unsigned int <<EnterSectionAsync>g__co_EnterSection|125_0>d_TypeDefinitionIndex = 9994;

	class <<EnterSectionAsync>g__co_EnterSection|125_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCSectionSetting* sectionSetting; // 0x20
		::MXUnderCover::UCEntity* entity; // 0x28
		::MXUnderCover::UCStage* __4__this; // 0x30
		::System::Boolean callPostEnterSection; // 0x38
		::System::Boolean _useSavePoint_5__2; // 0x39
		::MXUnderCover::UCPlayerModel* _playerModel_5__3; // 0x40
		::MXUnderCover::UCSectionModel* _sectionModel_5__4; // 0x48
		Il2CppObject* _op_5__5; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ENTERSECTIONASYNC>G__CO_ENTERSECTION|125_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ENTERSECTIONASYNC>G__CO_ENTERSECTION|125_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ENTERSECTIONASYNC>G__CO_ENTERSECTION|125_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ENTERSECTIONASYNC>G__CO_ENTERSECTION|125_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ENTERSECTIONASYNC>G__CO_ENTERSECTION|125_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ENTERSECTIONASYNC>G__CO_ENTERSECTION|125_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

