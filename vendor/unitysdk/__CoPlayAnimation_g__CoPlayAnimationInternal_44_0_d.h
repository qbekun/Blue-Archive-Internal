#pragma once
#include "unitysdk.h"

class UICarrierSkillCard;

#define <<COPLAYANIMATION>G__COPLAYANIMATIONINTERNAL|44_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x2234280)
#define <<COPLAYANIMATION>G__COPLAYANIMATIONINTERNAL|44_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2235430)
#define <<COPLAYANIMATION>G__COPLAYANIMATIONINTERNAL|44_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2235440)
#define <<COPLAYANIMATION>G__COPLAYANIMATIONINTERNAL|44_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2235620)
#define <<COPLAYANIMATION>G__COPLAYANIMATIONINTERNAL|44_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2235630)
#define <<COPLAYANIMATION>G__COPLAYANIMATIONINTERNAL|44_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2235680)

	inline static constexpr unsigned int <<CoPlayAnimation>g__CoPlayAnimationInternal|44_0>d_TypeDefinitionIndex = 4457;

	class <<CoPlayAnimation>g__CoPlayAnimationInternal|44_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICarrierSkillCard* __4__this; // 0x20
		::System::String* aniName; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<COPLAYANIMATION>G__COPLAYANIMATIONINTERNAL|44_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COPLAYANIMATION>G__COPLAYANIMATIONINTERNAL|44_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COPLAYANIMATION>G__COPLAYANIMATIONINTERNAL|44_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COPLAYANIMATION>G__COPLAYANIMATIONINTERNAL|44_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COPLAYANIMATION>G__COPLAYANIMATIONINTERNAL|44_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COPLAYANIMATION>G__COPLAYANIMATIONINTERNAL|44_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

